/****************************************************************************
** Meta object code from reading C++ file 'qlayout.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qlayout.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlayout.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQLayoutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQLayoutENDCLASS = QtMocHelpers::stringData(
    "QLayout",
    "spacing",
    "contentsMargins",
    "QMargins",
    "sizeConstraint",
    "SizeConstraint",
    "SetDefaultConstraint",
    "SetNoConstraint",
    "SetMinimumSize",
    "SetFixedSize",
    "SetMaximumSize",
    "SetMinAndMaxSize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQLayoutENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[8];
    char stringdata1[8];
    char stringdata2[16];
    char stringdata3[9];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[21];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[13];
    char stringdata10[15];
    char stringdata11[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQLayoutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQLayoutENDCLASS_t qt_meta_stringdata_CLASSQLayoutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QLayout"
        QT_MOC_LITERAL(8, 7),  // "spacing"
        QT_MOC_LITERAL(16, 15),  // "contentsMargins"
        QT_MOC_LITERAL(32, 8),  // "QMargins"
        QT_MOC_LITERAL(41, 14),  // "sizeConstraint"
        QT_MOC_LITERAL(56, 14),  // "SizeConstraint"
        QT_MOC_LITERAL(71, 20),  // "SetDefaultConstraint"
        QT_MOC_LITERAL(92, 15),  // "SetNoConstraint"
        QT_MOC_LITERAL(108, 14),  // "SetMinimumSize"
        QT_MOC_LITERAL(123, 12),  // "SetFixedSize"
        QT_MOC_LITERAL(136, 14),  // "SetMaximumSize"
        QT_MOC_LITERAL(151, 16)   // "SetMinAndMaxSize"
    },
    "QLayout",
    "spacing",
    "contentsMargins",
    "QMargins",
    "sizeConstraint",
    "SizeConstraint",
    "SetDefaultConstraint",
    "SetNoConstraint",
    "SetMinimumSize",
    "SetFixedSize",
    "SetMaximumSize",
    "SetMinAndMaxSize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQLayoutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001510f, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    6,   34,

 // enum data: key, value
       6, uint(QLayout::SetDefaultConstraint),
       7, uint(QLayout::SetNoConstraint),
       8, uint(QLayout::SetMinimumSize),
       9, uint(QLayout::SetFixedSize),
      10, uint(QLayout::SetMaximumSize),
      11, uint(QLayout::SetMinAndMaxSize),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQLayoutENDCLASS_t,
        // property 'spacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'contentsMargins'
        QtPrivate::TypeAndForceComplete<QMargins, std::true_type>,
        // property 'sizeConstraint'
        QtPrivate::TypeAndForceComplete<SizeConstraint, std::true_type>,
        // enum 'SizeConstraint'
        QtPrivate::TypeAndForceComplete<QLayout::SizeConstraint, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLayout, std::true_type>
    >,
    nullptr
} };

void QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->spacing(); break;
        case 1: *reinterpret_cast< QMargins*>(_v) = _t->contentsMargins(); break;
        case 2: *reinterpret_cast< SizeConstraint*>(_v) = _t->sizeConstraint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setContentsMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 2: _t->setSizeConstraint(*reinterpret_cast< SizeConstraint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 1: _t->unsetContentsMargins(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QLayoutItem"))
        return static_cast< QLayoutItem*>(this);
    return QObject::qt_metacast(_clname);
}

int QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
