/****************************************************************************
** Meta object code from reading C++ file 'qvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qvalidator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalidator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQValidatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQValidatorENDCLASS = QtMocHelpers::stringData(
    "QValidator",
    "changed",
    "",
    "State",
    "Invalid",
    "Intermediate",
    "Acceptable"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQValidatorENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQValidatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQValidatorENDCLASS_t qt_meta_stringdata_CLASSQValidatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QValidator"
        QT_MOC_LITERAL(11, 7),  // "changed"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 5),  // "State"
        QT_MOC_LITERAL(26, 7),  // "Invalid"
        QT_MOC_LITERAL(34, 12),  // "Intermediate"
        QT_MOC_LITERAL(47, 10)   // "Acceptable"
    },
    "QValidator",
    "changed",
    "",
    "State",
    "Invalid",
    "Intermediate",
    "Acceptable"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   21, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,   26,

 // enum data: key, value
       4, uint(QValidator::Invalid),
       5, uint(QValidator::Intermediate),
       6, uint(QValidator::Acceptable),

       0        // eod
};

Q_CONSTINIT const QMetaObject QValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQValidatorENDCLASS_t,
        // enum 'State'
        QtPrivate::TypeAndForceComplete<QValidator::State, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QValidator, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QValidator::*)();
            if (_t _q_method = &QValidator::changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}

// SIGNAL 0
void QValidator::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQIntValidatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQIntValidatorENDCLASS = QtMocHelpers::stringData(
    "QIntValidator",
    "bottomChanged",
    "",
    "bottom",
    "topChanged",
    "top"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQIntValidatorENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQIntValidatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQIntValidatorENDCLASS_t qt_meta_stringdata_CLASSQIntValidatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QIntValidator"
        QT_MOC_LITERAL(14, 13),  // "bottomChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 6),  // "bottom"
        QT_MOC_LITERAL(36, 10),  // "topChanged"
        QT_MOC_LITERAL(47, 3)   // "top"
    },
    "QIntValidator",
    "bottomChanged",
    "",
    "bottom",
    "topChanged",
    "top"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQIntValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    3 /* Public */,
       4,    1,   29,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(0), 0,
       5, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QIntValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_CLASSQIntValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQIntValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQIntValidatorENDCLASS_t,
        // property 'bottom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'top'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QIntValidator, std::true_type>,
        // method 'bottomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'topChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QIntValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QIntValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bottomChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->topChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QIntValidator::*)(int );
            if (_t _q_method = &QIntValidator::bottomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QIntValidator::*)(int );
            if (_t _q_method = &QIntValidator::topChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QIntValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->top(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QIntValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBottom(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QIntValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIntValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQIntValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int QIntValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QIntValidator::bottomChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIntValidator::topChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS = QtMocHelpers::stringData(
    "QDoubleValidator",
    "bottomChanged",
    "",
    "bottom",
    "topChanged",
    "top",
    "decimalsChanged",
    "decimals",
    "notationChanged",
    "QDoubleValidator::Notation",
    "notation",
    "Notation",
    "StandardNotation",
    "ScientificNotation"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[17];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[4];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[16];
    char stringdata9[27];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[17];
    char stringdata13[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS_t qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QDoubleValidator"
        QT_MOC_LITERAL(17, 13),  // "bottomChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 6),  // "bottom"
        QT_MOC_LITERAL(39, 10),  // "topChanged"
        QT_MOC_LITERAL(50, 3),  // "top"
        QT_MOC_LITERAL(54, 15),  // "decimalsChanged"
        QT_MOC_LITERAL(70, 8),  // "decimals"
        QT_MOC_LITERAL(79, 15),  // "notationChanged"
        QT_MOC_LITERAL(95, 26),  // "QDoubleValidator::Notation"
        QT_MOC_LITERAL(122, 8),  // "notation"
        QT_MOC_LITERAL(131, 8),  // "Notation"
        QT_MOC_LITERAL(140, 16),  // "StandardNotation"
        QT_MOC_LITERAL(157, 18)   // "ScientificNotation"
    },
    "QDoubleValidator",
    "bottomChanged",
    "",
    "bottom",
    "topChanged",
    "top",
    "decimalsChanged",
    "decimals",
    "notationChanged",
    "QDoubleValidator::Notation",
    "notation",
    "Notation",
    "StandardNotation",
    "ScientificNotation"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDoubleValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   50, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    6 /* Public */,
       4,    1,   41,    2, 0x06,    8 /* Public */,
       6,    1,   44,    2, 0x06,   10 /* Public */,
       8,    1,   47,    2, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00015103, uint(0), 0,
       5, QMetaType::Double, 0x00015103, uint(1), 0,
       7, QMetaType::Int, 0x00015103, uint(2), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(3), 0,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    2,   75,

 // enum data: key, value
      12, uint(QDoubleValidator::StandardNotation),
      13, uint(QDoubleValidator::ScientificNotation),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDoubleValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDoubleValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS_t,
        // property 'bottom'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'top'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'decimals'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'notation'
        QtPrivate::TypeAndForceComplete<Notation, std::true_type>,
        // enum 'Notation'
        QtPrivate::TypeAndForceComplete<QDoubleValidator::Notation, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDoubleValidator, std::true_type>,
        // method 'bottomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'topChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'decimalsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'notationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDoubleValidator::Notation, std::false_type>
    >,
    nullptr
} };

void QDoubleValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDoubleValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bottomChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->topChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->decimalsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->notationChanged((*reinterpret_cast< std::add_pointer_t<QDoubleValidator::Notation>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDoubleValidator::*)(double );
            if (_t _q_method = &QDoubleValidator::bottomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDoubleValidator::*)(double );
            if (_t _q_method = &QDoubleValidator::topChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QDoubleValidator::*)(int );
            if (_t _q_method = &QDoubleValidator::decimalsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QDoubleValidator::*)(QDoubleValidator::Notation );
            if (_t _q_method = &QDoubleValidator::notationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDoubleValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->bottom(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 3: *reinterpret_cast< Notation*>(_v) = _t->notation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDoubleValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBottom(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setNotation(*reinterpret_cast< Notation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QDoubleValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDoubleValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int QDoubleValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QDoubleValidator::bottomChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleValidator::topChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDoubleValidator::decimalsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDoubleValidator::notationChanged(QDoubleValidator::Notation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS = QtMocHelpers::stringData(
    "QRegularExpressionValidator",
    "regularExpressionChanged",
    "",
    "re",
    "setRegularExpression",
    "regularExpression"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[28];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[21];
    char stringdata5[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS_t qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "QRegularExpressionValidator"
        QT_MOC_LITERAL(28, 24),  // "regularExpressionChanged"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 2),  // "re"
        QT_MOC_LITERAL(57, 20),  // "setRegularExpression"
        QT_MOC_LITERAL(78, 17)   // "regularExpression"
    },
    "QRegularExpressionValidator",
    "regularExpressionChanged",
    "",
    "re",
    "setRegularExpression",
    "regularExpression"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQRegularExpressionValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRegularExpression,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QRegularExpression,    3,

 // properties: name, type, flags
       5, QMetaType::QRegularExpression, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QRegularExpressionValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQRegularExpressionValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS_t,
        // property 'regularExpression'
        QtPrivate::TypeAndForceComplete<QRegularExpression, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QRegularExpressionValidator, std::true_type>,
        // method 'regularExpressionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>,
        // method 'setRegularExpression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>
    >,
    nullptr
} };

void QRegularExpressionValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QRegularExpressionValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->regularExpressionChanged((*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[1]))); break;
        case 1: _t->setRegularExpression((*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QRegularExpressionValidator::*)(const QRegularExpression & );
            if (_t _q_method = &QRegularExpressionValidator::regularExpressionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QRegularExpressionValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRegularExpression*>(_v) = _t->regularExpression(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QRegularExpressionValidator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegularExpression(*reinterpret_cast< QRegularExpression*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QRegularExpressionValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRegularExpressionValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQRegularExpressionValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int QRegularExpressionValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QRegularExpressionValidator::regularExpressionChanged(const QRegularExpression & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
