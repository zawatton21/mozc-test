/****************************************************************************
** Meta object code from reading C++ file 'qabstractscrollarea.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractscrollarea.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractscrollarea.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS = QtMocHelpers::stringData(
    "QAbstractScrollArea",
    "_q_hslide",
    "",
    "_q_vslide",
    "_q_showOrHideScrollBars",
    "verticalScrollBarPolicy",
    "Qt::ScrollBarPolicy",
    "horizontalScrollBarPolicy",
    "sizeAdjustPolicy",
    "SizeAdjustPolicy",
    "AdjustIgnored",
    "AdjustToContentsOnFirstShow",
    "AdjustToContents"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[20];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[20];
    char stringdata7[26];
    char stringdata8[17];
    char stringdata9[17];
    char stringdata10[14];
    char stringdata11[28];
    char stringdata12[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS_t qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QAbstractScrollArea"
        QT_MOC_LITERAL(20, 9),  // "_q_hslide"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 9),  // "_q_vslide"
        QT_MOC_LITERAL(41, 23),  // "_q_showOrHideScrollBars"
        QT_MOC_LITERAL(65, 23),  // "verticalScrollBarPolicy"
        QT_MOC_LITERAL(89, 19),  // "Qt::ScrollBarPolicy"
        QT_MOC_LITERAL(109, 25),  // "horizontalScrollBarPolicy"
        QT_MOC_LITERAL(135, 16),  // "sizeAdjustPolicy"
        QT_MOC_LITERAL(152, 16),  // "SizeAdjustPolicy"
        QT_MOC_LITERAL(169, 13),  // "AdjustIgnored"
        QT_MOC_LITERAL(183, 27),  // "AdjustToContentsOnFirstShow"
        QT_MOC_LITERAL(211, 16)   // "AdjustToContents"
    },
    "QAbstractScrollArea",
    "_q_hslide",
    "",
    "_q_vslide",
    "_q_showOrHideScrollBars",
    "verticalScrollBarPolicy",
    "Qt::ScrollBarPolicy",
    "horizontalScrollBarPolicy",
    "sizeAdjustPolicy",
    "SizeAdjustPolicy",
    "AdjustIgnored",
    "AdjustToContentsOnFirstShow",
    "AdjustToContents"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractScrollAreaENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   39, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    5 /* Private */,
       3,    1,   35,    2, 0x08,    7 /* Private */,
       4,    0,   38,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,   59,

 // enum data: key, value
      10, uint(QAbstractScrollArea::AdjustIgnored),
      11, uint(QAbstractScrollArea::AdjustToContentsOnFirstShow),
      12, uint(QAbstractScrollArea::AdjustToContents),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractScrollArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractScrollAreaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS_t,
        // property 'verticalScrollBarPolicy'
        QtPrivate::TypeAndForceComplete<Qt::ScrollBarPolicy, std::true_type>,
        // property 'horizontalScrollBarPolicy'
        QtPrivate::TypeAndForceComplete<Qt::ScrollBarPolicy, std::true_type>,
        // property 'sizeAdjustPolicy'
        QtPrivate::TypeAndForceComplete<SizeAdjustPolicy, std::true_type>,
        // enum 'SizeAdjustPolicy'
        QtPrivate::TypeAndForceComplete<QAbstractScrollArea::SizeAdjustPolicy, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractScrollArea, std::true_type>,
        // method '_q_hslide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_vslide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_showOrHideScrollBars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAbstractScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractScrollArea *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->_q_hslide((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->d_func()->_q_vslide((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->d_func()->_q_showOrHideScrollBars(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractScrollArea *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = _t->verticalScrollBarPolicy(); break;
        case 1: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = _t->horizontalScrollBarPolicy(); break;
        case 2: *reinterpret_cast< SizeAdjustPolicy*>(_v) = _t->sizeAdjustPolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractScrollArea *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVerticalScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 1: _t->setHorizontalScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 2: _t->setSizeAdjustPolicy(*reinterpret_cast< SizeAdjustPolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAbstractScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractScrollAreaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QAbstractScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
