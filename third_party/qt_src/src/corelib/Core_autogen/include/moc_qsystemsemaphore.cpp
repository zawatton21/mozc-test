/****************************************************************************
** Meta object code from reading C++ file 'qsystemsemaphore.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ipc/qsystemsemaphore.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsystemsemaphore.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS = QtMocHelpers::stringData(
    "QSystemSemaphore",
    "AccessMode",
    "Open",
    "Create"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[5];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS_t qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QSystemSemaphore"
        QT_MOC_LITERAL(17, 10),  // "AccessMode"
        QT_MOC_LITERAL(28, 4),  // "Open"
        QT_MOC_LITERAL(33, 6)   // "Create"
    },
    "QSystemSemaphore",
    "AccessMode",
    "Open",
    "Create"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSystemSemaphoreENDCLASS[] = {

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
       2, uint(QSystemSemaphore::Open),
       3, uint(QSystemSemaphore::Create),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSystemSemaphore::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSystemSemaphoreENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSystemSemaphoreENDCLASS_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QSystemSemaphore::AccessMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSystemSemaphore, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
