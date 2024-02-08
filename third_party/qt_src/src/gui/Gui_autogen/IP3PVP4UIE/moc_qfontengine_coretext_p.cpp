/****************************************************************************
** Meta object code from reading C++ file 'qfontengine_coretext_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/coretext/qfontengine_coretext_p.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontengine_coretext_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS = QtMocHelpers::stringData(
    "QCoreTextFontEngine",
    "FontSmoothing",
    "Disabled",
    "Subpixel",
    "Grayscale"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[20];
    char stringdata1[14];
    char stringdata2[9];
    char stringdata3[9];
    char stringdata4[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS_t qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QCoreTextFontEngine"
        QT_MOC_LITERAL(20, 13),  // "FontSmoothing"
        QT_MOC_LITERAL(34, 8),  // "Disabled"
        QT_MOC_LITERAL(43, 8),  // "Subpixel"
        QT_MOC_LITERAL(52, 9)   // "Grayscale"
    },
    "QCoreTextFontEngine",
    "FontSmoothing",
    "Disabled",
    "Subpixel",
    "Grayscale"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCoreTextFontEngineENDCLASS[] = {

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
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(QCoreTextFontEngine::Disabled),
       3, uint(QCoreTextFontEngine::Subpixel),
       4, uint(QCoreTextFontEngine::Grayscale),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCoreTextFontEngine::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QFontEngine>::value,
    qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCoreTextFontEngineENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCoreTextFontEngineENDCLASS_t,
        // enum 'FontSmoothing'
        QtPrivate::TypeAndForceComplete<QCoreTextFontEngine::FontSmoothing, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCoreTextFontEngine, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
