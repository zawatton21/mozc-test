/****************************************************************************
** Meta object code from reading C++ file 'qabstractproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qabstractproxymodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractproxymodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS = QtMocHelpers::stringData(
    "QAbstractProxyModel",
    "sourceModelChanged",
    "",
    "_q_sourceModelDestroyed",
    "_q_sourceModelRowsAboutToBeInserted",
    "QModelIndex",
    "_q_sourceModelRowsInserted",
    "_q_sourceModelRowsRemoved",
    "_q_sourceModelColumnsAboutToBeInserted",
    "_q_sourceModelColumnsInserted",
    "_q_sourceModelColumnsRemoved",
    "mapToSource",
    "proxyIndex",
    "mapFromSource",
    "sourceIndex",
    "mapSelectionToSource",
    "QItemSelection",
    "selection",
    "mapSelectionFromSource",
    "sourceModel",
    "QAbstractItemModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[20];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[36];
    char stringdata5[12];
    char stringdata6[27];
    char stringdata7[26];
    char stringdata8[39];
    char stringdata9[30];
    char stringdata10[29];
    char stringdata11[12];
    char stringdata12[11];
    char stringdata13[14];
    char stringdata14[12];
    char stringdata15[21];
    char stringdata16[15];
    char stringdata17[10];
    char stringdata18[23];
    char stringdata19[12];
    char stringdata20[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS_t qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QAbstractProxyModel"
        QT_MOC_LITERAL(20, 18),  // "sourceModelChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 23),  // "_q_sourceModelDestroyed"
        QT_MOC_LITERAL(64, 35),  // "_q_sourceModelRowsAboutToBeIn..."
        QT_MOC_LITERAL(100, 11),  // "QModelIndex"
        QT_MOC_LITERAL(112, 26),  // "_q_sourceModelRowsInserted"
        QT_MOC_LITERAL(139, 25),  // "_q_sourceModelRowsRemoved"
        QT_MOC_LITERAL(165, 38),  // "_q_sourceModelColumnsAboutToB..."
        QT_MOC_LITERAL(204, 29),  // "_q_sourceModelColumnsInserted"
        QT_MOC_LITERAL(234, 28),  // "_q_sourceModelColumnsRemoved"
        QT_MOC_LITERAL(263, 11),  // "mapToSource"
        QT_MOC_LITERAL(275, 10),  // "proxyIndex"
        QT_MOC_LITERAL(286, 13),  // "mapFromSource"
        QT_MOC_LITERAL(300, 11),  // "sourceIndex"
        QT_MOC_LITERAL(312, 20),  // "mapSelectionToSource"
        QT_MOC_LITERAL(333, 14),  // "QItemSelection"
        QT_MOC_LITERAL(348, 9),  // "selection"
        QT_MOC_LITERAL(358, 22),  // "mapSelectionFromSource"
        QT_MOC_LITERAL(381, 11),  // "sourceModel"
        QT_MOC_LITERAL(393, 19)   // "QAbstractItemModel*"
    },
    "QAbstractProxyModel",
    "sourceModelChanged",
    "",
    "_q_sourceModelDestroyed",
    "_q_sourceModelRowsAboutToBeInserted",
    "QModelIndex",
    "_q_sourceModelRowsInserted",
    "_q_sourceModelRowsRemoved",
    "_q_sourceModelColumnsAboutToBeInserted",
    "_q_sourceModelColumnsInserted",
    "_q_sourceModelColumnsRemoved",
    "mapToSource",
    "proxyIndex",
    "mapFromSource",
    "sourceIndex",
    "mapSelectionToSource",
    "QItemSelection",
    "selection",
    "mapSelectionFromSource",
    "sourceModel",
    "QAbstractItemModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractProxyModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x08,    3 /* Private */,
       4,    3,   88,    2, 0x08,    4 /* Private */,
       6,    3,   95,    2, 0x08,    8 /* Private */,
       7,    3,  102,    2, 0x08,   12 /* Private */,
       8,    3,  109,    2, 0x08,   16 /* Private */,
       9,    3,  116,    2, 0x08,   20 /* Private */,
      10,    3,  123,    2, 0x08,   24 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  130,    2, 0x102,   28 /* Public | MethodIsConst  */,
      13,    1,  133,    2, 0x102,   30 /* Public | MethodIsConst  */,
      15,    1,  136,    2, 0x102,   32 /* Public | MethodIsConst  */,
      18,    1,  139,    2, 0x102,   34 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // methods: parameters
    0x80000000 | 5, 0x80000000 | 5,   12,
    0x80000000 | 5, 0x80000000 | 5,   14,
    0x80000000 | 16, 0x80000000 | 16,   17,
    0x80000000 | 16, 0x80000000 | 16,   17,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x0201510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractProxyModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS_t,
        // property 'sourceModel'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractProxyModel, std::true_type>,
        // method 'sourceModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_sourceModelDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_sourceModelRowsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sourceModelRowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sourceModelRowsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sourceModelColumnsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sourceModelColumnsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sourceModelColumnsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mapToSource'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'mapFromSource'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'mapSelectionToSource'
        QtPrivate::TypeAndForceComplete<QItemSelection, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'mapSelectionFromSource'
        QtPrivate::TypeAndForceComplete<QItemSelection, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>
    >,
    nullptr
} };

void QAbstractProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sourceModelChanged(QPrivateSignal()); break;
        case 1: _t->d_func()->_q_sourceModelDestroyed(); break;
        case 2: _t->d_func()->_q_sourceModelRowsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->d_func()->_q_sourceModelRowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->d_func()->_q_sourceModelRowsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->d_func()->_q_sourceModelColumnsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->d_func()->_q_sourceModelColumnsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->d_func()->_q_sourceModelColumnsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: { QModelIndex _r = _t->mapToSource((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 9: { QModelIndex _r = _t->mapFromSource((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 10: { QItemSelection _r = _t->mapSelectionToSource((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = std::move(_r); }  break;
        case 11: { QItemSelection _r = _t->mapSelectionFromSource((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractProxyModel::*)(QPrivateSignal);
            if (_t _q_method = &QAbstractProxyModel::sourceModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->sourceModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
        auto *_t = static_cast<QAbstractProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSourceModel(); break;
        default: break;
        }
    }
}

const QMetaObject *QAbstractProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractProxyModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QAbstractProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QAbstractProxyModel::sourceModelChanged(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
