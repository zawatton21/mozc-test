/****************************************************************************
** Meta object code from reading C++ file 'qtablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtablewidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtablewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTableWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTableWidgetENDCLASS = QtMocHelpers::stringData(
    "QTableWidget",
    "itemPressed",
    "",
    "QTableWidgetItem*",
    "item",
    "itemClicked",
    "itemDoubleClicked",
    "itemActivated",
    "itemEntered",
    "itemChanged",
    "currentItemChanged",
    "current",
    "previous",
    "itemSelectionChanged",
    "cellPressed",
    "row",
    "column",
    "cellClicked",
    "cellDoubleClicked",
    "cellActivated",
    "cellEntered",
    "cellChanged",
    "currentCellChanged",
    "currentRow",
    "currentColumn",
    "previousRow",
    "previousColumn",
    "scrollToItem",
    "const QTableWidgetItem*",
    "QAbstractItemView::ScrollHint",
    "hint",
    "insertRow",
    "insertColumn",
    "removeRow",
    "removeColumn",
    "clear",
    "clearContents",
    "_q_emitItemPressed",
    "QModelIndex",
    "index",
    "_q_emitItemClicked",
    "_q_emitItemDoubleClicked",
    "_q_emitItemActivated",
    "_q_emitItemEntered",
    "_q_emitItemChanged",
    "_q_emitCurrentItemChanged",
    "_q_sort",
    "_q_dataChanged",
    "topLeft",
    "bottomRight",
    "rowCount",
    "columnCount"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTableWidgetENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[5];
    char stringdata5[12];
    char stringdata6[18];
    char stringdata7[14];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[19];
    char stringdata11[8];
    char stringdata12[9];
    char stringdata13[21];
    char stringdata14[12];
    char stringdata15[4];
    char stringdata16[7];
    char stringdata17[12];
    char stringdata18[18];
    char stringdata19[14];
    char stringdata20[12];
    char stringdata21[12];
    char stringdata22[19];
    char stringdata23[11];
    char stringdata24[14];
    char stringdata25[12];
    char stringdata26[15];
    char stringdata27[13];
    char stringdata28[24];
    char stringdata29[30];
    char stringdata30[5];
    char stringdata31[10];
    char stringdata32[13];
    char stringdata33[10];
    char stringdata34[13];
    char stringdata35[6];
    char stringdata36[14];
    char stringdata37[19];
    char stringdata38[12];
    char stringdata39[6];
    char stringdata40[19];
    char stringdata41[25];
    char stringdata42[21];
    char stringdata43[19];
    char stringdata44[19];
    char stringdata45[26];
    char stringdata46[8];
    char stringdata47[15];
    char stringdata48[8];
    char stringdata49[12];
    char stringdata50[9];
    char stringdata51[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTableWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTableWidgetENDCLASS_t qt_meta_stringdata_CLASSQTableWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QTableWidget"
        QT_MOC_LITERAL(13, 11),  // "itemPressed"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 17),  // "QTableWidgetItem*"
        QT_MOC_LITERAL(44, 4),  // "item"
        QT_MOC_LITERAL(49, 11),  // "itemClicked"
        QT_MOC_LITERAL(61, 17),  // "itemDoubleClicked"
        QT_MOC_LITERAL(79, 13),  // "itemActivated"
        QT_MOC_LITERAL(93, 11),  // "itemEntered"
        QT_MOC_LITERAL(105, 11),  // "itemChanged"
        QT_MOC_LITERAL(117, 18),  // "currentItemChanged"
        QT_MOC_LITERAL(136, 7),  // "current"
        QT_MOC_LITERAL(144, 8),  // "previous"
        QT_MOC_LITERAL(153, 20),  // "itemSelectionChanged"
        QT_MOC_LITERAL(174, 11),  // "cellPressed"
        QT_MOC_LITERAL(186, 3),  // "row"
        QT_MOC_LITERAL(190, 6),  // "column"
        QT_MOC_LITERAL(197, 11),  // "cellClicked"
        QT_MOC_LITERAL(209, 17),  // "cellDoubleClicked"
        QT_MOC_LITERAL(227, 13),  // "cellActivated"
        QT_MOC_LITERAL(241, 11),  // "cellEntered"
        QT_MOC_LITERAL(253, 11),  // "cellChanged"
        QT_MOC_LITERAL(265, 18),  // "currentCellChanged"
        QT_MOC_LITERAL(284, 10),  // "currentRow"
        QT_MOC_LITERAL(295, 13),  // "currentColumn"
        QT_MOC_LITERAL(309, 11),  // "previousRow"
        QT_MOC_LITERAL(321, 14),  // "previousColumn"
        QT_MOC_LITERAL(336, 12),  // "scrollToItem"
        QT_MOC_LITERAL(349, 23),  // "const QTableWidgetItem*"
        QT_MOC_LITERAL(373, 29),  // "QAbstractItemView::ScrollHint"
        QT_MOC_LITERAL(403, 4),  // "hint"
        QT_MOC_LITERAL(408, 9),  // "insertRow"
        QT_MOC_LITERAL(418, 12),  // "insertColumn"
        QT_MOC_LITERAL(431, 9),  // "removeRow"
        QT_MOC_LITERAL(441, 12),  // "removeColumn"
        QT_MOC_LITERAL(454, 5),  // "clear"
        QT_MOC_LITERAL(460, 13),  // "clearContents"
        QT_MOC_LITERAL(474, 18),  // "_q_emitItemPressed"
        QT_MOC_LITERAL(493, 11),  // "QModelIndex"
        QT_MOC_LITERAL(505, 5),  // "index"
        QT_MOC_LITERAL(511, 18),  // "_q_emitItemClicked"
        QT_MOC_LITERAL(530, 24),  // "_q_emitItemDoubleClicked"
        QT_MOC_LITERAL(555, 20),  // "_q_emitItemActivated"
        QT_MOC_LITERAL(576, 18),  // "_q_emitItemEntered"
        QT_MOC_LITERAL(595, 18),  // "_q_emitItemChanged"
        QT_MOC_LITERAL(614, 25),  // "_q_emitCurrentItemChanged"
        QT_MOC_LITERAL(640, 7),  // "_q_sort"
        QT_MOC_LITERAL(648, 14),  // "_q_dataChanged"
        QT_MOC_LITERAL(663, 7),  // "topLeft"
        QT_MOC_LITERAL(671, 11),  // "bottomRight"
        QT_MOC_LITERAL(683, 8),  // "rowCount"
        QT_MOC_LITERAL(692, 11)   // "columnCount"
    },
    "QTableWidget",
    "itemPressed",
    "",
    "QTableWidgetItem*",
    "item",
    "itemClicked",
    "itemDoubleClicked",
    "itemActivated",
    "itemEntered",
    "itemChanged",
    "currentItemChanged",
    "current",
    "previous",
    "itemSelectionChanged",
    "cellPressed",
    "row",
    "column",
    "cellClicked",
    "cellDoubleClicked",
    "cellActivated",
    "cellEntered",
    "cellChanged",
    "currentCellChanged",
    "currentRow",
    "currentColumn",
    "previousRow",
    "previousColumn",
    "scrollToItem",
    "const QTableWidgetItem*",
    "QAbstractItemView::ScrollHint",
    "hint",
    "insertRow",
    "insertColumn",
    "removeRow",
    "removeColumn",
    "clear",
    "clearContents",
    "_q_emitItemPressed",
    "QModelIndex",
    "index",
    "_q_emitItemClicked",
    "_q_emitItemDoubleClicked",
    "_q_emitItemActivated",
    "_q_emitItemEntered",
    "_q_emitItemChanged",
    "_q_emitCurrentItemChanged",
    "_q_sort",
    "_q_dataChanged",
    "topLeft",
    "bottomRight",
    "rowCount",
    "columnCount"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTableWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       2,  320, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  206,    2, 0x06,    3 /* Public */,
       5,    1,  209,    2, 0x06,    5 /* Public */,
       6,    1,  212,    2, 0x06,    7 /* Public */,
       7,    1,  215,    2, 0x06,    9 /* Public */,
       8,    1,  218,    2, 0x06,   11 /* Public */,
       9,    1,  221,    2, 0x06,   13 /* Public */,
      10,    2,  224,    2, 0x06,   15 /* Public */,
      13,    0,  229,    2, 0x06,   18 /* Public */,
      14,    2,  230,    2, 0x06,   19 /* Public */,
      17,    2,  235,    2, 0x06,   22 /* Public */,
      18,    2,  240,    2, 0x06,   25 /* Public */,
      19,    2,  245,    2, 0x06,   28 /* Public */,
      20,    2,  250,    2, 0x06,   31 /* Public */,
      21,    2,  255,    2, 0x06,   34 /* Public */,
      22,    4,  260,    2, 0x06,   37 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      27,    2,  269,    2, 0x0a,   42 /* Public */,
      27,    1,  274,    2, 0x2a,   45 /* Public | MethodCloned */,
      31,    1,  277,    2, 0x0a,   47 /* Public */,
      32,    1,  280,    2, 0x0a,   49 /* Public */,
      33,    1,  283,    2, 0x0a,   51 /* Public */,
      34,    1,  286,    2, 0x0a,   53 /* Public */,
      35,    0,  289,    2, 0x0a,   55 /* Public */,
      36,    0,  290,    2, 0x0a,   56 /* Public */,
      37,    1,  291,    2, 0x08,   57 /* Private */,
      40,    1,  294,    2, 0x08,   59 /* Private */,
      41,    1,  297,    2, 0x08,   61 /* Private */,
      42,    1,  300,    2, 0x08,   63 /* Private */,
      43,    1,  303,    2, 0x08,   65 /* Private */,
      44,    1,  306,    2, 0x08,   67 /* Private */,
      45,    2,  309,    2, 0x08,   69 /* Private */,
      46,    0,  314,    2, 0x08,   72 /* Private */,
      47,    2,  315,    2, 0x08,   73 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   24,   25,   26,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 29,    4,   30,
    QMetaType::Void, 0x80000000 | 28,    4,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   12,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   48,   49,

 // properties: name, type, flags
      50, QMetaType::Int, 0x00015103, uint(-1), 0,
      51, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTableWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTableWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTableWidgetENDCLASS_t,
        // property 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTableWidget, std::true_type>,
        // method 'itemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cellPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'scrollToItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTableWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemView::ScrollHint, std::false_type>,
        // method 'scrollToItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTableWidgetItem *, std::false_type>,
        // method 'insertRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearContents'
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
        // method '_q_emitCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method '_q_sort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void QTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTableWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemPressed((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 4: _t->itemEntered((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 6: _t->currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[2]))); break;
        case 7: _t->itemSelectionChanged(); break;
        case 8: _t->cellPressed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->cellActivated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->cellEntered((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 15: _t->scrollToItem((*reinterpret_cast< std::add_pointer_t<const QTableWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemView::ScrollHint>>(_a[2]))); break;
        case 16: _t->scrollToItem((*reinterpret_cast< std::add_pointer_t<const QTableWidgetItem*>>(_a[1]))); break;
        case 17: _t->insertRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->insertColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->removeRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->removeColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->clear(); break;
        case 22: _t->clearContents(); break;
        case 23: _t->d_func()->_q_emitItemPressed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 24: _t->d_func()->_q_emitItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 25: _t->d_func()->_q_emitItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 26: _t->d_func()->_q_emitItemActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 27: _t->d_func()->_q_emitItemEntered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 28: _t->d_func()->_q_emitItemChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 29: _t->d_func()->_q_emitCurrentItemChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 30: _t->d_func()->_q_sort(); break;
        case 31: _t->d_func()->_q_dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::itemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(QTableWidgetItem * , QTableWidgetItem * );
            if (_t _q_method = &QTableWidget::currentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)();
            if (_t _q_method = &QTableWidget::itemSelectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int );
            if (_t _q_method = &QTableWidget::cellChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QTableWidget::*)(int , int , int , int );
            if (_t _q_method = &QTableWidget::currentCellChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTableWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTableWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTableWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int QTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QTableWidget::itemPressed(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTableWidget::itemClicked(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTableWidget::itemDoubleClicked(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTableWidget::itemActivated(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTableWidget::itemEntered(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTableWidget::itemChanged(QTableWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTableWidget::currentItemChanged(QTableWidgetItem * _t1, QTableWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QTableWidget::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QTableWidget::cellPressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QTableWidget::cellClicked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QTableWidget::cellDoubleClicked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QTableWidget::cellActivated(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QTableWidget::cellEntered(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QTableWidget::cellChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QTableWidget::currentCellChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
