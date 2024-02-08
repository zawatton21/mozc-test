/****************************************************************************
** Meta object code from reading C++ file 'qwidgettextcontrol_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qwidgettextcontrol_p.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidgettextcontrol_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS = QtMocHelpers::stringData(
    "QWidgetTextControl",
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
    "updateRequest",
    "rect",
    "documentSizeChanged",
    "blockCountChanged",
    "newBlockCount",
    "visibilityRequest",
    "microFocusChanged",
    "linkActivated",
    "link",
    "linkHovered",
    "blockMarkerHovered",
    "QTextBlock",
    "block",
    "modificationChanged",
    "m",
    "setPlainText",
    "text",
    "setHtml",
    "cut",
    "copy",
    "paste",
    "QClipboard::Mode",
    "mode",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "insertHtml",
    "append",
    "appendHtml",
    "html",
    "appendPlainText",
    "adjustSize",
    "_q_deleteSelected",
    "_q_copyLink",
    "loadResource",
    "type",
    "name",
    "overwriteMode",
    "acceptRichText",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "openExternalLinks",
    "ignoreUnusedNavigationEvents"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS_t {
    uint offsetsAndSizes[116];
    char stringdata0[19];
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
    char stringdata12[14];
    char stringdata13[5];
    char stringdata14[20];
    char stringdata15[18];
    char stringdata16[14];
    char stringdata17[18];
    char stringdata18[18];
    char stringdata19[14];
    char stringdata20[5];
    char stringdata21[12];
    char stringdata22[19];
    char stringdata23[11];
    char stringdata24[6];
    char stringdata25[20];
    char stringdata26[2];
    char stringdata27[13];
    char stringdata28[5];
    char stringdata29[8];
    char stringdata30[4];
    char stringdata31[5];
    char stringdata32[6];
    char stringdata33[17];
    char stringdata34[5];
    char stringdata35[5];
    char stringdata36[5];
    char stringdata37[6];
    char stringdata38[10];
    char stringdata39[16];
    char stringdata40[11];
    char stringdata41[7];
    char stringdata42[11];
    char stringdata43[5];
    char stringdata44[16];
    char stringdata45[11];
    char stringdata46[18];
    char stringdata47[12];
    char stringdata48[13];
    char stringdata49[5];
    char stringdata50[5];
    char stringdata51[14];
    char stringdata52[15];
    char stringdata53[12];
    char stringdata54[21];
    char stringdata55[25];
    char stringdata56[18];
    char stringdata57[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS_t qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QWidgetTextControl"
        QT_MOC_LITERAL(19, 11),  // "textChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 13),  // "undoAvailable"
        QT_MOC_LITERAL(46, 1),  // "b"
        QT_MOC_LITERAL(48, 13),  // "redoAvailable"
        QT_MOC_LITERAL(62, 24),  // "currentCharFormatChanged"
        QT_MOC_LITERAL(87, 15),  // "QTextCharFormat"
        QT_MOC_LITERAL(103, 6),  // "format"
        QT_MOC_LITERAL(110, 13),  // "copyAvailable"
        QT_MOC_LITERAL(124, 16),  // "selectionChanged"
        QT_MOC_LITERAL(141, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(163, 13),  // "updateRequest"
        QT_MOC_LITERAL(177, 4),  // "rect"
        QT_MOC_LITERAL(182, 19),  // "documentSizeChanged"
        QT_MOC_LITERAL(202, 17),  // "blockCountChanged"
        QT_MOC_LITERAL(220, 13),  // "newBlockCount"
        QT_MOC_LITERAL(234, 17),  // "visibilityRequest"
        QT_MOC_LITERAL(252, 17),  // "microFocusChanged"
        QT_MOC_LITERAL(270, 13),  // "linkActivated"
        QT_MOC_LITERAL(284, 4),  // "link"
        QT_MOC_LITERAL(289, 11),  // "linkHovered"
        QT_MOC_LITERAL(301, 18),  // "blockMarkerHovered"
        QT_MOC_LITERAL(320, 10),  // "QTextBlock"
        QT_MOC_LITERAL(331, 5),  // "block"
        QT_MOC_LITERAL(337, 19),  // "modificationChanged"
        QT_MOC_LITERAL(357, 1),  // "m"
        QT_MOC_LITERAL(359, 12),  // "setPlainText"
        QT_MOC_LITERAL(372, 4),  // "text"
        QT_MOC_LITERAL(377, 7),  // "setHtml"
        QT_MOC_LITERAL(385, 3),  // "cut"
        QT_MOC_LITERAL(389, 4),  // "copy"
        QT_MOC_LITERAL(394, 5),  // "paste"
        QT_MOC_LITERAL(400, 16),  // "QClipboard::Mode"
        QT_MOC_LITERAL(417, 4),  // "mode"
        QT_MOC_LITERAL(422, 4),  // "undo"
        QT_MOC_LITERAL(427, 4),  // "redo"
        QT_MOC_LITERAL(432, 5),  // "clear"
        QT_MOC_LITERAL(438, 9),  // "selectAll"
        QT_MOC_LITERAL(448, 15),  // "insertPlainText"
        QT_MOC_LITERAL(464, 10),  // "insertHtml"
        QT_MOC_LITERAL(475, 6),  // "append"
        QT_MOC_LITERAL(482, 10),  // "appendHtml"
        QT_MOC_LITERAL(493, 4),  // "html"
        QT_MOC_LITERAL(498, 15),  // "appendPlainText"
        QT_MOC_LITERAL(514, 10),  // "adjustSize"
        QT_MOC_LITERAL(525, 17),  // "_q_deleteSelected"
        QT_MOC_LITERAL(543, 11),  // "_q_copyLink"
        QT_MOC_LITERAL(555, 12),  // "loadResource"
        QT_MOC_LITERAL(568, 4),  // "type"
        QT_MOC_LITERAL(573, 4),  // "name"
        QT_MOC_LITERAL(578, 13),  // "overwriteMode"
        QT_MOC_LITERAL(592, 14),  // "acceptRichText"
        QT_MOC_LITERAL(607, 11),  // "cursorWidth"
        QT_MOC_LITERAL(619, 20),  // "textInteractionFlags"
        QT_MOC_LITERAL(640, 24),  // "Qt::TextInteractionFlags"
        QT_MOC_LITERAL(665, 17),  // "openExternalLinks"
        QT_MOC_LITERAL(683, 28)   // "ignoreUnusedNavigationEvents"
    },
    "QWidgetTextControl",
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
    "updateRequest",
    "rect",
    "documentSizeChanged",
    "blockCountChanged",
    "newBlockCount",
    "visibilityRequest",
    "microFocusChanged",
    "linkActivated",
    "link",
    "linkHovered",
    "blockMarkerHovered",
    "QTextBlock",
    "block",
    "modificationChanged",
    "m",
    "setPlainText",
    "text",
    "setHtml",
    "cut",
    "copy",
    "paste",
    "QClipboard::Mode",
    "mode",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "insertHtml",
    "append",
    "appendHtml",
    "html",
    "appendPlainText",
    "adjustSize",
    "_q_deleteSelected",
    "_q_copyLink",
    "loadResource",
    "type",
    "name",
    "overwriteMode",
    "acceptRichText",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "openExternalLinks",
    "ignoreUnusedNavigationEvents"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQWidgetTextControlENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       7,  310, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  230,    2, 0x06,    8 /* Public */,
       3,    1,  231,    2, 0x06,    9 /* Public */,
       5,    1,  234,    2, 0x06,   11 /* Public */,
       6,    1,  237,    2, 0x06,   13 /* Public */,
       9,    1,  240,    2, 0x06,   15 /* Public */,
      10,    0,  243,    2, 0x06,   17 /* Public */,
      11,    0,  244,    2, 0x06,   18 /* Public */,
      12,    1,  245,    2, 0x06,   19 /* Public */,
      12,    0,  248,    2, 0x26,   21 /* Public | MethodCloned */,
      14,    1,  249,    2, 0x06,   22 /* Public */,
      15,    1,  252,    2, 0x06,   24 /* Public */,
      17,    1,  255,    2, 0x06,   26 /* Public */,
      18,    0,  258,    2, 0x06,   28 /* Public */,
      19,    1,  259,    2, 0x06,   29 /* Public */,
      21,    1,  262,    2, 0x06,   31 /* Public */,
      22,    1,  265,    2, 0x06,   33 /* Public */,
      25,    1,  268,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      27,    1,  271,    2, 0x0a,   37 /* Public */,
      29,    1,  274,    2, 0x0a,   39 /* Public */,
      30,    0,  277,    2, 0x0a,   41 /* Public */,
      31,    0,  278,    2, 0x0a,   42 /* Public */,
      32,    1,  279,    2, 0x0a,   43 /* Public */,
      32,    0,  282,    2, 0x2a,   45 /* Public | MethodCloned */,
      35,    0,  283,    2, 0x0a,   46 /* Public */,
      36,    0,  284,    2, 0x0a,   47 /* Public */,
      37,    0,  285,    2, 0x0a,   48 /* Public */,
      38,    0,  286,    2, 0x0a,   49 /* Public */,
      39,    1,  287,    2, 0x0a,   50 /* Public */,
      40,    1,  290,    2, 0x0a,   52 /* Public */,
      41,    1,  293,    2, 0x0a,   54 /* Public */,
      42,    1,  296,    2, 0x0a,   56 /* Public */,
      44,    1,  299,    2, 0x0a,   58 /* Public */,
      45,    0,  302,    2, 0x0a,   60 /* Public */,
      46,    0,  303,    2, 0x08,   61 /* Private */,
      47,    0,  304,    2, 0x08,   62 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      48,    2,  305,    2, 0x02,   63 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSizeF,    2,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QRectF,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,   26,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, QMetaType::Int, QMetaType::QUrl,   49,   50,

 // properties: name, type, flags
      43, QMetaType::QString, 0x00115103, uint(0), 0,
      51, QMetaType::Bool, 0x00015103, uint(-1), 0,
      52, QMetaType::Bool, 0x00015103, uint(-1), 0,
      53, QMetaType::Int, 0x00015103, uint(-1), 0,
      54, 0x80000000 | 55, 0x0001510b, uint(-1), 0,
      56, QMetaType::Bool, 0x00015103, uint(-1), 0,
      57, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QWidgetTextControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QInputControl::staticMetaObject>(),
    qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQWidgetTextControlENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS_t,
        // property 'html'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'acceptRichText'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'openExternalLinks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'ignoreUnusedNavigationEvents'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWidgetTextControl, std::true_type>,
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
        // method 'updateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'updateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'documentSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSizeF &, std::false_type>,
        // method 'blockCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'visibilityRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'microFocusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'linkHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'blockMarkerHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextBlock &, std::false_type>,
        // method 'modificationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QClipboard::Mode, std::false_type>,
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
        // method 'appendHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'adjustSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_deleteSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_copyLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadResource'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void QWidgetTextControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWidgetTextControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->currentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 4: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->cursorPositionChanged(); break;
        case 7: _t->updateRequest((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 8: _t->updateRequest(); break;
        case 9: _t->documentSizeChanged((*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 10: _t->blockCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->visibilityRequest((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 12: _t->microFocusChanged(); break;
        case 13: _t->linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->linkHovered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->blockMarkerHovered((*reinterpret_cast< std::add_pointer_t<QTextBlock>>(_a[1]))); break;
        case 16: _t->modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->cut(); break;
        case 20: _t->copy(); break;
        case 21: _t->paste((*reinterpret_cast< std::add_pointer_t<QClipboard::Mode>>(_a[1]))); break;
        case 22: _t->paste(); break;
        case 23: _t->undo(); break;
        case 24: _t->redo(); break;
        case 25: _t->clear(); break;
        case 26: _t->selectAll(); break;
        case 27: _t->insertPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->insertHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->append((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->appendHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->appendPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->adjustSize(); break;
        case 33: _t->d_func()->_q_deleteSelected(); break;
        case 34: _t->d_func()->_q_copyLink(); break;
        case 35: { QVariant _r = _t->loadResource((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWidgetTextControl::*)();
            if (_t _q_method = &QWidgetTextControl::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(bool );
            if (_t _q_method = &QWidgetTextControl::undoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(bool );
            if (_t _q_method = &QWidgetTextControl::redoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QTextCharFormat & );
            if (_t _q_method = &QWidgetTextControl::currentCharFormatChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(bool );
            if (_t _q_method = &QWidgetTextControl::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)();
            if (_t _q_method = &QWidgetTextControl::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)();
            if (_t _q_method = &QWidgetTextControl::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QRectF & );
            if (_t _q_method = &QWidgetTextControl::updateRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QSizeF & );
            if (_t _q_method = &QWidgetTextControl::documentSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(int );
            if (_t _q_method = &QWidgetTextControl::blockCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QRectF & );
            if (_t _q_method = &QWidgetTextControl::visibilityRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)();
            if (_t _q_method = &QWidgetTextControl::microFocusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QString & );
            if (_t _q_method = &QWidgetTextControl::linkActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QString & );
            if (_t _q_method = &QWidgetTextControl::linkHovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(const QTextBlock & );
            if (_t _q_method = &QWidgetTextControl::blockMarkerHovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QWidgetTextControl::*)(bool );
            if (_t _q_method = &QWidgetTextControl::modificationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QWidgetTextControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->toHtml(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->overwriteMode(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->acceptRichText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 4: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->openExternalLinks(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->ignoreUnusedNavigationEvents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QWidgetTextControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAcceptRichText(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 5: _t->setOpenExternalLinks(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setIgnoreUnusedNavigationEvents(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QWidgetTextControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidgetTextControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQWidgetTextControlENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QInputControl::qt_metacast(_clname);
}

int QWidgetTextControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QInputControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QWidgetTextControl::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWidgetTextControl::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWidgetTextControl::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWidgetTextControl::currentCharFormatChanged(const QTextCharFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWidgetTextControl::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWidgetTextControl::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QWidgetTextControl::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QWidgetTextControl::updateRequest(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void QWidgetTextControl::documentSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QWidgetTextControl::blockCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QWidgetTextControl::visibilityRequest(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QWidgetTextControl::microFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QWidgetTextControl::linkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QWidgetTextControl::linkHovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QWidgetTextControl::blockMarkerHovered(const QTextBlock & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QWidgetTextControl::modificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS = QtMocHelpers::stringData(
    "QUnicodeControlCharacterMenu",
    "menuActionTriggered",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[29];
    char stringdata1[20];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS_t qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "QUnicodeControlCharacterMenu"
        QT_MOC_LITERAL(29, 19),  // "menuActionTriggered"
        QT_MOC_LITERAL(49, 0)   // ""
    },
    "QUnicodeControlCharacterMenu",
    "menuActionTriggered",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQUnicodeControlCharacterMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QUnicodeControlCharacterMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQUnicodeControlCharacterMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QUnicodeControlCharacterMenu, std::true_type>,
        // method 'menuActionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QUnicodeControlCharacterMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QUnicodeControlCharacterMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->menuActionTriggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QUnicodeControlCharacterMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUnicodeControlCharacterMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQUnicodeControlCharacterMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int QUnicodeControlCharacterMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
