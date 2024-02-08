/****************************************************************************
** Meta object code from reading C++ file 'qcolorspace.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../painting/qcolorspace.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolorspace.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQColorSpaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQColorSpaceENDCLASS = QtMocHelpers::stringData(
    "QColorSpace",
    "NamedColorSpace",
    "SRgb",
    "SRgbLinear",
    "AdobeRgb",
    "DisplayP3",
    "ProPhotoRgb",
    "Primaries",
    "Custom",
    "DciP3D65",
    "TransferFunction",
    "Linear",
    "Gamma"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQColorSpaceENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[5];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[10];
    char stringdata6[12];
    char stringdata7[10];
    char stringdata8[7];
    char stringdata9[9];
    char stringdata10[17];
    char stringdata11[7];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQColorSpaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQColorSpaceENDCLASS_t qt_meta_stringdata_CLASSQColorSpaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QColorSpace"
        QT_MOC_LITERAL(12, 15),  // "NamedColorSpace"
        QT_MOC_LITERAL(28, 4),  // "SRgb"
        QT_MOC_LITERAL(33, 10),  // "SRgbLinear"
        QT_MOC_LITERAL(44, 8),  // "AdobeRgb"
        QT_MOC_LITERAL(53, 9),  // "DisplayP3"
        QT_MOC_LITERAL(63, 11),  // "ProPhotoRgb"
        QT_MOC_LITERAL(75, 9),  // "Primaries"
        QT_MOC_LITERAL(85, 6),  // "Custom"
        QT_MOC_LITERAL(92, 8),  // "DciP3D65"
        QT_MOC_LITERAL(101, 16),  // "TransferFunction"
        QT_MOC_LITERAL(118, 6),  // "Linear"
        QT_MOC_LITERAL(125, 5)   // "Gamma"
    },
    "QColorSpace",
    "NamedColorSpace",
    "SRgb",
    "SRgbLinear",
    "AdobeRgb",
    "DisplayP3",
    "ProPhotoRgb",
    "Primaries",
    "Custom",
    "DciP3D65",
    "TransferFunction",
    "Linear",
    "Gamma"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQColorSpaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   29,
       7,    7, 0x2,    5,   39,
      10,   10, 0x2,    5,   49,

 // enum data: key, value
       2, uint(QColorSpace::SRgb),
       3, uint(QColorSpace::SRgbLinear),
       4, uint(QColorSpace::AdobeRgb),
       5, uint(QColorSpace::DisplayP3),
       6, uint(QColorSpace::ProPhotoRgb),
       8, uint(QColorSpace::Primaries::Custom),
       2, uint(QColorSpace::Primaries::SRgb),
       4, uint(QColorSpace::Primaries::AdobeRgb),
       9, uint(QColorSpace::Primaries::DciP3D65),
       6, uint(QColorSpace::Primaries::ProPhotoRgb),
       8, uint(QColorSpace::TransferFunction::Custom),
      11, uint(QColorSpace::TransferFunction::Linear),
      12, uint(QColorSpace::TransferFunction::Gamma),
       2, uint(QColorSpace::TransferFunction::SRgb),
       6, uint(QColorSpace::TransferFunction::ProPhotoRgb),

       0        // eod
};

Q_CONSTINIT const QMetaObject QColorSpace::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQColorSpaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQColorSpaceENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQColorSpaceENDCLASS_t,
        // enum 'NamedColorSpace'
        QtPrivate::TypeAndForceComplete<QColorSpace::NamedColorSpace, std::true_type>,
        // enum 'Primaries'
        QtPrivate::TypeAndForceComplete<QColorSpace::Primaries, std::true_type>,
        // enum 'TransferFunction'
        QtPrivate::TypeAndForceComplete<QColorSpace::TransferFunction, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QColorSpace, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
