/****************************************************************************
** Meta object code from reading C++ file 'qnoncontiguousbytedevice_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qnoncontiguousbytedevice_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnoncontiguousbytedevice_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS = QtMocHelpers::stringData(
    "QNonContiguousByteDevice",
    "readyRead",
    "",
    "readProgress",
    "current",
    "total"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[25];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS_t qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "QNonContiguousByteDevice"
        QT_MOC_LITERAL(25, 9),  // "readyRead"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 12),  // "readProgress"
        QT_MOC_LITERAL(49, 7),  // "current"
        QT_MOC_LITERAL(57, 5)   // "total"
    },
    "QNonContiguousByteDevice",
    "readyRead",
    "",
    "readProgress",
    "current",
    "total"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQNonContiguousByteDeviceENDCLASS[] = {

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
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    2,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject QNonContiguousByteDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQNonContiguousByteDeviceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNonContiguousByteDevice, std::true_type>,
        // method 'readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void QNonContiguousByteDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNonContiguousByteDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->readProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QNonContiguousByteDevice::*)();
            if (_t _q_method = &QNonContiguousByteDevice::readyRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNonContiguousByteDevice::*)(qint64 , qint64 );
            if (_t _q_method = &QNonContiguousByteDevice::readProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QNonContiguousByteDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQNonContiguousByteDeviceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNonContiguousByteDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QNonContiguousByteDevice::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNonContiguousByteDevice::readProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS = QtMocHelpers::stringData(
    "QNonContiguousByteDeviceIoDeviceImpl"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS_t qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS = {
    {
        QT_MOC_LITERAL(0, 36)   // "QNonContiguousByteDeviceIoDev..."
    },
    "QNonContiguousByteDeviceIoDeviceImpl"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject QNonContiguousByteDeviceIoDeviceImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QNonContiguousByteDevice::staticMetaObject>(),
    qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNonContiguousByteDeviceIoDeviceImpl, std::true_type>
    >,
    nullptr
} };

void QNonContiguousByteDeviceIoDeviceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QNonContiguousByteDeviceIoDeviceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceIoDeviceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQNonContiguousByteDeviceIoDeviceImplENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceIoDeviceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS = QtMocHelpers::stringData(
    "QNonContiguousByteDeviceBufferImpl"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS_t qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS = {
    {
        QT_MOC_LITERAL(0, 34)   // "QNonContiguousByteDeviceBuffe..."
    },
    "QNonContiguousByteDeviceBufferImpl"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQNonContiguousByteDeviceBufferImplENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject QNonContiguousByteDeviceBufferImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QNonContiguousByteDevice::staticMetaObject>(),
    qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQNonContiguousByteDeviceBufferImplENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNonContiguousByteDeviceBufferImpl, std::true_type>
    >,
    nullptr
} };

void QNonContiguousByteDeviceBufferImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QNonContiguousByteDeviceBufferImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceBufferImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQNonContiguousByteDeviceBufferImplENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceBufferImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
