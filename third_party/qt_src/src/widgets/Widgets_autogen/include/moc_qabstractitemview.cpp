/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qabstractitemview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS = QtMocHelpers::stringData(
    "QAbstractItemView",
    "pressed",
    "",
    "QModelIndex",
    "index",
    "clicked",
    "doubleClicked",
    "activated",
    "entered",
    "viewportEntered",
    "iconSizeChanged",
    "size",
    "reset",
    "setRootIndex",
    "doItemsLayout",
    "selectAll",
    "edit",
    "clearSelection",
    "setCurrentIndex",
    "scrollToTop",
    "scrollToBottom",
    "update",
    "dataChanged",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "rowsInserted",
    "parent",
    "start",
    "end",
    "rowsAboutToBeRemoved",
    "selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "currentChanged",
    "current",
    "previous",
    "updateEditorData",
    "updateEditorGeometries",
    "updateGeometries",
    "verticalScrollbarAction",
    "action",
    "horizontalScrollbarAction",
    "verticalScrollbarValueChanged",
    "value",
    "horizontalScrollbarValueChanged",
    "closeEditor",
    "QWidget*",
    "editor",
    "QAbstractItemDelegate::EndEditHint",
    "hint",
    "commitData",
    "editorDestroyed",
    "_q_columnsAboutToBeRemoved",
    "_q_columnsRemoved",
    "_q_columnsInserted",
    "_q_rowsInserted",
    "_q_rowsRemoved",
    "_q_columnsMoved",
    "_q_rowsMoved",
    "_q_modelDestroyed",
    "_q_layoutChanged",
    "_q_headerDataChanged",
    "_q_scrollerStateChanged",
    "_q_delegateSizeHintChanged",
    "autoScroll",
    "autoScrollMargin",
    "editTriggers",
    "EditTriggers",
    "tabKeyNavigation",
    "showDropIndicator",
    "dragEnabled",
    "dragDropOverwriteMode",
    "dragDropMode",
    "DragDropMode",
    "defaultDropAction",
    "Qt::DropAction",
    "alternatingRowColors",
    "selectionMode",
    "SelectionMode",
    "selectionBehavior",
    "SelectionBehavior",
    "iconSize",
    "textElideMode",
    "Qt::TextElideMode",
    "verticalScrollMode",
    "ScrollMode",
    "horizontalScrollMode",
    "NoSelection",
    "SingleSelection",
    "MultiSelection",
    "ExtendedSelection",
    "ContiguousSelection",
    "SelectItems",
    "SelectRows",
    "SelectColumns",
    "ScrollHint",
    "EnsureVisible",
    "PositionAtTop",
    "PositionAtBottom",
    "PositionAtCenter",
    "EditTrigger",
    "NoEditTriggers",
    "CurrentChanged",
    "DoubleClicked",
    "SelectedClicked",
    "EditKeyPressed",
    "AnyKeyPressed",
    "AllEditTriggers",
    "ScrollPerItem",
    "ScrollPerPixel",
    "NoDragDrop",
    "DragOnly",
    "DropOnly",
    "DragDrop",
    "InternalMove"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS_t {
    uint offsetsAndSizes[236];
    char stringdata0[18];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[10];
    char stringdata8[8];
    char stringdata9[16];
    char stringdata10[16];
    char stringdata11[5];
    char stringdata12[6];
    char stringdata13[13];
    char stringdata14[14];
    char stringdata15[10];
    char stringdata16[5];
    char stringdata17[15];
    char stringdata18[16];
    char stringdata19[12];
    char stringdata20[15];
    char stringdata21[7];
    char stringdata22[12];
    char stringdata23[8];
    char stringdata24[12];
    char stringdata25[11];
    char stringdata26[6];
    char stringdata27[13];
    char stringdata28[7];
    char stringdata29[6];
    char stringdata30[4];
    char stringdata31[21];
    char stringdata32[17];
    char stringdata33[15];
    char stringdata34[9];
    char stringdata35[11];
    char stringdata36[15];
    char stringdata37[8];
    char stringdata38[9];
    char stringdata39[17];
    char stringdata40[23];
    char stringdata41[17];
    char stringdata42[24];
    char stringdata43[7];
    char stringdata44[26];
    char stringdata45[30];
    char stringdata46[6];
    char stringdata47[32];
    char stringdata48[12];
    char stringdata49[9];
    char stringdata50[7];
    char stringdata51[35];
    char stringdata52[5];
    char stringdata53[11];
    char stringdata54[16];
    char stringdata55[27];
    char stringdata56[18];
    char stringdata57[19];
    char stringdata58[16];
    char stringdata59[15];
    char stringdata60[16];
    char stringdata61[13];
    char stringdata62[18];
    char stringdata63[17];
    char stringdata64[21];
    char stringdata65[24];
    char stringdata66[27];
    char stringdata67[11];
    char stringdata68[17];
    char stringdata69[13];
    char stringdata70[13];
    char stringdata71[17];
    char stringdata72[18];
    char stringdata73[12];
    char stringdata74[22];
    char stringdata75[13];
    char stringdata76[13];
    char stringdata77[18];
    char stringdata78[15];
    char stringdata79[21];
    char stringdata80[14];
    char stringdata81[14];
    char stringdata82[18];
    char stringdata83[18];
    char stringdata84[9];
    char stringdata85[14];
    char stringdata86[18];
    char stringdata87[19];
    char stringdata88[11];
    char stringdata89[21];
    char stringdata90[12];
    char stringdata91[16];
    char stringdata92[15];
    char stringdata93[18];
    char stringdata94[20];
    char stringdata95[12];
    char stringdata96[11];
    char stringdata97[14];
    char stringdata98[11];
    char stringdata99[14];
    char stringdata100[14];
    char stringdata101[17];
    char stringdata102[17];
    char stringdata103[12];
    char stringdata104[15];
    char stringdata105[15];
    char stringdata106[14];
    char stringdata107[16];
    char stringdata108[15];
    char stringdata109[14];
    char stringdata110[16];
    char stringdata111[14];
    char stringdata112[15];
    char stringdata113[11];
    char stringdata114[9];
    char stringdata115[9];
    char stringdata116[9];
    char stringdata117[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS_t qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QAbstractItemView"
        QT_MOC_LITERAL(18, 7),  // "pressed"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "QModelIndex"
        QT_MOC_LITERAL(39, 5),  // "index"
        QT_MOC_LITERAL(45, 7),  // "clicked"
        QT_MOC_LITERAL(53, 13),  // "doubleClicked"
        QT_MOC_LITERAL(67, 9),  // "activated"
        QT_MOC_LITERAL(77, 7),  // "entered"
        QT_MOC_LITERAL(85, 15),  // "viewportEntered"
        QT_MOC_LITERAL(101, 15),  // "iconSizeChanged"
        QT_MOC_LITERAL(117, 4),  // "size"
        QT_MOC_LITERAL(122, 5),  // "reset"
        QT_MOC_LITERAL(128, 12),  // "setRootIndex"
        QT_MOC_LITERAL(141, 13),  // "doItemsLayout"
        QT_MOC_LITERAL(155, 9),  // "selectAll"
        QT_MOC_LITERAL(165, 4),  // "edit"
        QT_MOC_LITERAL(170, 14),  // "clearSelection"
        QT_MOC_LITERAL(185, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(201, 11),  // "scrollToTop"
        QT_MOC_LITERAL(213, 14),  // "scrollToBottom"
        QT_MOC_LITERAL(228, 6),  // "update"
        QT_MOC_LITERAL(235, 11),  // "dataChanged"
        QT_MOC_LITERAL(247, 7),  // "topLeft"
        QT_MOC_LITERAL(255, 11),  // "bottomRight"
        QT_MOC_LITERAL(267, 10),  // "QList<int>"
        QT_MOC_LITERAL(278, 5),  // "roles"
        QT_MOC_LITERAL(284, 12),  // "rowsInserted"
        QT_MOC_LITERAL(297, 6),  // "parent"
        QT_MOC_LITERAL(304, 5),  // "start"
        QT_MOC_LITERAL(310, 3),  // "end"
        QT_MOC_LITERAL(314, 20),  // "rowsAboutToBeRemoved"
        QT_MOC_LITERAL(335, 16),  // "selectionChanged"
        QT_MOC_LITERAL(352, 14),  // "QItemSelection"
        QT_MOC_LITERAL(367, 8),  // "selected"
        QT_MOC_LITERAL(376, 10),  // "deselected"
        QT_MOC_LITERAL(387, 14),  // "currentChanged"
        QT_MOC_LITERAL(402, 7),  // "current"
        QT_MOC_LITERAL(410, 8),  // "previous"
        QT_MOC_LITERAL(419, 16),  // "updateEditorData"
        QT_MOC_LITERAL(436, 22),  // "updateEditorGeometries"
        QT_MOC_LITERAL(459, 16),  // "updateGeometries"
        QT_MOC_LITERAL(476, 23),  // "verticalScrollbarAction"
        QT_MOC_LITERAL(500, 6),  // "action"
        QT_MOC_LITERAL(507, 25),  // "horizontalScrollbarAction"
        QT_MOC_LITERAL(533, 29),  // "verticalScrollbarValueChanged"
        QT_MOC_LITERAL(563, 5),  // "value"
        QT_MOC_LITERAL(569, 31),  // "horizontalScrollbarValueChanged"
        QT_MOC_LITERAL(601, 11),  // "closeEditor"
        QT_MOC_LITERAL(613, 8),  // "QWidget*"
        QT_MOC_LITERAL(622, 6),  // "editor"
        QT_MOC_LITERAL(629, 34),  // "QAbstractItemDelegate::EndEdi..."
        QT_MOC_LITERAL(664, 4),  // "hint"
        QT_MOC_LITERAL(669, 10),  // "commitData"
        QT_MOC_LITERAL(680, 15),  // "editorDestroyed"
        QT_MOC_LITERAL(696, 26),  // "_q_columnsAboutToBeRemoved"
        QT_MOC_LITERAL(723, 17),  // "_q_columnsRemoved"
        QT_MOC_LITERAL(741, 18),  // "_q_columnsInserted"
        QT_MOC_LITERAL(760, 15),  // "_q_rowsInserted"
        QT_MOC_LITERAL(776, 14),  // "_q_rowsRemoved"
        QT_MOC_LITERAL(791, 15),  // "_q_columnsMoved"
        QT_MOC_LITERAL(807, 12),  // "_q_rowsMoved"
        QT_MOC_LITERAL(820, 17),  // "_q_modelDestroyed"
        QT_MOC_LITERAL(838, 16),  // "_q_layoutChanged"
        QT_MOC_LITERAL(855, 20),  // "_q_headerDataChanged"
        QT_MOC_LITERAL(876, 23),  // "_q_scrollerStateChanged"
        QT_MOC_LITERAL(900, 26),  // "_q_delegateSizeHintChanged"
        QT_MOC_LITERAL(927, 10),  // "autoScroll"
        QT_MOC_LITERAL(938, 16),  // "autoScrollMargin"
        QT_MOC_LITERAL(955, 12),  // "editTriggers"
        QT_MOC_LITERAL(968, 12),  // "EditTriggers"
        QT_MOC_LITERAL(981, 16),  // "tabKeyNavigation"
        QT_MOC_LITERAL(998, 17),  // "showDropIndicator"
        QT_MOC_LITERAL(1016, 11),  // "dragEnabled"
        QT_MOC_LITERAL(1028, 21),  // "dragDropOverwriteMode"
        QT_MOC_LITERAL(1050, 12),  // "dragDropMode"
        QT_MOC_LITERAL(1063, 12),  // "DragDropMode"
        QT_MOC_LITERAL(1076, 17),  // "defaultDropAction"
        QT_MOC_LITERAL(1094, 14),  // "Qt::DropAction"
        QT_MOC_LITERAL(1109, 20),  // "alternatingRowColors"
        QT_MOC_LITERAL(1130, 13),  // "selectionMode"
        QT_MOC_LITERAL(1144, 13),  // "SelectionMode"
        QT_MOC_LITERAL(1158, 17),  // "selectionBehavior"
        QT_MOC_LITERAL(1176, 17),  // "SelectionBehavior"
        QT_MOC_LITERAL(1194, 8),  // "iconSize"
        QT_MOC_LITERAL(1203, 13),  // "textElideMode"
        QT_MOC_LITERAL(1217, 17),  // "Qt::TextElideMode"
        QT_MOC_LITERAL(1235, 18),  // "verticalScrollMode"
        QT_MOC_LITERAL(1254, 10),  // "ScrollMode"
        QT_MOC_LITERAL(1265, 20),  // "horizontalScrollMode"
        QT_MOC_LITERAL(1286, 11),  // "NoSelection"
        QT_MOC_LITERAL(1298, 15),  // "SingleSelection"
        QT_MOC_LITERAL(1314, 14),  // "MultiSelection"
        QT_MOC_LITERAL(1329, 17),  // "ExtendedSelection"
        QT_MOC_LITERAL(1347, 19),  // "ContiguousSelection"
        QT_MOC_LITERAL(1367, 11),  // "SelectItems"
        QT_MOC_LITERAL(1379, 10),  // "SelectRows"
        QT_MOC_LITERAL(1390, 13),  // "SelectColumns"
        QT_MOC_LITERAL(1404, 10),  // "ScrollHint"
        QT_MOC_LITERAL(1415, 13),  // "EnsureVisible"
        QT_MOC_LITERAL(1429, 13),  // "PositionAtTop"
        QT_MOC_LITERAL(1443, 16),  // "PositionAtBottom"
        QT_MOC_LITERAL(1460, 16),  // "PositionAtCenter"
        QT_MOC_LITERAL(1477, 11),  // "EditTrigger"
        QT_MOC_LITERAL(1489, 14),  // "NoEditTriggers"
        QT_MOC_LITERAL(1504, 14),  // "CurrentChanged"
        QT_MOC_LITERAL(1519, 13),  // "DoubleClicked"
        QT_MOC_LITERAL(1533, 15),  // "SelectedClicked"
        QT_MOC_LITERAL(1549, 14),  // "EditKeyPressed"
        QT_MOC_LITERAL(1564, 13),  // "AnyKeyPressed"
        QT_MOC_LITERAL(1578, 15),  // "AllEditTriggers"
        QT_MOC_LITERAL(1594, 13),  // "ScrollPerItem"
        QT_MOC_LITERAL(1608, 14),  // "ScrollPerPixel"
        QT_MOC_LITERAL(1623, 10),  // "NoDragDrop"
        QT_MOC_LITERAL(1634, 8),  // "DragOnly"
        QT_MOC_LITERAL(1643, 8),  // "DropOnly"
        QT_MOC_LITERAL(1652, 8),  // "DragDrop"
        QT_MOC_LITERAL(1661, 12)   // "InternalMove"
    },
    "QAbstractItemView",
    "pressed",
    "",
    "QModelIndex",
    "index",
    "clicked",
    "doubleClicked",
    "activated",
    "entered",
    "viewportEntered",
    "iconSizeChanged",
    "size",
    "reset",
    "setRootIndex",
    "doItemsLayout",
    "selectAll",
    "edit",
    "clearSelection",
    "setCurrentIndex",
    "scrollToTop",
    "scrollToBottom",
    "update",
    "dataChanged",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "rowsInserted",
    "parent",
    "start",
    "end",
    "rowsAboutToBeRemoved",
    "selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "currentChanged",
    "current",
    "previous",
    "updateEditorData",
    "updateEditorGeometries",
    "updateGeometries",
    "verticalScrollbarAction",
    "action",
    "horizontalScrollbarAction",
    "verticalScrollbarValueChanged",
    "value",
    "horizontalScrollbarValueChanged",
    "closeEditor",
    "QWidget*",
    "editor",
    "QAbstractItemDelegate::EndEditHint",
    "hint",
    "commitData",
    "editorDestroyed",
    "_q_columnsAboutToBeRemoved",
    "_q_columnsRemoved",
    "_q_columnsInserted",
    "_q_rowsInserted",
    "_q_rowsRemoved",
    "_q_columnsMoved",
    "_q_rowsMoved",
    "_q_modelDestroyed",
    "_q_layoutChanged",
    "_q_headerDataChanged",
    "_q_scrollerStateChanged",
    "_q_delegateSizeHintChanged",
    "autoScroll",
    "autoScrollMargin",
    "editTriggers",
    "EditTriggers",
    "tabKeyNavigation",
    "showDropIndicator",
    "dragEnabled",
    "dragDropOverwriteMode",
    "dragDropMode",
    "DragDropMode",
    "defaultDropAction",
    "Qt::DropAction",
    "alternatingRowColors",
    "selectionMode",
    "SelectionMode",
    "selectionBehavior",
    "SelectionBehavior",
    "iconSize",
    "textElideMode",
    "Qt::TextElideMode",
    "verticalScrollMode",
    "ScrollMode",
    "horizontalScrollMode",
    "NoSelection",
    "SingleSelection",
    "MultiSelection",
    "ExtendedSelection",
    "ContiguousSelection",
    "SelectItems",
    "SelectRows",
    "SelectColumns",
    "ScrollHint",
    "EnsureVisible",
    "PositionAtTop",
    "PositionAtBottom",
    "PositionAtCenter",
    "EditTrigger",
    "NoEditTriggers",
    "CurrentChanged",
    "DoubleClicked",
    "SelectedClicked",
    "EditKeyPressed",
    "AnyKeyPressed",
    "AllEditTriggers",
    "ScrollPerItem",
    "ScrollPerPixel",
    "NoDragDrop",
    "DragOnly",
    "DropOnly",
    "DragDrop",
    "InternalMove"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractItemViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
      16,  447, // properties
       6,  527, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  284,    2, 0x06,   23 /* Public */,
       5,    1,  287,    2, 0x06,   25 /* Public */,
       6,    1,  290,    2, 0x06,   27 /* Public */,
       7,    1,  293,    2, 0x06,   29 /* Public */,
       8,    1,  296,    2, 0x06,   31 /* Public */,
       9,    0,  299,    2, 0x06,   33 /* Public */,
      10,    1,  300,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  303,    2, 0x0a,   36 /* Public */,
      13,    1,  304,    2, 0x0a,   37 /* Public */,
      14,    0,  307,    2, 0x0a,   39 /* Public */,
      15,    0,  308,    2, 0x0a,   40 /* Public */,
      16,    1,  309,    2, 0x0a,   41 /* Public */,
      17,    0,  312,    2, 0x0a,   43 /* Public */,
      18,    1,  313,    2, 0x0a,   44 /* Public */,
      19,    0,  316,    2, 0x0a,   46 /* Public */,
      20,    0,  317,    2, 0x0a,   47 /* Public */,
      21,    1,  318,    2, 0x0a,   48 /* Public */,
      22,    3,  321,    2, 0x09,   50 /* Protected */,
      22,    2,  328,    2, 0x29,   54 /* Protected | MethodCloned */,
      27,    3,  333,    2, 0x09,   57 /* Protected */,
      31,    3,  340,    2, 0x09,   61 /* Protected */,
      32,    2,  347,    2, 0x09,   65 /* Protected */,
      36,    2,  352,    2, 0x09,   68 /* Protected */,
      39,    0,  357,    2, 0x09,   71 /* Protected */,
      40,    0,  358,    2, 0x09,   72 /* Protected */,
      41,    0,  359,    2, 0x09,   73 /* Protected */,
      42,    1,  360,    2, 0x09,   74 /* Protected */,
      44,    1,  363,    2, 0x09,   76 /* Protected */,
      45,    1,  366,    2, 0x09,   78 /* Protected */,
      47,    1,  369,    2, 0x09,   80 /* Protected */,
      48,    2,  372,    2, 0x09,   82 /* Protected */,
      53,    1,  377,    2, 0x09,   85 /* Protected */,
      54,    1,  380,    2, 0x09,   87 /* Protected */,
      55,    3,  383,    2, 0x08,   89 /* Private */,
      56,    3,  390,    2, 0x08,   93 /* Private */,
      57,    3,  397,    2, 0x08,   97 /* Private */,
      58,    3,  404,    2, 0x08,  101 /* Private */,
      59,    3,  411,    2, 0x08,  105 /* Private */,
      60,    5,  418,    2, 0x08,  109 /* Private */,
      61,    5,  429,    2, 0x08,  115 /* Private */,
      62,    0,  440,    2, 0x08,  121 /* Private */,
      63,    0,  441,    2, 0x08,  122 /* Private */,
      64,    0,  442,    2, 0x08,  123 /* Private */,
      65,    0,  443,    2, 0x08,  124 /* Private */,
      66,    1,  444,    2, 0x08,  125 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 25,   23,   24,   26,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   23,   24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 33,   34,   35,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 51,   50,   52,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::QObjectStar,   50,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

 // properties: name, type, flags
      67, QMetaType::Bool, 0x00015103, uint(-1), 0,
      68, QMetaType::Int, 0x00015103, uint(-1), 0,
      69, 0x80000000 | 70, 0x0001510b, uint(-1), 0,
      71, QMetaType::Bool, 0x00015103, uint(-1), 0,
      72, QMetaType::Bool, 0x00015003, uint(-1), 0,
      73, QMetaType::Bool, 0x00015103, uint(-1), 0,
      74, QMetaType::Bool, 0x00015103, uint(-1), 0,
      75, 0x80000000 | 76, 0x0001510b, uint(-1), 0,
      77, 0x80000000 | 78, 0x0001510b, uint(-1), 0,
      79, QMetaType::Bool, 0x00015103, uint(-1), 0,
      80, 0x80000000 | 81, 0x0001510b, uint(-1), 0,
      82, 0x80000000 | 83, 0x0001510b, uint(-1), 0,
      84, QMetaType::QSize, 0x00015103, uint(6), 0,
      85, 0x80000000 | 86, 0x0001510b, uint(-1), 0,
      87, 0x80000000 | 88, 0x0001510f, uint(-1), 0,
      89, 0x80000000 | 88, 0x0001510f, uint(-1), 0,

 // enums: name, alias, flags, count, data
      81,   81, 0x0,    5,  557,
      83,   83, 0x0,    3,  567,
      98,   98, 0x0,    4,  573,
      70,  103, 0x1,    7,  581,
      88,   88, 0x0,    2,  595,
      76,   76, 0x0,    5,  599,

 // enum data: key, value
      90, uint(QAbstractItemView::NoSelection),
      91, uint(QAbstractItemView::SingleSelection),
      92, uint(QAbstractItemView::MultiSelection),
      93, uint(QAbstractItemView::ExtendedSelection),
      94, uint(QAbstractItemView::ContiguousSelection),
      95, uint(QAbstractItemView::SelectItems),
      96, uint(QAbstractItemView::SelectRows),
      97, uint(QAbstractItemView::SelectColumns),
      99, uint(QAbstractItemView::EnsureVisible),
     100, uint(QAbstractItemView::PositionAtTop),
     101, uint(QAbstractItemView::PositionAtBottom),
     102, uint(QAbstractItemView::PositionAtCenter),
     104, uint(QAbstractItemView::NoEditTriggers),
     105, uint(QAbstractItemView::CurrentChanged),
     106, uint(QAbstractItemView::DoubleClicked),
     107, uint(QAbstractItemView::SelectedClicked),
     108, uint(QAbstractItemView::EditKeyPressed),
     109, uint(QAbstractItemView::AnyKeyPressed),
     110, uint(QAbstractItemView::AllEditTriggers),
     111, uint(QAbstractItemView::ScrollPerItem),
     112, uint(QAbstractItemView::ScrollPerPixel),
     113, uint(QAbstractItemView::NoDragDrop),
     114, uint(QAbstractItemView::DragOnly),
     115, uint(QAbstractItemView::DropOnly),
     116, uint(QAbstractItemView::DragDrop),
     117, uint(QAbstractItemView::InternalMove),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractItemView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractItemViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS_t,
        // property 'autoScroll'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoScrollMargin'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'editTriggers'
        QtPrivate::TypeAndForceComplete<EditTriggers, std::true_type>,
        // property 'tabKeyNavigation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showDropIndicator'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dragEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dragDropOverwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dragDropMode'
        QtPrivate::TypeAndForceComplete<DragDropMode, std::true_type>,
        // property 'defaultDropAction'
        QtPrivate::TypeAndForceComplete<Qt::DropAction, std::true_type>,
        // property 'alternatingRowColors'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionMode'
        QtPrivate::TypeAndForceComplete<SelectionMode, std::true_type>,
        // property 'selectionBehavior'
        QtPrivate::TypeAndForceComplete<SelectionBehavior, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'textElideMode'
        QtPrivate::TypeAndForceComplete<Qt::TextElideMode, std::true_type>,
        // property 'verticalScrollMode'
        QtPrivate::TypeAndForceComplete<ScrollMode, std::true_type>,
        // property 'horizontalScrollMode'
        QtPrivate::TypeAndForceComplete<ScrollMode, std::true_type>,
        // enum 'SelectionMode'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::SelectionMode, std::true_type>,
        // enum 'SelectionBehavior'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::SelectionBehavior, std::true_type>,
        // enum 'ScrollHint'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::ScrollHint, std::true_type>,
        // enum 'EditTriggers'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::EditTriggers, std::true_type>,
        // enum 'ScrollMode'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::ScrollMode, std::true_type>,
        // enum 'DragDropMode'
        QtPrivate::TypeAndForceComplete<QAbstractItemView::DragDropMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractItemView, std::true_type>,
        // method 'pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'entered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'viewportEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRootIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'doItemsLayout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'clearSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'scrollToTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollToBottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'rowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsAboutToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateEditorData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateEditorGeometries'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateGeometries'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalScrollbarAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'horizontalScrollbarAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'verticalScrollbarValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'horizontalScrollbarValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'closeEditor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemDelegate::EndEditHint, std::false_type>,
        // method 'commitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'editorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method '_q_columnsAboutToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_columnsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_columnsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_rowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_rowsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_columnsMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_rowsMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_modelDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_layoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_headerDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_scrollerStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_delegateSizeHintChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->entered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->viewportEntered(); break;
        case 6: _t->iconSizeChanged((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 7: _t->reset(); break;
        case 8: _t->setRootIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->doItemsLayout(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->edit((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->clearSelection(); break;
        case 13: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 14: _t->scrollToTop(); break;
        case 15: _t->scrollToBottom(); break;
        case 16: _t->update((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 18: _t->dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 19: _t->rowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 20: _t->rowsAboutToBeRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 21: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 22: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 23: _t->updateEditorData(); break;
        case 24: _t->updateEditorGeometries(); break;
        case 25: _t->updateGeometries(); break;
        case 26: _t->verticalScrollbarAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->horizontalScrollbarAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->verticalScrollbarValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->horizontalScrollbarValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->closeEditor((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemDelegate::EndEditHint>>(_a[2]))); break;
        case 31: _t->commitData((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 32: _t->editorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 33: _t->d_func()->_q_columnsAboutToBeRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 34: _t->d_func()->_q_columnsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 35: _t->d_func()->_q_columnsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 36: _t->d_func()->_q_rowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 37: _t->d_func()->_q_rowsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 38: _t->d_func()->_q_columnsMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 39: _t->d_func()->_q_rowsMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 40: _t->d_func()->_q_modelDestroyed(); break;
        case 41: _t->d_func()->_q_layoutChanged(); break;
        case 42: _t->d_func()->_q_headerDataChanged(); break;
        case 43: _t->d_func()->_q_scrollerStateChanged(); break;
        case 44: _t->d_func()->_q_delegateSizeHintChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (_t _q_method = &QAbstractItemView::pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (_t _q_method = &QAbstractItemView::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (_t _q_method = &QAbstractItemView::doubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (_t _q_method = &QAbstractItemView::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (_t _q_method = &QAbstractItemView::entered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)();
            if (_t _q_method = &QAbstractItemView::viewportEntered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QSize & );
            if (_t _q_method = &QAbstractItemView::iconSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasAutoScroll(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->autoScrollMargin(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->editTriggers()); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->tabKeyNavigation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showDropIndicator(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dragEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->dragDropOverwriteMode(); break;
        case 7: *reinterpret_cast< DragDropMode*>(_v) = _t->dragDropMode(); break;
        case 8: *reinterpret_cast< Qt::DropAction*>(_v) = _t->defaultDropAction(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->alternatingRowColors(); break;
        case 10: *reinterpret_cast< SelectionMode*>(_v) = _t->selectionMode(); break;
        case 11: *reinterpret_cast< SelectionBehavior*>(_v) = _t->selectionBehavior(); break;
        case 12: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 13: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->textElideMode(); break;
        case 14: *reinterpret_cast< ScrollMode*>(_v) = _t->verticalScrollMode(); break;
        case 15: *reinterpret_cast< ScrollMode*>(_v) = _t->horizontalScrollMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoScroll(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoScrollMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEditTriggers(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setTabKeyNavigation(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDropIndicatorShown(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDragDropOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDragDropMode(*reinterpret_cast< DragDropMode*>(_v)); break;
        case 8: _t->setDefaultDropAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 9: _t->setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 11: _t->setSelectionBehavior(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 12: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 13: _t->setTextElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 14: _t->setVerticalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        case 15: _t->setHorizontalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        (void)_t;
        switch (_id) {
        case 14: _t->resetVerticalScrollMode(); break;
        case 15: _t->resetHorizontalScrollMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractItemViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QAbstractItemView::pressed(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractItemView::clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractItemView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemView::activated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractItemView::entered(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractItemView::viewportEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QAbstractItemView::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
