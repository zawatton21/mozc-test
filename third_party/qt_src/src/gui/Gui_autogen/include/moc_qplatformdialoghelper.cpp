/****************************************************************************
** Meta object code from reading C++ file 'qplatformdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformdialoghelper.h"
#include <QFont>
#include <QColor>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformdialoghelper.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS = QtMocHelpers::stringData(
    "QPlatformDialogHelper",
    "accept",
    "",
    "reject",
    "StandardButtons",
    "StandardButton",
    "NoButton",
    "Ok",
    "Save",
    "SaveAll",
    "Open",
    "Yes",
    "YesToAll",
    "No",
    "NoToAll",
    "Abort",
    "Retry",
    "Ignore",
    "Close",
    "Cancel",
    "Discard",
    "Help",
    "Apply",
    "Reset",
    "RestoreDefaults",
    "FirstButton",
    "LastButton",
    "LowestBit",
    "HighestBit",
    "ButtonRole",
    "InvalidRole",
    "AcceptRole",
    "RejectRole",
    "DestructiveRole",
    "ActionRole",
    "HelpRole",
    "YesRole",
    "NoRole",
    "ResetRole",
    "ApplyRole",
    "NRoles",
    "RoleMask",
    "AlternateRole",
    "Stretch",
    "Reverse",
    "EOL",
    "ButtonLayout",
    "UnknownLayout",
    "WinLayout",
    "MacLayout",
    "KdeLayout",
    "GnomeLayout",
    "AndroidLayout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS_t {
    uint offsetsAndSizes[106];
    char stringdata0[22];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[9];
    char stringdata7[3];
    char stringdata8[5];
    char stringdata9[8];
    char stringdata10[5];
    char stringdata11[4];
    char stringdata12[9];
    char stringdata13[3];
    char stringdata14[8];
    char stringdata15[6];
    char stringdata16[6];
    char stringdata17[7];
    char stringdata18[6];
    char stringdata19[7];
    char stringdata20[8];
    char stringdata21[5];
    char stringdata22[6];
    char stringdata23[6];
    char stringdata24[16];
    char stringdata25[12];
    char stringdata26[11];
    char stringdata27[10];
    char stringdata28[11];
    char stringdata29[11];
    char stringdata30[12];
    char stringdata31[11];
    char stringdata32[11];
    char stringdata33[16];
    char stringdata34[11];
    char stringdata35[9];
    char stringdata36[8];
    char stringdata37[7];
    char stringdata38[10];
    char stringdata39[10];
    char stringdata40[7];
    char stringdata41[9];
    char stringdata42[14];
    char stringdata43[8];
    char stringdata44[8];
    char stringdata45[4];
    char stringdata46[13];
    char stringdata47[14];
    char stringdata48[10];
    char stringdata49[10];
    char stringdata50[10];
    char stringdata51[12];
    char stringdata52[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS_t qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QPlatformDialogHelper"
        QT_MOC_LITERAL(22, 6),  // "accept"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 6),  // "reject"
        QT_MOC_LITERAL(37, 15),  // "StandardButtons"
        QT_MOC_LITERAL(53, 14),  // "StandardButton"
        QT_MOC_LITERAL(68, 8),  // "NoButton"
        QT_MOC_LITERAL(77, 2),  // "Ok"
        QT_MOC_LITERAL(80, 4),  // "Save"
        QT_MOC_LITERAL(85, 7),  // "SaveAll"
        QT_MOC_LITERAL(93, 4),  // "Open"
        QT_MOC_LITERAL(98, 3),  // "Yes"
        QT_MOC_LITERAL(102, 8),  // "YesToAll"
        QT_MOC_LITERAL(111, 2),  // "No"
        QT_MOC_LITERAL(114, 7),  // "NoToAll"
        QT_MOC_LITERAL(122, 5),  // "Abort"
        QT_MOC_LITERAL(128, 5),  // "Retry"
        QT_MOC_LITERAL(134, 6),  // "Ignore"
        QT_MOC_LITERAL(141, 5),  // "Close"
        QT_MOC_LITERAL(147, 6),  // "Cancel"
        QT_MOC_LITERAL(154, 7),  // "Discard"
        QT_MOC_LITERAL(162, 4),  // "Help"
        QT_MOC_LITERAL(167, 5),  // "Apply"
        QT_MOC_LITERAL(173, 5),  // "Reset"
        QT_MOC_LITERAL(179, 15),  // "RestoreDefaults"
        QT_MOC_LITERAL(195, 11),  // "FirstButton"
        QT_MOC_LITERAL(207, 10),  // "LastButton"
        QT_MOC_LITERAL(218, 9),  // "LowestBit"
        QT_MOC_LITERAL(228, 10),  // "HighestBit"
        QT_MOC_LITERAL(239, 10),  // "ButtonRole"
        QT_MOC_LITERAL(250, 11),  // "InvalidRole"
        QT_MOC_LITERAL(262, 10),  // "AcceptRole"
        QT_MOC_LITERAL(273, 10),  // "RejectRole"
        QT_MOC_LITERAL(284, 15),  // "DestructiveRole"
        QT_MOC_LITERAL(300, 10),  // "ActionRole"
        QT_MOC_LITERAL(311, 8),  // "HelpRole"
        QT_MOC_LITERAL(320, 7),  // "YesRole"
        QT_MOC_LITERAL(328, 6),  // "NoRole"
        QT_MOC_LITERAL(335, 9),  // "ResetRole"
        QT_MOC_LITERAL(345, 9),  // "ApplyRole"
        QT_MOC_LITERAL(355, 6),  // "NRoles"
        QT_MOC_LITERAL(362, 8),  // "RoleMask"
        QT_MOC_LITERAL(371, 13),  // "AlternateRole"
        QT_MOC_LITERAL(385, 7),  // "Stretch"
        QT_MOC_LITERAL(393, 7),  // "Reverse"
        QT_MOC_LITERAL(401, 3),  // "EOL"
        QT_MOC_LITERAL(405, 12),  // "ButtonLayout"
        QT_MOC_LITERAL(418, 13),  // "UnknownLayout"
        QT_MOC_LITERAL(432, 9),  // "WinLayout"
        QT_MOC_LITERAL(442, 9),  // "MacLayout"
        QT_MOC_LITERAL(452, 9),  // "KdeLayout"
        QT_MOC_LITERAL(462, 11),  // "GnomeLayout"
        QT_MOC_LITERAL(474, 13)   // "AndroidLayout"
    },
    "QPlatformDialogHelper",
    "accept",
    "",
    "reject",
    "StandardButtons",
    "StandardButton",
    "NoButton",
    "Ok",
    "Save",
    "SaveAll",
    "Open",
    "Yes",
    "YesToAll",
    "No",
    "NoToAll",
    "Abort",
    "Retry",
    "Ignore",
    "Close",
    "Cancel",
    "Discard",
    "Help",
    "Apply",
    "Reset",
    "RestoreDefaults",
    "FirstButton",
    "LastButton",
    "LowestBit",
    "HighestBit",
    "ButtonRole",
    "InvalidRole",
    "AcceptRole",
    "RejectRole",
    "DestructiveRole",
    "ActionRole",
    "HelpRole",
    "YesRole",
    "NoRole",
    "ResetRole",
    "ApplyRole",
    "NRoles",
    "RoleMask",
    "AlternateRole",
    "Stretch",
    "Reverse",
    "EOL",
    "ButtonLayout",
    "UnknownLayout",
    "WinLayout",
    "MacLayout",
    "KdeLayout",
    "GnomeLayout",
    "AndroidLayout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformDialogHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       3,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    4 /* Public */,
       3,    0,   27,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       4,    5, 0x1,   23,   43,
      29,   29, 0x0,   16,   89,
      46,   46, 0x0,    6,  121,

 // enum data: key, value
       6, uint(QPlatformDialogHelper::NoButton),
       7, uint(QPlatformDialogHelper::Ok),
       8, uint(QPlatformDialogHelper::Save),
       9, uint(QPlatformDialogHelper::SaveAll),
      10, uint(QPlatformDialogHelper::Open),
      11, uint(QPlatformDialogHelper::Yes),
      12, uint(QPlatformDialogHelper::YesToAll),
      13, uint(QPlatformDialogHelper::No),
      14, uint(QPlatformDialogHelper::NoToAll),
      15, uint(QPlatformDialogHelper::Abort),
      16, uint(QPlatformDialogHelper::Retry),
      17, uint(QPlatformDialogHelper::Ignore),
      18, uint(QPlatformDialogHelper::Close),
      19, uint(QPlatformDialogHelper::Cancel),
      20, uint(QPlatformDialogHelper::Discard),
      21, uint(QPlatformDialogHelper::Help),
      22, uint(QPlatformDialogHelper::Apply),
      23, uint(QPlatformDialogHelper::Reset),
      24, uint(QPlatformDialogHelper::RestoreDefaults),
      25, uint(QPlatformDialogHelper::FirstButton),
      26, uint(QPlatformDialogHelper::LastButton),
      27, uint(QPlatformDialogHelper::LowestBit),
      28, uint(QPlatformDialogHelper::HighestBit),
      30, uint(QPlatformDialogHelper::InvalidRole),
      31, uint(QPlatformDialogHelper::AcceptRole),
      32, uint(QPlatformDialogHelper::RejectRole),
      33, uint(QPlatformDialogHelper::DestructiveRole),
      34, uint(QPlatformDialogHelper::ActionRole),
      35, uint(QPlatformDialogHelper::HelpRole),
      36, uint(QPlatformDialogHelper::YesRole),
      37, uint(QPlatformDialogHelper::NoRole),
      38, uint(QPlatformDialogHelper::ResetRole),
      39, uint(QPlatformDialogHelper::ApplyRole),
      40, uint(QPlatformDialogHelper::NRoles),
      41, uint(QPlatformDialogHelper::RoleMask),
      42, uint(QPlatformDialogHelper::AlternateRole),
      43, uint(QPlatformDialogHelper::Stretch),
      44, uint(QPlatformDialogHelper::Reverse),
      45, uint(QPlatformDialogHelper::EOL),
      47, uint(QPlatformDialogHelper::UnknownLayout),
      48, uint(QPlatformDialogHelper::WinLayout),
      49, uint(QPlatformDialogHelper::MacLayout),
      50, uint(QPlatformDialogHelper::KdeLayout),
      51, uint(QPlatformDialogHelper::GnomeLayout),
      52, uint(QPlatformDialogHelper::AndroidLayout),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformDialogHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS_t,
        // enum 'StandardButtons'
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::StandardButtons, std::true_type>,
        // enum 'ButtonRole'
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::ButtonRole, std::true_type>,
        // enum 'ButtonLayout'
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::ButtonLayout, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper, std::true_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPlatformDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformDialogHelper::*)();
            if (_t _q_method = &QPlatformDialogHelper::accept; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformDialogHelper::*)();
            if (_t _q_method = &QPlatformDialogHelper::reject; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QPlatformDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformDialogHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformDialogHelper::accept()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPlatformDialogHelper::reject()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS = QtMocHelpers::stringData(
    "QColorDialogOptions",
    "ColorDialogOptions",
    "ColorDialogOption",
    "ShowAlphaChannel",
    "NoButtons",
    "DontUseNativeDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[19];
    char stringdata2[18];
    char stringdata3[17];
    char stringdata4[10];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS_t qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QColorDialogOptions"
        QT_MOC_LITERAL(20, 18),  // "ColorDialogOptions"
        QT_MOC_LITERAL(39, 17),  // "ColorDialogOption"
        QT_MOC_LITERAL(57, 16),  // "ShowAlphaChannel"
        QT_MOC_LITERAL(74, 9),  // "NoButtons"
        QT_MOC_LITERAL(84, 19)   // "DontUseNativeDialog"
    },
    "QColorDialogOptions",
    "ColorDialogOptions",
    "ColorDialogOption",
    "ShowAlphaChannel",
    "NoButtons",
    "DontUseNativeDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQColorDialogOptionsENDCLASS[] = {

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
       3, uint(QColorDialogOptions::ShowAlphaChannel),
       4, uint(QColorDialogOptions::NoButtons),
       5, uint(QColorDialogOptions::DontUseNativeDialog),

       0        // eod
};

Q_CONSTINIT const QMetaObject QColorDialogOptions::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQColorDialogOptionsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQColorDialogOptionsENDCLASS_t,
        // enum 'ColorDialogOptions'
        QtPrivate::TypeAndForceComplete<QColorDialogOptions::ColorDialogOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QColorDialogOptions, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS = QtMocHelpers::stringData(
    "QPlatformColorDialogHelper",
    "currentColorChanged",
    "",
    "color",
    "colorSelected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS_t qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QPlatformColorDialogHelper"
        QT_MOC_LITERAL(27, 19),  // "currentColorChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 5),  // "color"
        QT_MOC_LITERAL(54, 13)   // "colorSelected"
    },
    "QPlatformColorDialogHelper",
    "currentColorChanged",
    "",
    "color",
    "colorSelected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformColorDialogHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformColorDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformDialogHelper::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformColorDialogHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformColorDialogHelper, std::true_type>,
        // method 'currentColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'colorSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void QPlatformColorDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformColorDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformColorDialogHelper::*)(const QColor & );
            if (_t _q_method = &QPlatformColorDialogHelper::currentColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformColorDialogHelper::*)(const QColor & );
            if (_t _q_method = &QPlatformColorDialogHelper::colorSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformColorDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformColorDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformColorDialogHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformColorDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformColorDialogHelper::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformColorDialogHelper::colorSelected(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS = QtMocHelpers::stringData(
    "QFontDialogOptions",
    "FontDialogOptions",
    "FontDialogOption",
    "NoButtons",
    "DontUseNativeDialog",
    "ScalableFonts",
    "NonScalableFonts",
    "MonospacedFonts",
    "ProportionalFonts"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[17];
    char stringdata3[10];
    char stringdata4[20];
    char stringdata5[14];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS_t qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QFontDialogOptions"
        QT_MOC_LITERAL(19, 17),  // "FontDialogOptions"
        QT_MOC_LITERAL(37, 16),  // "FontDialogOption"
        QT_MOC_LITERAL(54, 9),  // "NoButtons"
        QT_MOC_LITERAL(64, 19),  // "DontUseNativeDialog"
        QT_MOC_LITERAL(84, 13),  // "ScalableFonts"
        QT_MOC_LITERAL(98, 16),  // "NonScalableFonts"
        QT_MOC_LITERAL(115, 15),  // "MonospacedFonts"
        QT_MOC_LITERAL(131, 17)   // "ProportionalFonts"
    },
    "QFontDialogOptions",
    "FontDialogOptions",
    "FontDialogOption",
    "NoButtons",
    "DontUseNativeDialog",
    "ScalableFonts",
    "NonScalableFonts",
    "MonospacedFonts",
    "ProportionalFonts"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFontDialogOptionsENDCLASS[] = {

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
       1,    2, 0x1,    6,   19,

 // enum data: key, value
       3, uint(QFontDialogOptions::NoButtons),
       4, uint(QFontDialogOptions::DontUseNativeDialog),
       5, uint(QFontDialogOptions::ScalableFonts),
       6, uint(QFontDialogOptions::NonScalableFonts),
       7, uint(QFontDialogOptions::MonospacedFonts),
       8, uint(QFontDialogOptions::ProportionalFonts),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFontDialogOptions::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFontDialogOptionsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFontDialogOptionsENDCLASS_t,
        // enum 'FontDialogOptions'
        QtPrivate::TypeAndForceComplete<QFontDialogOptions::FontDialogOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFontDialogOptions, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS = QtMocHelpers::stringData(
    "QPlatformFontDialogHelper",
    "currentFontChanged",
    "",
    "font",
    "fontSelected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[26];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS_t qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "QPlatformFontDialogHelper"
        QT_MOC_LITERAL(26, 18),  // "currentFontChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 4),  // "font"
        QT_MOC_LITERAL(51, 12)   // "fontSelected"
    },
    "QPlatformFontDialogHelper",
    "currentFontChanged",
    "",
    "font",
    "fontSelected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformFontDialogHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QFont,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformFontDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformDialogHelper::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformFontDialogHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformFontDialogHelper, std::true_type>,
        // method 'currentFontChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'fontSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>
    >,
    nullptr
} };

void QPlatformFontDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformFontDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 1: _t->fontSelected((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformFontDialogHelper::*)(const QFont & );
            if (_t _q_method = &QPlatformFontDialogHelper::currentFontChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformFontDialogHelper::*)(const QFont & );
            if (_t _q_method = &QPlatformFontDialogHelper::fontSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformFontDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformFontDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformFontDialogHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformFontDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformFontDialogHelper::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformFontDialogHelper::fontSelected(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS = QtMocHelpers::stringData(
    "QFileDialogOptions",
    "ViewMode",
    "Detail",
    "List",
    "FileMode",
    "AnyFile",
    "ExistingFile",
    "Directory",
    "ExistingFiles",
    "DirectoryOnly",
    "AcceptMode",
    "AcceptOpen",
    "AcceptSave",
    "DialogLabel",
    "LookIn",
    "FileName",
    "FileType",
    "Accept",
    "Reject",
    "DialogLabelCount",
    "FileDialogOptions",
    "FileDialogOption",
    "ShowDirsOnly",
    "DontResolveSymlinks",
    "DontConfirmOverwrite",
    "DontUseNativeDialog",
    "ReadOnly",
    "HideNameFilterDetails",
    "DontUseCustomDirectoryIcons"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[19];
    char stringdata1[9];
    char stringdata2[7];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[13];
    char stringdata7[10];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[12];
    char stringdata14[7];
    char stringdata15[9];
    char stringdata16[9];
    char stringdata17[7];
    char stringdata18[7];
    char stringdata19[17];
    char stringdata20[18];
    char stringdata21[17];
    char stringdata22[13];
    char stringdata23[20];
    char stringdata24[21];
    char stringdata25[20];
    char stringdata26[9];
    char stringdata27[22];
    char stringdata28[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS_t qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QFileDialogOptions"
        QT_MOC_LITERAL(19, 8),  // "ViewMode"
        QT_MOC_LITERAL(28, 6),  // "Detail"
        QT_MOC_LITERAL(35, 4),  // "List"
        QT_MOC_LITERAL(40, 8),  // "FileMode"
        QT_MOC_LITERAL(49, 7),  // "AnyFile"
        QT_MOC_LITERAL(57, 12),  // "ExistingFile"
        QT_MOC_LITERAL(70, 9),  // "Directory"
        QT_MOC_LITERAL(80, 13),  // "ExistingFiles"
        QT_MOC_LITERAL(94, 13),  // "DirectoryOnly"
        QT_MOC_LITERAL(108, 10),  // "AcceptMode"
        QT_MOC_LITERAL(119, 10),  // "AcceptOpen"
        QT_MOC_LITERAL(130, 10),  // "AcceptSave"
        QT_MOC_LITERAL(141, 11),  // "DialogLabel"
        QT_MOC_LITERAL(153, 6),  // "LookIn"
        QT_MOC_LITERAL(160, 8),  // "FileName"
        QT_MOC_LITERAL(169, 8),  // "FileType"
        QT_MOC_LITERAL(178, 6),  // "Accept"
        QT_MOC_LITERAL(185, 6),  // "Reject"
        QT_MOC_LITERAL(192, 16),  // "DialogLabelCount"
        QT_MOC_LITERAL(209, 17),  // "FileDialogOptions"
        QT_MOC_LITERAL(227, 16),  // "FileDialogOption"
        QT_MOC_LITERAL(244, 12),  // "ShowDirsOnly"
        QT_MOC_LITERAL(257, 19),  // "DontResolveSymlinks"
        QT_MOC_LITERAL(277, 20),  // "DontConfirmOverwrite"
        QT_MOC_LITERAL(298, 19),  // "DontUseNativeDialog"
        QT_MOC_LITERAL(318, 8),  // "ReadOnly"
        QT_MOC_LITERAL(327, 21),  // "HideNameFilterDetails"
        QT_MOC_LITERAL(349, 27)   // "DontUseCustomDirectoryIcons"
    },
    "QFileDialogOptions",
    "ViewMode",
    "Detail",
    "List",
    "FileMode",
    "AnyFile",
    "ExistingFile",
    "Directory",
    "ExistingFiles",
    "DirectoryOnly",
    "AcceptMode",
    "AcceptOpen",
    "AcceptSave",
    "DialogLabel",
    "LookIn",
    "FileName",
    "FileType",
    "Accept",
    "Reject",
    "DialogLabelCount",
    "FileDialogOptions",
    "FileDialogOption",
    "ShowDirsOnly",
    "DontResolveSymlinks",
    "DontConfirmOverwrite",
    "DontUseNativeDialog",
    "ReadOnly",
    "HideNameFilterDetails",
    "DontUseCustomDirectoryIcons"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFileDialogOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   39,
       4,    4, 0x0,    5,   43,
      10,   10, 0x0,    2,   53,
      13,   13, 0x0,    6,   57,
      20,   21, 0x1,    7,   69,

 // enum data: key, value
       2, uint(QFileDialogOptions::Detail),
       3, uint(QFileDialogOptions::List),
       5, uint(QFileDialogOptions::AnyFile),
       6, uint(QFileDialogOptions::ExistingFile),
       7, uint(QFileDialogOptions::Directory),
       8, uint(QFileDialogOptions::ExistingFiles),
       9, uint(QFileDialogOptions::DirectoryOnly),
      11, uint(QFileDialogOptions::AcceptOpen),
      12, uint(QFileDialogOptions::AcceptSave),
      14, uint(QFileDialogOptions::LookIn),
      15, uint(QFileDialogOptions::FileName),
      16, uint(QFileDialogOptions::FileType),
      17, uint(QFileDialogOptions::Accept),
      18, uint(QFileDialogOptions::Reject),
      19, uint(QFileDialogOptions::DialogLabelCount),
      22, uint(QFileDialogOptions::ShowDirsOnly),
      23, uint(QFileDialogOptions::DontResolveSymlinks),
      24, uint(QFileDialogOptions::DontConfirmOverwrite),
      25, uint(QFileDialogOptions::DontUseNativeDialog),
      26, uint(QFileDialogOptions::ReadOnly),
      27, uint(QFileDialogOptions::HideNameFilterDetails),
      28, uint(QFileDialogOptions::DontUseCustomDirectoryIcons),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFileDialogOptions::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFileDialogOptionsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFileDialogOptionsENDCLASS_t,
        // enum 'ViewMode'
        QtPrivate::TypeAndForceComplete<QFileDialogOptions::ViewMode, std::true_type>,
        // enum 'FileMode'
        QtPrivate::TypeAndForceComplete<QFileDialogOptions::FileMode, std::true_type>,
        // enum 'AcceptMode'
        QtPrivate::TypeAndForceComplete<QFileDialogOptions::AcceptMode, std::true_type>,
        // enum 'DialogLabel'
        QtPrivate::TypeAndForceComplete<QFileDialogOptions::DialogLabel, std::true_type>,
        // enum 'FileDialogOptions'
        QtPrivate::TypeAndForceComplete<QFileDialogOptions::FileDialogOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFileDialogOptions, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS = QtMocHelpers::stringData(
    "QPlatformFileDialogHelper",
    "fileSelected",
    "",
    "file",
    "filesSelected",
    "QList<QUrl>",
    "files",
    "currentChanged",
    "path",
    "directoryEntered",
    "directory",
    "filterSelected",
    "filter"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[26];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[5];
    char stringdata9[17];
    char stringdata10[10];
    char stringdata11[15];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS_t qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "QPlatformFileDialogHelper"
        QT_MOC_LITERAL(26, 12),  // "fileSelected"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 4),  // "file"
        QT_MOC_LITERAL(45, 13),  // "filesSelected"
        QT_MOC_LITERAL(59, 11),  // "QList<QUrl>"
        QT_MOC_LITERAL(71, 5),  // "files"
        QT_MOC_LITERAL(77, 14),  // "currentChanged"
        QT_MOC_LITERAL(92, 4),  // "path"
        QT_MOC_LITERAL(97, 16),  // "directoryEntered"
        QT_MOC_LITERAL(114, 9),  // "directory"
        QT_MOC_LITERAL(124, 14),  // "filterSelected"
        QT_MOC_LITERAL(139, 6)   // "filter"
    },
    "QPlatformFileDialogHelper",
    "fileSelected",
    "",
    "file",
    "filesSelected",
    "QList<QUrl>",
    "files",
    "currentChanged",
    "path",
    "directoryEntered",
    "directory",
    "filterSelected",
    "filter"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformFileDialogHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       7,    1,   50,    2, 0x06,    5 /* Public */,
       9,    1,   53,    2, 0x06,    7 /* Public */,
      11,    1,   56,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformFileDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformDialogHelper::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformFileDialogHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformFileDialogHelper, std::true_type>,
        // method 'fileSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'filesSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'directoryEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'filterSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QPlatformFileDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformFileDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 3: _t->directoryEntered((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 4: _t->filterSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformFileDialogHelper::*)(const QUrl & );
            if (_t _q_method = &QPlatformFileDialogHelper::fileSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformFileDialogHelper::*)(const QList<QUrl> & );
            if (_t _q_method = &QPlatformFileDialogHelper::filesSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPlatformFileDialogHelper::*)(const QUrl & );
            if (_t _q_method = &QPlatformFileDialogHelper::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPlatformFileDialogHelper::*)(const QUrl & );
            if (_t _q_method = &QPlatformFileDialogHelper::directoryEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QPlatformFileDialogHelper::*)(const QString & );
            if (_t _q_method = &QPlatformFileDialogHelper::filterSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformFileDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformFileDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformFileDialogHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformFileDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QPlatformFileDialogHelper::fileSelected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformFileDialogHelper::filesSelected(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformFileDialogHelper::currentChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlatformFileDialogHelper::directoryEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlatformFileDialogHelper::filterSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS = QtMocHelpers::stringData(
    "QMessageDialogOptions",
    "Options",
    "Option",
    "DontUseNativeDialog",
    "StandardIcon",
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[22];
    char stringdata1[8];
    char stringdata2[7];
    char stringdata3[20];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[12];
    char stringdata7[8];
    char stringdata8[9];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS_t qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QMessageDialogOptions"
        QT_MOC_LITERAL(22, 7),  // "Options"
        QT_MOC_LITERAL(30, 6),  // "Option"
        QT_MOC_LITERAL(37, 19),  // "DontUseNativeDialog"
        QT_MOC_LITERAL(57, 12),  // "StandardIcon"
        QT_MOC_LITERAL(70, 6),  // "NoIcon"
        QT_MOC_LITERAL(77, 11),  // "Information"
        QT_MOC_LITERAL(89, 7),  // "Warning"
        QT_MOC_LITERAL(97, 8),  // "Critical"
        QT_MOC_LITERAL(106, 8)   // "Question"
    },
    "QMessageDialogOptions",
    "Options",
    "Option",
    "DontUseNativeDialog",
    "StandardIcon",
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMessageDialogOptionsENDCLASS[] = {

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
       1,    2, 0x3,    1,   24,
       4,    4, 0x0,    5,   26,

 // enum data: key, value
       3, uint(QMessageDialogOptions::Option::DontUseNativeDialog),
       5, uint(QMessageDialogOptions::NoIcon),
       6, uint(QMessageDialogOptions::Information),
       7, uint(QMessageDialogOptions::Warning),
       8, uint(QMessageDialogOptions::Critical),
       9, uint(QMessageDialogOptions::Question),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMessageDialogOptions::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMessageDialogOptionsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMessageDialogOptionsENDCLASS_t,
        // enum 'Options'
        QtPrivate::TypeAndForceComplete<QMessageDialogOptions::Options, std::true_type>,
        // enum 'StandardIcon'
        QtPrivate::TypeAndForceComplete<QMessageDialogOptions::StandardIcon, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMessageDialogOptions, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS = QtMocHelpers::stringData(
    "QPlatformMessageDialogHelper",
    "clicked",
    "",
    "QPlatformDialogHelper::StandardButton",
    "button",
    "QPlatformDialogHelper::ButtonRole",
    "role",
    "checkBoxStateChanged",
    "Qt::CheckState",
    "state"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[29];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[38];
    char stringdata4[7];
    char stringdata5[34];
    char stringdata6[5];
    char stringdata7[21];
    char stringdata8[15];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS_t qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "QPlatformMessageDialogHelper"
        QT_MOC_LITERAL(29, 7),  // "clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 37),  // "QPlatformDialogHelper::Standa..."
        QT_MOC_LITERAL(76, 6),  // "button"
        QT_MOC_LITERAL(83, 33),  // "QPlatformDialogHelper::Button..."
        QT_MOC_LITERAL(117, 4),  // "role"
        QT_MOC_LITERAL(122, 20),  // "checkBoxStateChanged"
        QT_MOC_LITERAL(143, 14),  // "Qt::CheckState"
        QT_MOC_LITERAL(158, 5)   // "state"
    },
    "QPlatformMessageDialogHelper",
    "clicked",
    "",
    "QPlatformDialogHelper::StandardButton",
    "button",
    "QPlatformDialogHelper::ButtonRole",
    "role",
    "checkBoxStateChanged",
    "Qt::CheckState",
    "state"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformMessageDialogHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,
       7,    1,   31,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformMessageDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformDialogHelper::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformMessageDialogHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformMessageDialogHelper, std::true_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::StandardButton, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::ButtonRole, std::false_type>,
        // method 'checkBoxStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CheckState, std::false_type>
    >,
    nullptr
} };

void QPlatformMessageDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformMessageDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< std::add_pointer_t<QPlatformDialogHelper::StandardButton>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlatformDialogHelper::ButtonRole>>(_a[2]))); break;
        case 1: _t->checkBoxStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlatformDialogHelper::ButtonRole >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlatformDialogHelper::StandardButton >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformMessageDialogHelper::*)(QPlatformDialogHelper::StandardButton , QPlatformDialogHelper::ButtonRole );
            if (_t _q_method = &QPlatformMessageDialogHelper::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformMessageDialogHelper::*)(Qt::CheckState );
            if (_t _q_method = &QPlatformMessageDialogHelper::checkBoxStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformMessageDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMessageDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformMessageDialogHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformMessageDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformMessageDialogHelper::clicked(QPlatformDialogHelper::StandardButton _t1, QPlatformDialogHelper::ButtonRole _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformMessageDialogHelper::checkBoxStateChanged(Qt::CheckState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
