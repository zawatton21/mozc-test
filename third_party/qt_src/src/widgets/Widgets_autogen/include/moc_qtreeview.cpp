/****************************************************************************
** Meta object code from reading C++ file 'qtreeview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtreeview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtreeview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTreeViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTreeViewENDCLASS = QtMocHelpers::stringData(
    "QTreeView",
    "expanded",
    "",
    "QModelIndex",
    "index",
    "collapsed",
    "hideColumn",
    "column",
    "showColumn",
    "expand",
    "collapse",
    "resizeColumnToContents",
    "sortByColumn",
    "Qt::SortOrder",
    "order",
    "expandAll",
    "expandRecursively",
    "depth",
    "collapseAll",
    "expandToDepth",
    "columnResized",
    "oldSize",
    "newSize",
    "columnCountChanged",
    "oldCount",
    "newCount",
    "columnMoved",
    "reexpand",
    "rowsRemoved",
    "parent",
    "first",
    "last",
    "verticalScrollbarValueChanged",
    "value",
    "_q_modelAboutToBeReset",
    "_q_sortIndicatorChanged",
    "autoExpandDelay",
    "indentation",
    "rootIsDecorated",
    "uniformRowHeights",
    "itemsExpandable",
    "sortingEnabled",
    "animated",
    "allColumnsShowFocus",
    "wordWrap",
    "headerHidden",
    "expandsOnDoubleClick"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTreeViewENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[11];
    char stringdata7[7];
    char stringdata8[11];
    char stringdata9[7];
    char stringdata10[9];
    char stringdata11[23];
    char stringdata12[13];
    char stringdata13[14];
    char stringdata14[6];
    char stringdata15[10];
    char stringdata16[18];
    char stringdata17[6];
    char stringdata18[12];
    char stringdata19[14];
    char stringdata20[14];
    char stringdata21[8];
    char stringdata22[8];
    char stringdata23[19];
    char stringdata24[9];
    char stringdata25[9];
    char stringdata26[12];
    char stringdata27[9];
    char stringdata28[12];
    char stringdata29[7];
    char stringdata30[6];
    char stringdata31[5];
    char stringdata32[30];
    char stringdata33[6];
    char stringdata34[23];
    char stringdata35[24];
    char stringdata36[16];
    char stringdata37[12];
    char stringdata38[16];
    char stringdata39[18];
    char stringdata40[16];
    char stringdata41[15];
    char stringdata42[9];
    char stringdata43[20];
    char stringdata44[9];
    char stringdata45[13];
    char stringdata46[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTreeViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTreeViewENDCLASS_t qt_meta_stringdata_CLASSQTreeViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QTreeView"
        QT_MOC_LITERAL(10, 8),  // "expanded"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "QModelIndex"
        QT_MOC_LITERAL(32, 5),  // "index"
        QT_MOC_LITERAL(38, 9),  // "collapsed"
        QT_MOC_LITERAL(48, 10),  // "hideColumn"
        QT_MOC_LITERAL(59, 6),  // "column"
        QT_MOC_LITERAL(66, 10),  // "showColumn"
        QT_MOC_LITERAL(77, 6),  // "expand"
        QT_MOC_LITERAL(84, 8),  // "collapse"
        QT_MOC_LITERAL(93, 22),  // "resizeColumnToContents"
        QT_MOC_LITERAL(116, 12),  // "sortByColumn"
        QT_MOC_LITERAL(129, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(143, 5),  // "order"
        QT_MOC_LITERAL(149, 9),  // "expandAll"
        QT_MOC_LITERAL(159, 17),  // "expandRecursively"
        QT_MOC_LITERAL(177, 5),  // "depth"
        QT_MOC_LITERAL(183, 11),  // "collapseAll"
        QT_MOC_LITERAL(195, 13),  // "expandToDepth"
        QT_MOC_LITERAL(209, 13),  // "columnResized"
        QT_MOC_LITERAL(223, 7),  // "oldSize"
        QT_MOC_LITERAL(231, 7),  // "newSize"
        QT_MOC_LITERAL(239, 18),  // "columnCountChanged"
        QT_MOC_LITERAL(258, 8),  // "oldCount"
        QT_MOC_LITERAL(267, 8),  // "newCount"
        QT_MOC_LITERAL(276, 11),  // "columnMoved"
        QT_MOC_LITERAL(288, 8),  // "reexpand"
        QT_MOC_LITERAL(297, 11),  // "rowsRemoved"
        QT_MOC_LITERAL(309, 6),  // "parent"
        QT_MOC_LITERAL(316, 5),  // "first"
        QT_MOC_LITERAL(322, 4),  // "last"
        QT_MOC_LITERAL(327, 29),  // "verticalScrollbarValueChanged"
        QT_MOC_LITERAL(357, 5),  // "value"
        QT_MOC_LITERAL(363, 22),  // "_q_modelAboutToBeReset"
        QT_MOC_LITERAL(386, 23),  // "_q_sortIndicatorChanged"
        QT_MOC_LITERAL(410, 15),  // "autoExpandDelay"
        QT_MOC_LITERAL(426, 11),  // "indentation"
        QT_MOC_LITERAL(438, 15),  // "rootIsDecorated"
        QT_MOC_LITERAL(454, 17),  // "uniformRowHeights"
        QT_MOC_LITERAL(472, 15),  // "itemsExpandable"
        QT_MOC_LITERAL(488, 14),  // "sortingEnabled"
        QT_MOC_LITERAL(503, 8),  // "animated"
        QT_MOC_LITERAL(512, 19),  // "allColumnsShowFocus"
        QT_MOC_LITERAL(532, 8),  // "wordWrap"
        QT_MOC_LITERAL(541, 12),  // "headerHidden"
        QT_MOC_LITERAL(554, 20)   // "expandsOnDoubleClick"
    },
    "QTreeView",
    "expanded",
    "",
    "QModelIndex",
    "index",
    "collapsed",
    "hideColumn",
    "column",
    "showColumn",
    "expand",
    "collapse",
    "resizeColumnToContents",
    "sortByColumn",
    "Qt::SortOrder",
    "order",
    "expandAll",
    "expandRecursively",
    "depth",
    "collapseAll",
    "expandToDepth",
    "columnResized",
    "oldSize",
    "newSize",
    "columnCountChanged",
    "oldCount",
    "newCount",
    "columnMoved",
    "reexpand",
    "rowsRemoved",
    "parent",
    "first",
    "last",
    "verticalScrollbarValueChanged",
    "value",
    "_q_modelAboutToBeReset",
    "_q_sortIndicatorChanged",
    "autoExpandDelay",
    "indentation",
    "rootIsDecorated",
    "uniformRowHeights",
    "itemsExpandable",
    "sortingEnabled",
    "animated",
    "allColumnsShowFocus",
    "wordWrap",
    "headerHidden",
    "expandsOnDoubleClick"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTreeViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      11,  209, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,   12 /* Public */,
       5,    1,  143,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  146,    2, 0x0a,   16 /* Public */,
       8,    1,  149,    2, 0x0a,   18 /* Public */,
       9,    1,  152,    2, 0x0a,   20 /* Public */,
      10,    1,  155,    2, 0x0a,   22 /* Public */,
      11,    1,  158,    2, 0x0a,   24 /* Public */,
      12,    2,  161,    2, 0x0a,   26 /* Public */,
      15,    0,  166,    2, 0x0a,   29 /* Public */,
      16,    2,  167,    2, 0x0a,   30 /* Public */,
      16,    1,  172,    2, 0x2a,   33 /* Public | MethodCloned */,
      18,    0,  175,    2, 0x0a,   35 /* Public */,
      19,    1,  176,    2, 0x0a,   36 /* Public */,
      20,    3,  179,    2, 0x09,   38 /* Protected */,
      23,    2,  186,    2, 0x09,   42 /* Protected */,
      26,    0,  191,    2, 0x09,   45 /* Protected */,
      27,    0,  192,    2, 0x09,   46 /* Protected */,
      28,    3,  193,    2, 0x09,   47 /* Protected */,
      32,    1,  200,    2, 0x09,   51 /* Protected */,
      34,    0,  203,    2, 0x08,   53 /* Private */,
      35,    2,  204,    2, 0x08,   54 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,    7,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   17,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,   21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   29,   30,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,    7,   14,

 // properties: name, type, flags
      36, QMetaType::Int, 0x00015103, uint(-1), 0,
      37, QMetaType::Int, 0x00015107, uint(-1), 0,
      38, QMetaType::Bool, 0x00015103, uint(-1), 0,
      39, QMetaType::Bool, 0x00015103, uint(-1), 0,
      40, QMetaType::Bool, 0x00015103, uint(-1), 0,
      41, QMetaType::Bool, 0x00015103, uint(-1), 0,
      42, QMetaType::Bool, 0x00015103, uint(-1), 0,
      43, QMetaType::Bool, 0x00015103, uint(-1), 0,
      44, QMetaType::Bool, 0x00015103, uint(-1), 0,
      45, QMetaType::Bool, 0x00015103, uint(-1), 0,
      46, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTreeViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTreeViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTreeViewENDCLASS_t,
        // property 'autoExpandDelay'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'indentation'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rootIsDecorated'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'uniformRowHeights'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'itemsExpandable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sortingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'animated'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allColumnsShowFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wordWrap'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'headerHidden'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'expandsOnDoubleClick'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTreeView, std::true_type>,
        // method 'expanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'collapsed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'hideColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'expand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'collapse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'resizeColumnToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sortByColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'expandAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'expandRecursively'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'expandRecursively'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'collapseAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'expandToDepth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reexpand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rowsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'verticalScrollbarValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_modelAboutToBeReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_sortIndicatorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>
    >,
    nullptr
} };

void QTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->collapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->hideColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->showColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->expand((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->collapse((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->resizeColumnToContents((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->sortByColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 8: _t->expandAll(); break;
        case 9: _t->expandRecursively((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->expandRecursively((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->collapseAll(); break;
        case 12: _t->expandToDepth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->columnResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->columnCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->columnMoved(); break;
        case 16: _t->reexpand(); break;
        case 17: _t->rowsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 18: _t->verticalScrollbarValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->d_func()->_q_modelAboutToBeReset(); break;
        case 20: _t->d_func()->_q_sortIndicatorChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTreeView::*)(const QModelIndex & );
            if (_t _q_method = &QTreeView::expanded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTreeView::*)(const QModelIndex & );
            if (_t _q_method = &QTreeView::collapsed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->autoExpandDelay(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->indentation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->rootIsDecorated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->uniformRowHeights(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->itemsExpandable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSortingEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAnimated(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->allColumnsShowFocus(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isHeaderHidden(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->expandsOnDoubleClick(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoExpandDelay(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setIndentation(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRootIsDecorated(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setUniformRowHeights(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setItemsExpandable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAllColumnsShowFocus(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setHeaderHidden(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setExpandsOnDoubleClick(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 1: _t->resetIndentation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTreeViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int QTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QTreeView::expanded(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTreeView::collapsed(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
