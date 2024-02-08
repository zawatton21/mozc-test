/****************************************************************************
** Meta object code from reading C++ file 'qtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtreewidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtreewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTreeWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTreeWidgetENDCLASS = QtMocHelpers::stringData(
    "QTreeWidget",
    "itemPressed",
    "",
    "QTreeWidgetItem*",
    "item",
    "column",
    "itemClicked",
    "itemDoubleClicked",
    "itemActivated",
    "itemEntered",
    "itemChanged",
    "itemExpanded",
    "itemCollapsed",
    "currentItemChanged",
    "current",
    "previous",
    "itemSelectionChanged",
    "scrollToItem",
    "const QTreeWidgetItem*",
    "QAbstractItemView::ScrollHint",
    "hint",
    "expandItem",
    "collapseItem",
    "clear",
    "_q_emitItemPressed",
    "QModelIndex",
    "index",
    "_q_emitItemClicked",
    "_q_emitItemDoubleClicked",
    "_q_emitItemActivated",
    "_q_emitItemEntered",
    "_q_emitItemChanged",
    "_q_emitItemExpanded",
    "_q_emitItemCollapsed",
    "_q_emitCurrentItemChanged",
    "_q_sort",
    "_q_dataChanged",
    "topLeft",
    "bottomRight",
    "_q_selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "columnCount",
    "topLevelItemCount"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTreeWidgetENDCLASS_t {
    uint offsetsAndSizes[90];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[7];
    char stringdata6[12];
    char stringdata7[18];
    char stringdata8[14];
    char stringdata9[12];
    char stringdata10[12];
    char stringdata11[13];
    char stringdata12[14];
    char stringdata13[19];
    char stringdata14[8];
    char stringdata15[9];
    char stringdata16[21];
    char stringdata17[13];
    char stringdata18[23];
    char stringdata19[30];
    char stringdata20[5];
    char stringdata21[11];
    char stringdata22[13];
    char stringdata23[6];
    char stringdata24[19];
    char stringdata25[12];
    char stringdata26[6];
    char stringdata27[19];
    char stringdata28[25];
    char stringdata29[21];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[20];
    char stringdata33[21];
    char stringdata34[26];
    char stringdata35[8];
    char stringdata36[15];
    char stringdata37[8];
    char stringdata38[12];
    char stringdata39[20];
    char stringdata40[15];
    char stringdata41[9];
    char stringdata42[11];
    char stringdata43[12];
    char stringdata44[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTreeWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTreeWidgetENDCLASS_t qt_meta_stringdata_CLASSQTreeWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QTreeWidget"
        QT_MOC_LITERAL(12, 11),  // "itemPressed"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(42, 4),  // "item"
        QT_MOC_LITERAL(47, 6),  // "column"
        QT_MOC_LITERAL(54, 11),  // "itemClicked"
        QT_MOC_LITERAL(66, 17),  // "itemDoubleClicked"
        QT_MOC_LITERAL(84, 13),  // "itemActivated"
        QT_MOC_LITERAL(98, 11),  // "itemEntered"
        QT_MOC_LITERAL(110, 11),  // "itemChanged"
        QT_MOC_LITERAL(122, 12),  // "itemExpanded"
        QT_MOC_LITERAL(135, 13),  // "itemCollapsed"
        QT_MOC_LITERAL(149, 18),  // "currentItemChanged"
        QT_MOC_LITERAL(168, 7),  // "current"
        QT_MOC_LITERAL(176, 8),  // "previous"
        QT_MOC_LITERAL(185, 20),  // "itemSelectionChanged"
        QT_MOC_LITERAL(206, 12),  // "scrollToItem"
        QT_MOC_LITERAL(219, 22),  // "const QTreeWidgetItem*"
        QT_MOC_LITERAL(242, 29),  // "QAbstractItemView::ScrollHint"
        QT_MOC_LITERAL(272, 4),  // "hint"
        QT_MOC_LITERAL(277, 10),  // "expandItem"
        QT_MOC_LITERAL(288, 12),  // "collapseItem"
        QT_MOC_LITERAL(301, 5),  // "clear"
        QT_MOC_LITERAL(307, 18),  // "_q_emitItemPressed"
        QT_MOC_LITERAL(326, 11),  // "QModelIndex"
        QT_MOC_LITERAL(338, 5),  // "index"
        QT_MOC_LITERAL(344, 18),  // "_q_emitItemClicked"
        QT_MOC_LITERAL(363, 24),  // "_q_emitItemDoubleClicked"
        QT_MOC_LITERAL(388, 20),  // "_q_emitItemActivated"
        QT_MOC_LITERAL(409, 18),  // "_q_emitItemEntered"
        QT_MOC_LITERAL(428, 18),  // "_q_emitItemChanged"
        QT_MOC_LITERAL(447, 19),  // "_q_emitItemExpanded"
        QT_MOC_LITERAL(467, 20),  // "_q_emitItemCollapsed"
        QT_MOC_LITERAL(488, 25),  // "_q_emitCurrentItemChanged"
        QT_MOC_LITERAL(514, 7),  // "_q_sort"
        QT_MOC_LITERAL(522, 14),  // "_q_dataChanged"
        QT_MOC_LITERAL(537, 7),  // "topLeft"
        QT_MOC_LITERAL(545, 11),  // "bottomRight"
        QT_MOC_LITERAL(557, 19),  // "_q_selectionChanged"
        QT_MOC_LITERAL(577, 14),  // "QItemSelection"
        QT_MOC_LITERAL(592, 8),  // "selected"
        QT_MOC_LITERAL(601, 10),  // "deselected"
        QT_MOC_LITERAL(612, 11),  // "columnCount"
        QT_MOC_LITERAL(624, 17)   // "topLevelItemCount"
    },
    "QTreeWidget",
    "itemPressed",
    "",
    "QTreeWidgetItem*",
    "item",
    "column",
    "itemClicked",
    "itemDoubleClicked",
    "itemActivated",
    "itemEntered",
    "itemChanged",
    "itemExpanded",
    "itemCollapsed",
    "currentItemChanged",
    "current",
    "previous",
    "itemSelectionChanged",
    "scrollToItem",
    "const QTreeWidgetItem*",
    "QAbstractItemView::ScrollHint",
    "hint",
    "expandItem",
    "collapseItem",
    "clear",
    "_q_emitItemPressed",
    "QModelIndex",
    "index",
    "_q_emitItemClicked",
    "_q_emitItemDoubleClicked",
    "_q_emitItemActivated",
    "_q_emitItemEntered",
    "_q_emitItemChanged",
    "_q_emitItemExpanded",
    "_q_emitItemCollapsed",
    "_q_emitCurrentItemChanged",
    "_q_sort",
    "_q_dataChanged",
    "topLeft",
    "bottomRight",
    "_q_selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "columnCount",
    "topLevelItemCount"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTreeWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       2,  273, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  176,    2, 0x06,    3 /* Public */,
       6,    2,  181,    2, 0x06,    6 /* Public */,
       7,    2,  186,    2, 0x06,    9 /* Public */,
       8,    2,  191,    2, 0x06,   12 /* Public */,
       9,    2,  196,    2, 0x06,   15 /* Public */,
      10,    2,  201,    2, 0x06,   18 /* Public */,
      11,    1,  206,    2, 0x06,   21 /* Public */,
      12,    1,  209,    2, 0x06,   23 /* Public */,
      13,    2,  212,    2, 0x06,   25 /* Public */,
      16,    0,  217,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    2,  218,    2, 0x0a,   29 /* Public */,
      17,    1,  223,    2, 0x2a,   32 /* Public | MethodCloned */,
      21,    1,  226,    2, 0x0a,   34 /* Public */,
      22,    1,  229,    2, 0x0a,   36 /* Public */,
      23,    0,  232,    2, 0x0a,   38 /* Public */,
      24,    1,  233,    2, 0x08,   39 /* Private */,
      27,    1,  236,    2, 0x08,   41 /* Private */,
      28,    1,  239,    2, 0x08,   43 /* Private */,
      29,    1,  242,    2, 0x08,   45 /* Private */,
      30,    1,  245,    2, 0x08,   47 /* Private */,
      31,    1,  248,    2, 0x08,   49 /* Private */,
      32,    1,  251,    2, 0x08,   51 /* Private */,
      33,    1,  254,    2, 0x08,   53 /* Private */,
      34,    2,  257,    2, 0x08,   55 /* Private */,
      35,    0,  262,    2, 0x08,   58 /* Private */,
      36,    2,  263,    2, 0x08,   59 /* Private */,
      39,    2,  268,    2, 0x08,   62 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 19,    4,   20,
    QMetaType::Void, 0x80000000 | 18,    4,
    QMetaType::Void, 0x80000000 | 18,    4,
    QMetaType::Void, 0x80000000 | 18,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   15,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   37,   38,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40,   41,   42,

 // properties: name, type, flags
      43, QMetaType::Int, 0x00015103, uint(-1), 0,
      44, QMetaType::Int, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTreeWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTreeWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTreeWidgetENDCLASS_t,
        // property 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'topLevelItemCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTreeWidget, std::true_type>,
        // method 'itemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'itemCollapsed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollToItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemView::ScrollHint, std::false_type>,
        // method 'scrollToItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTreeWidgetItem *, std::false_type>,
        // method 'expandItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTreeWidgetItem *, std::false_type>,
        // method 'collapseItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTreeWidgetItem *, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_emitItemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitItemCollapsed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_emitCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_sort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>
    >,
    nullptr
} };

void QTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemPressed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->itemEntered((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->itemExpanded((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 7: _t->itemCollapsed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 8: _t->currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 9: _t->itemSelectionChanged(); break;
        case 10: _t->scrollToItem((*reinterpret_cast< std::add_pointer_t<const QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemView::ScrollHint>>(_a[2]))); break;
        case 11: _t->scrollToItem((*reinterpret_cast< std::add_pointer_t<const QTreeWidgetItem*>>(_a[1]))); break;
        case 12: _t->expandItem((*reinterpret_cast< std::add_pointer_t<const QTreeWidgetItem*>>(_a[1]))); break;
        case 13: _t->collapseItem((*reinterpret_cast< std::add_pointer_t<const QTreeWidgetItem*>>(_a[1]))); break;
        case 14: _t->clear(); break;
        case 15: _t->d_func()->_q_emitItemPressed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 16: _t->d_func()->_q_emitItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->d_func()->_q_emitItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 18: _t->d_func()->_q_emitItemActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 19: _t->d_func()->_q_emitItemEntered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->d_func()->_q_emitItemChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 21: _t->d_func()->_q_emitItemExpanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 22: _t->d_func()->_q_emitItemCollapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 23: _t->d_func()->_q_emitCurrentItemChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 24: _t->d_func()->_q_sort(); break;
        case 25: _t->d_func()->_q_dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 26: _t->d_func()->_q_selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , int );
            if (_t _q_method = &QTreeWidget::itemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * );
            if (_t _q_method = &QTreeWidget::itemExpanded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * );
            if (_t _q_method = &QTreeWidget::itemCollapsed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)(QTreeWidgetItem * , QTreeWidgetItem * );
            if (_t _q_method = &QTreeWidget::currentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QTreeWidget::*)();
            if (_t _q_method = &QTreeWidget::itemSelectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->topLevelItemCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTreeWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QTreeWidget::itemPressed(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTreeWidget::itemClicked(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTreeWidget::itemDoubleClicked(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTreeWidget::itemActivated(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTreeWidget::itemEntered(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTreeWidget::itemChanged(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTreeWidget::itemExpanded(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QTreeWidget::itemCollapsed(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QTreeWidget::currentItemChanged(QTreeWidgetItem * _t1, QTreeWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QTreeWidget::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
