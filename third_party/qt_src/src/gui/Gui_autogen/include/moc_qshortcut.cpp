/****************************************************************************
** Meta object code from reading C++ file 'qshortcut.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qshortcut.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qshortcut.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQShortcutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQShortcutENDCLASS = QtMocHelpers::stringData(
    "QShortcut",
    "activated",
    "",
    "activatedAmbiguously",
    "key",
    "QKeySequence",
    "enabled",
    "autoRepeat",
    "context",
    "Qt::ShortcutContext"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQShortcutENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[4];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[11];
    char stringdata8[8];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQShortcutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQShortcutENDCLASS_t qt_meta_stringdata_CLASSQShortcutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QShortcut"
        QT_MOC_LITERAL(10, 9),  // "activated"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 20),  // "activatedAmbiguously"
        QT_MOC_LITERAL(42, 3),  // "key"
        QT_MOC_LITERAL(46, 12),  // "QKeySequence"
        QT_MOC_LITERAL(59, 7),  // "enabled"
        QT_MOC_LITERAL(67, 10),  // "autoRepeat"
        QT_MOC_LITERAL(78, 7),  // "context"
        QT_MOC_LITERAL(86, 19)   // "Qt::ShortcutContext"
    },
    "QShortcut",
    "activated",
    "",
    "activatedAmbiguously",
    "key",
    "QKeySequence",
    "enabled",
    "autoRepeat",
    "context",
    "Qt::ShortcutContext"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQShortcutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    5 /* Public */,
       3,    0,   27,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(-1), 0,
       7, QMetaType::Bool, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QShortcut::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQShortcutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQShortcutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQShortcutENDCLASS_t,
        // property 'key'
        QtPrivate::TypeAndForceComplete<QKeySequence, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoRepeat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'context'
        QtPrivate::TypeAndForceComplete<Qt::ShortcutContext, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QShortcut, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activatedAmbiguously'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QShortcut *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->activatedAmbiguously(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QShortcut::*)();
            if (_t _q_method = &QShortcut::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QShortcut::*)();
            if (_t _q_method = &QShortcut::activatedAmbiguously; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QShortcut *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoRepeat(); break;
        case 3: *reinterpret_cast< Qt::ShortcutContext*>(_v) = _t->context(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QShortcut *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKey(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setContext(*reinterpret_cast< Qt::ShortcutContext*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQShortcutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QShortcut::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QShortcut::activatedAmbiguously()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
