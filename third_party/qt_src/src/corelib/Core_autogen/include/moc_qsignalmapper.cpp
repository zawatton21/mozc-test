/****************************************************************************
** Meta object code from reading C++ file 'qsignalmapper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qsignalmapper.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsignalmapper.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSignalMapperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSignalMapperENDCLASS = QtMocHelpers::stringData(
    "QSignalMapper",
    "mappedInt",
    "",
    "mappedString",
    "mappedObject",
    "map",
    "sender",
    "_q_senderDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSignalMapperENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSignalMapperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSignalMapperENDCLASS_t qt_meta_stringdata_CLASSQSignalMapperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QSignalMapper"
        QT_MOC_LITERAL(14, 9),  // "mappedInt"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 12),  // "mappedString"
        QT_MOC_LITERAL(38, 12),  // "mappedObject"
        QT_MOC_LITERAL(51, 3),  // "map"
        QT_MOC_LITERAL(55, 6),  // "sender"
        QT_MOC_LITERAL(62, 18)   // "_q_senderDestroyed"
    },
    "QSignalMapper",
    "mappedInt",
    "",
    "mappedString",
    "mappedObject",
    "map",
    "sender",
    "_q_senderDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSignalMapperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       3,    1,   53,    2, 0x06,    3 /* Public */,
       4,    1,   56,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x0a,    7 /* Public */,
       5,    1,   60,    2, 0x0a,    8 /* Public */,
       7,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSignalMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSignalMapperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSignalMapperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSignalMapperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSignalMapper, std::true_type>,
        // method 'mappedInt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mappedString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'mappedObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'map'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'map'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method '_q_senderDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSignalMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSignalMapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mappedInt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->mappedString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->mappedObject((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 3: _t->map(); break;
        case 4: _t->map((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 5: _t->d_func()->_q_senderDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSignalMapper::*)(int );
            if (_t _q_method = &QSignalMapper::mappedInt; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSignalMapper::*)(const QString & );
            if (_t _q_method = &QSignalMapper::mappedString; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSignalMapper::*)(QObject * );
            if (_t _q_method = &QSignalMapper::mappedObject; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QSignalMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSignalMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSignalMapperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSignalMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSignalMapper::mappedInt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSignalMapper::mappedString(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSignalMapper::mappedObject(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
