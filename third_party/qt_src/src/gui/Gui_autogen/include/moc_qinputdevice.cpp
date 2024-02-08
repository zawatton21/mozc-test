/****************************************************************************
** Meta object code from reading C++ file 'qinputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qinputdevice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQInputDeviceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQInputDeviceENDCLASS = QtMocHelpers::stringData(
    "QInputDevice",
    "availableVirtualGeometryChanged",
    "",
    "area",
    "name",
    "type",
    "DeviceType",
    "capabilities",
    "Capabilities",
    "systemId",
    "seatName",
    "availableVirtualGeometry",
    "DeviceTypes",
    "Unknown",
    "Mouse",
    "TouchScreen",
    "TouchPad",
    "Puck",
    "Stylus",
    "Airbrush",
    "Keyboard",
    "AllDevices",
    "Capability",
    "None",
    "Position",
    "Area",
    "Pressure",
    "Velocity",
    "NormalizedPosition",
    "MouseEmulation",
    "PixelScroll",
    "Scroll",
    "Hover",
    "Rotation",
    "XTilt",
    "YTilt",
    "TangentialPressure",
    "ZPosition",
    "All"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQInputDeviceENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[13];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[13];
    char stringdata9[9];
    char stringdata10[9];
    char stringdata11[25];
    char stringdata12[12];
    char stringdata13[8];
    char stringdata14[6];
    char stringdata15[12];
    char stringdata16[9];
    char stringdata17[5];
    char stringdata18[7];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[11];
    char stringdata22[11];
    char stringdata23[5];
    char stringdata24[9];
    char stringdata25[5];
    char stringdata26[9];
    char stringdata27[9];
    char stringdata28[19];
    char stringdata29[15];
    char stringdata30[12];
    char stringdata31[7];
    char stringdata32[6];
    char stringdata33[9];
    char stringdata34[6];
    char stringdata35[6];
    char stringdata36[19];
    char stringdata37[10];
    char stringdata38[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQInputDeviceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQInputDeviceENDCLASS_t qt_meta_stringdata_CLASSQInputDeviceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QInputDevice"
        QT_MOC_LITERAL(13, 31),  // "availableVirtualGeometryChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 4),  // "area"
        QT_MOC_LITERAL(51, 4),  // "name"
        QT_MOC_LITERAL(56, 4),  // "type"
        QT_MOC_LITERAL(61, 10),  // "DeviceType"
        QT_MOC_LITERAL(72, 12),  // "capabilities"
        QT_MOC_LITERAL(85, 12),  // "Capabilities"
        QT_MOC_LITERAL(98, 8),  // "systemId"
        QT_MOC_LITERAL(107, 8),  // "seatName"
        QT_MOC_LITERAL(116, 24),  // "availableVirtualGeometry"
        QT_MOC_LITERAL(141, 11),  // "DeviceTypes"
        QT_MOC_LITERAL(153, 7),  // "Unknown"
        QT_MOC_LITERAL(161, 5),  // "Mouse"
        QT_MOC_LITERAL(167, 11),  // "TouchScreen"
        QT_MOC_LITERAL(179, 8),  // "TouchPad"
        QT_MOC_LITERAL(188, 4),  // "Puck"
        QT_MOC_LITERAL(193, 6),  // "Stylus"
        QT_MOC_LITERAL(200, 8),  // "Airbrush"
        QT_MOC_LITERAL(209, 8),  // "Keyboard"
        QT_MOC_LITERAL(218, 10),  // "AllDevices"
        QT_MOC_LITERAL(229, 10),  // "Capability"
        QT_MOC_LITERAL(240, 4),  // "None"
        QT_MOC_LITERAL(245, 8),  // "Position"
        QT_MOC_LITERAL(254, 4),  // "Area"
        QT_MOC_LITERAL(259, 8),  // "Pressure"
        QT_MOC_LITERAL(268, 8),  // "Velocity"
        QT_MOC_LITERAL(277, 18),  // "NormalizedPosition"
        QT_MOC_LITERAL(296, 14),  // "MouseEmulation"
        QT_MOC_LITERAL(311, 11),  // "PixelScroll"
        QT_MOC_LITERAL(323, 6),  // "Scroll"
        QT_MOC_LITERAL(330, 5),  // "Hover"
        QT_MOC_LITERAL(336, 8),  // "Rotation"
        QT_MOC_LITERAL(345, 5),  // "XTilt"
        QT_MOC_LITERAL(351, 5),  // "YTilt"
        QT_MOC_LITERAL(357, 18),  // "TangentialPressure"
        QT_MOC_LITERAL(376, 9),  // "ZPosition"
        QT_MOC_LITERAL(386, 3)   // "All"
    },
    "QInputDevice",
    "availableVirtualGeometryChanged",
    "",
    "area",
    "name",
    "type",
    "DeviceType",
    "capabilities",
    "Capabilities",
    "systemId",
    "seatName",
    "availableVirtualGeometry",
    "DeviceTypes",
    "Unknown",
    "Mouse",
    "TouchScreen",
    "TouchPad",
    "Puck",
    "Stylus",
    "Airbrush",
    "Keyboard",
    "AllDevices",
    "Capability",
    "None",
    "Position",
    "Area",
    "Pressure",
    "Velocity",
    "NormalizedPosition",
    "MouseEmulation",
    "PixelScroll",
    "Scroll",
    "Hover",
    "Rotation",
    "XTilt",
    "YTilt",
    "TangentialPressure",
    "ZPosition",
    "All"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQInputDeviceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   23, // properties
       2,   53, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       9, QMetaType::LongLong, 0x00015401, uint(-1), 0,
      10, QMetaType::QString, 0x00015401, uint(-1), 0,
      11, QMetaType::QRect, 0x00015001, uint(0), 0,

 // enums: name, alias, flags, count, data
      12,    6, 0x3,    9,   63,
       8,   22, 0x3,   16,   81,

 // enum data: key, value
      13, uint(QInputDevice::DeviceType::Unknown),
      14, uint(QInputDevice::DeviceType::Mouse),
      15, uint(QInputDevice::DeviceType::TouchScreen),
      16, uint(QInputDevice::DeviceType::TouchPad),
      17, uint(QInputDevice::DeviceType::Puck),
      18, uint(QInputDevice::DeviceType::Stylus),
      19, uint(QInputDevice::DeviceType::Airbrush),
      20, uint(QInputDevice::DeviceType::Keyboard),
      21, uint(QInputDevice::DeviceType::AllDevices),
      23, uint(QInputDevice::Capability::None),
      24, uint(QInputDevice::Capability::Position),
      25, uint(QInputDevice::Capability::Area),
      26, uint(QInputDevice::Capability::Pressure),
      27, uint(QInputDevice::Capability::Velocity),
      28, uint(QInputDevice::Capability::NormalizedPosition),
      29, uint(QInputDevice::Capability::MouseEmulation),
      30, uint(QInputDevice::Capability::PixelScroll),
      31, uint(QInputDevice::Capability::Scroll),
      32, uint(QInputDevice::Capability::Hover),
      33, uint(QInputDevice::Capability::Rotation),
      34, uint(QInputDevice::Capability::XTilt),
      35, uint(QInputDevice::Capability::YTilt),
      36, uint(QInputDevice::Capability::TangentialPressure),
      37, uint(QInputDevice::Capability::ZPosition),
      38, uint(QInputDevice::Capability::All),

       0        // eod
};

Q_CONSTINIT const QMetaObject QInputDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQInputDeviceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQInputDeviceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQInputDeviceENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<DeviceType, std::true_type>,
        // property 'capabilities'
        QtPrivate::TypeAndForceComplete<Capabilities, std::true_type>,
        // property 'systemId'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'seatName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'availableVirtualGeometry'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // enum 'DeviceTypes'
        QtPrivate::TypeAndForceComplete<QInputDevice::DeviceTypes, std::true_type>,
        // enum 'Capabilities'
        QtPrivate::TypeAndForceComplete<QInputDevice::Capabilities, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QInputDevice, std::true_type>,
        // method 'availableVirtualGeometryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRect, std::false_type>
    >,
    nullptr
} };

void QInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QInputDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->availableVirtualGeometryChanged((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QInputDevice::*)(QRect );
            if (_t _q_method = &QInputDevice::availableVirtualGeometryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QInputDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< DeviceType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->capabilities()); break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->systemId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->seatName(); break;
        case 5: *reinterpret_cast< QRect*>(_v) = _t->availableVirtualGeometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQInputDeviceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QInputDevice::availableVirtualGeometryChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
