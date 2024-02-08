/****************************************************************************
** Meta object code from reading C++ file 'qwidgetrepaintmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qwidgetrepaintmanager_p.h"
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidgetrepaintmanager_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS = QtMocHelpers::stringData(
    "QWidgetRepaintManager",
    "UpdateTime",
    "UpdateNow",
    "UpdateLater",
    "BufferState",
    "BufferValid",
    "BufferInvalid"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[22];
    char stringdata1[11];
    char stringdata2[10];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS_t qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QWidgetRepaintManager"
        QT_MOC_LITERAL(22, 10),  // "UpdateTime"
        QT_MOC_LITERAL(33, 9),  // "UpdateNow"
        QT_MOC_LITERAL(43, 11),  // "UpdateLater"
        QT_MOC_LITERAL(55, 11),  // "BufferState"
        QT_MOC_LITERAL(67, 11),  // "BufferValid"
        QT_MOC_LITERAL(79, 13)   // "BufferInvalid"
    },
    "QWidgetRepaintManager",
    "UpdateTime",
    "UpdateNow",
    "UpdateLater",
    "BufferState",
    "BufferValid",
    "BufferInvalid"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQWidgetRepaintManagerENDCLASS[] = {

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
       2, uint(QWidgetRepaintManager::UpdateNow),
       3, uint(QWidgetRepaintManager::UpdateLater),
       5, uint(QWidgetRepaintManager::BufferValid),
       6, uint(QWidgetRepaintManager::BufferInvalid),

       0        // eod
};

Q_CONSTINIT const QMetaObject QWidgetRepaintManager::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQWidgetRepaintManagerENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQWidgetRepaintManagerENDCLASS_t,
        // enum 'UpdateTime'
        QtPrivate::TypeAndForceComplete<QWidgetRepaintManager::UpdateTime, std::true_type>,
        // enum 'BufferState'
        QtPrivate::TypeAndForceComplete<QWidgetRepaintManager::BufferState, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWidgetRepaintManager, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
