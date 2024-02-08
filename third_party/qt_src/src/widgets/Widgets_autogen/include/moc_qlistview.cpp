/****************************************************************************
** Meta object code from reading C++ file 'qlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qlistview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQListViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQListViewENDCLASS = QtMocHelpers::stringData(
    "QListView",
    "indexesMoved",
    "",
    "QModelIndexList",
    "indexes",
    "movement",
    "Movement",
    "flow",
    "Flow",
    "isWrapping",
    "resizeMode",
    "ResizeMode",
    "layoutMode",
    "LayoutMode",
    "spacing",
    "gridSize",
    "viewMode",
    "ViewMode",
    "modelColumn",
    "uniformItemSizes",
    "batchSize",
    "wordWrap",
    "selectionRectVisible",
    "itemAlignment",
    "Qt::Alignment",
    "Static",
    "Free",
    "Snap",
    "LeftToRight",
    "TopToBottom",
    "Fixed",
    "Adjust",
    "SinglePass",
    "Batched",
    "ListMode",
    "IconMode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQListViewENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[11];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[8];
    char stringdata15[9];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[12];
    char stringdata19[17];
    char stringdata20[10];
    char stringdata21[9];
    char stringdata22[21];
    char stringdata23[14];
    char stringdata24[14];
    char stringdata25[7];
    char stringdata26[5];
    char stringdata27[5];
    char stringdata28[12];
    char stringdata29[12];
    char stringdata30[6];
    char stringdata31[7];
    char stringdata32[11];
    char stringdata33[8];
    char stringdata34[9];
    char stringdata35[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQListViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQListViewENDCLASS_t qt_meta_stringdata_CLASSQListViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QListView"
        QT_MOC_LITERAL(10, 12),  // "indexesMoved"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 15),  // "QModelIndexList"
        QT_MOC_LITERAL(40, 7),  // "indexes"
        QT_MOC_LITERAL(48, 8),  // "movement"
        QT_MOC_LITERAL(57, 8),  // "Movement"
        QT_MOC_LITERAL(66, 4),  // "flow"
        QT_MOC_LITERAL(71, 4),  // "Flow"
        QT_MOC_LITERAL(76, 10),  // "isWrapping"
        QT_MOC_LITERAL(87, 10),  // "resizeMode"
        QT_MOC_LITERAL(98, 10),  // "ResizeMode"
        QT_MOC_LITERAL(109, 10),  // "layoutMode"
        QT_MOC_LITERAL(120, 10),  // "LayoutMode"
        QT_MOC_LITERAL(131, 7),  // "spacing"
        QT_MOC_LITERAL(139, 8),  // "gridSize"
        QT_MOC_LITERAL(148, 8),  // "viewMode"
        QT_MOC_LITERAL(157, 8),  // "ViewMode"
        QT_MOC_LITERAL(166, 11),  // "modelColumn"
        QT_MOC_LITERAL(178, 16),  // "uniformItemSizes"
        QT_MOC_LITERAL(195, 9),  // "batchSize"
        QT_MOC_LITERAL(205, 8),  // "wordWrap"
        QT_MOC_LITERAL(214, 20),  // "selectionRectVisible"
        QT_MOC_LITERAL(235, 13),  // "itemAlignment"
        QT_MOC_LITERAL(249, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(263, 6),  // "Static"
        QT_MOC_LITERAL(270, 4),  // "Free"
        QT_MOC_LITERAL(275, 4),  // "Snap"
        QT_MOC_LITERAL(280, 11),  // "LeftToRight"
        QT_MOC_LITERAL(292, 11),  // "TopToBottom"
        QT_MOC_LITERAL(304, 5),  // "Fixed"
        QT_MOC_LITERAL(310, 6),  // "Adjust"
        QT_MOC_LITERAL(317, 10),  // "SinglePass"
        QT_MOC_LITERAL(328, 7),  // "Batched"
        QT_MOC_LITERAL(336, 8),  // "ListMode"
        QT_MOC_LITERAL(345, 8)   // "IconMode"
    },
    "QListView",
    "indexesMoved",
    "",
    "QModelIndexList",
    "indexes",
    "movement",
    "Movement",
    "flow",
    "Flow",
    "isWrapping",
    "resizeMode",
    "ResizeMode",
    "layoutMode",
    "LayoutMode",
    "spacing",
    "gridSize",
    "viewMode",
    "ViewMode",
    "modelColumn",
    "uniformItemSizes",
    "batchSize",
    "wordWrap",
    "selectionRectVisible",
    "itemAlignment",
    "Qt::Alignment",
    "Static",
    "Free",
    "Snap",
    "LeftToRight",
    "TopToBottom",
    "Fixed",
    "Adjust",
    "SinglePass",
    "Batched",
    "ListMode",
    "IconMode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQListViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      14,   23, // properties
       5,   93, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,
       9, QMetaType::Bool, 0x00015003, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(-1), 0,
      14, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, QMetaType::QSize, 0x00015103, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, QMetaType::Int, 0x00015103, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,
      20, QMetaType::Int, 0x00015103, uint(-1), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    3,  118,
       8,    8, 0x0,    2,  124,
      11,   11, 0x0,    2,  128,
      13,   13, 0x0,    2,  132,
      17,   17, 0x0,    2,  136,

 // enum data: key, value
      25, uint(QListView::Static),
      26, uint(QListView::Free),
      27, uint(QListView::Snap),
      28, uint(QListView::LeftToRight),
      29, uint(QListView::TopToBottom),
      30, uint(QListView::Fixed),
      31, uint(QListView::Adjust),
      32, uint(QListView::SinglePass),
      33, uint(QListView::Batched),
      34, uint(QListView::ListMode),
      35, uint(QListView::IconMode),

       0        // eod
};

Q_CONSTINIT const QMetaObject QListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_CLASSQListViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQListViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQListViewENDCLASS_t,
        // property 'movement'
        QtPrivate::TypeAndForceComplete<Movement, std::true_type>,
        // property 'flow'
        QtPrivate::TypeAndForceComplete<Flow, std::true_type>,
        // property 'isWrapping'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'resizeMode'
        QtPrivate::TypeAndForceComplete<ResizeMode, std::true_type>,
        // property 'layoutMode'
        QtPrivate::TypeAndForceComplete<LayoutMode, std::true_type>,
        // property 'spacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'gridSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'viewMode'
        QtPrivate::TypeAndForceComplete<ViewMode, std::true_type>,
        // property 'modelColumn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'uniformItemSizes'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'batchSize'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'wordWrap'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionRectVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'itemAlignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // enum 'Movement'
        QtPrivate::TypeAndForceComplete<QListView::Movement, std::true_type>,
        // enum 'Flow'
        QtPrivate::TypeAndForceComplete<QListView::Flow, std::true_type>,
        // enum 'ResizeMode'
        QtPrivate::TypeAndForceComplete<QListView::ResizeMode, std::true_type>,
        // enum 'LayoutMode'
        QtPrivate::TypeAndForceComplete<QListView::LayoutMode, std::true_type>,
        // enum 'ViewMode'
        QtPrivate::TypeAndForceComplete<QListView::ViewMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QListView, std::true_type>,
        // method 'indexesMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndexList &, std::false_type>
    >,
    nullptr
} };

void QListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexesMoved((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QListView::*)(const QModelIndexList & );
            if (_t _q_method = &QListView::indexesMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Movement*>(_v) = _t->movement(); break;
        case 1: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isWrapping(); break;
        case 3: *reinterpret_cast< ResizeMode*>(_v) = _t->resizeMode(); break;
        case 4: *reinterpret_cast< LayoutMode*>(_v) = _t->layoutMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->spacing(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->gridSize(); break;
        case 7: *reinterpret_cast< ViewMode*>(_v) = _t->viewMode(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->modelColumn(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->uniformItemSizes(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->batchSize(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isSelectionRectVisible(); break;
        case 13: *reinterpret_cast< Qt::Alignment*>(_v) = _t->itemAlignment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMovement(*reinterpret_cast< Movement*>(_v)); break;
        case 1: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 2: _t->setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 4: _t->setLayoutMode(*reinterpret_cast< LayoutMode*>(_v)); break;
        case 5: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setGridSize(*reinterpret_cast< QSize*>(_v)); break;
        case 7: _t->setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 8: _t->setModelColumn(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setUniformItemSizes(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setBatchSize(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setSelectionRectVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setItemAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQListViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int QListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QListView::indexesMoved(const QModelIndexList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
