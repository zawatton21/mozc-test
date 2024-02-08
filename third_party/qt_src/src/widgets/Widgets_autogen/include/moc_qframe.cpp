/****************************************************************************
** Meta object code from reading C++ file 'qframe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qframe.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qframe.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQFrameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFrameENDCLASS = QtMocHelpers::stringData(
    "QFrame",
    "frameShape",
    "Shape",
    "frameShadow",
    "Shadow",
    "lineWidth",
    "midLineWidth",
    "frameWidth",
    "frameRect",
    "NoFrame",
    "Box",
    "Panel",
    "WinPanel",
    "HLine",
    "VLine",
    "StyledPanel",
    "Plain",
    "Raised",
    "Sunken"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFrameENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[7];
    char stringdata1[11];
    char stringdata2[6];
    char stringdata3[12];
    char stringdata4[7];
    char stringdata5[10];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[10];
    char stringdata9[8];
    char stringdata10[4];
    char stringdata11[6];
    char stringdata12[9];
    char stringdata13[6];
    char stringdata14[6];
    char stringdata15[12];
    char stringdata16[6];
    char stringdata17[7];
    char stringdata18[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFrameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFrameENDCLASS_t qt_meta_stringdata_CLASSQFrameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QFrame"
        QT_MOC_LITERAL(7, 10),  // "frameShape"
        QT_MOC_LITERAL(18, 5),  // "Shape"
        QT_MOC_LITERAL(24, 11),  // "frameShadow"
        QT_MOC_LITERAL(36, 6),  // "Shadow"
        QT_MOC_LITERAL(43, 9),  // "lineWidth"
        QT_MOC_LITERAL(53, 12),  // "midLineWidth"
        QT_MOC_LITERAL(66, 10),  // "frameWidth"
        QT_MOC_LITERAL(77, 9),  // "frameRect"
        QT_MOC_LITERAL(87, 7),  // "NoFrame"
        QT_MOC_LITERAL(95, 3),  // "Box"
        QT_MOC_LITERAL(99, 5),  // "Panel"
        QT_MOC_LITERAL(105, 8),  // "WinPanel"
        QT_MOC_LITERAL(114, 5),  // "HLine"
        QT_MOC_LITERAL(120, 5),  // "VLine"
        QT_MOC_LITERAL(126, 11),  // "StyledPanel"
        QT_MOC_LITERAL(138, 5),  // "Plain"
        QT_MOC_LITERAL(144, 6),  // "Raised"
        QT_MOC_LITERAL(151, 6)   // "Sunken"
    },
    "QFrame",
    "frameShape",
    "Shape",
    "frameShadow",
    "Shadow",
    "lineWidth",
    "midLineWidth",
    "frameWidth",
    "frameRect",
    "NoFrame",
    "Box",
    "Panel",
    "WinPanel",
    "HLine",
    "VLine",
    "StyledPanel",
    "Plain",
    "Raised",
    "Sunken"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFrameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, QMetaType::Int, 0x00015103, uint(-1), 0,
       7, QMetaType::Int, 0x00015001, uint(-1), 0,
       8, QMetaType::QRect, 0x00014103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    7,   54,
       4,    4, 0x0,    3,   68,

 // enum data: key, value
       9, uint(QFrame::NoFrame),
      10, uint(QFrame::Box),
      11, uint(QFrame::Panel),
      12, uint(QFrame::WinPanel),
      13, uint(QFrame::HLine),
      14, uint(QFrame::VLine),
      15, uint(QFrame::StyledPanel),
      16, uint(QFrame::Plain),
      17, uint(QFrame::Raised),
      18, uint(QFrame::Sunken),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQFrameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFrameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFrameENDCLASS_t,
        // property 'frameShape'
        QtPrivate::TypeAndForceComplete<Shape, std::true_type>,
        // property 'frameShadow'
        QtPrivate::TypeAndForceComplete<Shadow, std::true_type>,
        // property 'lineWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'midLineWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'frameWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'frameRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // enum 'Shape'
        QtPrivate::TypeAndForceComplete<QFrame::Shape, std::true_type>,
        // enum 'Shadow'
        QtPrivate::TypeAndForceComplete<QFrame::Shadow, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFrame, std::true_type>
    >,
    nullptr
} };

void QFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QFrame *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Shape*>(_v) = _t->frameShape(); break;
        case 1: *reinterpret_cast< Shadow*>(_v) = _t->frameShadow(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->midLineWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->frameWidth(); break;
        case 5: *reinterpret_cast< QRect*>(_v) = _t->frameRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QFrame *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrameShape(*reinterpret_cast< Shape*>(_v)); break;
        case 1: _t->setFrameShadow(*reinterpret_cast< Shadow*>(_v)); break;
        case 2: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMidLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFrameRect(*reinterpret_cast< QRect*>(_v)); break;
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

const QMetaObject *QFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQFrameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
