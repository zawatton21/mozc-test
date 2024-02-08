/****************************************************************************
** Meta object code from reading C++ file 'qtableview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtableview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtableview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTableViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTableViewENDCLASS = QtMocHelpers::stringData(
    "QTableView",
    "selectRow",
    "",
    "row",
    "selectColumn",
    "column",
    "hideRow",
    "hideColumn",
    "showRow",
    "showColumn",
    "resizeRowToContents",
    "resizeRowsToContents",
    "resizeColumnToContents",
    "resizeColumnsToContents",
    "sortByColumn",
    "Qt::SortOrder",
    "order",
    "setShowGrid",
    "show",
    "rowMoved",
    "oldIndex",
    "newIndex",
    "columnMoved",
    "rowResized",
    "oldHeight",
    "newHeight",
    "columnResized",
    "oldWidth",
    "newWidth",
    "rowCountChanged",
    "oldCount",
    "newCount",
    "columnCountChanged",
    "_q_selectRow",
    "_q_selectColumn",
    "_q_updateSpanInsertedRows",
    "QModelIndex",
    "_q_updateSpanInsertedColumns",
    "_q_updateSpanRemovedRows",
    "_q_updateSpanRemovedColumns",
    "_q_sortIndicatorChanged",
    "showGrid",
    "gridStyle",
    "Qt::PenStyle",
    "sortingEnabled",
    "wordWrap",
    "cornerButtonEnabled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTableViewENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[8];
    char stringdata7[11];
    char stringdata8[8];
    char stringdata9[11];
    char stringdata10[20];
    char stringdata11[21];
    char stringdata12[23];
    char stringdata13[24];
    char stringdata14[13];
    char stringdata15[14];
    char stringdata16[6];
    char stringdata17[12];
    char stringdata18[5];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[9];
    char stringdata22[12];
    char stringdata23[11];
    char stringdata24[10];
    char stringdata25[10];
    char stringdata26[14];
    char stringdata27[9];
    char stringdata28[9];
    char stringdata29[16];
    char stringdata30[9];
    char stringdata31[9];
    char stringdata32[19];
    char stringdata33[13];
    char stringdata34[16];
    char stringdata35[26];
    char stringdata36[12];
    char stringdata37[29];
    char stringdata38[25];
    char stringdata39[28];
    char stringdata40[24];
    char stringdata41[9];
    char stringdata42[10];
    char stringdata43[13];
    char stringdata44[15];
    char stringdata45[9];
    char stringdata46[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTableViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTableViewENDCLASS_t qt_meta_stringdata_CLASSQTableViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QTableView"
        QT_MOC_LITERAL(11, 9),  // "selectRow"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 3),  // "row"
        QT_MOC_LITERAL(26, 12),  // "selectColumn"
        QT_MOC_LITERAL(39, 6),  // "column"
        QT_MOC_LITERAL(46, 7),  // "hideRow"
        QT_MOC_LITERAL(54, 10),  // "hideColumn"
        QT_MOC_LITERAL(65, 7),  // "showRow"
        QT_MOC_LITERAL(73, 10),  // "showColumn"
        QT_MOC_LITERAL(84, 19),  // "resizeRowToContents"
        QT_MOC_LITERAL(104, 20),  // "resizeRowsToContents"
        QT_MOC_LITERAL(125, 22),  // "resizeColumnToContents"
        QT_MOC_LITERAL(148, 23),  // "resizeColumnsToContents"
        QT_MOC_LITERAL(172, 12),  // "sortByColumn"
        QT_MOC_LITERAL(185, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(199, 5),  // "order"
        QT_MOC_LITERAL(205, 11),  // "setShowGrid"
        QT_MOC_LITERAL(217, 4),  // "show"
        QT_MOC_LITERAL(222, 8),  // "rowMoved"
        QT_MOC_LITERAL(231, 8),  // "oldIndex"
        QT_MOC_LITERAL(240, 8),  // "newIndex"
        QT_MOC_LITERAL(249, 11),  // "columnMoved"
        QT_MOC_LITERAL(261, 10),  // "rowResized"
        QT_MOC_LITERAL(272, 9),  // "oldHeight"
        QT_MOC_LITERAL(282, 9),  // "newHeight"
        QT_MOC_LITERAL(292, 13),  // "columnResized"
        QT_MOC_LITERAL(306, 8),  // "oldWidth"
        QT_MOC_LITERAL(315, 8),  // "newWidth"
        QT_MOC_LITERAL(324, 15),  // "rowCountChanged"
        QT_MOC_LITERAL(340, 8),  // "oldCount"
        QT_MOC_LITERAL(349, 8),  // "newCount"
        QT_MOC_LITERAL(358, 18),  // "columnCountChanged"
        QT_MOC_LITERAL(377, 12),  // "_q_selectRow"
        QT_MOC_LITERAL(390, 15),  // "_q_selectColumn"
        QT_MOC_LITERAL(406, 25),  // "_q_updateSpanInsertedRows"
        QT_MOC_LITERAL(432, 11),  // "QModelIndex"
        QT_MOC_LITERAL(444, 28),  // "_q_updateSpanInsertedColumns"
        QT_MOC_LITERAL(473, 24),  // "_q_updateSpanRemovedRows"
        QT_MOC_LITERAL(498, 27),  // "_q_updateSpanRemovedColumns"
        QT_MOC_LITERAL(526, 23),  // "_q_sortIndicatorChanged"
        QT_MOC_LITERAL(550, 8),  // "showGrid"
        QT_MOC_LITERAL(559, 9),  // "gridStyle"
        QT_MOC_LITERAL(569, 12),  // "Qt::PenStyle"
        QT_MOC_LITERAL(582, 14),  // "sortingEnabled"
        QT_MOC_LITERAL(597, 8),  // "wordWrap"
        QT_MOC_LITERAL(606, 19)   // "cornerButtonEnabled"
    },
    "QTableView",
    "selectRow",
    "",
    "row",
    "selectColumn",
    "column",
    "hideRow",
    "hideColumn",
    "showRow",
    "showColumn",
    "resizeRowToContents",
    "resizeRowsToContents",
    "resizeColumnToContents",
    "resizeColumnsToContents",
    "sortByColumn",
    "Qt::SortOrder",
    "order",
    "setShowGrid",
    "show",
    "rowMoved",
    "oldIndex",
    "newIndex",
    "columnMoved",
    "rowResized",
    "oldHeight",
    "newHeight",
    "columnResized",
    "oldWidth",
    "newWidth",
    "rowCountChanged",
    "oldCount",
    "newCount",
    "columnCountChanged",
    "_q_selectRow",
    "_q_selectColumn",
    "_q_updateSpanInsertedRows",
    "QModelIndex",
    "_q_updateSpanInsertedColumns",
    "_q_updateSpanRemovedRows",
    "_q_updateSpanRemovedColumns",
    "_q_sortIndicatorChanged",
    "showGrid",
    "gridStyle",
    "Qt::PenStyle",
    "sortingEnabled",
    "wordWrap",
    "cornerButtonEnabled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTableViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       5,  275, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x0a,    6 /* Public */,
       4,    1,  167,    2, 0x0a,    8 /* Public */,
       6,    1,  170,    2, 0x0a,   10 /* Public */,
       7,    1,  173,    2, 0x0a,   12 /* Public */,
       8,    1,  176,    2, 0x0a,   14 /* Public */,
       9,    1,  179,    2, 0x0a,   16 /* Public */,
      10,    1,  182,    2, 0x0a,   18 /* Public */,
      11,    0,  185,    2, 0x0a,   20 /* Public */,
      12,    1,  186,    2, 0x0a,   21 /* Public */,
      13,    0,  189,    2, 0x0a,   23 /* Public */,
      14,    2,  190,    2, 0x0a,   24 /* Public */,
      17,    1,  195,    2, 0x0a,   27 /* Public */,
      19,    3,  198,    2, 0x09,   29 /* Protected */,
      22,    3,  205,    2, 0x09,   33 /* Protected */,
      23,    3,  212,    2, 0x09,   37 /* Protected */,
      26,    3,  219,    2, 0x09,   41 /* Protected */,
      29,    2,  226,    2, 0x09,   45 /* Protected */,
      32,    2,  231,    2, 0x09,   48 /* Protected */,
      33,    1,  236,    2, 0x08,   51 /* Private */,
      34,    1,  239,    2, 0x08,   53 /* Private */,
      35,    3,  242,    2, 0x08,   55 /* Private */,
      37,    3,  249,    2, 0x08,   59 /* Private */,
      38,    3,  256,    2, 0x08,   63 /* Private */,
      39,    3,  263,    2, 0x08,   67 /* Private */,
      40,    2,  270,    2, 0x08,   71 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,    5,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,    5,   16,

 // properties: name, type, flags
      41, QMetaType::Bool, 0x00015103, uint(-1), 0,
      42, 0x80000000 | 43, 0x0001510b, uint(-1), 0,
      44, QMetaType::Bool, 0x00015103, uint(-1), 0,
      45, QMetaType::Bool, 0x00015103, uint(-1), 0,
      46, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTableViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTableViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTableViewENDCLASS_t,
        // property 'showGrid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gridStyle'
        QtPrivate::TypeAndForceComplete<Qt::PenStyle, std::true_type>,
        // property 'sortingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wordWrap'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cornerButtonEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTableView, std::true_type>,
        // method 'selectRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeRowToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeRowsToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizeColumnToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeColumnsToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortByColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'setShowGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rowMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_selectRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_selectColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_updateSpanInsertedRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_updateSpanInsertedColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_updateSpanRemovedRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_updateSpanRemovedColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_sortIndicatorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>
    >,
    nullptr
} };

void QTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->selectColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->hideRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->hideColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->showRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->showColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->resizeRowToContents((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->resizeRowsToContents(); break;
        case 8: _t->resizeColumnToContents((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->resizeColumnsToContents(); break;
        case 10: _t->sortByColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 11: _t->setShowGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->rowMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 13: _t->columnMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->rowResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->columnResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 16: _t->rowCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->columnCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->d_func()->_q_selectRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->d_func()->_q_selectColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->d_func()->_q_updateSpanInsertedRows((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 21: _t->d_func()->_q_updateSpanInsertedColumns((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 22: _t->d_func()->_q_updateSpanRemovedRows((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 23: _t->d_func()->_q_updateSpanRemovedColumns((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 24: _t->d_func()->_q_sortIndicatorChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showGrid(); break;
        case 1: *reinterpret_cast< Qt::PenStyle*>(_v) = _t->gridStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSortingEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isCornerButtonEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGridStyle(*reinterpret_cast< Qt::PenStyle*>(_v)); break;
        case 2: _t->setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCornerButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTableViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int QTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
