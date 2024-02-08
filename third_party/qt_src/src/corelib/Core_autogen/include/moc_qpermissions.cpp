/****************************************************************************
** Meta object code from reading C++ file 'qpermissions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qpermissions.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpermissions.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQLocationPermissionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQLocationPermissionENDCLASS = QtMocHelpers::stringData(
    "QLocationPermission",
    "Accuracy",
    "Approximate",
    "Precise",
    "Availability",
    "WhenInUse",
    "Always"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQLocationPermissionENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[20];
    char stringdata1[9];
    char stringdata2[12];
    char stringdata3[8];
    char stringdata4[13];
    char stringdata5[10];
    char stringdata6[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQLocationPermissionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQLocationPermissionENDCLASS_t qt_meta_stringdata_CLASSQLocationPermissionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QLocationPermission"
        QT_MOC_LITERAL(20, 8),  // "Accuracy"
        QT_MOC_LITERAL(29, 11),  // "Approximate"
        QT_MOC_LITERAL(41, 7),  // "Precise"
        QT_MOC_LITERAL(49, 12),  // "Availability"
        QT_MOC_LITERAL(62, 9),  // "WhenInUse"
        QT_MOC_LITERAL(72, 6)   // "Always"
    },
    "QLocationPermission",
    "Accuracy",
    "Approximate",
    "Precise",
    "Availability",
    "WhenInUse",
    "Always"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQLocationPermissionENDCLASS[] = {

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
       4,    4, 0x0,    2,   28,

 // enum data: key, value
       2, uint(QLocationPermission::Approximate),
       3, uint(QLocationPermission::Precise),
       5, uint(QLocationPermission::WhenInUse),
       6, uint(QLocationPermission::Always),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLocationPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQLocationPermissionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQLocationPermissionENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQLocationPermissionENDCLASS_t,
        // enum 'Accuracy'
        QtPrivate::TypeAndForceComplete<QLocationPermission::Accuracy, std::true_type>,
        // enum 'Availability'
        QtPrivate::TypeAndForceComplete<QLocationPermission::Availability, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLocationPermission, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS = QtMocHelpers::stringData(
    "QCalendarPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[11];
    char stringdata2[9];
    char stringdata3[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS_t qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QCalendarPermission"
        QT_MOC_LITERAL(20, 10),  // "AccessMode"
        QT_MOC_LITERAL(31, 8),  // "ReadOnly"
        QT_MOC_LITERAL(40, 9)   // "ReadWrite"
    },
    "QCalendarPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCalendarPermissionENDCLASS[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QCalendarPermission::ReadOnly),
       3, uint(QCalendarPermission::ReadWrite),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCalendarPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCalendarPermissionENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCalendarPermissionENDCLASS_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QCalendarPermission::AccessMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCalendarPermission, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQContactsPermissionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQContactsPermissionENDCLASS = QtMocHelpers::stringData(
    "QContactsPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQContactsPermissionENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[11];
    char stringdata2[9];
    char stringdata3[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQContactsPermissionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQContactsPermissionENDCLASS_t qt_meta_stringdata_CLASSQContactsPermissionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QContactsPermission"
        QT_MOC_LITERAL(20, 10),  // "AccessMode"
        QT_MOC_LITERAL(31, 8),  // "ReadOnly"
        QT_MOC_LITERAL(40, 9)   // "ReadWrite"
    },
    "QContactsPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQContactsPermissionENDCLASS[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QContactsPermission::ReadOnly),
       3, uint(QContactsPermission::ReadWrite),

       0        // eod
};

Q_CONSTINIT const QMetaObject QContactsPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQContactsPermissionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQContactsPermissionENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQContactsPermissionENDCLASS_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QContactsPermission::AccessMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QContactsPermission, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS = QtMocHelpers::stringData(
    "QBluetoothPermission",
    "CommunicationModes",
    "CommunicationMode",
    "Access",
    "Advertise",
    "Default"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[21];
    char stringdata1[19];
    char stringdata2[18];
    char stringdata3[7];
    char stringdata4[10];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS_t qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "QBluetoothPermission"
        QT_MOC_LITERAL(21, 18),  // "CommunicationModes"
        QT_MOC_LITERAL(40, 17),  // "CommunicationMode"
        QT_MOC_LITERAL(58, 6),  // "Access"
        QT_MOC_LITERAL(65, 9),  // "Advertise"
        QT_MOC_LITERAL(75, 7)   // "Default"
    },
    "QBluetoothPermission",
    "CommunicationModes",
    "CommunicationMode",
    "Access",
    "Advertise",
    "Default"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQBluetoothPermissionENDCLASS[] = {

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
       1,    2, 0x1,    3,   19,

 // enum data: key, value
       3, uint(QBluetoothPermission::Access),
       4, uint(QBluetoothPermission::Advertise),
       5, uint(QBluetoothPermission::Default),

       0        // eod
};

Q_CONSTINIT const QMetaObject QBluetoothPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQBluetoothPermissionENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQBluetoothPermissionENDCLASS_t,
        // enum 'CommunicationModes'
        QtPrivate::TypeAndForceComplete<QBluetoothPermission::CommunicationModes, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QBluetoothPermission, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
