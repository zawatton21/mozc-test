/****************************************************************************
** Meta object code from reading C++ file 'qsplitter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qsplitter.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsplitter.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSplitterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSplitterENDCLASS = QtMocHelpers::stringData(
    "QSplitter",
    "splitterMoved",
    "",
    "pos",
    "index",
    "orientation",
    "Qt::Orientation",
    "opaqueResize",
    "handleWidth",
    "childrenCollapsible"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSplitterENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[6];
    char stringdata5[12];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[12];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSplitterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSplitterENDCLASS_t qt_meta_stringdata_CLASSQSplitterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QSplitter"
        QT_MOC_LITERAL(10, 13),  // "splitterMoved"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 3),  // "pos"
        QT_MOC_LITERAL(29, 5),  // "index"
        QT_MOC_LITERAL(35, 11),  // "orientation"
        QT_MOC_LITERAL(47, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(63, 12),  // "opaqueResize"
        QT_MOC_LITERAL(76, 11),  // "handleWidth"
        QT_MOC_LITERAL(88, 19)   // "childrenCollapsible"
    },
    "QSplitter",
    "splitterMoved",
    "",
    "pos",
    "index",
    "orientation",
    "Qt::Orientation",
    "opaqueResize",
    "handleWidth",
    "childrenCollapsible"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSplitterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   25, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, QMetaType::Bool, 0x00015103, uint(-1), 0,
       8, QMetaType::Int, 0x00015103, uint(-1), 0,
       9, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSplitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSplitterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSplitterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSplitterENDCLASS_t,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'opaqueResize'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'handleWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'childrenCollapsible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSplitter, std::true_type>,
        // method 'splitterMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSplitter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->splitterMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSplitter::*)(int , int );
            if (_t _q_method = &QSplitter::splitterMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSplitter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->opaqueResize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->handleWidth(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->childrenCollapsible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSplitter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setOpaqueResize(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setHandleWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setChildrenCollapsible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSplitterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QSplitter::splitterMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQSplitterHandleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSplitterHandleENDCLASS = QtMocHelpers::stringData(
    "QSplitterHandle"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSplitterHandleENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSplitterHandleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSplitterHandleENDCLASS_t qt_meta_stringdata_CLASSQSplitterHandleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "QSplitterHandle"
    },
    "QSplitterHandle"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSplitterHandleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QSplitterHandle::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSplitterHandleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSplitterHandleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSplitterHandleENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSplitterHandle, std::true_type>
    >,
    nullptr
} };

void QSplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QSplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSplitterHandleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
