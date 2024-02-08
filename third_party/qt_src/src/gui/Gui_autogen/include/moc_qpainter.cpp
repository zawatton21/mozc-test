/****************************************************************************
** Meta object code from reading C++ file 'qpainter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../painting/qpainter.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpainter.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPainterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPainterENDCLASS = QtMocHelpers::stringData(
    "QPainter",
    "RenderHint",
    "Antialiasing",
    "TextAntialiasing",
    "SmoothPixmapTransform",
    "VerticalSubpixelPositioning",
    "LosslessImageRendering",
    "NonCosmeticBrushPatterns",
    "RenderHints"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPainterENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[11];
    char stringdata2[13];
    char stringdata3[17];
    char stringdata4[22];
    char stringdata5[28];
    char stringdata6[23];
    char stringdata7[25];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPainterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPainterENDCLASS_t qt_meta_stringdata_CLASSQPainterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "QPainter"
        QT_MOC_LITERAL(9, 10),  // "RenderHint"
        QT_MOC_LITERAL(20, 12),  // "Antialiasing"
        QT_MOC_LITERAL(33, 16),  // "TextAntialiasing"
        QT_MOC_LITERAL(50, 21),  // "SmoothPixmapTransform"
        QT_MOC_LITERAL(72, 27),  // "VerticalSubpixelPositioning"
        QT_MOC_LITERAL(100, 22),  // "LosslessImageRendering"
        QT_MOC_LITERAL(123, 24),  // "NonCosmeticBrushPatterns"
        QT_MOC_LITERAL(148, 11)   // "RenderHints"
    },
    "QPainter",
    "RenderHint",
    "Antialiasing",
    "TextAntialiasing",
    "SmoothPixmapTransform",
    "VerticalSubpixelPositioning",
    "LosslessImageRendering",
    "NonCosmeticBrushPatterns",
    "RenderHints"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPainterENDCLASS[] = {

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
       1,    1, 0x0,    6,   24,
       8,    1, 0x1,    6,   36,

 // enum data: key, value
       2, uint(QPainter::Antialiasing),
       3, uint(QPainter::TextAntialiasing),
       4, uint(QPainter::SmoothPixmapTransform),
       5, uint(QPainter::VerticalSubpixelPositioning),
       6, uint(QPainter::LosslessImageRendering),
       7, uint(QPainter::NonCosmeticBrushPatterns),
       2, uint(QPainter::Antialiasing),
       3, uint(QPainter::TextAntialiasing),
       4, uint(QPainter::SmoothPixmapTransform),
       5, uint(QPainter::VerticalSubpixelPositioning),
       6, uint(QPainter::LosslessImageRendering),
       7, uint(QPainter::NonCosmeticBrushPatterns),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPainter::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQPainterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPainterENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPainterENDCLASS_t,
        // enum 'RenderHint'
        QtPrivate::TypeAndForceComplete<QPainter::RenderHint, std::true_type>,
        // enum 'RenderHints'
        QtPrivate::TypeAndForceComplete<QPainter::RenderHints, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPainter, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
