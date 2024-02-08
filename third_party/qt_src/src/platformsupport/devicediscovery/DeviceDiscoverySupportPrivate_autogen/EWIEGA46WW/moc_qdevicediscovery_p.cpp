/****************************************************************************
** Meta object code from reading C++ file 'qdevicediscovery_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdevicediscovery_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdevicediscovery_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS = QtMocHelpers::stringData(
    "QDeviceDiscovery",
    "deviceDetected",
    "",
    "deviceNode",
    "deviceRemoved",
    "QDeviceType",
    "Device_Unknown",
    "Device_Mouse",
    "Device_Touchpad",
    "Device_Touchscreen",
    "Device_Keyboard",
    "Device_DRM",
    "Device_DRM_PrimaryGPU",
    "Device_Tablet",
    "Device_Joystick",
    "Device_InputMask",
    "Device_VideoMask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[15];
    char stringdata7[13];
    char stringdata8[16];
    char stringdata9[19];
    char stringdata10[16];
    char stringdata11[11];
    char stringdata12[22];
    char stringdata13[14];
    char stringdata14[16];
    char stringdata15[17];
    char stringdata16[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS_t qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QDeviceDiscovery"
        QT_MOC_LITERAL(17, 14),  // "deviceDetected"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 10),  // "deviceNode"
        QT_MOC_LITERAL(44, 13),  // "deviceRemoved"
        QT_MOC_LITERAL(58, 11),  // "QDeviceType"
        QT_MOC_LITERAL(70, 14),  // "Device_Unknown"
        QT_MOC_LITERAL(85, 12),  // "Device_Mouse"
        QT_MOC_LITERAL(98, 15),  // "Device_Touchpad"
        QT_MOC_LITERAL(114, 18),  // "Device_Touchscreen"
        QT_MOC_LITERAL(133, 15),  // "Device_Keyboard"
        QT_MOC_LITERAL(149, 10),  // "Device_DRM"
        QT_MOC_LITERAL(160, 21),  // "Device_DRM_PrimaryGPU"
        QT_MOC_LITERAL(182, 13),  // "Device_Tablet"
        QT_MOC_LITERAL(196, 15),  // "Device_Joystick"
        QT_MOC_LITERAL(212, 16),  // "Device_InputMask"
        QT_MOC_LITERAL(229, 16)   // "Device_VideoMask"
    },
    "QDeviceDiscovery",
    "deviceDetected",
    "",
    "deviceNode",
    "deviceRemoved",
    "QDeviceType",
    "Device_Unknown",
    "Device_Mouse",
    "Device_Touchpad",
    "Device_Touchscreen",
    "Device_Keyboard",
    "Device_DRM",
    "Device_DRM_PrimaryGPU",
    "Device_Tablet",
    "Device_Joystick",
    "Device_InputMask",
    "Device_VideoMask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDeviceDiscoveryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    2 /* Public */,
       4,    1,   29,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,   11,   37,

 // enum data: key, value
       6, uint(QDeviceDiscovery::Device_Unknown),
       7, uint(QDeviceDiscovery::Device_Mouse),
       8, uint(QDeviceDiscovery::Device_Touchpad),
       9, uint(QDeviceDiscovery::Device_Touchscreen),
      10, uint(QDeviceDiscovery::Device_Keyboard),
      11, uint(QDeviceDiscovery::Device_DRM),
      12, uint(QDeviceDiscovery::Device_DRM_PrimaryGPU),
      13, uint(QDeviceDiscovery::Device_Tablet),
      14, uint(QDeviceDiscovery::Device_Joystick),
      15, uint(QDeviceDiscovery::Device_InputMask),
      16, uint(QDeviceDiscovery::Device_VideoMask),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDeviceDiscovery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDeviceDiscoveryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS_t,
        // enum 'QDeviceType'
        QtPrivate::TypeAndForceComplete<QDeviceDiscovery::QDeviceType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDeviceDiscovery, std::true_type>,
        // method 'deviceDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deviceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QDeviceDiscovery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDeviceDiscovery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceDetected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDeviceDiscovery::*)(const QString & );
            if (_t _q_method = &QDeviceDiscovery::deviceDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDeviceDiscovery::*)(const QString & );
            if (_t _q_method = &QDeviceDiscovery::deviceRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QDeviceDiscovery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeviceDiscovery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDeviceDiscoveryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeviceDiscovery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QDeviceDiscovery::deviceDetected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeviceDiscovery::deviceRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
