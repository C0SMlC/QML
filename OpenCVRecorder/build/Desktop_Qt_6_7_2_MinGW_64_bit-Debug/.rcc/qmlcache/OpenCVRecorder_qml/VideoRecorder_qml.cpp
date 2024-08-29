// /OpenCVRecorder/qml/VideoRecorder.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qloggingcategory.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _0x5f_OpenCVRecorder_qml_VideoRecorder_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3f,0x0,0x0,0x0,0x2,0x7,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x14,0x0,0x0,0x65,0x34,0x31,0x36,
0x62,0x30,0x39,0x37,0x31,0x34,0x34,0x61,
0x64,0x39,0x64,0x39,0x35,0x33,0x34,0x31,
0x61,0x64,0x39,0x34,0x38,0x63,0x30,0x63,
0x32,0x38,0x63,0x35,0x37,0x31,0x62,0x61,
0x36,0x61,0x64,0x39,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc2,0x14,0xdb,0x88,
0x5,0xc1,0x1a,0xe2,0xa2,0xc4,0xd9,0x56,
0xec,0xe2,0xd8,0x10,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x3f,0x0,0x0,0x0,0x58,0x7,0x0,0x0,
0xa,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x2a,0x0,0x0,0x0,0x28,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0xd0,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0xe0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x98,0x10,0x0,0x0,
0xe8,0x1,0x0,0x0,0x70,0x2,0x0,0x0,
0x28,0x3,0x0,0x0,0xb0,0x3,0x0,0x0,
0x0,0x4,0x0,0x0,0x50,0x4,0x0,0x0,
0xa0,0x4,0x0,0x0,0x10,0x5,0x0,0x0,
0x88,0x5,0x0,0x0,0xf8,0x5,0x0,0x0,
0x38,0x7,0x0,0x0,0x48,0x7,0x0,0x0,
0x13,0x2,0x0,0x0,0x24,0x2,0x0,0x0,
0x34,0x2,0x0,0x0,0xd7,0x0,0x0,0x0,
0x73,0x1,0x0,0x0,0x73,0x0,0x0,0x0,
0x81,0x2,0x0,0x0,0x83,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0xa4,0x2,0x0,0x0,
0xb3,0x2,0x0,0x0,0xc4,0x2,0x0,0x0,
0x83,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0xe4,0x2,0x0,0x0,0xb3,0x2,0x0,0x0,
0xc4,0x2,0x0,0x0,0x13,0x1,0x0,0x0,
0x63,0x1,0x0,0x0,0x0,0x3,0x0,0x0,
0x13,0x3,0x0,0x0,0x20,0x3,0x0,0x0,
0xb3,0x2,0x0,0x0,0x34,0x3,0x0,0x0,
0xb3,0x2,0x0,0x0,0xc4,0x2,0x0,0x0,
0x63,0x1,0x0,0x0,0x60,0x3,0x0,0x0,
0x73,0x1,0x0,0x0,0xc0,0x0,0x0,0x0,
0x73,0x1,0x0,0x0,0x70,0x3,0x0,0x0,
0x84,0x3,0x0,0x0,0x53,0x0,0x0,0x0,
0x94,0x3,0x0,0x0,0x94,0x0,0x0,0x0,
0xb3,0x2,0x0,0x0,0xc4,0x2,0x0,0x0,
0x63,0x1,0x0,0x0,0xb0,0x3,0x0,0x0,
0xb3,0x2,0x0,0x0,0xc4,0x2,0x0,0x0,
0x81,0x4,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0xc0,0x3,0x0,
0x50,0x0,0x0,0x0,0x31,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0xd,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x22,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x2e,0x0,0x18,0x8,0xb8,0x8,0x0,0x0,
0x18,0x8,0xac,0x1,0x8,0x0,0x0,0x18,
0x8,0x26,0x0,0xd,0x1a,0xd,0xb,0x12,
0x25,0x18,0xc,0xac,0x2,0x8,0x2,0xb,
0x18,0x7,0x12,0x26,0x18,0x8,0x16,0x7,
0x80,0x8,0x18,0x9,0x12,0x27,0x80,0x9,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x80,0x0,0x0,0x0,0x32,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x6,0x0,
0xff,0xff,0xff,0xff,0xb,0x0,0x0,0x0,
0x12,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x6,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x16,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x20,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x23,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x30,0x0,0x0,0x0,
0x19,0x0,0x0,0x0,0xa,0x0,0x0,0x0,
0xb4,0x3,0x0,0x0,0x30,0x7,0x2e,0x4,
0x18,0x7,0x12,0x29,0x18,0x8,0x2e,0x5,
0x80,0x8,0x42,0x6,0x7,0x2e,0x7,0x3c,
0x8,0x18,0x7,0xac,0x9,0x7,0x0,0x0,
0x8,0x30,0x6,0x2e,0xa,0x18,0x7,0x12,
0x2d,0x18,0xa,0xac,0xb,0x7,0x1,0xa,
0xe,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x68,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0xff,0xff,0xff,0xff,0xb,0x0,0x0,0x0,
0x1b,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x1b,0x0,0x0,0x0,
0x1f,0x0,0x0,0x0,0x6,0x0,0x0,0x0,
0x2e,0xc,0x3c,0xd,0x18,0x7,0xac,0xe,
0x7,0x0,0x0,0xa,0x30,0x6,0x2e,0xf,
0x18,0x7,0x12,0x2f,0x18,0xa,0xac,0x10,
0x7,0x1,0xa,0xe,0x2,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x27,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x27,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x11,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x19,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2d,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2d,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x12,0x3c,0x13,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2e,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2e,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x14,0x3c,0x15,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x5c,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x7,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x2f,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x8,0x0,
0x0,0x0,0x0,0x0,0x2f,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x2f,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x31,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0xca,0x28,0x7,0x18,
0x6,0xd4,0x16,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2,0x0,0x2,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x48,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0x2f,0x0,0xf0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x9,0x0,0x0,0x0,0x2,0x0,
0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x30,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x31,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x2e,0x16,0x18,0x9,0x12,0x34,0x18,0xc,
0x1a,0x7,0xd,0xac,0x17,0x9,0x2,0xc,
0xe,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x5c,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x9,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x32,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x8,0x0,
0x0,0x0,0x0,0x0,0x32,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x32,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0xca,0x28,0x9,0x18,
0x6,0xd4,0x16,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb8,0x0,0x0,0x0,0x80,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x1,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0xff,0xff,0xff,0xff,0x13,0x0,0x0,0x0,
0x32,0x0,0x60,0x2,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x0,0x0,0x2,0x0,
0x3e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x34,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x1b,0x0,0x0,0x0,0x34,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0x35,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x2e,0x0,0x0,0x0,0x36,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,
0x37,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x51,0x0,0x0,0x0,0x38,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x66,0x0,0x0,0x0,
0x39,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x71,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x7e,0x0,0x0,0x0,
0x3c,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x2e,0x18,0x18,0x8,0x12,0x35,0x18,0xb,
0x1a,0x6,0xc,0xac,0x19,0x8,0x2,0xb,
0x1a,0x6,0x8,0x2e,0x1a,0x3c,0x1b,0x6c,
0x8,0x50,0x4b,0x1,0x2,0x9,0x2,0x2e,
0x1c,0x3c,0x1d,0x18,0xb,0x11,0xe8,0x3,
0x0,0x0,0x9e,0xb,0x18,0x9,0x2e,0x1e,
0x3c,0x1f,0x18,0xb,0xac,0x20,0xb,0x0,
0x0,0x18,0xa,0x2e,0x21,0x18,0xb,0x1a,
0xa,0xe,0x14,0x0,0x12,0xac,0x22,0x9,
0x1,0x12,0x18,0xf,0xac,0x23,0xb,0x2,
0xe,0x2e,0x24,0x18,0xb,0x12,0x3a,0x18,
0xf,0x16,0xa,0x80,0xf,0x18,0xe,0xac,
0x25,0xb,0x1,0xe,0x4c,0x18,0x1a,0x6,
0x9,0x2e,0x26,0x3c,0x27,0x6c,0x9,0x50,
0xd,0x2e,0x28,0x18,0xa,0x12,0x3c,0x18,
0xd,0xac,0x29,0xa,0x1,0xd,0xe,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x58,0x8,0x0,0x0,0x60,0x8,0x0,0x0,
0x78,0x8,0x0,0x0,0x98,0x8,0x0,0x0,
0xc0,0x8,0x0,0x0,0xd0,0x8,0x0,0x0,
0xe0,0x8,0x0,0x0,0x0,0x9,0x0,0x0,
0x28,0x9,0x0,0x0,0x50,0x9,0x0,0x0,
0x78,0x9,0x0,0x0,0x90,0x9,0x0,0x0,
0xa8,0x9,0x0,0x0,0xc0,0x9,0x0,0x0,
0xe8,0x9,0x0,0x0,0x10,0xa,0x0,0x0,
0x30,0xa,0x0,0x0,0x48,0xa,0x0,0x0,
0x60,0xa,0x0,0x0,0x88,0xa,0x0,0x0,
0xb8,0xa,0x0,0x0,0xd8,0xa,0x0,0x0,
0xf8,0xa,0x0,0x0,0x18,0xb,0x0,0x0,
0x38,0xb,0x0,0x0,0x50,0xb,0x0,0x0,
0x88,0xb,0x0,0x0,0xa8,0xb,0x0,0x0,
0xe8,0xb,0x0,0x0,0x10,0xc,0x0,0x0,
0x58,0xc,0x0,0x0,0x90,0xc,0x0,0x0,
0xe0,0xc,0x0,0x0,0xf8,0xc,0x0,0x0,
0x8,0xd,0x0,0x0,0x28,0xd,0x0,0x0,
0x40,0xd,0x0,0x0,0x50,0xd,0x0,0x0,
0x58,0xd,0x0,0x0,0x70,0xd,0x0,0x0,
0x80,0xd,0x0,0x0,0xa8,0xd,0x0,0x0,
0xf8,0xd,0x0,0x0,0x10,0xe,0x0,0x0,
0x28,0xe,0x0,0x0,0x38,0xe,0x0,0x0,
0x60,0xe,0x0,0x0,0x70,0xe,0x0,0x0,
0x98,0xe,0x0,0x0,0xb8,0xe,0x0,0x0,
0xd8,0xe,0x0,0x0,0xe8,0xe,0x0,0x0,
0xf8,0xe,0x0,0x0,0x20,0xf,0x0,0x0,
0x60,0xf,0x0,0x0,0x80,0xf,0x0,0x0,
0xa8,0xf,0x0,0x0,0xc0,0xf,0x0,0x0,
0xd8,0xf,0x0,0x0,0x8,0x10,0x0,0x0,
0x30,0x10,0x0,0x0,0x68,0x10,0x0,0x0,
0x88,0x10,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x4d,0x0,0x75,0x0,0x6c,0x0,0x74,0x0,
0x69,0x0,0x6d,0x0,0x65,0x0,0x64,0x0,
0x69,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x2e,0x0,0x6c,0x0,0x61,0x0,0x62,0x0,
0x73,0x0,0x2e,0x0,0x70,0x0,0x6c,0x0,
0x61,0x0,0x74,0x0,0x66,0x0,0x6f,0x0,
0x72,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x49,0x0,0x74,0x0,
0x65,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x72,0x0,0x6f,0x0,
0x6f,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x69,0x0,0x73,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x63,0x0,0x75,0x0,
0x72,0x0,0x72,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x46,0x0,0x69,0x0,0x6c,0x0,
0x65,0x0,0x4e,0x0,0x61,0x0,0x6d,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x63,0x0,0x61,0x0,
0x70,0x0,0x74,0x0,0x75,0x0,0x72,0x0,
0x65,0x0,0x53,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x46,0x0,
0x69,0x0,0x6e,0x0,0x69,0x0,0x73,0x0,
0x68,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x65,0x0,0x4e,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x72,0x0,0x69,0x0,0x6e,0x0,0x67,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x64,0x0,0x75,0x0,
0x72,0x0,0x61,0x0,0x74,0x0,0x69,0x0,
0x6f,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x67,0x0,0x65,0x0,
0x6e,0x0,0x65,0x0,0x72,0x0,0x61,0x0,
0x74,0x0,0x65,0x0,0x46,0x0,0x69,0x0,
0x6c,0x0,0x65,0x0,0x4e,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x61,0x0,0x72,0x0,0x74,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x6f,0x0,0x72,0x0,
0x64,0x0,0x69,0x0,0x6e,0x0,0x67,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x6f,0x0,0x70,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x43,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x72,0x0,0x61,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x63,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x72,0x0,0x61,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x43,0x0,0x61,0x0,
0x70,0x0,0x74,0x0,0x75,0x0,0x72,0x0,
0x65,0x0,0x53,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x61,0x0,0x6d,0x0,
0x65,0x0,0x72,0x0,0x61,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x41,0x0,0x75,0x0,
0x64,0x0,0x69,0x0,0x6f,0x0,0x49,0x0,
0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x61,0x0,0x75,0x0,
0x64,0x0,0x69,0x0,0x6f,0x0,0x49,0x0,
0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x4d,0x0,0x65,0x0,
0x64,0x0,0x69,0x0,0x61,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x6f,0x0,0x72,0x0,
0x64,0x0,0x65,0x0,0x72,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x6d,0x0,0x65,0x0,
0x64,0x0,0x69,0x0,0x61,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x6f,0x0,0x72,0x0,
0x64,0x0,0x65,0x0,0x72,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x71,0x0,0x75,0x0,
0x61,0x0,0x6c,0x0,0x69,0x0,0x74,0x0,
0x79,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x71,0x0,0x75,0x0,0x61,0x0,
0x6c,0x0,0x69,0x0,0x74,0x0,0x79,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x6d,0x0,0x65,0x0,
0x64,0x0,0x69,0x0,0x61,0x0,0x46,0x0,
0x6f,0x0,0x72,0x0,0x6d,0x0,0x61,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6d,0x0,0x65,0x0,0x64,0x0,
0x69,0x0,0x61,0x0,0x46,0x0,0x6f,0x0,
0x72,0x0,0x6d,0x0,0x61,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x45,0x0,0x72,0x0,0x72,0x0,0x6f,0x0,
0x72,0x0,0x4f,0x0,0x63,0x0,0x63,0x0,
0x75,0x0,0x72,0x0,0x72,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x45,0x0,
0x72,0x0,0x72,0x0,0x6f,0x0,0x72,0x0,
0x4f,0x0,0x63,0x0,0x63,0x0,0x75,0x0,
0x72,0x0,0x72,0x0,0x65,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x53,0x0,0x74,0x0,0x61,0x0,0x74,0x0,
0x65,0x0,0x43,0x0,0x68,0x0,0x61,0x0,
0x6e,0x0,0x67,0x0,0x65,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x25,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x6f,0x0,0x72,0x0,
0x64,0x0,0x65,0x0,0x72,0x0,0x53,0x0,
0x74,0x0,0x61,0x0,0x74,0x0,0x65,0x0,
0x43,0x0,0x68,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x65,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x44,0x0,0x61,0x0,
0x74,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x49,0x0,0x53,0x0,0x4f,0x0,0x53,0x0,
0x74,0x0,0x72,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x70,0x0,0x6c,0x0,0x61,0x0,0x63,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x5b,0x0,0x3a,0x0,
0x2e,0x0,0x5d,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2d,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x76,0x0,0x69,0x0,
0x64,0x0,0x65,0x0,0x6f,0x0,0x5f,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x2e,0x0,0x6d,0x0,
0x70,0x0,0x34,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x6f,0x0,0x75,0x0,
0x74,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x4c,0x0,0x6f,0x0,0x63,0x0,0x61,0x0,
0x74,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x23,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x65,0x0,0x3a,0x0,0x2f,0x0,
0x2f,0x0,0x2f,0x0,0x44,0x0,0x3a,0x0,
0x2f,0x0,0x51,0x0,0x4d,0x0,0x4c,0x0,
0x2f,0x0,0x52,0x0,0x65,0x0,0x63,0x0,
0x6f,0x0,0x72,0x0,0x64,0x0,0x65,0x0,
0x72,0x0,0x2f,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x73,0x0,
0x2f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6e,0x0,0x73,0x0,0x6f,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x6c,0x0,0x6f,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x20,0x0,
0x73,0x0,0x74,0x0,0x61,0x0,0x72,0x0,
0x74,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x6f,0x0,0x70,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x20,0x0,
0x73,0x0,0x74,0x0,0x6f,0x0,0x70,0x0,
0x70,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x48,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x51,0x0,0x75,0x0,
0x61,0x0,0x6c,0x0,0x69,0x0,0x74,0x0,
0x79,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x4d,0x0,0x65,0x0,
0x64,0x0,0x69,0x0,0x61,0x0,0x46,0x0,
0x6f,0x0,0x72,0x0,0x6d,0x0,0x61,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x4d,0x0,0x50,0x0,
0x45,0x0,0x47,0x0,0x34,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x65,0x0,0x72,0x0,
0x72,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x20,0x0,
0x65,0x0,0x72,0x0,0x72,0x0,0x6f,0x0,
0x72,0x0,0x3a,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x65,0x0,0x72,0x0,0x20,0x0,0x73,0x0,
0x74,0x0,0x61,0x0,0x74,0x0,0x65,0x0,
0x20,0x0,0x63,0x0,0x68,0x0,0x61,0x0,
0x6e,0x0,0x67,0x0,0x65,0x0,0x64,0x0,
0x20,0x0,0x74,0x0,0x6f,0x0,0x3a,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x53,0x0,0x74,0x0,
0x6f,0x0,0x70,0x0,0x70,0x0,0x65,0x0,
0x64,0x0,0x53,0x0,0x74,0x0,0x61,0x0,
0x74,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x61,0x0,0x63,0x0,
0x74,0x0,0x75,0x0,0x61,0x0,0x6c,0x0,
0x4c,0x0,0x6f,0x0,0x63,0x0,0x61,0x0,
0x74,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x53,0x0,0x74,0x0,0x72,0x0,0x69,0x0,
0x6e,0x0,0x67,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x46,0x0,0x69,0x0,0x78,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x20,0x0,
0x66,0x0,0x69,0x0,0x6e,0x0,0x69,0x0,
0x73,0x0,0x68,0x0,0x65,0x0,0x64,0x0,
0x3a,0x0,0x20,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x53,0x0,
0x74,0x0,0x61,0x0,0x74,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x69,0x0,0x6e,0x0,0x67,0x0,0x20,0x0,
0x69,0x0,0x73,0x0,0x20,0x0,0x69,0x0,
0x6e,0x0,0x20,0x0,0x70,0x0,0x72,0x0,
0x6f,0x0,0x67,0x0,0x72,0x0,0x65,0x0,
0x73,0x0,0x73,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x65,0x0,0x72,0x0,
0x72,0x0,0x6f,0x0,0x72,0x0,0x53,0x0,
0x74,0x0,0x72,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x61,0x0,0x74,0x0,0x65,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x60,0x0,0x0,0x0,
0x70,0x1,0x0,0x0,0xc8,0x1,0x0,0x0,
0x68,0x2,0x0,0x0,0xc0,0x2,0x0,0x0,
0x4,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x3,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x78,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x8c,0x0,0x0,0x0,
0x8c,0x0,0x0,0x0,0x1,0x0,0x4,0x0,
0x90,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf0,0x0,0x0,0x0,0x5,0x0,0x10,0x0,
0x6,0x0,0x50,0x0,0xf0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x3,0x0,0x0,0x20,
0x7,0x0,0x50,0x0,0x7,0x0,0x0,0x0,
0x5,0x0,0x0,0x20,0x8,0x0,0x50,0x0,
0x8,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x50,0x0,
0x9,0x0,0x40,0x2,0xf0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x50,0x1,0x8,0x0,0x60,0x2,
0x6,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x30,0x1,0x7,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x21,0x0,0x50,0x0,0x21,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x25,0x0,0x50,0x0,0x25,0x0,0x50,0x0,
0x9,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0xb,0x0,0xc0,0x0,0xa,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0xc,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x21,0x0,0x50,0x0,
0x22,0x0,0x90,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9c,0x0,0x0,0x0,0x25,0x0,0x50,0x0,
0x26,0x0,0x90,0x0,0x9c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2b,0x0,0x90,0x0,
0x2b,0x0,0x30,0x1,0x15,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x28,0x0,0x90,0x0,
0x28,0x0,0x50,0x1,0x11,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x27,0x0,0x90,0x0,
0x27,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x15,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x28,0x0,0x50,0x1,
0x29,0x0,0xd0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x17,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x2b,0x0,0x30,0x1,
0x2c,0x0,0xd0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,
0x0,0x2,0x7,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x32,0x0,0xd0,0x0,
0x32,0x0,0x60,0x2,0x1c,0x0,0x0,0x0,
0x0,0x2,0x7,0x0,0x6,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2f,0x0,0xd0,0x0,
0x2f,0x0,0xf0,0x1,0x1a,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x5,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2e,0x0,0xd0,0x0,
0x2e,0x0,0xa0,0x1,0x18,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2d,0x0,0xd0,0x0,
0x2d,0x0,0x60,0x1,0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           *static_cast<return_type *>(dataPtr) = binding(aotContext, argumentsPtr);
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 1, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// startRecording at line 18, column 5
QObject *r2_5;
QObject *r2_6;
QUrl r2_4;
QString r8_0;
QObject *r7_1;
QVariant r2_0;
QString r2_2;
QString r2_3;
QString r10_0;
bool r2_7;
QObject *r7_0;
QObject *r2_1;
// generate_CallQmlContextPropertyLookup
{
QVariant callResult;
void *args[] = { &callResult };
const QMetaType types[] = { QMetaType::fromType<QVariant>() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->callQmlContextPropertyLookup(3, args, types, 0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initCallQmlContextPropertyLookup(3);
if (aotContext->engine->hasError())
    return ;
}
r2_0 = std::move(callResult);
}
{
}
// generate_StoreNameSloppy
aotContext->storeNameSloppy(7, &r2_0, QMetaType::fromType<QVariant>());
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(8);
#endif
while (!aotContext->loadContextIdLookup(4, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(8);
#endif
aotContext->initLoadContextIdLookup(4);
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_StoreReg
r7_0 = r2_1;
{
}
// generate_LoadRuntimeString
r2_2 = QStringLiteral("file:///D:/QML/Recorder/Recordings/");
{
}
// generate_StoreReg
r8_0 = std::move(r2_2);
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(5, &r2_3)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
aotContext->initLoadScopeObjectPropertyLookup(5, QMetaType::fromType<QString>());
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_Add
r2_4 = QUrl((std::move(r8_0) + std::move(r2_3)));
{
}
// generate_SetLookup
{
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(21);
#endif
while (!aotContext->setObjectLookup(6, r7_0, &r2_4)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(21);
#endif
aotContext->initSetObjectLookup(6, r7_0, QMetaType::fromType<QUrl>());
if (aotContext->engine->hasError())
    return ;
}
}
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(23);
#endif
while (!aotContext->loadContextIdLookup(7, &r2_5)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(23);
#endif
aotContext->initLoadContextIdLookup(7);
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(25);
#endif
while (!aotContext->getObjectLookup(8, r2_5, &r2_6)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(25);
#endif
aotContext->initGetObjectLookup(8, r2_5, []() { static const auto t = QMetaType::fromName("QMediaRecorder*"); return t; }());
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_StoreReg
r7_1 = r2_6;
{
}
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(32);
#endif
while (!aotContext->callObjectPropertyLookup(9, r7_1, args, types, 0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(32);
#endif
aotContext->initCallObjectPropertyLookup(9);
if (aotContext->engine->hasError())
    return ;
}
}
{
}
// generate_LoadTrue
r2_7 = true;
{
}
// generate_StoreNameSloppy
aotContext->storeNameSloppy(6, &r2_7, QMetaType::fromType<bool>());
{
}
{
}
{
}
// generate_LoadRuntimeString
r2_2 = QStringLiteral("Recording started");
{
}
// generate_StoreReg
r10_0 = std::move(r2_2);
{
}
// generate_CallPropertyLookup
{
    bool firstArgIsCategory = false;
    const QLoggingCategory *category = aotContext->resolveLoggingCategory(nullptr, &firstArgIsCategory);
    if (category && category->isEnabled(QtDebugMsg)) {
        const QString message = r10_0;
        aotContext->setInstructionPointer(48);
        aotContext->writeToConsole(QtDebugMsg, message, category);
    }
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 2, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// stopRecording at line 27, column 5
QObject *r7_0;
QObject *r2_1;
QString r2_3;
QString r10_0;
bool r2_2;
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadContextIdLookup(12, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadContextIdLookup(12);
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(13, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(13, r2_0, []() { static const auto t = QMetaType::fromName("QMediaRecorder*"); return t; }());
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_StoreReg
r7_0 = r2_1;
{
}
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
while (!aotContext->callObjectPropertyLookup(14, r7_0, args, types, 0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
aotContext->initCallObjectPropertyLookup(14);
if (aotContext->engine->hasError())
    return ;
}
}
{
}
// generate_LoadFalse
r2_2 = false;
{
}
// generate_StoreNameSloppy
aotContext->storeNameSloppy(6, &r2_2, QMetaType::fromType<bool>());
{
}
{
}
{
}
// generate_LoadRuntimeString
r2_3 = QStringLiteral("Recording stopped");
{
}
// generate_StoreReg
r10_0 = std::move(r2_3);
{
}
// generate_CallPropertyLookup
{
    bool firstArgIsCategory = false;
    const QLoggingCategory *category = aotContext->resolveLoggingCategory(nullptr, &firstArgIsCategory);
    if (category && category->isEnabled(QtDebugMsg)) {
        const QString message = r10_0;
        aotContext->setInstructionPointer(27);
        aotContext->writeToConsole(QtDebugMsg, message, category);
    }
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 3, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for camera at line 39, column 9
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadContextIdLookup(17, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadContextIdLookup(17);
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
{
}
{
}
// generate_Ret
return r2_0;
});}
 },{ 4, QMetaType::fromType<int>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for quality at line 45, column 13
int r2_0;
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getEnumLookup(19, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetEnumLookup(19, []() { static const auto t = QMetaType::fromName("QMediaRecorder*"); return t; }().metaObject(), "Quality", "HighQuality");
if (aotContext->engine->hasError())
    return int();
}
{
}
{
}
// generate_Ret
return r2_0;
});}
 },{ 6, QMetaType::fromType<void>(), { QMetaType::fromType<QJSValue>(), QMetaType::fromType<QString>() }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for onErrorOccurred at line 47, column 13
// generate_CreateCallContext
{
{
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 7, QMetaType::fromType<void>(), { QMetaType::fromType<QJSValue>(), QMetaType::fromType<QString>() }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
//  at line 47, column 31
QString r12_0;
QString r13_0;
QString r2_0;
QString r7_0 = (*static_cast<QString*>(argumentsPtr[1]));
{
}
{
}
// generate_LoadRuntimeString
r2_0 = QStringLiteral("Recording error:");
{
}
// generate_StoreReg
r12_0 = std::move(r2_0);
{
}
// generate_MoveReg
r13_0 = r7_0;
{
}
// generate_CallPropertyLookup
{
    bool firstArgIsCategory = false;
    const QLoggingCategory *category = aotContext->resolveLoggingCategory(nullptr, &firstArgIsCategory);
    if (category && category->isEnabled(QtCriticalMsg)) {
        const QString message = r12_0.append(QLatin1Char(' ')).append(std::move(r13_0));
        aotContext->setInstructionPointer(16);
        aotContext->writeToConsole(QtCriticalMsg, message, category);
    }
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 8, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for onRecorderStateChanged at line 50, column 13
// generate_CreateCallContext
{
{
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
