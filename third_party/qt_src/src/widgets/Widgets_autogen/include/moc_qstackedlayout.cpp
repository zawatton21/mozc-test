/****************************************************************************
** Meta object code from reading C++ file 'qstackedlayout.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qstackedlayout.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstackedlayout.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQStackedLayoutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQStackedLayoutENDCLASS = QtMocHelpers::stringData(
    "QStackedLayout",
    "widgetRemoved",
    "",
    "index",
    "currentChanged",
    "setCurrentIndex",
    "setCurrentWidget",
    "QWidget*",
    "w",
    "currentIndex",
    "stackingMode",
    "StackingMode",
    "StackOne",
    "StackAll"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQStackedLayoutENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[15];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[9];
    char stringdata8[2];
    char stringdata9[13];
    char stringdata10[13];
    char stringdata11[13];
    char stringdata12[9];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQStackedLayoutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQStackedLayoutENDCLASS_t qt_meta_stringdata_CLASSQStackedLayoutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QStackedLayout"
        QT_MOC_LITERAL(15, 13),  // "widgetRemoved"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "index"
        QT_MOC_LITERAL(36, 14),  // "currentChanged"
        QT_MOC_LITERAL(51, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(67, 16),  // "setCurrentWidget"
        QT_MOC_LITERAL(84, 8),  // "QWidget*"
        QT_MOC_LITERAL(93, 1),  // "w"
        QT_MOC_LITERAL(95, 12),  // "currentIndex"
        QT_MOC_LITERAL(108, 12),  // "stackingMode"
        QT_MOC_LITERAL(121, 12),  // "StackingMode"
        QT_MOC_LITERAL(134, 8),  // "StackOne"
        QT_MOC_LITERAL(143, 8)   // "StackAll"
    },
    "QStackedLayout",
    "widgetRemoved",
    "",
    "index",
    "currentChanged",
    "setCurrentIndex",
    "setCurrentWidget",
    "QWidget*",
    "w",
    "currentIndex",
    "stackingMode",
    "StackingMode",
    "StackOne",
    "StackAll"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQStackedLayoutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    4 /* Public */,
       4,    1,   41,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   44,    2, 0x0a,    8 /* Public */,
       6,    1,   47,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00015103, uint(1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    2,   65,

 // enum data: key, value
      12, uint(QStackedLayout::StackOne),
      13, uint(QStackedLayout::StackAll),

       0        // eod
};

Q_CONSTINIT const QMetaObject QStackedLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQStackedLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQStackedLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQStackedLayoutENDCLASS_t,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'stackingMode'
        QtPrivate::TypeAndForceComplete<StackingMode, std::true_type>,
        // enum 'StackingMode'
        QtPrivate::TypeAndForceComplete<QStackedLayout::StackingMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QStackedLayout, std::true_type>,
        // method 'widgetRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void QStackedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QStackedLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->widgetRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setCurrentWidget((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QStackedLayout::*)(int );
            if (_t _q_method = &QStackedLayout::widgetRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QStackedLayout::*)(int );
            if (_t _q_method = &QStackedLayout::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QStackedLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 1: *reinterpret_cast< StackingMode*>(_v) = _t->stackingMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QStackedLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setStackingMode(*reinterpret_cast< StackingMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QStackedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStackedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQStackedLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLayout::qt_metacast(_clname);
}

int QStackedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QStackedLayout::widgetRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QStackedLayout::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
