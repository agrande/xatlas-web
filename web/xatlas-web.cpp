#include "xatlas-web.h"

xatlas::Atlas *atlas;
xatlas::MeshDecl *meshDecl;
xatlas::UvMeshDecl *uvMeshDecl;
uint32_t nextMeshId = 0;
emscripten::val* callback;

void createAtlas() {
  atlas = xatlas::Create();
}

MeshBufferInfo createMesh(uint32_t vertexCount, uint32_t indexCount, bool normals, bool uvs) {
  MeshBufferInfo meshBufferInfo;
  meshBufferInfo.meshId = nextMeshId++;

  meshDecl = new xatlas::MeshDecl;
  meshDecl->vertexCount = vertexCount;
  meshDecl->indexCount = indexCount;

  meshDecl->indexData = new int[indexCount];
  meshDecl->indexFormat = xatlas::IndexFormat::UInt32;
  meshBufferInfo.indexOffset = (uint32_t)meshDecl->indexData;

  meshDecl->vertexPositionData = new float[vertexCount * 3];
  meshDecl->vertexPositionStride = sizeof(float) * 3;
  meshBufferInfo.positionOffset = (uint32_t)meshDecl->vertexPositionData;

  if (normals) {
    meshDecl->vertexNormalData = new float[vertexCount * 3];
    meshDecl->vertexNormalStride = sizeof(float) * 3;
    meshBufferInfo.normalOffset = (uint32_t)meshDecl->vertexNormalData;
  }

  if (uvs) {
    meshDecl->vertexUvData = new float[vertexCount * 2];
    meshDecl->vertexUvStride = sizeof(float) * 2;
    meshBufferInfo.uvOffset = (uint32_t)meshDecl->vertexUvData;
  }

  return meshBufferInfo;
}

UvMeshBufferInfo createUvMesh(int vertexCount, int indexCount) {
  UvMeshBufferInfo uvMeshBufferInfo;
  uvMeshBufferInfo.meshId = nextMeshId++;

  uvMeshDecl = new xatlas::UvMeshDecl;
  uvMeshDecl->vertexCount = vertexCount;
  uvMeshDecl->indexCount = indexCount;

  uvMeshDecl->indexData = new uint16_t[indexCount];
  uvMeshDecl->indexFormat = xatlas::IndexFormat::UInt16;
  uvMeshBufferInfo.indexOffset = (uint32_t)uvMeshDecl->indexData;

  uvMeshDecl->vertexUvData = new float[vertexCount * 2];
  uvMeshDecl->vertexStride = sizeof(float) * 2;
  uvMeshBufferInfo.uvOffset = (uint32_t)uvMeshDecl->vertexUvData;

  return uvMeshBufferInfo;
}

uint32_t addMesh() {
  return (uint32_t)xatlas::AddMesh(atlas, *meshDecl);
}

uint32_t addUvMesh() {
  return (uint32_t)xatlas::AddUvMesh(atlas, *uvMeshDecl);
}

void generateAtlas(emscripten::val params) {
  if (params.hasOwnProperty("onProgress")) {
    callback = new emscripten::val(params["onProgress"]);
  } else {
    callback = nullptr;
  }
  xatlas::SetProgressCallback(atlas, [](xatlas::ProgressCategory cat, int progress, void* userData) {
    if (callback != nullptr) {
      (*callback)(static_cast<int>(cat), progress);
    }
    return true;
  });
  xatlas::ChartOptions chartOptions;
  xatlas::PackOptions packOptions;
  if (params.hasOwnProperty("maxIterations")) {
    chartOptions.maxIterations = params["maxIterations"].as<uint32_t>();
  }
  if (params.hasOwnProperty("useInputMeshUvs")) {
    chartOptions.useInputMeshUvs = params["useInputMeshUvs"].as<bool>();
  }
  if (params.hasOwnProperty("padding")) {
    packOptions.padding = params["padding"].as<uint32_t>();
  }
  if (params.hasOwnProperty("resolution")) {
    packOptions.resolution = params["resolution"].as<uint32_t>();
  }
  if (params.hasOwnProperty("bruteForce")) {
    packOptions.bruteForce = params["bruteForce"].as<bool>();
  }
  if (params.hasOwnProperty("rotateChartsToAxis")) {
    packOptions.rotateChartsToAxis = params["rotateChartsToAxis"].as<bool>();
  }
  if (params.hasOwnProperty("rotateCharts")) {
    packOptions.rotateCharts = params["rotateCharts"].as<bool>();
  }
  xatlas::Generate(atlas, chartOptions, packOptions);
}

AtlasMeshBufferInfo getMeshData(uint32_t meshId) {
  const xatlas::Mesh &mesh = atlas->meshes[meshId];

  uint32_t* originalIndexArray = new uint32_t[mesh.vertexCount];
  float* uvArray = new float[mesh.vertexCount * 2];

  for (uint32_t i = 0; i < mesh.vertexCount; i++) {
    const xatlas::Vertex &vertex = mesh.vertexArray[i];
    originalIndexArray[i] = vertex.xref;
    uvArray[i * 2] = vertex.uv[0] / atlas->width;
    uvArray[i * 2 + 1] = vertex.uv[1] / atlas->height;
  }

  AtlasMeshBufferInfo atlasMeshBufferInfo;

  atlasMeshBufferInfo.newVertexCount = mesh.vertexCount;
  atlasMeshBufferInfo.newIndexCount = mesh.indexCount;
  atlasMeshBufferInfo.indexOffset = (uint32_t)mesh.indexArray;
  atlasMeshBufferInfo.originalIndexOffset = (uint32_t)originalIndexArray;
  atlasMeshBufferInfo.uvOffset = (uint32_t)uvArray;

  return atlasMeshBufferInfo;
}

void destroyAtlas() {
  xatlas::Destroy(atlas);
  nextMeshId = 0;
}

EMSCRIPTEN_BINDINGS(xatlas) {
    emscripten::value_object<MeshBufferInfo>("MeshBufferInfo")
      .field("meshId", &MeshBufferInfo::meshId)
      .field("indexOffset", &MeshBufferInfo::indexOffset)
      .field("positionOffset", &MeshBufferInfo::positionOffset)
      .field("normalOffset", &MeshBufferInfo::normalOffset)
      .field("uvOffset", &MeshBufferInfo::uvOffset);

    emscripten::value_object<UvMeshBufferInfo>("UvMeshBufferInfo")
      .field("meshId", &UvMeshBufferInfo::meshId)
      .field("indexOffset", &UvMeshBufferInfo::indexOffset)
      .field("uvOffset", &UvMeshBufferInfo::uvOffset);

    emscripten::value_object<AtlasMeshBufferInfo>("AtlasMeshBufferInfo")
      .field("newVertexCount", &AtlasMeshBufferInfo::newVertexCount)
      .field("newIndexCount", &AtlasMeshBufferInfo::newIndexCount)
      .field("indexOffset", &AtlasMeshBufferInfo::indexOffset)
      .field("originalIndexOffset", &AtlasMeshBufferInfo::originalIndexOffset)
      .field("uvOffset", &AtlasMeshBufferInfo::uvOffset);

    emscripten::function("createAtlas", &createAtlas);
    emscripten::function("createMesh", &createMesh);
    emscripten::function("createUvMesh", &createUvMesh);
    emscripten::function("addMesh", &addMesh);
    emscripten::function("addUvMesh", &addUvMesh);
    emscripten::function("generateAtlas", &generateAtlas);
    emscripten::function("getMeshData", &getMeshData);
    emscripten::function("destroyAtlas", &destroyAtlas);
}
