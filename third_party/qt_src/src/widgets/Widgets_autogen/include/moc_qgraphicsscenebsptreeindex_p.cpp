/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsscenebsptreeindex_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsscenebsptreeindex_p.h"
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsscenebsptreeindex_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS = QtMocHelpers::stringData(
    "QGraphicsSceneBspTreeIndex",
    "updateSceneRect",
    "",
    "rect",
    "_q_updateSortCache",
    "_q_updateIndex",
    "bspTreeDepth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[27];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[19];
    char stringdata5[15];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS_t qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QGraphicsSceneBspTreeIndex"
        QT_MOC_LITERAL(27, 15),  // "updateSceneRect"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 4),  // "rect"
        QT_MOC_LITERAL(49, 18),  // "_q_updateSortCache"
        QT_MOC_LITERAL(68, 14),  // "_q_updateIndex"
        QT_MOC_LITERAL(83, 12)   // "bspTreeDepth"
    },
    "QGraphicsSceneBspTreeIndex",
    "updateSceneRect",
    "",
    "rect",
    "_q_updateSortCache",
    "_q_updateIndex",
    "bspTreeDepth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsSceneBspTreeIndexENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x09,    2 /* Protected */,
       4,    0,   35,    2, 0x08,    4 /* Private */,
       5,    0,   36,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsSceneBspTreeIndex::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsSceneIndex::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsSceneBspTreeIndexENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS_t,
        // property 'bspTreeDepth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsSceneBspTreeIndex, std::true_type>,
        // method 'updateSceneRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method '_q_updateSortCache'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsSceneBspTreeIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsSceneBspTreeIndex *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateSceneRect((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 1: _t->d_func()->_q_updateSortCache(); break;
        case 2: _t->d_func()->_q_updateIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsSceneBspTreeIndex *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->bspTreeDepth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsSceneBspTreeIndex *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBspTreeDepth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsSceneBspTreeIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsSceneBspTreeIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsSceneBspTreeIndexENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsSceneIndex::qt_metacast(_clname);
}

int QGraphicsSceneBspTreeIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSceneIndex::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
