/****************************************************************************
** Meta object code from reading C++ file 'qmenubar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmenubar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenubar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMenuBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMenuBarENDCLASS = QtMocHelpers::stringData(
    "QMenuBar",
    "triggered",
    "",
    "QAction*",
    "action",
    "hovered",
    "setVisible",
    "visible",
    "_q_actionTriggered",
    "_q_actionHovered",
    "_q_internalShortcutActivated",
    "_q_updateLayout",
    "defaultUp",
    "nativeMenuBar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMenuBarENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[9];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[7];
    char stringdata5[8];
    char stringdata6[11];
    char stringdata7[8];
    char stringdata8[19];
    char stringdata9[17];
    char stringdata10[29];
    char stringdata11[16];
    char stringdata12[10];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMenuBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMenuBarENDCLASS_t qt_meta_stringdata_CLASSQMenuBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "QMenuBar"
        QT_MOC_LITERAL(9, 9),  // "triggered"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 8),  // "QAction*"
        QT_MOC_LITERAL(29, 6),  // "action"
        QT_MOC_LITERAL(36, 7),  // "hovered"
        QT_MOC_LITERAL(44, 10),  // "setVisible"
        QT_MOC_LITERAL(55, 7),  // "visible"
        QT_MOC_LITERAL(63, 18),  // "_q_actionTriggered"
        QT_MOC_LITERAL(82, 16),  // "_q_actionHovered"
        QT_MOC_LITERAL(99, 28),  // "_q_internalShortcutActivated"
        QT_MOC_LITERAL(128, 15),  // "_q_updateLayout"
        QT_MOC_LITERAL(144, 9),  // "defaultUp"
        QT_MOC_LITERAL(154, 13)   // "nativeMenuBar"
    },
    "QMenuBar",
    "triggered",
    "",
    "QAction*",
    "action",
    "hovered",
    "setVisible",
    "visible",
    "_q_actionTriggered",
    "_q_actionHovered",
    "_q_internalShortcutActivated",
    "_q_updateLayout",
    "defaultUp",
    "nativeMenuBar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMenuBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   71, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    3 /* Public */,
       5,    1,   59,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   62,    2, 0x0a,    7 /* Public */,
       8,    0,   65,    2, 0x08,    9 /* Private */,
       9,    0,   66,    2, 0x08,   10 /* Private */,
      10,    1,   67,    2, 0x08,   11 /* Private */,
      11,    0,   70,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMenuBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMenuBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMenuBarENDCLASS_t,
        // property 'defaultUp'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'nativeMenuBar'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMenuBar, std::true_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'hovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_actionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_actionHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_internalShortcutActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_updateLayout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMenuBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 2: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->d_func()->_q_actionTriggered(); break;
        case 4: _t->d_func()->_q_actionHovered(); break;
        case 5: _t->d_func()->_q_internalShortcutActivated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->d_func()->_q_updateLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMenuBar::*)(QAction * );
            if (_t _q_method = &QMenuBar::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMenuBar::*)(QAction * );
            if (_t _q_method = &QMenuBar::hovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMenuBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDefaultUp(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isNativeMenuBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMenuBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultUp(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setNativeMenuBar(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMenuBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QMenuBar::triggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMenuBar::hovered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
