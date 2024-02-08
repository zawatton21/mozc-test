/****************************************************************************
** Meta object code from reading C++ file 'qpointingdevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qpointingdevice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpointingdevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS = QtMocHelpers::stringData(
    "QPointingDeviceUniqueId",
    "numericId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS_t {
    uint offsetsAndSizes[4];
    char stringdata0[24];
    char stringdata1[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS_t qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QPointingDeviceUniqueId"
        QT_MOC_LITERAL(24, 9)   // "numericId"
    },
    "QPointingDeviceUniqueId",
    "numericId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPointingDeviceUniqueIdENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::LongLong, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPointingDeviceUniqueId::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPointingDeviceUniqueIdENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPointingDeviceUniqueIdENDCLASS_t,
        // property 'numericId'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPointingDeviceUniqueId, std::true_type>
    >,
    nullptr
} };

void QPointingDeviceUniqueId::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QPointingDeviceUniqueId *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = _t->numericId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPointingDeviceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPointingDeviceENDCLASS = QtMocHelpers::stringData(
    "QPointingDevice",
    "grabChanged",
    "",
    "grabber",
    "GrabTransition",
    "transition",
    "const QPointerEvent*",
    "event",
    "QEventPoint",
    "point",
    "pointerType",
    "PointerType",
    "maximumPoints",
    "buttonCount",
    "uniqueId",
    "QPointingDeviceUniqueId",
    "PointerTypes",
    "Unknown",
    "Generic",
    "Finger",
    "Pen",
    "Eraser",
    "Cursor",
    "AllPointerTypes",
    "GrabPassive",
    "UngrabPassive",
    "CancelGrabPassive",
    "OverrideGrabPassive",
    "GrabExclusive",
    "UngrabExclusive",
    "CancelGrabExclusive"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPointingDeviceENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[15];
    char stringdata5[11];
    char stringdata6[21];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[14];
    char stringdata13[12];
    char stringdata14[9];
    char stringdata15[24];
    char stringdata16[13];
    char stringdata17[8];
    char stringdata18[8];
    char stringdata19[7];
    char stringdata20[4];
    char stringdata21[7];
    char stringdata22[7];
    char stringdata23[16];
    char stringdata24[12];
    char stringdata25[14];
    char stringdata26[18];
    char stringdata27[20];
    char stringdata28[14];
    char stringdata29[16];
    char stringdata30[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPointingDeviceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPointingDeviceENDCLASS_t qt_meta_stringdata_CLASSQPointingDeviceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QPointingDevice"
        QT_MOC_LITERAL(16, 11),  // "grabChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 7),  // "grabber"
        QT_MOC_LITERAL(37, 14),  // "GrabTransition"
        QT_MOC_LITERAL(52, 10),  // "transition"
        QT_MOC_LITERAL(63, 20),  // "const QPointerEvent*"
        QT_MOC_LITERAL(84, 5),  // "event"
        QT_MOC_LITERAL(90, 11),  // "QEventPoint"
        QT_MOC_LITERAL(102, 5),  // "point"
        QT_MOC_LITERAL(108, 11),  // "pointerType"
        QT_MOC_LITERAL(120, 11),  // "PointerType"
        QT_MOC_LITERAL(132, 13),  // "maximumPoints"
        QT_MOC_LITERAL(146, 11),  // "buttonCount"
        QT_MOC_LITERAL(158, 8),  // "uniqueId"
        QT_MOC_LITERAL(167, 23),  // "QPointingDeviceUniqueId"
        QT_MOC_LITERAL(191, 12),  // "PointerTypes"
        QT_MOC_LITERAL(204, 7),  // "Unknown"
        QT_MOC_LITERAL(212, 7),  // "Generic"
        QT_MOC_LITERAL(220, 6),  // "Finger"
        QT_MOC_LITERAL(227, 3),  // "Pen"
        QT_MOC_LITERAL(231, 6),  // "Eraser"
        QT_MOC_LITERAL(238, 6),  // "Cursor"
        QT_MOC_LITERAL(245, 15),  // "AllPointerTypes"
        QT_MOC_LITERAL(261, 11),  // "GrabPassive"
        QT_MOC_LITERAL(273, 13),  // "UngrabPassive"
        QT_MOC_LITERAL(287, 17),  // "CancelGrabPassive"
        QT_MOC_LITERAL(305, 19),  // "OverrideGrabPassive"
        QT_MOC_LITERAL(325, 13),  // "GrabExclusive"
        QT_MOC_LITERAL(339, 15),  // "UngrabExclusive"
        QT_MOC_LITERAL(355, 19)   // "CancelGrabExclusive"
    },
    "QPointingDevice",
    "grabChanged",
    "",
    "grabber",
    "GrabTransition",
    "transition",
    "const QPointerEvent*",
    "event",
    "QEventPoint",
    "point",
    "pointerType",
    "PointerType",
    "maximumPoints",
    "buttonCount",
    "uniqueId",
    "QPointingDeviceUniqueId",
    "PointerTypes",
    "Unknown",
    "Generic",
    "Finger",
    "Pen",
    "Eraser",
    "Cursor",
    "AllPointerTypes",
    "GrabPassive",
    "UngrabPassive",
    "CancelGrabPassive",
    "OverrideGrabPassive",
    "GrabExclusive",
    "UngrabExclusive",
    "CancelGrabExclusive"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPointingDeviceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   29, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   20,    2, 0x106,    7 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 8,    3,    5,    7,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      12, QMetaType::Int, 0x00015401, uint(-1), 0,
      13, QMetaType::Int, 0x00015401, uint(-1), 0,
      14, 0x80000000 | 15, 0x00015409, uint(-1), 0,

 // enums: name, alias, flags, count, data
      16,   11, 0x3,    7,   59,
       4,    4, 0x0,    7,   73,

 // enum data: key, value
      17, uint(QPointingDevice::PointerType::Unknown),
      18, uint(QPointingDevice::PointerType::Generic),
      19, uint(QPointingDevice::PointerType::Finger),
      20, uint(QPointingDevice::PointerType::Pen),
      21, uint(QPointingDevice::PointerType::Eraser),
      22, uint(QPointingDevice::PointerType::Cursor),
      23, uint(QPointingDevice::PointerType::AllPointerTypes),
      24, uint(QPointingDevice::GrabPassive),
      25, uint(QPointingDevice::UngrabPassive),
      26, uint(QPointingDevice::CancelGrabPassive),
      27, uint(QPointingDevice::OverrideGrabPassive),
      28, uint(QPointingDevice::GrabExclusive),
      29, uint(QPointingDevice::UngrabExclusive),
      30, uint(QPointingDevice::CancelGrabExclusive),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPointingDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QInputDevice::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPointingDeviceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPointingDeviceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPointingDeviceENDCLASS_t,
        // property 'pointerType'
        QtPrivate::TypeAndForceComplete<PointerType, std::true_type>,
        // property 'maximumPoints'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'buttonCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'uniqueId'
        QtPrivate::TypeAndForceComplete<QPointingDeviceUniqueId, std::true_type>,
        // enum 'PointerTypes'
        QtPrivate::TypeAndForceComplete<QPointingDevice::PointerTypes, std::true_type>,
        // enum 'GrabTransition'
        QtPrivate::TypeAndForceComplete<QPointingDevice::GrabTransition, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPointingDevice, std::true_type>,
        // method 'grabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<GrabTransition, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointerEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QEventPoint &, std::false_type>
    >,
    nullptr
} };

void QPointingDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPointingDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->grabChanged((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<GrabTransition>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const QPointerEvent*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QEventPoint>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPointingDevice::*)(QObject * , GrabTransition , const QPointerEvent * , const QEventPoint & ) const;
            if (_t _q_method = &QPointingDevice::grabChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPointingDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PointerType*>(_v) = _t->pointerType(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximumPoints(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->buttonCount(); break;
        case 3: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QPointingDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPointingDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPointingDeviceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QInputDevice::qt_metacast(_clname);
}

int QPointingDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QInputDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QPointingDevice::grabChanged(QObject * _t1, GrabTransition _t2, const QPointerEvent * _t3, const QEventPoint & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< QPointingDevice *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
