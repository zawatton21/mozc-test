/****************************************************************************
** Meta object code from reading C++ file 'qplatformsharedgraphicscache.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformsharedgraphicscache.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsharedgraphicscache.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS = QtMocHelpers::stringData(
    "QPlatformSharedGraphicsCache",
    "itemsMissing",
    "",
    "cacheId",
    "QList<quint32>",
    "itemIds",
    "itemsAvailable",
    "bufferId",
    "QList<QPoint>",
    "positionsInBuffer",
    "itemsInvalidated",
    "itemsUpdated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[29];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[15];
    char stringdata5[8];
    char stringdata6[15];
    char stringdata7[9];
    char stringdata8[14];
    char stringdata9[18];
    char stringdata10[17];
    char stringdata11[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS_t qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "QPlatformSharedGraphicsCache"
        QT_MOC_LITERAL(29, 12),  // "itemsMissing"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 7),  // "cacheId"
        QT_MOC_LITERAL(51, 14),  // "QList<quint32>"
        QT_MOC_LITERAL(66, 7),  // "itemIds"
        QT_MOC_LITERAL(74, 14),  // "itemsAvailable"
        QT_MOC_LITERAL(89, 8),  // "bufferId"
        QT_MOC_LITERAL(98, 13),  // "QList<QPoint>"
        QT_MOC_LITERAL(112, 17),  // "positionsInBuffer"
        QT_MOC_LITERAL(130, 16),  // "itemsInvalidated"
        QT_MOC_LITERAL(147, 12)   // "itemsUpdated"
    },
    "QPlatformSharedGraphicsCache",
    "itemsMissing",
    "",
    "cacheId",
    "QList<quint32>",
    "itemIds",
    "itemsAvailable",
    "bufferId",
    "QList<QPoint>",
    "positionsInBuffer",
    "itemsInvalidated",
    "itemsUpdated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformSharedGraphicsCacheENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,
       6,    4,   43,    2, 0x06,    4 /* Public */,
      10,    2,   52,    2, 0x06,    9 /* Public */,
      11,    4,   57,    2, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar, 0x80000000 | 4, 0x80000000 | 8,    3,    7,    5,    9,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar, 0x80000000 | 4, 0x80000000 | 8,    3,    7,    5,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformSharedGraphicsCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformSharedGraphicsCacheENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformSharedGraphicsCache, std::true_type>,
        // method 'itemsMissing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<quint32> &, std::false_type>,
        // method 'itemsAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<void *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<quint32> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPoint> &, std::false_type>,
        // method 'itemsInvalidated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<quint32> &, std::false_type>,
        // method 'itemsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<void *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<quint32> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPoint> &, std::false_type>
    >,
    nullptr
} };

void QPlatformSharedGraphicsCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformSharedGraphicsCache *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemsMissing((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<quint32>>>(_a[2]))); break;
        case 1: _t->itemsAvailable((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<quint32>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<QPoint>>>(_a[4]))); break;
        case 2: _t->itemsInvalidated((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<quint32>>>(_a[2]))); break;
        case 3: _t->itemsUpdated((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<quint32>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<QPoint>>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint32> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QPoint> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint32> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint32> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QPoint> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformSharedGraphicsCache::*)(const QByteArray & , const QList<quint32> & );
            if (_t _q_method = &QPlatformSharedGraphicsCache::itemsMissing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformSharedGraphicsCache::*)(const QByteArray & , void * , const QList<quint32> & , const QList<QPoint> & );
            if (_t _q_method = &QPlatformSharedGraphicsCache::itemsAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPlatformSharedGraphicsCache::*)(const QByteArray & , const QList<quint32> & );
            if (_t _q_method = &QPlatformSharedGraphicsCache::itemsInvalidated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPlatformSharedGraphicsCache::*)(const QByteArray & , void * , const QList<quint32> & , const QList<QPoint> & );
            if (_t _q_method = &QPlatformSharedGraphicsCache::itemsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformSharedGraphicsCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSharedGraphicsCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformSharedGraphicsCacheENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformSharedGraphicsCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QPlatformSharedGraphicsCache::itemsMissing(const QByteArray & _t1, const QList<quint32> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSharedGraphicsCache::itemsAvailable(const QByteArray & _t1, void * _t2, const QList<quint32> & _t3, const QList<QPoint> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformSharedGraphicsCache::itemsInvalidated(const QByteArray & _t1, const QList<quint32> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlatformSharedGraphicsCache::itemsUpdated(const QByteArray & _t1, void * _t2, const QList<quint32> & _t3, const QList<QPoint> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
