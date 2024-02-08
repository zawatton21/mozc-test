/****************************************************************************
** Meta object code from reading C++ file 'qevent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qevent.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSinglePointEventENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSinglePointEventENDCLASS = QtMocHelpers::stringData(
    "QSinglePointEvent",
    "exclusivePointGrabber"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSinglePointEventENDCLASS_t {
    uint offsetsAndSizes[4];
    char stringdata0[18];
    char stringdata1[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSinglePointEventENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSinglePointEventENDCLASS_t qt_meta_stringdata_CLASSQSinglePointEventENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QSinglePointEvent"
        QT_MOC_LITERAL(18, 21)   // "exclusivePointGrabber"
    },
    "QSinglePointEvent",
    "exclusivePointGrabber"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSinglePointEventENDCLASS[] = {

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
       1, QMetaType::QObjectStar, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSinglePointEvent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QPointerEvent>::value,
    qt_meta_stringdata_CLASSQSinglePointEventENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSinglePointEventENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSinglePointEventENDCLASS_t,
        // property 'exclusivePointGrabber'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSinglePointEvent, std::true_type>
    >,
    nullptr
} };

void QSinglePointEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QSinglePointEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->exclusivePointGrabber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<QSinglePointEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExclusivePointGrabber(*reinterpret_cast< QObject**>(_v)); break;
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQWheelEventENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQWheelEventENDCLASS = QtMocHelpers::stringData(
    "QWheelEvent",
    "device",
    "const QPointingDevice*",
    "pixelDelta",
    "angleDelta",
    "phase",
    "Qt::ScrollPhase",
    "inverted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQWheelEventENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[12];
    char stringdata1[7];
    char stringdata2[23];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[16];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQWheelEventENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQWheelEventENDCLASS_t qt_meta_stringdata_CLASSQWheelEventENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QWheelEvent"
        QT_MOC_LITERAL(12, 6),  // "device"
        QT_MOC_LITERAL(19, 22),  // "const QPointingDevice*"
        QT_MOC_LITERAL(42, 10),  // "pixelDelta"
        QT_MOC_LITERAL(53, 10),  // "angleDelta"
        QT_MOC_LITERAL(64, 5),  // "phase"
        QT_MOC_LITERAL(70, 15),  // "Qt::ScrollPhase"
        QT_MOC_LITERAL(86, 8)   // "inverted"
    },
    "QWheelEvent",
    "device",
    "const QPointingDevice*",
    "pixelDelta",
    "angleDelta",
    "phase",
    "Qt::ScrollPhase",
    "inverted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQWheelEventENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, QMetaType::QPoint, 0x00015001, uint(-1), 0,
       4, QMetaType::QPoint, 0x00015001, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QWheelEvent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSinglePointEvent>::value,
    qt_meta_stringdata_CLASSQWheelEventENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQWheelEventENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQWheelEventENDCLASS_t,
        // property 'device'
        QtPrivate::TypeAndForceComplete<const QPointingDevice*, std::true_type>,
        // property 'pixelDelta'
        QtPrivate::TypeAndForceComplete<QPoint, std::true_type>,
        // property 'angleDelta'
        QtPrivate::TypeAndForceComplete<QPoint, std::true_type>,
        // property 'phase'
        QtPrivate::TypeAndForceComplete<Qt::ScrollPhase, std::true_type>,
        // property 'inverted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWheelEvent, std::true_type>
    >,
    nullptr
} };

void QWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QWheelEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< const QPointingDevice**>(_v) = _t->pointingDevice(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = _t->pixelDelta(); break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< Qt::ScrollPhase*>(_v) = _t->phase(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
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
QT_WARNING_POP
