/****************************************************************************
** Meta object code from reading C++ file 'qtimer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qtimer.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtimer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTimerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTimerENDCLASS = QtMocHelpers::stringData(
    "QTimer",
    "timeout",
    "",
    "start",
    "msec",
    "stop",
    "singleShot",
    "interval",
    "remainingTime",
    "timerType",
    "Qt::TimerType",
    "active"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTimerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[14];
    char stringdata9[10];
    char stringdata10[14];
    char stringdata11[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTimerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTimerENDCLASS_t qt_meta_stringdata_CLASSQTimerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QTimer"
        QT_MOC_LITERAL(7, 7),  // "timeout"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 5),  // "start"
        QT_MOC_LITERAL(22, 4),  // "msec"
        QT_MOC_LITERAL(27, 4),  // "stop"
        QT_MOC_LITERAL(32, 10),  // "singleShot"
        QT_MOC_LITERAL(43, 8),  // "interval"
        QT_MOC_LITERAL(52, 13),  // "remainingTime"
        QT_MOC_LITERAL(66, 9),  // "timerType"
        QT_MOC_LITERAL(76, 13),  // "Qt::TimerType"
        QT_MOC_LITERAL(90, 6)   // "active"
    },
    "QTimer",
    "timeout",
    "",
    "start",
    "msec",
    "stop",
    "singleShot",
    "interval",
    "remainingTime",
    "timerType",
    "Qt::TimerType",
    "active"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTimerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   39,    2, 0x0a,    7 /* Public */,
       3,    0,   42,    2, 0x0a,    9 /* Public */,
       5,    0,   43,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x02015103, uint(-1), 0,
       7, QMetaType::Int, 0x02015103, uint(-1), 0,
       8, QMetaType::Int, 0x00015001, uint(-1), 0,
       9, 0x80000000 | 10, 0x0201510b, uint(-1), 0,
      11, QMetaType::Bool, 0x02005001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTimerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTimerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTimerENDCLASS_t,
        // property 'singleShot'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'interval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'remainingTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timerType'
        QtPrivate::TypeAndForceComplete<Qt::TimerType, std::true_type>,
        // property 'active'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTimer, std::true_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTimer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeout(QPrivateSignal()); break;
        case 1: _t->start((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTimer::*)(QPrivateSignal);
            if (_t _q_method = &QTimer::timeout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTimer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSingleShot(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->interval(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->remainingTime(); break;
        case 3: *reinterpret_cast< Qt::TimerType*>(_v) = _t->timerType(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTimer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSingleShot(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setInterval(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTimerType(*reinterpret_cast< Qt::TimerType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
        auto *_t = static_cast<QTimer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSingleShot(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableInterval(); break;
        case 3: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableTimerType(); break;
        case 4: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableActive(); break;
        default: break;
        }
    }
}

const QMetaObject *QTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTimerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QTimer::timeout(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
