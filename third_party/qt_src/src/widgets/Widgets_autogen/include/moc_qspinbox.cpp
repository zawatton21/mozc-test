/****************************************************************************
** Meta object code from reading C++ file 'qspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qspinbox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspinbox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSpinBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSpinBoxENDCLASS = QtMocHelpers::stringData(
    "QSpinBox",
    "valueChanged",
    "",
    "textChanged",
    "setValue",
    "val",
    "suffix",
    "prefix",
    "cleanText",
    "minimum",
    "maximum",
    "singleStep",
    "stepType",
    "StepType",
    "value",
    "displayIntegerBase"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSpinBoxENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[10];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[6];
    char stringdata15[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSpinBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSpinBoxENDCLASS_t qt_meta_stringdata_CLASSQSpinBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "QSpinBox"
        QT_MOC_LITERAL(9, 12),  // "valueChanged"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "textChanged"
        QT_MOC_LITERAL(35, 8),  // "setValue"
        QT_MOC_LITERAL(44, 3),  // "val"
        QT_MOC_LITERAL(48, 6),  // "suffix"
        QT_MOC_LITERAL(55, 6),  // "prefix"
        QT_MOC_LITERAL(62, 9),  // "cleanText"
        QT_MOC_LITERAL(72, 7),  // "minimum"
        QT_MOC_LITERAL(80, 7),  // "maximum"
        QT_MOC_LITERAL(88, 10),  // "singleStep"
        QT_MOC_LITERAL(99, 8),  // "stepType"
        QT_MOC_LITERAL(108, 8),  // "StepType"
        QT_MOC_LITERAL(117, 5),  // "value"
        QT_MOC_LITERAL(123, 18)   // "displayIntegerBase"
    },
    "QSpinBox",
    "valueChanged",
    "",
    "textChanged",
    "setValue",
    "val",
    "suffix",
    "prefix",
    "cleanText",
    "minimum",
    "maximum",
    "singleStep",
    "stepType",
    "StepType",
    "value",
    "displayIntegerBase"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   10 /* Public */,
       3,    1,   35,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   38,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::QString, 0x00015001, uint(-1), 0,
       9, QMetaType::Int, 0x00015103, uint(-1), 0,
      10, QMetaType::Int, 0x00015103, uint(-1), 0,
      11, QMetaType::Int, 0x00015103, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(-1), 0,
      14, QMetaType::Int, 0x00115103, uint(0), 0,
      15, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSpinBoxENDCLASS_t,
        // property 'suffix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'prefix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cleanText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'singleStep'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'stepType'
        QtPrivate::TypeAndForceComplete<StepType, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'displayIntegerBase'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSpinBox, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSpinBox::*)(int );
            if (_t _q_method = &QSpinBox::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSpinBox::*)(const QString & );
            if (_t _q_method = &QSpinBox::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 6: *reinterpret_cast< StepType*>(_v) = _t->stepType(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->displayIntegerBase(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setStepType(*reinterpret_cast< StepType*>(_v)); break;
        case 7: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setDisplayIntegerBase(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QSpinBox::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSpinBox::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS = QtMocHelpers::stringData(
    "QDoubleSpinBox",
    "valueChanged",
    "",
    "textChanged",
    "setValue",
    "val",
    "prefix",
    "suffix",
    "cleanText",
    "decimals",
    "minimum",
    "maximum",
    "singleStep",
    "stepType",
    "StepType",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[10];
    char stringdata9[9];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[11];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS_t qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QDoubleSpinBox"
        QT_MOC_LITERAL(15, 12),  // "valueChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 11),  // "textChanged"
        QT_MOC_LITERAL(41, 8),  // "setValue"
        QT_MOC_LITERAL(50, 3),  // "val"
        QT_MOC_LITERAL(54, 6),  // "prefix"
        QT_MOC_LITERAL(61, 6),  // "suffix"
        QT_MOC_LITERAL(68, 9),  // "cleanText"
        QT_MOC_LITERAL(78, 8),  // "decimals"
        QT_MOC_LITERAL(87, 7),  // "minimum"
        QT_MOC_LITERAL(95, 7),  // "maximum"
        QT_MOC_LITERAL(103, 10),  // "singleStep"
        QT_MOC_LITERAL(114, 8),  // "stepType"
        QT_MOC_LITERAL(123, 8),  // "StepType"
        QT_MOC_LITERAL(132, 5)   // "value"
    },
    "QDoubleSpinBox",
    "valueChanged",
    "",
    "textChanged",
    "setValue",
    "val",
    "prefix",
    "suffix",
    "cleanText",
    "decimals",
    "minimum",
    "maximum",
    "singleStep",
    "stepType",
    "StepType",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDoubleSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   10 /* Public */,
       3,    1,   35,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   38,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::QString, 0x00015001, uint(-1), 0,
       9, QMetaType::Int, 0x00015103, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::Double, 0x00015103, uint(-1), 0,
      12, QMetaType::Double, 0x00015103, uint(-1), 0,
      13, 0x80000000 | 14, 0x0001510b, uint(-1), 0,
      15, QMetaType::Double, 0x00115103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDoubleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDoubleSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS_t,
        // property 'prefix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'suffix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cleanText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'decimals'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'singleStep'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'stepType'
        QtPrivate::TypeAndForceComplete<StepType, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDoubleSpinBox, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void QDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDoubleSpinBox::*)(double );
            if (_t _q_method = &QDoubleSpinBox::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDoubleSpinBox::*)(const QString & );
            if (_t _q_method = &QDoubleSpinBox::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 7: *reinterpret_cast< StepType*>(_v) = _t->stepType(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setStepType(*reinterpret_cast< StepType*>(_v)); break;
        case 8: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDoubleSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QDoubleSpinBox::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleSpinBox::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
