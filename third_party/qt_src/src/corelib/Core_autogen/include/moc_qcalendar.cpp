/****************************************************************************
** Meta object code from reading C++ file 'qcalendar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../time/qcalendar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcalendar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCalendarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCalendarENDCLASS = QtMocHelpers::stringData(
    "QCalendar",
    "System",
    "Gregorian",
    "Julian",
    "Milankovic",
    "Last",
    "User"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCalendarENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[7];
    char stringdata2[10];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[5];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCalendarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCalendarENDCLASS_t qt_meta_stringdata_CLASSQCalendarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QCalendar"
        QT_MOC_LITERAL(10, 6),  // "System"
        QT_MOC_LITERAL(17, 9),  // "Gregorian"
        QT_MOC_LITERAL(27, 6),  // "Julian"
        QT_MOC_LITERAL(34, 10),  // "Milankovic"
        QT_MOC_LITERAL(45, 4),  // "Last"
        QT_MOC_LITERAL(50, 4)   // "User"
    },
    "QCalendar",
    "System",
    "Gregorian",
    "Julian",
    "Milankovic",
    "Last",
    "User"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCalendarENDCLASS[] = {

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
       1,    1, 0x2,    5,   19,

 // enum data: key, value
       2, uint(QCalendar::System::Gregorian),
       3, uint(QCalendar::System::Julian),
       4, uint(QCalendar::System::Milankovic),
       5, uint(QCalendar::System::Last),
       6, uint(QCalendar::System::User),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCalendar::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCalendarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCalendarENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCalendarENDCLASS_t,
        // enum 'System'
        QtPrivate::TypeAndForceComplete<QCalendar::System, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCalendar, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
