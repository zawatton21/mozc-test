/****************************************************************************
** Meta object code from reading C++ file 'qpushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qpushbutton.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpushbutton.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPushButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPushButtonENDCLASS = QtMocHelpers::stringData(
    "QPushButton",
    "showMenu",
    "",
    "_q_popupPressed",
    "autoDefault",
    "default",
    "flat"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPushButtonENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[12];
    char stringdata5[8];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPushButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPushButtonENDCLASS_t qt_meta_stringdata_CLASSQPushButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QPushButton"
        QT_MOC_LITERAL(12, 8),  // "showMenu"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 15),  // "_q_popupPressed"
        QT_MOC_LITERAL(38, 11),  // "autoDefault"
        QT_MOC_LITERAL(50, 7),  // "default"
        QT_MOC_LITERAL(58, 4)   // "flat"
    },
    "QPushButton",
    "showMenu",
    "",
    "_q_popupPressed",
    "autoDefault",
    "default",
    "flat"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPushButtonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    4 /* Public */,
       3,    0,   27,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPushButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPushButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPushButtonENDCLASS_t,
        // property 'autoDefault'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'default'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPushButton, std::true_type>,
        // method 'showMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_popupPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPushButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMenu(); break;
        case 1: _t->d_func()->_q_popupPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->autoDefault(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDefault(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isFlat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoDefault(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDefault(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFlat(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPushButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int QPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
