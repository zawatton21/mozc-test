/****************************************************************************
** Meta object code from reading C++ file 'qabstractslider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractslider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractslider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQAbstractSliderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractSliderENDCLASS = QtMocHelpers::stringData(
    "QAbstractSlider",
    "valueChanged",
    "",
    "value",
    "sliderPressed",
    "sliderMoved",
    "position",
    "sliderReleased",
    "rangeChanged",
    "min",
    "max",
    "actionTriggered",
    "action",
    "setValue",
    "setOrientation",
    "Qt::Orientation",
    "setRange",
    "minimum",
    "maximum",
    "singleStep",
    "pageStep",
    "sliderPosition",
    "tracking",
    "orientation",
    "invertedAppearance",
    "invertedControls",
    "sliderDown"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractSliderENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[4];
    char stringdata10[4];
    char stringdata11[16];
    char stringdata12[7];
    char stringdata13[9];
    char stringdata14[15];
    char stringdata15[16];
    char stringdata16[9];
    char stringdata17[8];
    char stringdata18[8];
    char stringdata19[11];
    char stringdata20[9];
    char stringdata21[15];
    char stringdata22[9];
    char stringdata23[12];
    char stringdata24[19];
    char stringdata25[17];
    char stringdata26[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractSliderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractSliderENDCLASS_t qt_meta_stringdata_CLASSQAbstractSliderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QAbstractSlider"
        QT_MOC_LITERAL(16, 12),  // "valueChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "value"
        QT_MOC_LITERAL(36, 13),  // "sliderPressed"
        QT_MOC_LITERAL(50, 11),  // "sliderMoved"
        QT_MOC_LITERAL(62, 8),  // "position"
        QT_MOC_LITERAL(71, 14),  // "sliderReleased"
        QT_MOC_LITERAL(86, 12),  // "rangeChanged"
        QT_MOC_LITERAL(99, 3),  // "min"
        QT_MOC_LITERAL(103, 3),  // "max"
        QT_MOC_LITERAL(107, 15),  // "actionTriggered"
        QT_MOC_LITERAL(123, 6),  // "action"
        QT_MOC_LITERAL(130, 8),  // "setValue"
        QT_MOC_LITERAL(139, 14),  // "setOrientation"
        QT_MOC_LITERAL(154, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(170, 8),  // "setRange"
        QT_MOC_LITERAL(179, 7),  // "minimum"
        QT_MOC_LITERAL(187, 7),  // "maximum"
        QT_MOC_LITERAL(195, 10),  // "singleStep"
        QT_MOC_LITERAL(206, 8),  // "pageStep"
        QT_MOC_LITERAL(215, 14),  // "sliderPosition"
        QT_MOC_LITERAL(230, 8),  // "tracking"
        QT_MOC_LITERAL(239, 11),  // "orientation"
        QT_MOC_LITERAL(251, 18),  // "invertedAppearance"
        QT_MOC_LITERAL(270, 16),  // "invertedControls"
        QT_MOC_LITERAL(287, 10)   // "sliderDown"
    },
    "QAbstractSlider",
    "valueChanged",
    "",
    "value",
    "sliderPressed",
    "sliderMoved",
    "position",
    "sliderReleased",
    "rangeChanged",
    "min",
    "max",
    "actionTriggered",
    "action",
    "setValue",
    "setOrientation",
    "Qt::Orientation",
    "setRange",
    "minimum",
    "maximum",
    "singleStep",
    "pageStep",
    "sliderPosition",
    "tracking",
    "orientation",
    "invertedAppearance",
    "invertedControls",
    "sliderDown"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractSliderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   95, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,   12 /* Public */,
       4,    0,   71,    2, 0x06,   14 /* Public */,
       5,    1,   72,    2, 0x06,   15 /* Public */,
       7,    0,   75,    2, 0x06,   17 /* Public */,
       8,    2,   76,    2, 0x06,   18 /* Public */,
      11,    1,   81,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,   84,    2, 0x0a,   23 /* Public */,
      14,    1,   87,    2, 0x0a,   25 /* Public */,
      16,    2,   90,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00015103, uint(-1), 0,
      18, QMetaType::Int, 0x00015103, uint(-1), 0,
      19, QMetaType::Int, 0x00015103, uint(-1), 0,
      20, QMetaType::Int, 0x00015103, uint(-1), 0,
       3, QMetaType::Int, 0x00115103, uint(0), 0,
      21, QMetaType::Int, 0x00015103, uint(2), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 15, 0x0001510b, uint(-1), 0,
      24, QMetaType::Bool, 0x00015103, uint(-1), 0,
      25, QMetaType::Bool, 0x00015103, uint(-1), 0,
      26, QMetaType::Bool, 0x00014103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractSliderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractSliderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractSliderENDCLASS_t,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'singleStep'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pageStep'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sliderPosition'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tracking'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'invertedAppearance'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'invertedControls'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sliderDown'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractSlider, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'actionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>,
        // method 'setRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QAbstractSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sliderPressed(); break;
        case 2: _t->sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->sliderReleased(); break;
        case 4: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->actionTriggered((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setOrientation((*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 8: _t->setRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractSlider::*)(int );
            if (_t _q_method = &QAbstractSlider::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractSlider::*)();
            if (_t _q_method = &QAbstractSlider::sliderPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAbstractSlider::*)(int );
            if (_t _q_method = &QAbstractSlider::sliderMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractSlider::*)();
            if (_t _q_method = &QAbstractSlider::sliderReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAbstractSlider::*)(int , int );
            if (_t _q_method = &QAbstractSlider::rangeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAbstractSlider::*)(int );
            if (_t _q_method = &QAbstractSlider::actionTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->pageStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->sliderPosition(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 7: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->invertedAppearance(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->invertedControls(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isSliderDown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPageStep(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSliderPosition(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 8: _t->setInvertedAppearance(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setInvertedControls(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSliderDown(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAbstractSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractSliderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QAbstractSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QAbstractSlider::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAbstractSlider::sliderMoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QAbstractSlider::rangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractSlider::actionTriggered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
