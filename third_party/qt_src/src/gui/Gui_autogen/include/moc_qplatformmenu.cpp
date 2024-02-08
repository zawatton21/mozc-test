/****************************************************************************
** Meta object code from reading C++ file 'qplatformmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformmenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformmenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS = QtMocHelpers::stringData(
    "QPlatformMenuItem",
    "activated",
    "",
    "hovered",
    "MenuRole",
    "NoRole",
    "TextHeuristicRole",
    "ApplicationSpecificRole",
    "AboutQtRole",
    "AboutRole",
    "PreferencesRole",
    "QuitRole",
    "CutRole",
    "CopyRole",
    "PasteRole",
    "SelectAllRole",
    "RoleCount"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[18];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[7];
    char stringdata6[18];
    char stringdata7[24];
    char stringdata8[12];
    char stringdata9[10];
    char stringdata10[16];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[9];
    char stringdata14[10];
    char stringdata15[14];
    char stringdata16[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS_t qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QPlatformMenuItem"
        QT_MOC_LITERAL(18, 9),  // "activated"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 7),  // "hovered"
        QT_MOC_LITERAL(37, 8),  // "MenuRole"
        QT_MOC_LITERAL(46, 6),  // "NoRole"
        QT_MOC_LITERAL(53, 17),  // "TextHeuristicRole"
        QT_MOC_LITERAL(71, 23),  // "ApplicationSpecificRole"
        QT_MOC_LITERAL(95, 11),  // "AboutQtRole"
        QT_MOC_LITERAL(107, 9),  // "AboutRole"
        QT_MOC_LITERAL(117, 15),  // "PreferencesRole"
        QT_MOC_LITERAL(133, 8),  // "QuitRole"
        QT_MOC_LITERAL(142, 7),  // "CutRole"
        QT_MOC_LITERAL(150, 8),  // "CopyRole"
        QT_MOC_LITERAL(159, 9),  // "PasteRole"
        QT_MOC_LITERAL(169, 13),  // "SelectAllRole"
        QT_MOC_LITERAL(183, 9)   // "RoleCount"
    },
    "QPlatformMenuItem",
    "activated",
    "",
    "hovered",
    "MenuRole",
    "NoRole",
    "TextHeuristicRole",
    "ApplicationSpecificRole",
    "AboutQtRole",
    "AboutRole",
    "PreferencesRole",
    "QuitRole",
    "CutRole",
    "CopyRole",
    "PasteRole",
    "SelectAllRole",
    "RoleCount"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformMenuItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,
       3,    0,   27,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,   12,   33,

 // enum data: key, value
       5, uint(QPlatformMenuItem::NoRole),
       6, uint(QPlatformMenuItem::TextHeuristicRole),
       7, uint(QPlatformMenuItem::ApplicationSpecificRole),
       8, uint(QPlatformMenuItem::AboutQtRole),
       9, uint(QPlatformMenuItem::AboutRole),
      10, uint(QPlatformMenuItem::PreferencesRole),
      11, uint(QPlatformMenuItem::QuitRole),
      12, uint(QPlatformMenuItem::CutRole),
      13, uint(QPlatformMenuItem::CopyRole),
      14, uint(QPlatformMenuItem::PasteRole),
      15, uint(QPlatformMenuItem::SelectAllRole),
      16, uint(QPlatformMenuItem::RoleCount),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformMenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformMenuItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS_t,
        // enum 'MenuRole'
        QtPrivate::TypeAndForceComplete<QPlatformMenuItem::MenuRole, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformMenuItem, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPlatformMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformMenuItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->hovered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformMenuItem::*)();
            if (_t _q_method = &QPlatformMenuItem::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformMenuItem::*)();
            if (_t _q_method = &QPlatformMenuItem::hovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QPlatformMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformMenuItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QPlatformMenuItem::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPlatformMenuItem::hovered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformMenuENDCLASS = QtMocHelpers::stringData(
    "QPlatformMenu",
    "aboutToShow",
    "",
    "aboutToHide",
    "MenuType",
    "DefaultMenu",
    "EditMenu"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformMenuENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[12];
    char stringdata6[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformMenuENDCLASS_t qt_meta_stringdata_CLASSQPlatformMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QPlatformMenu"
        QT_MOC_LITERAL(14, 11),  // "aboutToShow"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "aboutToHide"
        QT_MOC_LITERAL(39, 8),  // "MenuType"
        QT_MOC_LITERAL(48, 11),  // "DefaultMenu"
        QT_MOC_LITERAL(60, 8)   // "EditMenu"
    },
    "QPlatformMenu",
    "aboutToShow",
    "",
    "aboutToHide",
    "MenuType",
    "DefaultMenu",
    "EditMenu"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,
       3,    0,   27,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    2,   33,

 // enum data: key, value
       5, uint(QPlatformMenu::DefaultMenu),
       6, uint(QPlatformMenu::EditMenu),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformMenuENDCLASS_t,
        // enum 'MenuType'
        QtPrivate::TypeAndForceComplete<QPlatformMenu::MenuType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformMenu, std::true_type>,
        // method 'aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPlatformMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformMenu::*)();
            if (_t _q_method = &QPlatformMenu::aboutToShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformMenu::*)();
            if (_t _q_method = &QPlatformMenu::aboutToHide; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QPlatformMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QPlatformMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPlatformMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS = QtMocHelpers::stringData(
    "QPlatformMenuBar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS_t qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16)   // "QPlatformMenuBar"
    },
    "QPlatformMenuBar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformMenuBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformMenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformMenuBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformMenuBar, std::true_type>
    >,
    nullptr
} };

void QPlatformMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QPlatformMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformMenuBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
