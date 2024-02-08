/****************************************************************************
** Meta object code from reading C++ file 'qtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtextedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextedit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTextEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTextEditENDCLASS = QtMocHelpers::stringData(
    "QTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "currentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "setFontPointSize",
    "s",
    "setFontFamily",
    "fontFamily",
    "setFontWeight",
    "w",
    "setFontUnderline",
    "setFontItalic",
    "setTextColor",
    "c",
    "setTextBackgroundColor",
    "setCurrentFont",
    "f",
    "setAlignment",
    "Qt::Alignment",
    "a",
    "setPlainText",
    "text",
    "setHtml",
    "setText",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "insertHtml",
    "append",
    "scrollToAnchor",
    "name",
    "zoomIn",
    "range",
    "zoomOut",
    "_q_repaintContents",
    "r",
    "_q_currentCharFormatChanged",
    "_q_adjustScrollbars",
    "_q_ensureVisible",
    "_q_cursorPositionChanged",
    "_q_hoveredBlockWithMarkerChanged",
    "QTextBlock",
    "loadResource",
    "type",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "autoFormatting",
    "AutoFormatting",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "lineWrapColumnOrWidth",
    "readOnly",
    "html",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "acceptRichText",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "document",
    "QTextDocument*",
    "placeholderText",
    "NoWrap",
    "WidgetWidth",
    "FixedPixelWidth",
    "FixedColumnWidth",
    "AutoFormattingFlag",
    "AutoNone",
    "AutoBulletList",
    "AutoAll"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTextEditENDCLASS_t {
    uint offsetsAndSizes[178];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[2];
    char stringdata5[14];
    char stringdata6[25];
    char stringdata7[16];
    char stringdata8[7];
    char stringdata9[14];
    char stringdata10[17];
    char stringdata11[22];
    char stringdata12[17];
    char stringdata13[2];
    char stringdata14[14];
    char stringdata15[11];
    char stringdata16[14];
    char stringdata17[2];
    char stringdata18[17];
    char stringdata19[14];
    char stringdata20[13];
    char stringdata21[2];
    char stringdata22[23];
    char stringdata23[15];
    char stringdata24[2];
    char stringdata25[13];
    char stringdata26[14];
    char stringdata27[2];
    char stringdata28[13];
    char stringdata29[5];
    char stringdata30[8];
    char stringdata31[8];
    char stringdata32[4];
    char stringdata33[5];
    char stringdata34[6];
    char stringdata35[5];
    char stringdata36[5];
    char stringdata37[6];
    char stringdata38[10];
    char stringdata39[16];
    char stringdata40[11];
    char stringdata41[7];
    char stringdata42[15];
    char stringdata43[5];
    char stringdata44[7];
    char stringdata45[6];
    char stringdata46[8];
    char stringdata47[19];
    char stringdata48[2];
    char stringdata49[28];
    char stringdata50[20];
    char stringdata51[17];
    char stringdata52[25];
    char stringdata53[33];
    char stringdata54[11];
    char stringdata55[13];
    char stringdata56[5];
    char stringdata57[17];
    char stringdata58[21];
    char stringdata59[6];
    char stringdata60[9];
    char stringdata61[15];
    char stringdata62[15];
    char stringdata63[16];
    char stringdata64[14];
    char stringdata65[16];
    char stringdata66[13];
    char stringdata67[13];
    char stringdata68[22];
    char stringdata69[9];
    char stringdata70[5];
    char stringdata71[10];
    char stringdata72[14];
    char stringdata73[16];
    char stringdata74[15];
    char stringdata75[12];
    char stringdata76[21];
    char stringdata77[25];
    char stringdata78[9];
    char stringdata79[15];
    char stringdata80[16];
    char stringdata81[7];
    char stringdata82[12];
    char stringdata83[16];
    char stringdata84[17];
    char stringdata85[19];
    char stringdata86[9];
    char stringdata87[15];
    char stringdata88[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTextEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTextEditENDCLASS_t qt_meta_stringdata_CLASSQTextEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QTextEdit"
        QT_MOC_LITERAL(10, 11),  // "textChanged"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "undoAvailable"
        QT_MOC_LITERAL(37, 1),  // "b"
        QT_MOC_LITERAL(39, 13),  // "redoAvailable"
        QT_MOC_LITERAL(53, 24),  // "currentCharFormatChanged"
        QT_MOC_LITERAL(78, 15),  // "QTextCharFormat"
        QT_MOC_LITERAL(94, 6),  // "format"
        QT_MOC_LITERAL(101, 13),  // "copyAvailable"
        QT_MOC_LITERAL(115, 16),  // "selectionChanged"
        QT_MOC_LITERAL(132, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(154, 16),  // "setFontPointSize"
        QT_MOC_LITERAL(171, 1),  // "s"
        QT_MOC_LITERAL(173, 13),  // "setFontFamily"
        QT_MOC_LITERAL(187, 10),  // "fontFamily"
        QT_MOC_LITERAL(198, 13),  // "setFontWeight"
        QT_MOC_LITERAL(212, 1),  // "w"
        QT_MOC_LITERAL(214, 16),  // "setFontUnderline"
        QT_MOC_LITERAL(231, 13),  // "setFontItalic"
        QT_MOC_LITERAL(245, 12),  // "setTextColor"
        QT_MOC_LITERAL(258, 1),  // "c"
        QT_MOC_LITERAL(260, 22),  // "setTextBackgroundColor"
        QT_MOC_LITERAL(283, 14),  // "setCurrentFont"
        QT_MOC_LITERAL(298, 1),  // "f"
        QT_MOC_LITERAL(300, 12),  // "setAlignment"
        QT_MOC_LITERAL(313, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(327, 1),  // "a"
        QT_MOC_LITERAL(329, 12),  // "setPlainText"
        QT_MOC_LITERAL(342, 4),  // "text"
        QT_MOC_LITERAL(347, 7),  // "setHtml"
        QT_MOC_LITERAL(355, 7),  // "setText"
        QT_MOC_LITERAL(363, 3),  // "cut"
        QT_MOC_LITERAL(367, 4),  // "copy"
        QT_MOC_LITERAL(372, 5),  // "paste"
        QT_MOC_LITERAL(378, 4),  // "undo"
        QT_MOC_LITERAL(383, 4),  // "redo"
        QT_MOC_LITERAL(388, 5),  // "clear"
        QT_MOC_LITERAL(394, 9),  // "selectAll"
        QT_MOC_LITERAL(404, 15),  // "insertPlainText"
        QT_MOC_LITERAL(420, 10),  // "insertHtml"
        QT_MOC_LITERAL(431, 6),  // "append"
        QT_MOC_LITERAL(438, 14),  // "scrollToAnchor"
        QT_MOC_LITERAL(453, 4),  // "name"
        QT_MOC_LITERAL(458, 6),  // "zoomIn"
        QT_MOC_LITERAL(465, 5),  // "range"
        QT_MOC_LITERAL(471, 7),  // "zoomOut"
        QT_MOC_LITERAL(479, 18),  // "_q_repaintContents"
        QT_MOC_LITERAL(498, 1),  // "r"
        QT_MOC_LITERAL(500, 27),  // "_q_currentCharFormatChanged"
        QT_MOC_LITERAL(528, 19),  // "_q_adjustScrollbars"
        QT_MOC_LITERAL(548, 16),  // "_q_ensureVisible"
        QT_MOC_LITERAL(565, 24),  // "_q_cursorPositionChanged"
        QT_MOC_LITERAL(590, 32),  // "_q_hoveredBlockWithMarkerChanged"
        QT_MOC_LITERAL(623, 10),  // "QTextBlock"
        QT_MOC_LITERAL(634, 12),  // "loadResource"
        QT_MOC_LITERAL(647, 4),  // "type"
        QT_MOC_LITERAL(652, 16),  // "inputMethodQuery"
        QT_MOC_LITERAL(669, 20),  // "Qt::InputMethodQuery"
        QT_MOC_LITERAL(690, 5),  // "query"
        QT_MOC_LITERAL(696, 8),  // "argument"
        QT_MOC_LITERAL(705, 14),  // "autoFormatting"
        QT_MOC_LITERAL(720, 14),  // "AutoFormatting"
        QT_MOC_LITERAL(735, 15),  // "tabChangesFocus"
        QT_MOC_LITERAL(751, 13),  // "documentTitle"
        QT_MOC_LITERAL(765, 15),  // "undoRedoEnabled"
        QT_MOC_LITERAL(781, 12),  // "lineWrapMode"
        QT_MOC_LITERAL(794, 12),  // "LineWrapMode"
        QT_MOC_LITERAL(807, 21),  // "lineWrapColumnOrWidth"
        QT_MOC_LITERAL(829, 8),  // "readOnly"
        QT_MOC_LITERAL(838, 4),  // "html"
        QT_MOC_LITERAL(843, 9),  // "plainText"
        QT_MOC_LITERAL(853, 13),  // "overwriteMode"
        QT_MOC_LITERAL(867, 15),  // "tabStopDistance"
        QT_MOC_LITERAL(883, 14),  // "acceptRichText"
        QT_MOC_LITERAL(898, 11),  // "cursorWidth"
        QT_MOC_LITERAL(910, 20),  // "textInteractionFlags"
        QT_MOC_LITERAL(931, 24),  // "Qt::TextInteractionFlags"
        QT_MOC_LITERAL(956, 8),  // "document"
        QT_MOC_LITERAL(965, 14),  // "QTextDocument*"
        QT_MOC_LITERAL(980, 15),  // "placeholderText"
        QT_MOC_LITERAL(996, 6),  // "NoWrap"
        QT_MOC_LITERAL(1003, 11),  // "WidgetWidth"
        QT_MOC_LITERAL(1015, 15),  // "FixedPixelWidth"
        QT_MOC_LITERAL(1031, 16),  // "FixedColumnWidth"
        QT_MOC_LITERAL(1048, 18),  // "AutoFormattingFlag"
        QT_MOC_LITERAL(1067, 8),  // "AutoNone"
        QT_MOC_LITERAL(1076, 14),  // "AutoBulletList"
        QT_MOC_LITERAL(1091, 7)   // "AutoAll"
    },
    "QTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "currentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "setFontPointSize",
    "s",
    "setFontFamily",
    "fontFamily",
    "setFontWeight",
    "w",
    "setFontUnderline",
    "setFontItalic",
    "setTextColor",
    "c",
    "setTextBackgroundColor",
    "setCurrentFont",
    "f",
    "setAlignment",
    "Qt::Alignment",
    "a",
    "setPlainText",
    "text",
    "setHtml",
    "setText",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "insertHtml",
    "append",
    "scrollToAnchor",
    "name",
    "zoomIn",
    "range",
    "zoomOut",
    "_q_repaintContents",
    "r",
    "_q_currentCharFormatChanged",
    "_q_adjustScrollbars",
    "_q_ensureVisible",
    "_q_cursorPositionChanged",
    "_q_hoveredBlockWithMarkerChanged",
    "QTextBlock",
    "loadResource",
    "type",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "autoFormatting",
    "AutoFormatting",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "lineWrapColumnOrWidth",
    "readOnly",
    "html",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "acceptRichText",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "document",
    "QTextDocument*",
    "placeholderText",
    "NoWrap",
    "WidgetWidth",
    "FixedPixelWidth",
    "FixedColumnWidth",
    "AutoFormattingFlag",
    "AutoNone",
    "AutoBulletList",
    "AutoAll"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      16,  368, // properties
       2,  448, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  266,    2, 0x06,   19 /* Public */,
       3,    1,  267,    2, 0x06,   20 /* Public */,
       5,    1,  270,    2, 0x06,   22 /* Public */,
       6,    1,  273,    2, 0x06,   24 /* Public */,
       9,    1,  276,    2, 0x06,   26 /* Public */,
      10,    0,  279,    2, 0x06,   28 /* Public */,
      11,    0,  280,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  281,    2, 0x0a,   30 /* Public */,
      14,    1,  284,    2, 0x0a,   32 /* Public */,
      16,    1,  287,    2, 0x0a,   34 /* Public */,
      18,    1,  290,    2, 0x0a,   36 /* Public */,
      19,    1,  293,    2, 0x0a,   38 /* Public */,
      20,    1,  296,    2, 0x0a,   40 /* Public */,
      22,    1,  299,    2, 0x0a,   42 /* Public */,
      23,    1,  302,    2, 0x0a,   44 /* Public */,
      25,    1,  305,    2, 0x0a,   46 /* Public */,
      28,    1,  308,    2, 0x0a,   48 /* Public */,
      30,    1,  311,    2, 0x0a,   50 /* Public */,
      31,    1,  314,    2, 0x0a,   52 /* Public */,
      32,    0,  317,    2, 0x0a,   54 /* Public */,
      33,    0,  318,    2, 0x0a,   55 /* Public */,
      34,    0,  319,    2, 0x0a,   56 /* Public */,
      35,    0,  320,    2, 0x0a,   57 /* Public */,
      36,    0,  321,    2, 0x0a,   58 /* Public */,
      37,    0,  322,    2, 0x0a,   59 /* Public */,
      38,    0,  323,    2, 0x0a,   60 /* Public */,
      39,    1,  324,    2, 0x0a,   61 /* Public */,
      40,    1,  327,    2, 0x0a,   63 /* Public */,
      41,    1,  330,    2, 0x0a,   65 /* Public */,
      42,    1,  333,    2, 0x0a,   67 /* Public */,
      44,    1,  336,    2, 0x0a,   69 /* Public */,
      44,    0,  339,    2, 0x2a,   71 /* Public | MethodCloned */,
      46,    1,  340,    2, 0x0a,   72 /* Public */,
      46,    0,  343,    2, 0x2a,   74 /* Public | MethodCloned */,
      47,    1,  344,    2, 0x08,   75 /* Private */,
      49,    1,  347,    2, 0x08,   77 /* Private */,
      50,    0,  350,    2, 0x08,   79 /* Private */,
      51,    1,  351,    2, 0x08,   80 /* Private */,
      52,    0,  354,    2, 0x08,   82 /* Private */,
      53,    1,  355,    2, 0x08,   83 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      55,    2,  358,    2, 0x02,   85 /* Public */,
      57,    2,  363,    2, 0x102,   88 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QColor,   21,
    QMetaType::Void, QMetaType::QColor,   21,
    QMetaType::Void, QMetaType::QFont,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   48,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54,    2,

 // methods: parameters
    QMetaType::QVariant, QMetaType::Int, QMetaType::QUrl,   56,   43,
    QMetaType::QVariant, 0x80000000 | 58, QMetaType::QVariant,   59,   60,

 // properties: name, type, flags
      61, 0x80000000 | 62, 0x0001510b, uint(-1), 0,
      63, QMetaType::Bool, 0x00015103, uint(-1), 0,
      64, QMetaType::QString, 0x00015103, uint(-1), 0,
      65, QMetaType::Bool, 0x00015103, uint(-1), 0,
      66, 0x80000000 | 67, 0x0001510b, uint(-1), 0,
      68, QMetaType::Int, 0x00015103, uint(-1), 0,
      69, QMetaType::Bool, 0x00015103, uint(-1), 0,
      70, QMetaType::QString, 0x00115103, uint(0), 0,
      71, QMetaType::QString, 0x00014103, uint(-1), 0,
      72, QMetaType::Bool, 0x00015103, uint(-1), 0,
      73, QMetaType::QReal, 0x00015103, uint(-1), 0,
      74, QMetaType::Bool, 0x00015103, uint(-1), 0,
      75, QMetaType::Int, 0x00015103, uint(-1), 0,
      76, 0x80000000 | 77, 0x0001510b, uint(-1), 0,
      78, 0x80000000 | 79, 0x0001410b, uint(-1), 0,
      80, QMetaType::QString, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      67,   67, 0x0,    4,  458,
      62,   85, 0x1,    3,  466,

 // enum data: key, value
      81, uint(QTextEdit::NoWrap),
      82, uint(QTextEdit::WidgetWidth),
      83, uint(QTextEdit::FixedPixelWidth),
      84, uint(QTextEdit::FixedColumnWidth),
      86, uint(QTextEdit::AutoNone),
      87, uint(QTextEdit::AutoBulletList),
      88, uint(QTextEdit::AutoAll),

       0        // eod
};

Q_CONSTINIT const QMetaObject QTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTextEditENDCLASS_t,
        // property 'autoFormatting'
        QtPrivate::TypeAndForceComplete<AutoFormatting, std::true_type>,
        // property 'tabChangesFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'undoRedoEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lineWrapMode'
        QtPrivate::TypeAndForceComplete<LineWrapMode, std::true_type>,
        // property 'lineWrapColumnOrWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'html'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'plainText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabStopDistance'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'acceptRichText'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'document'
        QtPrivate::TypeAndForceComplete<QTextDocument*, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'LineWrapMode'
        QtPrivate::TypeAndForceComplete<QTextEdit::LineWrapMode, std::true_type>,
        // enum 'AutoFormatting'
        QtPrivate::TypeAndForceComplete<QTextEdit::AutoFormatting, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTextEdit, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'currentCharFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCharFormat &, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFontPointSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setFontFamily'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFontWeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFontUnderline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFontItalic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTextColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setTextBackgroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setCurrentFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'setAlignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::false_type>,
        // method 'setPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'insertHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'append'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scrollToAnchor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_repaintContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method '_q_currentCharFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCharFormat &, std::false_type>,
        // method '_q_adjustScrollbars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_ensureVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method '_q_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_hoveredBlockWithMarkerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextBlock &, std::false_type>,
        // method 'loadResource'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void QTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->currentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 4: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->cursorPositionChanged(); break;
        case 7: _t->setFontPointSize((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->setFontFamily((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setFontWeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setFontUnderline((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setFontItalic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setTextColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 13: _t->setTextBackgroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 14: _t->setCurrentFont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 15: _t->setAlignment((*reinterpret_cast< std::add_pointer_t<Qt::Alignment>>(_a[1]))); break;
        case 16: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->cut(); break;
        case 20: _t->copy(); break;
        case 21: _t->paste(); break;
        case 22: _t->undo(); break;
        case 23: _t->redo(); break;
        case 24: _t->clear(); break;
        case 25: _t->selectAll(); break;
        case 26: _t->insertPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->insertHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->append((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->scrollToAnchor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->zoomIn(); break;
        case 32: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->zoomOut(); break;
        case 34: _t->d_func()->_q_repaintContents((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 35: _t->d_func()->_q_currentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 36: _t->d_func()->_q_adjustScrollbars(); break;
        case 37: _t->d_func()->_q_ensureVisible((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 38: _t->d_func()->_q_cursorPositionChanged(); break;
        case 39: _t->d_func()->_q_hoveredBlockWithMarkerChanged((*reinterpret_cast< std::add_pointer_t<QTextBlock>>(_a[1]))); break;
        case 40: { QVariant _r = _t->loadResource((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 41: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTextEdit::*)();
            if (_t _q_method = &QTextEdit::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)(bool );
            if (_t _q_method = &QTextEdit::undoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)(bool );
            if (_t _q_method = &QTextEdit::redoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)(const QTextCharFormat & );
            if (_t _q_method = &QTextEdit::currentCharFormatChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)(bool );
            if (_t _q_method = &QTextEdit::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)();
            if (_t _q_method = &QTextEdit::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTextEdit::*)();
            if (_t _q_method = &QTextEdit::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->autoFormatting()); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->tabChangesFocus(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->documentTitle(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isUndoRedoEnabled(); break;
        case 4: *reinterpret_cast< LineWrapMode*>(_v) = _t->lineWrapMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->lineWrapColumnOrWidth(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->toHtml(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->toPlainText(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->overwriteMode(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->tabStopDistance(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->acceptRichText(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 13: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 14: *reinterpret_cast< QTextDocument**>(_v) = _t->document(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoFormatting(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 5: _t->setLineWrapColumnOrWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setTabStopDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setAcceptRichText(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 14: _t->setDocument(*reinterpret_cast< QTextDocument**>(_v)); break;
        case 15: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 42;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTextEdit::currentCharFormatChanged(const QTextCharFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
