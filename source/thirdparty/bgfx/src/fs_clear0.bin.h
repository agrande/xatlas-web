static const uint8_t fs_clear0_glsl[132] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, // FSH............b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, // gfx_clear_color.
	0x08, 0x00, 0x00, 0x08, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // .....Z...uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, //  vec4 bgfx_clear
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // _color[8];.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, // main ().{.  gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, // ragColor = bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, // clear_color[0];.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t fs_clear0_spv[669] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, // FSH............b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, // gfx_clear_color.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x70, 0x02, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, // .....p.....#....
	0x00, 0x08, 0x00, 0x08, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, // .....F..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, // .............GLS
	0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, // L.std.450.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, // .....main....-..
	0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, // .main........ ..
	0x00, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, // .UniformBlock...
	0x00, 0x06, 0x00, 0x08, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, // ..... .......bgf
	0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x00, 0x00, // x_clear_color...
	0x00, 0x05, 0x00, 0x03, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, // ....."..........
	0x00, 0x2d, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, // .-...bgfx_FragDa
	0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // ta0..G..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....H... ......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, // .#.......G... ..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, // .....G..."..."..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, // .....G..."...!..
	0x00, 0x30, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, // .0...G...-......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, // .............!..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, // ................
	0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // . ..............
	0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, // .....+..........
	0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // ................
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, // ......... ......
	0x00, 0x20, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // . ...!....... ..
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .;...!..."......
	0x00, 0x15, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....#... ......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .+...#...$......
	0x00, 0x20, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // . ...%..........
	0x00, 0x20, 0x00, 0x04, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // . ...,..........
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .;...,...-......
	0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .6..............
	0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, // .............A..
	0x00, 0x25, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, // .%...D..."...$..
	0x00, 0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // .$...=.......E..
	0x00, 0x44, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // .D...>...-...E..
	0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00,                   // .....8.......
};
static const uint8_t fs_clear0_dx9[202] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, // FSH............b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, // gfx_clear_color.
	0x08, 0x00, 0x00, 0x01, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x22, // ..............."
	0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, // .CTAB....[......
	0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x54, 0x00, 0x00, // .............T..
	0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, // .0...........D..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, // .....bgfx_clear_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, // color...........
	0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, // .........ps_3_0.
	0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, // Microsoft (R) HL
	0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, // SL Shader Compil
	0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, // er 10.1.........
	0x80, 0x00, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t fs_clear0_dx11[345] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, // FSH............b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, // gfx_clear_color.
	0x08, 0x00, 0x00, 0x08, 0x00, 0x2c, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x01, 0xdc, 0xf8, // .....,...DXBC...
	0x1e, 0x7d, 0x89, 0xaa, 0x45, 0x4f, 0x0c, 0x79, 0x61, 0x5e, 0xe4, 0x72, 0x8d, 0x01, 0x00, 0x00, // .}..EO.ya^.r....
	0x00, 0x2c, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, // .,.......0...|..
	0x00, 0xc4, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x41, 0x6f, 0x6e, 0x39, 0x44, 0x00, 0x00, // .........Aon9D..
	0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // .D...........0..
	0x00, 0x01, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x24, // ...$...0...0...$
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...0............
	0x00, 0x00, 0x02, 0xff, 0xff, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, // ................
	0xa0, 0xff, 0xff, 0x00, 0x00, 0x53, 0x48, 0x44, 0x52, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....SHDR@...@..
	0x00, 0x10, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .....Y...F. ....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....e.... .....
	0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .6.... ......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x49, 0x53, 0x47, // .........>...ISG
	0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // N,........... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, // .....SV_POSITION
	0x00, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x00, 0x00, 0x80, 0x00,                                           // ET.......
};
static const uint8_t fs_clear0_mtl[420] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, // FSH............b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, // gfx_clear_color.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x77, 0x01, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .....w...#includ
	0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, // e <metal_stdlib>
	0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, // .#include <simd/
	0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, // simd.h>..using n
	0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, // amespace metal;.
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, // .struct _Global.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, // {.    float4 bgf
	0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x38, 0x5d, // x_clear_color[8]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // ;.};..struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, // tMtlMain_out.{. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, //    float4 bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ragData0 [[color
	0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, // (0)]];.};..fragm
	0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // ent xlatMtlMain_
	0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, // out xlatMtlMain(
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, // constant _Global
	0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, // & _mtl_u [[buffe
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, // r(0)]]).{.    xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, // atMtlMain_out ou
	0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, // t = {};.    out.
	0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, // bgfx_FragData0 =
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, //  _mtl_u.bgfx_cle
	0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // ar_color[0];.   
	0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, //  return out;.}..
	0x00, 0x00, 0x10, 0x00,                                                                         // ....
};
extern const uint8_t* fs_clear0_pssl;
extern const uint32_t fs_clear0_pssl_size;