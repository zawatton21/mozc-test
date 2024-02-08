/****************************************************************************
** Meta object code from reading C++ file 'qslider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qslider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qslider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSliderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSliderENDCLASS = QtMocHelpers::stringData(
    "QSlider",
    "tickPosition",
    "TickPosition",
    "tickInterval",
    "NoTicks",
    "TicksAbove",
    "TicksLeft",
    "TicksBelow",
    "TicksRight",
    "TicksBothSides"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSliderENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[13];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[11];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSliderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSliderENDCLASS_t qt_meta_stringdata_CLASSQSliderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QSlider"
        QT_MOC_LITERAL(8, 12),  // "tickPosition"
        QT_MOC_LITERAL(21, 12),  // "TickPosition"
        QT_MOC_LITERAL(34, 12),  // "tickInterval"
        QT_MOC_LITERAL(47, 7),  // "NoTicks"
        QT_MOC_LITERAL(55, 10),  // "TicksAbove"
        QT_MOC_LITERAL(66, 9),  // "TicksLeft"
        QT_MOC_LITERAL(76, 10),  // "TicksBelow"
        QT_MOC_LITERAL(87, 10),  // "TicksRight"
        QT_MOC_LITERAL(98, 14)   // "TicksBothSides"
    },
    "QSlider",
    "tickPosition",
    "TickPosition",
    "tickInterval",
    "NoTicks",
    "TicksAbove",
    "TicksLeft",
    "TicksBelow",
    "TicksRight",
    "TicksBothSides"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSliderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    6,   29,

 // enum data: key, value
       4, uint(QSlider::NoTicks),
       5, uint(QSlider::TicksAbove),
       6, uint(QSlider::TicksLeft),
       7, uint(QSlider::TicksBelow),
       8, uint(QSlider::TicksRight),
       9, uint(QSlider::TicksBothSides),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSliderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSliderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSliderENDCLASS_t,
        // property 'tickPosition'
        QtPrivate::TypeAndForceComplete<TickPosition, std::true_type>,
        // property 'tickInterval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'TickPosition'
        QtPrivate::TypeAndForceComplete<QSlider::TickPosition, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSlider, std::true_type>
    >,
    nullptr
} };

void QSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TickPosition*>(_v) = _t->tickPosition(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->tickInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTickPosition(*reinterpret_cast< TickPosition*>(_v)); break;
        case 1: _t->setTickInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSliderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSlider::qt_metacast(_clname);
}

int QSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
