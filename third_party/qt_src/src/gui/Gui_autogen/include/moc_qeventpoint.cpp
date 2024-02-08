/****************************************************************************
** Meta object code from reading C++ file 'qeventpoint.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qeventpoint.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeventpoint.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQEventPointENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQEventPointENDCLASS = QtMocHelpers::stringData(
    "QEventPoint",
    "accepted",
    "device",
    "const QPointingDevice*",
    "id",
    "uniqueId",
    "QPointingDeviceUniqueId",
    "state",
    "State",
    "timestamp",
    "pressTimestamp",
    "lastTimestamp",
    "timeHeld",
    "pressure",
    "rotation",
    "ellipseDiameters",
    "velocity",
    "position",
    "pressPosition",
    "grabPosition",
    "lastPosition",
    "scenePosition",
    "scenePressPosition",
    "sceneGrabPosition",
    "sceneLastPosition",
    "globalPosition",
    "globalPressPosition",
    "globalGrabPosition",
    "globalLastPosition",
    "States",
    "Unknown",
    "Stationary",
    "Pressed",
    "Updated",
    "Released"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQEventPointENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[7];
    char stringdata3[23];
    char stringdata4[3];
    char stringdata5[9];
    char stringdata6[24];
    char stringdata7[6];
    char stringdata8[6];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[14];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[17];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[14];
    char stringdata19[13];
    char stringdata20[13];
    char stringdata21[14];
    char stringdata22[19];
    char stringdata23[18];
    char stringdata24[18];
    char stringdata25[15];
    char stringdata26[20];
    char stringdata27[19];
    char stringdata28[19];
    char stringdata29[7];
    char stringdata30[8];
    char stringdata31[11];
    char stringdata32[8];
    char stringdata33[8];
    char stringdata34[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQEventPointENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQEventPointENDCLASS_t qt_meta_stringdata_CLASSQEventPointENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QEventPoint"
        QT_MOC_LITERAL(12, 8),  // "accepted"
        QT_MOC_LITERAL(21, 6),  // "device"
        QT_MOC_LITERAL(28, 22),  // "const QPointingDevice*"
        QT_MOC_LITERAL(51, 2),  // "id"
        QT_MOC_LITERAL(54, 8),  // "uniqueId"
        QT_MOC_LITERAL(63, 23),  // "QPointingDeviceUniqueId"
        QT_MOC_LITERAL(87, 5),  // "state"
        QT_MOC_LITERAL(93, 5),  // "State"
        QT_MOC_LITERAL(99, 9),  // "timestamp"
        QT_MOC_LITERAL(109, 14),  // "pressTimestamp"
        QT_MOC_LITERAL(124, 13),  // "lastTimestamp"
        QT_MOC_LITERAL(138, 8),  // "timeHeld"
        QT_MOC_LITERAL(147, 8),  // "pressure"
        QT_MOC_LITERAL(156, 8),  // "rotation"
        QT_MOC_LITERAL(165, 16),  // "ellipseDiameters"
        QT_MOC_LITERAL(182, 8),  // "velocity"
        QT_MOC_LITERAL(191, 8),  // "position"
        QT_MOC_LITERAL(200, 13),  // "pressPosition"
        QT_MOC_LITERAL(214, 12),  // "grabPosition"
        QT_MOC_LITERAL(227, 12),  // "lastPosition"
        QT_MOC_LITERAL(240, 13),  // "scenePosition"
        QT_MOC_LITERAL(254, 18),  // "scenePressPosition"
        QT_MOC_LITERAL(273, 17),  // "sceneGrabPosition"
        QT_MOC_LITERAL(291, 17),  // "sceneLastPosition"
        QT_MOC_LITERAL(309, 14),  // "globalPosition"
        QT_MOC_LITERAL(324, 19),  // "globalPressPosition"
        QT_MOC_LITERAL(344, 18),  // "globalGrabPosition"
        QT_MOC_LITERAL(363, 18),  // "globalLastPosition"
        QT_MOC_LITERAL(382, 6),  // "States"
        QT_MOC_LITERAL(389, 7),  // "Unknown"
        QT_MOC_LITERAL(397, 10),  // "Stationary"
        QT_MOC_LITERAL(408, 7),  // "Pressed"
        QT_MOC_LITERAL(416, 7),  // "Updated"
        QT_MOC_LITERAL(424, 8)   // "Released"
    },
    "QEventPoint",
    "accepted",
    "device",
    "const QPointingDevice*",
    "id",
    "uniqueId",
    "QPointingDeviceUniqueId",
    "state",
    "State",
    "timestamp",
    "pressTimestamp",
    "lastTimestamp",
    "timeHeld",
    "pressure",
    "rotation",
    "ellipseDiameters",
    "velocity",
    "position",
    "pressPosition",
    "grabPosition",
    "lastPosition",
    "scenePosition",
    "scenePressPosition",
    "sceneGrabPosition",
    "sceneLastPosition",
    "globalPosition",
    "globalPressPosition",
    "globalGrabPosition",
    "globalLastPosition",
    "States",
    "Unknown",
    "Stationary",
    "Pressed",
    "Updated",
    "Released"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQEventPointENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      25,   14, // properties
       1,  139, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,
       4, QMetaType::Int, 0x00015401, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       9, QMetaType::ULong, 0x00015401, uint(-1), 0,
      10, QMetaType::ULong, 0x00015401, uint(-1), 0,
      11, QMetaType::ULong, 0x00015401, uint(-1), 0,
      12, QMetaType::QReal, 0x00015401, uint(-1), 0,
      13, QMetaType::QReal, 0x00015401, uint(-1), 0,
      14, QMetaType::QReal, 0x00015401, uint(-1), 0,
      15, QMetaType::QSizeF, 0x00015401, uint(-1), 0,
      16, QMetaType::QVector2D, 0x00015401, uint(-1), 0,
      17, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      18, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      19, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      20, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      21, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      22, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      23, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      24, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      25, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      26, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      27, QMetaType::QPointF, 0x00015401, uint(-1), 0,
      28, QMetaType::QPointF, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      29,    8, 0x1,    5,  144,

 // enum data: key, value
      30, uint(QEventPoint::Unknown),
      31, uint(QEventPoint::Stationary),
      32, uint(QEventPoint::Pressed),
      33, uint(QEventPoint::Updated),
      34, uint(QEventPoint::Released),

       0        // eod
};

Q_CONSTINIT const QMetaObject QEventPoint::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQEventPointENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQEventPointENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQEventPointENDCLASS_t,
        // property 'accepted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'device'
        QtPrivate::TypeAndForceComplete<const QPointingDevice*, std::true_type>,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'uniqueId'
        QtPrivate::TypeAndForceComplete<QPointingDeviceUniqueId, std::true_type>,
        // property 'state'
        QtPrivate::TypeAndForceComplete<State, std::true_type>,
        // property 'timestamp'
        QtPrivate::TypeAndForceComplete<ulong, std::true_type>,
        // property 'pressTimestamp'
        QtPrivate::TypeAndForceComplete<ulong, std::true_type>,
        // property 'lastTimestamp'
        QtPrivate::TypeAndForceComplete<ulong, std::true_type>,
        // property 'timeHeld'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pressure'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'rotation'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'ellipseDiameters'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'velocity'
        QtPrivate::TypeAndForceComplete<QVector2D, std::true_type>,
        // property 'position'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'pressPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'grabPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'lastPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'scenePosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'scenePressPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'sceneGrabPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'sceneLastPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'globalPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'globalPressPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'globalGrabPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'globalLastPosition'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // enum 'States'
        QtPrivate::TypeAndForceComplete<QEventPoint::States, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QEventPoint, std::true_type>
    >,
    nullptr
} };

void QEventPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QEventPoint *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        case 1: *reinterpret_cast< const QPointingDevice**>(_v) = _t->device(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
        case 4: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 5: *reinterpret_cast< ulong*>(_v) = _t->timestamp(); break;
        case 6: *reinterpret_cast< ulong*>(_v) = _t->pressTimestamp(); break;
        case 7: *reinterpret_cast< ulong*>(_v) = _t->lastTimestamp(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->timeHeld(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->pressure(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 11: *reinterpret_cast< QSizeF*>(_v) = _t->ellipseDiameters(); break;
        case 12: *reinterpret_cast< QVector2D*>(_v) = _t->velocity(); break;
        case 13: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        case 14: *reinterpret_cast< QPointF*>(_v) = _t->pressPosition(); break;
        case 15: *reinterpret_cast< QPointF*>(_v) = _t->grabPosition(); break;
        case 16: *reinterpret_cast< QPointF*>(_v) = _t->lastPosition(); break;
        case 17: *reinterpret_cast< QPointF*>(_v) = _t->scenePosition(); break;
        case 18: *reinterpret_cast< QPointF*>(_v) = _t->scenePressPosition(); break;
        case 19: *reinterpret_cast< QPointF*>(_v) = _t->sceneGrabPosition(); break;
        case 20: *reinterpret_cast< QPointF*>(_v) = _t->sceneLastPosition(); break;
        case 21: *reinterpret_cast< QPointF*>(_v) = _t->globalPosition(); break;
        case 22: *reinterpret_cast< QPointF*>(_v) = _t->globalPressPosition(); break;
        case 23: *reinterpret_cast< QPointF*>(_v) = _t->globalGrabPosition(); break;
        case 24: *reinterpret_cast< QPointF*>(_v) = _t->globalLastPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<QEventPoint *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
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
QT_WARNING_POP
