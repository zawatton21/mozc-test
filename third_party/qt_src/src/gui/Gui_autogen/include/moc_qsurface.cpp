/****************************************************************************
** Meta object code from reading C++ file 'qsurface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qsurface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsurface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSurfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSurfaceENDCLASS = QtMocHelpers::stringData(
    "QSurface",
    "SurfaceClass",
    "Window",
    "Offscreen",
    "SurfaceType",
    "RasterSurface",
    "OpenGLSurface",
    "RasterGLSurface",
    "OpenVGSurface",
    "VulkanSurface",
    "MetalSurface",
    "Direct3DSurface"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSurfaceENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[7];
    char stringdata3[10];
    char stringdata4[12];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[13];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSurfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSurfaceENDCLASS_t qt_meta_stringdata_CLASSQSurfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "QSurface"
        QT_MOC_LITERAL(9, 12),  // "SurfaceClass"
        QT_MOC_LITERAL(22, 6),  // "Window"
        QT_MOC_LITERAL(29, 9),  // "Offscreen"
        QT_MOC_LITERAL(39, 11),  // "SurfaceType"
        QT_MOC_LITERAL(51, 13),  // "RasterSurface"
        QT_MOC_LITERAL(65, 13),  // "OpenGLSurface"
        QT_MOC_LITERAL(79, 15),  // "RasterGLSurface"
        QT_MOC_LITERAL(95, 13),  // "OpenVGSurface"
        QT_MOC_LITERAL(109, 13),  // "VulkanSurface"
        QT_MOC_LITERAL(123, 12),  // "MetalSurface"
        QT_MOC_LITERAL(136, 15)   // "Direct3DSurface"
    },
    "QSurface",
    "SurfaceClass",
    "Window",
    "Offscreen",
    "SurfaceType",
    "RasterSurface",
    "OpenGLSurface",
    "RasterGLSurface",
    "OpenVGSurface",
    "VulkanSurface",
    "MetalSurface",
    "Direct3DSurface"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSurfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   24,
       4,    4, 0x0,    7,   28,

 // enum data: key, value
       2, uint(QSurface::Window),
       3, uint(QSurface::Offscreen),
       5, uint(QSurface::RasterSurface),
       6, uint(QSurface::OpenGLSurface),
       7, uint(QSurface::RasterGLSurface),
       8, uint(QSurface::OpenVGSurface),
       9, uint(QSurface::VulkanSurface),
      10, uint(QSurface::MetalSurface),
      11, uint(QSurface::Direct3DSurface),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSurface::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQSurfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSurfaceENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSurfaceENDCLASS_t,
        // enum 'SurfaceClass'
        QtPrivate::TypeAndForceComplete<QSurface::SurfaceClass, std::true_type>,
        // enum 'SurfaceType'
        QtPrivate::TypeAndForceComplete<QSurface::SurfaceType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSurface, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
