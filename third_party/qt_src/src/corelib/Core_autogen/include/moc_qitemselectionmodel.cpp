/****************************************************************************
** Meta object code from reading C++ file 'qitemselectionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qitemselectionmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qitemselectionmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS = QtMocHelpers::stringData(
    "QItemSelectionModel",
    "selectionChanged",
    "",
    "QItemSelection",
    "selected",
    "deselected",
    "currentChanged",
    "QModelIndex",
    "current",
    "previous",
    "currentRowChanged",
    "currentColumnChanged",
    "modelChanged",
    "QAbstractItemModel*",
    "model",
    "setCurrentIndex",
    "index",
    "QItemSelectionModel::SelectionFlags",
    "command",
    "select",
    "selection",
    "clear",
    "reset",
    "clearSelection",
    "clearCurrentIndex",
    "isSelected",
    "isRowSelected",
    "row",
    "parent",
    "isColumnSelected",
    "column",
    "rowIntersectsSelection",
    "columnIntersectsSelection",
    "selectedRows",
    "QModelIndexList",
    "selectedColumns",
    "hasSelection",
    "currentIndex",
    "selectedIndexes",
    "SelectionFlags",
    "SelectionFlag",
    "NoUpdate",
    "Clear",
    "Select",
    "Deselect",
    "Toggle",
    "Current",
    "Rows",
    "Columns",
    "SelectCurrent",
    "ToggleCurrent",
    "ClearAndSelect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[9];
    char stringdata5[11];
    char stringdata6[15];
    char stringdata7[12];
    char stringdata8[8];
    char stringdata9[9];
    char stringdata10[18];
    char stringdata11[21];
    char stringdata12[13];
    char stringdata13[20];
    char stringdata14[6];
    char stringdata15[16];
    char stringdata16[6];
    char stringdata17[36];
    char stringdata18[8];
    char stringdata19[7];
    char stringdata20[10];
    char stringdata21[6];
    char stringdata22[6];
    char stringdata23[15];
    char stringdata24[18];
    char stringdata25[11];
    char stringdata26[14];
    char stringdata27[4];
    char stringdata28[7];
    char stringdata29[17];
    char stringdata30[7];
    char stringdata31[23];
    char stringdata32[26];
    char stringdata33[13];
    char stringdata34[16];
    char stringdata35[16];
    char stringdata36[13];
    char stringdata37[13];
    char stringdata38[16];
    char stringdata39[15];
    char stringdata40[14];
    char stringdata41[9];
    char stringdata42[6];
    char stringdata43[7];
    char stringdata44[9];
    char stringdata45[7];
    char stringdata46[8];
    char stringdata47[5];
    char stringdata48[8];
    char stringdata49[14];
    char stringdata50[14];
    char stringdata51[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS_t qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QItemSelectionModel"
        QT_MOC_LITERAL(20, 16),  // "selectionChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 14),  // "QItemSelection"
        QT_MOC_LITERAL(53, 8),  // "selected"
        QT_MOC_LITERAL(62, 10),  // "deselected"
        QT_MOC_LITERAL(73, 14),  // "currentChanged"
        QT_MOC_LITERAL(88, 11),  // "QModelIndex"
        QT_MOC_LITERAL(100, 7),  // "current"
        QT_MOC_LITERAL(108, 8),  // "previous"
        QT_MOC_LITERAL(117, 17),  // "currentRowChanged"
        QT_MOC_LITERAL(135, 20),  // "currentColumnChanged"
        QT_MOC_LITERAL(156, 12),  // "modelChanged"
        QT_MOC_LITERAL(169, 19),  // "QAbstractItemModel*"
        QT_MOC_LITERAL(189, 5),  // "model"
        QT_MOC_LITERAL(195, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(211, 5),  // "index"
        QT_MOC_LITERAL(217, 35),  // "QItemSelectionModel::Selectio..."
        QT_MOC_LITERAL(253, 7),  // "command"
        QT_MOC_LITERAL(261, 6),  // "select"
        QT_MOC_LITERAL(268, 9),  // "selection"
        QT_MOC_LITERAL(278, 5),  // "clear"
        QT_MOC_LITERAL(284, 5),  // "reset"
        QT_MOC_LITERAL(290, 14),  // "clearSelection"
        QT_MOC_LITERAL(305, 17),  // "clearCurrentIndex"
        QT_MOC_LITERAL(323, 10),  // "isSelected"
        QT_MOC_LITERAL(334, 13),  // "isRowSelected"
        QT_MOC_LITERAL(348, 3),  // "row"
        QT_MOC_LITERAL(352, 6),  // "parent"
        QT_MOC_LITERAL(359, 16),  // "isColumnSelected"
        QT_MOC_LITERAL(376, 6),  // "column"
        QT_MOC_LITERAL(383, 22),  // "rowIntersectsSelection"
        QT_MOC_LITERAL(406, 25),  // "columnIntersectsSelection"
        QT_MOC_LITERAL(432, 12),  // "selectedRows"
        QT_MOC_LITERAL(445, 15),  // "QModelIndexList"
        QT_MOC_LITERAL(461, 15),  // "selectedColumns"
        QT_MOC_LITERAL(477, 12),  // "hasSelection"
        QT_MOC_LITERAL(490, 12),  // "currentIndex"
        QT_MOC_LITERAL(503, 15),  // "selectedIndexes"
        QT_MOC_LITERAL(519, 14),  // "SelectionFlags"
        QT_MOC_LITERAL(534, 13),  // "SelectionFlag"
        QT_MOC_LITERAL(548, 8),  // "NoUpdate"
        QT_MOC_LITERAL(557, 5),  // "Clear"
        QT_MOC_LITERAL(563, 6),  // "Select"
        QT_MOC_LITERAL(570, 8),  // "Deselect"
        QT_MOC_LITERAL(579, 6),  // "Toggle"
        QT_MOC_LITERAL(586, 7),  // "Current"
        QT_MOC_LITERAL(594, 4),  // "Rows"
        QT_MOC_LITERAL(599, 7),  // "Columns"
        QT_MOC_LITERAL(607, 13),  // "SelectCurrent"
        QT_MOC_LITERAL(621, 13),  // "ToggleCurrent"
        QT_MOC_LITERAL(635, 14)   // "ClearAndSelect"
    },
    "QItemSelectionModel",
    "selectionChanged",
    "",
    "QItemSelection",
    "selected",
    "deselected",
    "currentChanged",
    "QModelIndex",
    "current",
    "previous",
    "currentRowChanged",
    "currentColumnChanged",
    "modelChanged",
    "QAbstractItemModel*",
    "model",
    "setCurrentIndex",
    "index",
    "QItemSelectionModel::SelectionFlags",
    "command",
    "select",
    "selection",
    "clear",
    "reset",
    "clearSelection",
    "clearCurrentIndex",
    "isSelected",
    "isRowSelected",
    "row",
    "parent",
    "isColumnSelected",
    "column",
    "rowIntersectsSelection",
    "columnIntersectsSelection",
    "selectedRows",
    "QModelIndexList",
    "selectedColumns",
    "hasSelection",
    "currentIndex",
    "selectedIndexes",
    "SelectionFlags",
    "SelectionFlag",
    "NoUpdate",
    "Clear",
    "Select",
    "Deselect",
    "Toggle",
    "Current",
    "Rows",
    "Columns",
    "SelectCurrent",
    "ToggleCurrent",
    "ClearAndSelect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQItemSelectionModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       5,  249, // properties
       1,  274, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  164,    2, 0x06,    7 /* Public */,
       6,    2,  169,    2, 0x06,   10 /* Public */,
      10,    2,  174,    2, 0x06,   13 /* Public */,
      11,    2,  179,    2, 0x06,   16 /* Public */,
      12,    1,  184,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    2,  187,    2, 0x0a,   21 /* Public */,
      19,    2,  192,    2, 0x0a,   24 /* Public */,
      19,    2,  197,    2, 0x0a,   27 /* Public */,
      21,    0,  202,    2, 0x0a,   30 /* Public */,
      22,    0,  203,    2, 0x0a,   31 /* Public */,
      23,    0,  204,    2, 0x0a,   32 /* Public */,
      24,    0,  205,    2, 0x0a,   33 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      25,    1,  206,    2, 0x102,   34 /* Public | MethodIsConst  */,
      26,    2,  209,    2, 0x102,   36 /* Public | MethodIsConst  */,
      26,    1,  214,    2, 0x122,   39 /* Public | MethodCloned | MethodIsConst  */,
      29,    2,  217,    2, 0x102,   41 /* Public | MethodIsConst  */,
      29,    1,  222,    2, 0x122,   44 /* Public | MethodCloned | MethodIsConst  */,
      31,    2,  225,    2, 0x102,   46 /* Public | MethodIsConst  */,
      31,    1,  230,    2, 0x122,   49 /* Public | MethodCloned | MethodIsConst  */,
      32,    2,  233,    2, 0x102,   51 /* Public | MethodIsConst  */,
      32,    1,  238,    2, 0x122,   54 /* Public | MethodCloned | MethodIsConst  */,
      33,    1,  241,    2, 0x102,   56 /* Public | MethodIsConst  */,
      33,    0,  244,    2, 0x122,   58 /* Public | MethodCloned | MethodIsConst  */,
      35,    1,  245,    2, 0x102,   59 /* Public | MethodIsConst  */,
      35,    0,  248,    2, 0x122,   61 /* Public | MethodCloned | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 17,   20,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 7,   16,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 7,   27,   28,
    QMetaType::Bool, QMetaType::Int,   27,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 7,   30,   28,
    QMetaType::Bool, QMetaType::Int,   30,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 7,   27,   28,
    QMetaType::Bool, QMetaType::Int,   27,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 7,   30,   28,
    QMetaType::Bool, QMetaType::Int,   30,
    0x80000000 | 34, QMetaType::Int,   30,
    0x80000000 | 34,
    0x80000000 | 34, QMetaType::Int,   27,
    0x80000000 | 34,

 // properties: name, type, flags
      14, 0x80000000 | 13, 0x0201510b, uint(4), 0,
      36, QMetaType::Bool, 0x00004001, uint(0), 0,
      37, 0x80000000 | 7, 0x00004009, uint(1), 0,
      20, 0x80000000 | 3, 0x00004009, uint(0), 0,
      38, 0x80000000 | 34, 0x00004009, uint(0), 0,

 // enums: name, alias, flags, count, data
      39,   40, 0x1,   11,  279,

 // enum data: key, value
      41, uint(QItemSelectionModel::NoUpdate),
      42, uint(QItemSelectionModel::Clear),
      43, uint(QItemSelectionModel::Select),
      44, uint(QItemSelectionModel::Deselect),
      45, uint(QItemSelectionModel::Toggle),
      46, uint(QItemSelectionModel::Current),
      47, uint(QItemSelectionModel::Rows),
      48, uint(QItemSelectionModel::Columns),
      49, uint(QItemSelectionModel::SelectCurrent),
      50, uint(QItemSelectionModel::ToggleCurrent),
      51, uint(QItemSelectionModel::ClearAndSelect),

       0        // eod
};

Q_CONSTINIT const QMetaObject QItemSelectionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQItemSelectionModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS_t,
        // property 'model'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel*, std::true_type>,
        // property 'hasSelection'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::true_type>,
        // property 'selection'
        QtPrivate::TypeAndForceComplete<QItemSelection, std::true_type>,
        // property 'selectedIndexes'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::true_type>,
        // enum 'SelectionFlags'
        QtPrivate::TypeAndForceComplete<QItemSelectionModel::SelectionFlags, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QItemSelectionModel, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'currentColumnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'modelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemModel *, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelectionModel::SelectionFlags, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelectionModel::SelectionFlags, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelectionModel::SelectionFlags, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'isRowSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'isRowSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isColumnSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'isColumnSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowIntersectsSelection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'rowIntersectsSelection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnIntersectsSelection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'columnIntersectsSelection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectedRows'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectedRows'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        // method 'selectedColumns'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectedColumns'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>
    >,
    nullptr
} };

void QItemSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QItemSelectionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 3: _t->currentColumnChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 4: _t->modelChanged((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1]))); break;
        case 5: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 6: _t->select((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 7: _t->select((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 8: _t->clear(); break;
        case 9: _t->reset(); break;
        case 10: _t->clearSelection(); break;
        case 11: _t->clearCurrentIndex(); break;
        case 12: { bool _r = _t->isSelected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isRowSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isRowSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isColumnSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isColumnSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->rowIntersectsSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->rowIntersectsSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->columnIntersectsSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->columnIntersectsSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { QModelIndexList _r = _t->selectedRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 22: { QModelIndexList _r = _t->selectedRows();
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 23: { QModelIndexList _r = _t->selectedColumns((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 24: { QModelIndexList _r = _t->selectedColumns();
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QItemSelectionModel::*)(const QItemSelection & , const QItemSelection & );
            if (_t _q_method = &QItemSelectionModel::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QItemSelectionModel::*)(const QModelIndex & , const QModelIndex & );
            if (_t _q_method = &QItemSelectionModel::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QItemSelectionModel::*)(const QModelIndex & , const QModelIndex & );
            if (_t _q_method = &QItemSelectionModel::currentRowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QItemSelectionModel::*)(const QModelIndex & , const QModelIndex & );
            if (_t _q_method = &QItemSelectionModel::currentColumnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QItemSelectionModel::*)(QAbstractItemModel * );
            if (_t _q_method = &QItemSelectionModel::modelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QItemSelectionModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 2: *reinterpret_cast< QModelIndex*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< QItemSelection*>(_v) = _t->selection(); break;
        case 4: *reinterpret_cast< QModelIndexList*>(_v) = _t->selectedIndexes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QItemSelectionModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
        auto *_t = static_cast<QItemSelectionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableModel(); break;
        default: break;
        }
    }
}

const QMetaObject *QItemSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QItemSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQItemSelectionModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QItemSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QItemSelectionModel::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QItemSelectionModel::currentChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QItemSelectionModel::currentRowChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QItemSelectionModel::currentColumnChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QItemSelectionModel::modelChanged(QAbstractItemModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
