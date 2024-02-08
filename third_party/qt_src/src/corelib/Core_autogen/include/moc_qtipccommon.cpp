/****************************************************************************
** Meta object code from reading C++ file 'qtipccommon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ipc/qtipccommon.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtipccommon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS = QtMocHelpers::stringData(
    "QNativeIpcKey",
    "Type",
    "SystemV",
    "PosixRealtime",
    "Windows"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[14];
    char stringdata1[5];
    char stringdata2[8];
    char stringdata3[14];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS_t qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QNativeIpcKey"
        QT_MOC_LITERAL(14, 4),  // "Type"
        QT_MOC_LITERAL(19, 7),  // "SystemV"
        QT_MOC_LITERAL(27, 13),  // "PosixRealtime"
        QT_MOC_LITERAL(41, 7)   // "Windows"
    },
    "QNativeIpcKey",
    "Type",
    "SystemV",
    "PosixRealtime",
    "Windows"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQNativeIpcKeyENDCLASS[] = {

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
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(QNativeIpcKey::Type::SystemV),
       3, uint(QNativeIpcKey::Type::PosixRealtime),
       4, uint(QNativeIpcKey::Type::Windows),

       0        // eod
};

Q_CONSTINIT const QMetaObject QNativeIpcKey::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQNativeIpcKeyENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQNativeIpcKeyENDCLASS_t,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<QNativeIpcKey::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNativeIpcKey, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
