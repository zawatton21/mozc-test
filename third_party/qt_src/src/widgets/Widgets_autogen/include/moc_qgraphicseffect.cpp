/****************************************************************************
** Meta object code from reading C++ file 'qgraphicseffect.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../effects/qgraphicseffect.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicseffect.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsEffect",
    "enabledChanged",
    "",
    "enabled",
    "setEnabled",
    "enable",
    "update",
    "ChangeFlags",
    "ChangeFlag",
    "SourceAttached",
    "SourceDetached",
    "SourceBoundingRectChanged",
    "SourceInvalidated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[11];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[15];
    char stringdata10[15];
    char stringdata11[26];
    char stringdata12[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QGraphicsEffect"
        QT_MOC_LITERAL(16, 14),  // "enabledChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 7),  // "enabled"
        QT_MOC_LITERAL(40, 10),  // "setEnabled"
        QT_MOC_LITERAL(51, 6),  // "enable"
        QT_MOC_LITERAL(58, 6),  // "update"
        QT_MOC_LITERAL(65, 11),  // "ChangeFlags"
        QT_MOC_LITERAL(77, 10),  // "ChangeFlag"
        QT_MOC_LITERAL(88, 14),  // "SourceAttached"
        QT_MOC_LITERAL(103, 14),  // "SourceDetached"
        QT_MOC_LITERAL(118, 25),  // "SourceBoundingRectChanged"
        QT_MOC_LITERAL(144, 17)   // "SourceInvalidated"
    },
    "QGraphicsEffect",
    "enabledChanged",
    "",
    "enabled",
    "setEnabled",
    "enable",
    "update",
    "ChangeFlags",
    "ChangeFlag",
    "SourceAttached",
    "SourceDetached",
    "SourceBoundingRectChanged",
    "SourceInvalidated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsEffectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   39, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x0a,    5 /* Public */,
       6,    0,   38,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,

 // enums: name, alias, flags, count, data
       7,    8, 0x1,    4,   49,

 // enum data: key, value
       9, uint(QGraphicsEffect::SourceAttached),
      10, uint(QGraphicsEffect::SourceDetached),
      11, uint(QGraphicsEffect::SourceBoundingRectChanged),
      12, uint(QGraphicsEffect::SourceInvalidated),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsEffectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS_t,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'ChangeFlags'
        QtPrivate::TypeAndForceComplete<QGraphicsEffect::ChangeFlags, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsEffect, std::true_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsEffect::*)(bool );
            if (_t _q_method = &QGraphicsEffect::enabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsEffectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGraphicsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsEffect::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsColorizeEffect",
    "colorChanged",
    "",
    "color",
    "strengthChanged",
    "strength",
    "setColor",
    "c",
    "setStrength"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[24];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[2];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QGraphicsColorizeEffect"
        QT_MOC_LITERAL(24, 12),  // "colorChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "color"
        QT_MOC_LITERAL(44, 15),  // "strengthChanged"
        QT_MOC_LITERAL(60, 8),  // "strength"
        QT_MOC_LITERAL(69, 8),  // "setColor"
        QT_MOC_LITERAL(78, 1),  // "c"
        QT_MOC_LITERAL(80, 11)   // "setStrength"
    },
    "QGraphicsColorizeEffect",
    "colorChanged",
    "",
    "color",
    "strengthChanged",
    "strength",
    "setColor",
    "c",
    "setStrength"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsColorizeEffectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    3 /* Public */,
       4,    1,   41,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,    7 /* Public */,
       8,    1,   47,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QReal,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QReal,    5,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00015103, uint(0), 0,
       5, QMetaType::QReal, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsColorizeEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsEffect::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsColorizeEffectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS_t,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'strength'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsColorizeEffect, std::true_type>,
        // method 'colorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'strengthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setStrength'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void QGraphicsColorizeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->strengthChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->setStrength((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsColorizeEffect::*)(const QColor & );
            if (_t _q_method = &QGraphicsColorizeEffect::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsColorizeEffect::*)(qreal );
            if (_t _q_method = &QGraphicsColorizeEffect::strengthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->strength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setStrength(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsColorizeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsColorizeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsColorizeEffectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
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
void QGraphicsColorizeEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsColorizeEffect::strengthChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsBlurEffect",
    "blurRadiusChanged",
    "",
    "blurRadius",
    "blurHintsChanged",
    "BlurHints",
    "hints",
    "setBlurRadius",
    "setBlurHints",
    "blurHints",
    "BlurHint",
    "PerformanceHint",
    "QualityHint",
    "AnimationHint"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[20];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[17];
    char stringdata5[10];
    char stringdata6[6];
    char stringdata7[14];
    char stringdata8[13];
    char stringdata9[10];
    char stringdata10[9];
    char stringdata11[16];
    char stringdata12[12];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QGraphicsBlurEffect"
        QT_MOC_LITERAL(20, 17),  // "blurRadiusChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 10),  // "blurRadius"
        QT_MOC_LITERAL(50, 16),  // "blurHintsChanged"
        QT_MOC_LITERAL(67, 9),  // "BlurHints"
        QT_MOC_LITERAL(77, 5),  // "hints"
        QT_MOC_LITERAL(83, 13),  // "setBlurRadius"
        QT_MOC_LITERAL(97, 12),  // "setBlurHints"
        QT_MOC_LITERAL(110, 9),  // "blurHints"
        QT_MOC_LITERAL(120, 8),  // "BlurHint"
        QT_MOC_LITERAL(129, 15),  // "PerformanceHint"
        QT_MOC_LITERAL(145, 11),  // "QualityHint"
        QT_MOC_LITERAL(157, 13)   // "AnimationHint"
    },
    "QGraphicsBlurEffect",
    "blurRadiusChanged",
    "",
    "blurRadius",
    "blurHintsChanged",
    "BlurHints",
    "hints",
    "setBlurRadius",
    "setBlurHints",
    "blurHints",
    "BlurHint",
    "PerformanceHint",
    "QualityHint",
    "AnimationHint"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsBlurEffectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    5 /* Public */,
       4,    1,   41,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   44,    2, 0x0a,    9 /* Public */,
       8,    1,   47,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00015103, uint(0), 0,
       9, 0x80000000 | 5, 0x0001510b, uint(1), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,   70,
       5,   10, 0x1,    3,   76,

 // enum data: key, value
      11, uint(QGraphicsBlurEffect::PerformanceHint),
      12, uint(QGraphicsBlurEffect::QualityHint),
      13, uint(QGraphicsBlurEffect::AnimationHint),
      11, uint(QGraphicsBlurEffect::PerformanceHint),
      12, uint(QGraphicsBlurEffect::QualityHint),
      13, uint(QGraphicsBlurEffect::AnimationHint),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsBlurEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsEffect::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsBlurEffectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS_t,
        // property 'blurRadius'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'blurHints'
        QtPrivate::TypeAndForceComplete<BlurHints, std::true_type>,
        // enum 'BlurHint'
        QtPrivate::TypeAndForceComplete<QGraphicsBlurEffect::BlurHint, std::true_type>,
        // enum 'BlurHints'
        QtPrivate::TypeAndForceComplete<QGraphicsBlurEffect::BlurHints, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsBlurEffect, std::true_type>,
        // method 'blurRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'blurHintsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BlurHints, std::false_type>,
        // method 'setBlurRadius'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setBlurHints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BlurHints, std::false_type>
    >,
    nullptr
} };

void QGraphicsBlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsBlurEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->blurRadiusChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 1: _t->blurHintsChanged((*reinterpret_cast< std::add_pointer_t<BlurHints>>(_a[1]))); break;
        case 2: _t->setBlurRadius((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->setBlurHints((*reinterpret_cast< std::add_pointer_t<BlurHints>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsBlurEffect::*)(qreal );
            if (_t _q_method = &QGraphicsBlurEffect::blurRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsBlurEffect::*)(BlurHints );
            if (_t _q_method = &QGraphicsBlurEffect::blurHintsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsBlurEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->blurRadius(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->blurHints()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsBlurEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setBlurHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsBlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsBlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsBlurEffectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsBlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
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
void QGraphicsBlurEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsBlurEffect::blurHintsChanged(BlurHints _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsDropShadowEffect",
    "offsetChanged",
    "",
    "offset",
    "blurRadiusChanged",
    "blurRadius",
    "colorChanged",
    "color",
    "setOffset",
    "ofs",
    "dx",
    "dy",
    "d",
    "setXOffset",
    "setYOffset",
    "setBlurRadius",
    "setColor",
    "xOffset",
    "yOffset"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[26];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[18];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[6];
    char stringdata8[10];
    char stringdata9[4];
    char stringdata10[3];
    char stringdata11[3];
    char stringdata12[2];
    char stringdata13[11];
    char stringdata14[11];
    char stringdata15[14];
    char stringdata16[9];
    char stringdata17[8];
    char stringdata18[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "QGraphicsDropShadowEffect"
        QT_MOC_LITERAL(26, 13),  // "offsetChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 6),  // "offset"
        QT_MOC_LITERAL(48, 17),  // "blurRadiusChanged"
        QT_MOC_LITERAL(66, 10),  // "blurRadius"
        QT_MOC_LITERAL(77, 12),  // "colorChanged"
        QT_MOC_LITERAL(90, 5),  // "color"
        QT_MOC_LITERAL(96, 9),  // "setOffset"
        QT_MOC_LITERAL(106, 3),  // "ofs"
        QT_MOC_LITERAL(110, 2),  // "dx"
        QT_MOC_LITERAL(113, 2),  // "dy"
        QT_MOC_LITERAL(116, 1),  // "d"
        QT_MOC_LITERAL(118, 10),  // "setXOffset"
        QT_MOC_LITERAL(129, 10),  // "setYOffset"
        QT_MOC_LITERAL(140, 13),  // "setBlurRadius"
        QT_MOC_LITERAL(154, 8),  // "setColor"
        QT_MOC_LITERAL(163, 7),  // "xOffset"
        QT_MOC_LITERAL(171, 7)   // "yOffset"
    },
    "QGraphicsDropShadowEffect",
    "offsetChanged",
    "",
    "offset",
    "blurRadiusChanged",
    "blurRadius",
    "colorChanged",
    "color",
    "setOffset",
    "ofs",
    "dx",
    "dy",
    "d",
    "setXOffset",
    "setYOffset",
    "setBlurRadius",
    "setColor",
    "xOffset",
    "yOffset"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsDropShadowEffectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    6 /* Public */,
       4,    1,   77,    2, 0x06,    8 /* Public */,
       6,    1,   80,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   83,    2, 0x0a,   12 /* Public */,
       8,    2,   86,    2, 0x0a,   14 /* Public */,
       8,    1,   91,    2, 0x0a,   17 /* Public */,
      13,    1,   94,    2, 0x0a,   19 /* Public */,
      14,    1,   97,    2, 0x0a,   21 /* Public */,
      15,    1,  100,    2, 0x0a,   23 /* Public */,
      16,    1,  103,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QColor,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   10,   11,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QColor,    7,

 // properties: name, type, flags
       3, QMetaType::QPointF, 0x00015103, uint(0), 0,
      17, QMetaType::QReal, 0x00015103, uint(0), 0,
      18, QMetaType::QReal, 0x00015103, uint(0), 0,
       5, QMetaType::QReal, 0x00015103, uint(1), 0,
       7, QMetaType::QColor, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsDropShadowEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsEffect::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsDropShadowEffectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS_t,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'xOffset'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'yOffset'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'blurRadius'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsDropShadowEffect, std::true_type>,
        // method 'offsetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'blurRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'colorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'setOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setXOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setYOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setBlurRadius'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void QGraphicsDropShadowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 1: _t->blurRadiusChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->setOffset((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 4: _t->setOffset((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2]))); break;
        case 5: _t->setOffset((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->setXOffset((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->setYOffset((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->setBlurRadius((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 9: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsDropShadowEffect::*)(const QPointF & );
            if (_t _q_method = &QGraphicsDropShadowEffect::offsetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsDropShadowEffect::*)(qreal );
            if (_t _q_method = &QGraphicsDropShadowEffect::blurRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGraphicsDropShadowEffect::*)(const QColor & );
            if (_t _q_method = &QGraphicsDropShadowEffect::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->offset(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xOffset(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yOffset(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->blurRadius(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setXOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsDropShadowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsDropShadowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsDropShadowEffectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsDropShadowEffect::offsetChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsDropShadowEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsDropShadowEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsOpacityEffect",
    "opacityChanged",
    "",
    "opacity",
    "opacityMaskChanged",
    "mask",
    "setOpacity",
    "setOpacityMask",
    "opacityMask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[23];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[15];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "QGraphicsOpacityEffect"
        QT_MOC_LITERAL(23, 14),  // "opacityChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 7),  // "opacity"
        QT_MOC_LITERAL(47, 18),  // "opacityMaskChanged"
        QT_MOC_LITERAL(66, 4),  // "mask"
        QT_MOC_LITERAL(71, 10),  // "setOpacity"
        QT_MOC_LITERAL(82, 14),  // "setOpacityMask"
        QT_MOC_LITERAL(97, 11)   // "opacityMask"
    },
    "QGraphicsOpacityEffect",
    "opacityChanged",
    "",
    "opacity",
    "opacityMaskChanged",
    "mask",
    "setOpacity",
    "setOpacityMask",
    "opacityMask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsOpacityEffectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    3 /* Public */,
       4,    1,   41,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,    7 /* Public */,
       7,    1,   47,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QBrush,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QBrush,    5,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00015103, uint(0), 0,
       8, QMetaType::QBrush, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsOpacityEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsEffect::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsOpacityEffectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS_t,
        // property 'opacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'opacityMask'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsOpacityEffect, std::true_type>,
        // method 'opacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'opacityMaskChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBrush &, std::false_type>,
        // method 'setOpacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setOpacityMask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBrush &, std::false_type>
    >,
    nullptr
} };

void QGraphicsOpacityEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 1: _t->opacityMaskChanged((*reinterpret_cast< std::add_pointer_t<QBrush>>(_a[1]))); break;
        case 2: _t->setOpacity((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->setOpacityMask((*reinterpret_cast< std::add_pointer_t<QBrush>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsOpacityEffect::*)(qreal );
            if (_t _q_method = &QGraphicsOpacityEffect::opacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsOpacityEffect::*)(const QBrush & );
            if (_t _q_method = &QGraphicsOpacityEffect::opacityMaskChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->opacityMask(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setOpacityMask(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsOpacityEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsOpacityEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsOpacityEffectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsOpacityEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
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
void QGraphicsOpacityEffect::opacityChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsOpacityEffect::opacityMaskChanged(const QBrush & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
