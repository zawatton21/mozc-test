/****************************************************************************
** Meta object code from reading C++ file 'qwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qwidget_p.h"
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidget_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS = QtMocHelpers::stringData(
    "QWidgetPrivate",
    "DrawWidgetFlags",
    "DrawWidgetFlag",
    "DrawAsRoot",
    "DrawPaintOnScreen",
    "DrawRecursive",
    "DrawInvisible",
    "DontSubtractOpaqueChildren",
    "DontDrawOpaqueChildren",
    "DontDrawNativeChildren",
    "DontSetCompositionMode",
    "UseEffectRegionBounds",
    "Direction",
    "DirectionNorth",
    "DirectionEast",
    "DirectionSouth",
    "DirectionWest",
    "CloseMode",
    "CloseNoEvent",
    "CloseWithEvent",
    "CloseWithSpontaneousEvent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[15];
    char stringdata1[16];
    char stringdata2[15];
    char stringdata3[11];
    char stringdata4[18];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[27];
    char stringdata8[23];
    char stringdata9[23];
    char stringdata10[23];
    char stringdata11[22];
    char stringdata12[10];
    char stringdata13[15];
    char stringdata14[14];
    char stringdata15[15];
    char stringdata16[14];
    char stringdata17[10];
    char stringdata18[13];
    char stringdata19[15];
    char stringdata20[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS_t qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QWidgetPrivate"
        QT_MOC_LITERAL(15, 15),  // "DrawWidgetFlags"
        QT_MOC_LITERAL(31, 14),  // "DrawWidgetFlag"
        QT_MOC_LITERAL(46, 10),  // "DrawAsRoot"
        QT_MOC_LITERAL(57, 17),  // "DrawPaintOnScreen"
        QT_MOC_LITERAL(75, 13),  // "DrawRecursive"
        QT_MOC_LITERAL(89, 13),  // "DrawInvisible"
        QT_MOC_LITERAL(103, 26),  // "DontSubtractOpaqueChildren"
        QT_MOC_LITERAL(130, 22),  // "DontDrawOpaqueChildren"
        QT_MOC_LITERAL(153, 22),  // "DontDrawNativeChildren"
        QT_MOC_LITERAL(176, 22),  // "DontSetCompositionMode"
        QT_MOC_LITERAL(199, 21),  // "UseEffectRegionBounds"
        QT_MOC_LITERAL(221, 9),  // "Direction"
        QT_MOC_LITERAL(231, 14),  // "DirectionNorth"
        QT_MOC_LITERAL(246, 13),  // "DirectionEast"
        QT_MOC_LITERAL(260, 14),  // "DirectionSouth"
        QT_MOC_LITERAL(275, 13),  // "DirectionWest"
        QT_MOC_LITERAL(289, 9),  // "CloseMode"
        QT_MOC_LITERAL(299, 12),  // "CloseNoEvent"
        QT_MOC_LITERAL(312, 14),  // "CloseWithEvent"
        QT_MOC_LITERAL(327, 25)   // "CloseWithSpontaneousEvent"
    },
    "QWidgetPrivate",
    "DrawWidgetFlags",
    "DrawWidgetFlag",
    "DrawAsRoot",
    "DrawPaintOnScreen",
    "DrawRecursive",
    "DrawInvisible",
    "DontSubtractOpaqueChildren",
    "DontDrawOpaqueChildren",
    "DontDrawNativeChildren",
    "DontSetCompositionMode",
    "UseEffectRegionBounds",
    "Direction",
    "DirectionNorth",
    "DirectionEast",
    "DirectionSouth",
    "DirectionWest",
    "CloseMode",
    "CloseNoEvent",
    "CloseWithEvent",
    "CloseWithSpontaneousEvent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQWidgetPrivateENDCLASS[] = {

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
       1,    2, 0x1,    9,   29,
      12,   12, 0x0,    4,   47,
      17,   17, 0x0,    3,   55,

 // enum data: key, value
       3, uint(QWidgetPrivate::DrawAsRoot),
       4, uint(QWidgetPrivate::DrawPaintOnScreen),
       5, uint(QWidgetPrivate::DrawRecursive),
       6, uint(QWidgetPrivate::DrawInvisible),
       7, uint(QWidgetPrivate::DontSubtractOpaqueChildren),
       8, uint(QWidgetPrivate::DontDrawOpaqueChildren),
       9, uint(QWidgetPrivate::DontDrawNativeChildren),
      10, uint(QWidgetPrivate::DontSetCompositionMode),
      11, uint(QWidgetPrivate::UseEffectRegionBounds),
      13, uint(QWidgetPrivate::DirectionNorth),
      14, uint(QWidgetPrivate::DirectionEast),
      15, uint(QWidgetPrivate::DirectionSouth),
      16, uint(QWidgetPrivate::DirectionWest),
      18, uint(QWidgetPrivate::CloseNoEvent),
      19, uint(QWidgetPrivate::CloseWithEvent),
      20, uint(QWidgetPrivate::CloseWithSpontaneousEvent),

       0        // eod
};

Q_CONSTINIT const QMetaObject QWidgetPrivate::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QObjectPrivate>::value,
    qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQWidgetPrivateENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQWidgetPrivateENDCLASS_t,
        // enum 'DrawWidgetFlags'
        QtPrivate::TypeAndForceComplete<QWidgetPrivate::DrawWidgetFlags, std::true_type>,
        // enum 'Direction'
        QtPrivate::TypeAndForceComplete<QWidgetPrivate::Direction, std::true_type>,
        // enum 'CloseMode'
        QtPrivate::TypeAndForceComplete<QWidgetPrivate::CloseMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWidgetPrivate, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
