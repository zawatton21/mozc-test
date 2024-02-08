/****************************************************************************
** Meta object code from reading C++ file 'qimage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../image/qimage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQImageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQImageENDCLASS = QtMocHelpers::stringData(
    "QImage",
    "Format",
    "Format_Invalid",
    "Format_Mono",
    "Format_MonoLSB",
    "Format_Indexed8",
    "Format_RGB32",
    "Format_ARGB32",
    "Format_ARGB32_Premultiplied",
    "Format_RGB16",
    "Format_ARGB8565_Premultiplied",
    "Format_RGB666",
    "Format_ARGB6666_Premultiplied",
    "Format_RGB555",
    "Format_ARGB8555_Premultiplied",
    "Format_RGB888",
    "Format_RGB444",
    "Format_ARGB4444_Premultiplied",
    "Format_RGBX8888",
    "Format_RGBA8888",
    "Format_RGBA8888_Premultiplied",
    "Format_BGR30",
    "Format_A2BGR30_Premultiplied",
    "Format_RGB30",
    "Format_A2RGB30_Premultiplied",
    "Format_Alpha8",
    "Format_Grayscale8",
    "Format_RGBX64",
    "Format_RGBA64",
    "Format_RGBA64_Premultiplied",
    "Format_Grayscale16",
    "Format_BGR888",
    "Format_RGBX16FPx4",
    "Format_RGBA16FPx4",
    "Format_RGBA16FPx4_Premultiplied",
    "Format_RGBX32FPx4",
    "Format_RGBA32FPx4",
    "Format_RGBA32FPx4_Premultiplied",
    "NImageFormats"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQImageENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[7];
    char stringdata1[7];
    char stringdata2[15];
    char stringdata3[12];
    char stringdata4[15];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[28];
    char stringdata9[13];
    char stringdata10[30];
    char stringdata11[14];
    char stringdata12[30];
    char stringdata13[14];
    char stringdata14[30];
    char stringdata15[14];
    char stringdata16[14];
    char stringdata17[30];
    char stringdata18[16];
    char stringdata19[16];
    char stringdata20[30];
    char stringdata21[13];
    char stringdata22[29];
    char stringdata23[13];
    char stringdata24[29];
    char stringdata25[14];
    char stringdata26[18];
    char stringdata27[14];
    char stringdata28[14];
    char stringdata29[28];
    char stringdata30[19];
    char stringdata31[14];
    char stringdata32[18];
    char stringdata33[18];
    char stringdata34[32];
    char stringdata35[18];
    char stringdata36[18];
    char stringdata37[32];
    char stringdata38[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQImageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQImageENDCLASS_t qt_meta_stringdata_CLASSQImageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QImage"
        QT_MOC_LITERAL(7, 6),  // "Format"
        QT_MOC_LITERAL(14, 14),  // "Format_Invalid"
        QT_MOC_LITERAL(29, 11),  // "Format_Mono"
        QT_MOC_LITERAL(41, 14),  // "Format_MonoLSB"
        QT_MOC_LITERAL(56, 15),  // "Format_Indexed8"
        QT_MOC_LITERAL(72, 12),  // "Format_RGB32"
        QT_MOC_LITERAL(85, 13),  // "Format_ARGB32"
        QT_MOC_LITERAL(99, 27),  // "Format_ARGB32_Premultiplied"
        QT_MOC_LITERAL(127, 12),  // "Format_RGB16"
        QT_MOC_LITERAL(140, 29),  // "Format_ARGB8565_Premultiplied"
        QT_MOC_LITERAL(170, 13),  // "Format_RGB666"
        QT_MOC_LITERAL(184, 29),  // "Format_ARGB6666_Premultiplied"
        QT_MOC_LITERAL(214, 13),  // "Format_RGB555"
        QT_MOC_LITERAL(228, 29),  // "Format_ARGB8555_Premultiplied"
        QT_MOC_LITERAL(258, 13),  // "Format_RGB888"
        QT_MOC_LITERAL(272, 13),  // "Format_RGB444"
        QT_MOC_LITERAL(286, 29),  // "Format_ARGB4444_Premultiplied"
        QT_MOC_LITERAL(316, 15),  // "Format_RGBX8888"
        QT_MOC_LITERAL(332, 15),  // "Format_RGBA8888"
        QT_MOC_LITERAL(348, 29),  // "Format_RGBA8888_Premultiplied"
        QT_MOC_LITERAL(378, 12),  // "Format_BGR30"
        QT_MOC_LITERAL(391, 28),  // "Format_A2BGR30_Premultiplied"
        QT_MOC_LITERAL(420, 12),  // "Format_RGB30"
        QT_MOC_LITERAL(433, 28),  // "Format_A2RGB30_Premultiplied"
        QT_MOC_LITERAL(462, 13),  // "Format_Alpha8"
        QT_MOC_LITERAL(476, 17),  // "Format_Grayscale8"
        QT_MOC_LITERAL(494, 13),  // "Format_RGBX64"
        QT_MOC_LITERAL(508, 13),  // "Format_RGBA64"
        QT_MOC_LITERAL(522, 27),  // "Format_RGBA64_Premultiplied"
        QT_MOC_LITERAL(550, 18),  // "Format_Grayscale16"
        QT_MOC_LITERAL(569, 13),  // "Format_BGR888"
        QT_MOC_LITERAL(583, 17),  // "Format_RGBX16FPx4"
        QT_MOC_LITERAL(601, 17),  // "Format_RGBA16FPx4"
        QT_MOC_LITERAL(619, 31),  // "Format_RGBA16FPx4_Premultiplied"
        QT_MOC_LITERAL(651, 17),  // "Format_RGBX32FPx4"
        QT_MOC_LITERAL(669, 17),  // "Format_RGBA32FPx4"
        QT_MOC_LITERAL(687, 31),  // "Format_RGBA32FPx4_Premultiplied"
        QT_MOC_LITERAL(719, 13)   // "NImageFormats"
    },
    "QImage",
    "Format",
    "Format_Invalid",
    "Format_Mono",
    "Format_MonoLSB",
    "Format_Indexed8",
    "Format_RGB32",
    "Format_ARGB32",
    "Format_ARGB32_Premultiplied",
    "Format_RGB16",
    "Format_ARGB8565_Premultiplied",
    "Format_RGB666",
    "Format_ARGB6666_Premultiplied",
    "Format_RGB555",
    "Format_ARGB8555_Premultiplied",
    "Format_RGB888",
    "Format_RGB444",
    "Format_ARGB4444_Premultiplied",
    "Format_RGBX8888",
    "Format_RGBA8888",
    "Format_RGBA8888_Premultiplied",
    "Format_BGR30",
    "Format_A2BGR30_Premultiplied",
    "Format_RGB30",
    "Format_A2RGB30_Premultiplied",
    "Format_Alpha8",
    "Format_Grayscale8",
    "Format_RGBX64",
    "Format_RGBA64",
    "Format_RGBA64_Premultiplied",
    "Format_Grayscale16",
    "Format_BGR888",
    "Format_RGBX16FPx4",
    "Format_RGBA16FPx4",
    "Format_RGBA16FPx4_Premultiplied",
    "Format_RGBX32FPx4",
    "Format_RGBA32FPx4",
    "Format_RGBA32FPx4_Premultiplied",
    "NImageFormats"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQImageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   37,   19,

 // enum data: key, value
       2, uint(QImage::Format_Invalid),
       3, uint(QImage::Format_Mono),
       4, uint(QImage::Format_MonoLSB),
       5, uint(QImage::Format_Indexed8),
       6, uint(QImage::Format_RGB32),
       7, uint(QImage::Format_ARGB32),
       8, uint(QImage::Format_ARGB32_Premultiplied),
       9, uint(QImage::Format_RGB16),
      10, uint(QImage::Format_ARGB8565_Premultiplied),
      11, uint(QImage::Format_RGB666),
      12, uint(QImage::Format_ARGB6666_Premultiplied),
      13, uint(QImage::Format_RGB555),
      14, uint(QImage::Format_ARGB8555_Premultiplied),
      15, uint(QImage::Format_RGB888),
      16, uint(QImage::Format_RGB444),
      17, uint(QImage::Format_ARGB4444_Premultiplied),
      18, uint(QImage::Format_RGBX8888),
      19, uint(QImage::Format_RGBA8888),
      20, uint(QImage::Format_RGBA8888_Premultiplied),
      21, uint(QImage::Format_BGR30),
      22, uint(QImage::Format_A2BGR30_Premultiplied),
      23, uint(QImage::Format_RGB30),
      24, uint(QImage::Format_A2RGB30_Premultiplied),
      25, uint(QImage::Format_Alpha8),
      26, uint(QImage::Format_Grayscale8),
      27, uint(QImage::Format_RGBX64),
      28, uint(QImage::Format_RGBA64),
      29, uint(QImage::Format_RGBA64_Premultiplied),
      30, uint(QImage::Format_Grayscale16),
      31, uint(QImage::Format_BGR888),
      32, uint(QImage::Format_RGBX16FPx4),
      33, uint(QImage::Format_RGBA16FPx4),
      34, uint(QImage::Format_RGBA16FPx4_Premultiplied),
      35, uint(QImage::Format_RGBX32FPx4),
      36, uint(QImage::Format_RGBA32FPx4),
      37, uint(QImage::Format_RGBA32FPx4_Premultiplied),
      38, uint(QImage::NImageFormats),

       0        // eod
};

Q_CONSTINIT const QMetaObject QImage::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QPaintDevice>::value,
    qt_meta_stringdata_CLASSQImageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQImageENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQImageENDCLASS_t,
        // enum 'Format'
        QtPrivate::TypeAndForceComplete<QImage::Format, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QImage, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
