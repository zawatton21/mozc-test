/****************************************************************************
** Meta object code from reading C++ file 'qlayoutpolicy_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qlayoutpolicy_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlayoutpolicy_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS = QtMocHelpers::stringData(
    "QLayoutPolicy",
    "Policy",
    "PolicyFlag",
    "GrowFlag",
    "ExpandFlag",
    "ShrinkFlag",
    "IgnoreFlag"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[11];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[11];
    char stringdata6[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS_t qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QLayoutPolicy"
        QT_MOC_LITERAL(14, 6),  // "Policy"
        QT_MOC_LITERAL(21, 10),  // "PolicyFlag"
        QT_MOC_LITERAL(32, 8),  // "GrowFlag"
        QT_MOC_LITERAL(41, 10),  // "ExpandFlag"
        QT_MOC_LITERAL(52, 10),  // "ShrinkFlag"
        QT_MOC_LITERAL(63, 10)   // "IgnoreFlag"
    },
    "QLayoutPolicy",
    "Policy",
    "PolicyFlag",
    "GrowFlag",
    "ExpandFlag",
    "ShrinkFlag",
    "IgnoreFlag"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQLayoutPolicyENDCLASS[] = {

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
       1,    2, 0x1,    4,   19,

 // enum data: key, value
       3, uint(QLayoutPolicy::GrowFlag),
       4, uint(QLayoutPolicy::ExpandFlag),
       5, uint(QLayoutPolicy::ShrinkFlag),
       6, uint(QLayoutPolicy::IgnoreFlag),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLayoutPolicy::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQLayoutPolicyENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQLayoutPolicyENDCLASS_t,
        // enum 'Policy'
        QtPrivate::TypeAndForceComplete<QLayoutPolicy::Policy, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLayoutPolicy, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
