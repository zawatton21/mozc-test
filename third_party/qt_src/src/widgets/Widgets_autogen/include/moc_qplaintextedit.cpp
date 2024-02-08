/****************************************************************************
** Meta object code from reading C++ file 'qplaintextedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qplaintextedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaintextedit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlainTextEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlainTextEditENDCLASS = QtMocHelpers::stringData(
    "QPlainTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "updateRequest",
    "rect",
    "dy",
    "blockCountChanged",
    "newBlockCount",
    "modificationChanged",
    "setPlainText",
    "text",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "appendPlainText",
    "appendHtml",
    "html",
    "centerCursor",
    "zoomIn",
    "range",
    "zoomOut",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "readOnly",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "blockCount",
    "maximumBlockCount",
    "backgroundVisible",
    "centerOnScroll",
    "placeholderText",
    "NoWrap",
    "WidgetWidth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlainTextEditENDCLASS_t {
    uint offsetsAndSizes[110];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[2];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[17];
    char stringdata8[22];
    char stringdata9[14];
    char stringdata10[5];
    char stringdata11[3];
    char stringdata12[18];
    char stringdata13[14];
    char stringdata14[20];
    char stringdata15[13];
    char stringdata16[5];
    char stringdata17[4];
    char stringdata18[5];
    char stringdata19[6];
    char stringdata20[5];
    char stringdata21[5];
    char stringdata22[6];
    char stringdata23[10];
    char stringdata24[16];
    char stringdata25[16];
    char stringdata26[11];
    char stringdata27[5];
    char stringdata28[13];
    char stringdata29[7];
    char stringdata30[6];
    char stringdata31[8];
    char stringdata32[17];
    char stringdata33[21];
    char stringdata34[6];
    char stringdata35[9];
    char stringdata36[16];
    char stringdata37[14];
    char stringdata38[16];
    char stringdata39[13];
    char stringdata40[13];
    char stringdata41[9];
    char stringdata42[10];
    char stringdata43[14];
    char stringdata44[16];
    char stringdata45[12];
    char stringdata46[21];
    char stringdata47[25];
    char stringdata48[11];
    char stringdata49[18];
    char stringdata50[18];
    char stringdata51[15];
    char stringdata52[16];
    char stringdata53[7];
    char stringdata54[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlainTextEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlainTextEditENDCLASS_t qt_meta_stringdata_CLASSQPlainTextEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QPlainTextEdit"
        QT_MOC_LITERAL(15, 11),  // "textChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 13),  // "undoAvailable"
        QT_MOC_LITERAL(42, 1),  // "b"
        QT_MOC_LITERAL(44, 13),  // "redoAvailable"
        QT_MOC_LITERAL(58, 13),  // "copyAvailable"
        QT_MOC_LITERAL(72, 16),  // "selectionChanged"
        QT_MOC_LITERAL(89, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(111, 13),  // "updateRequest"
        QT_MOC_LITERAL(125, 4),  // "rect"
        QT_MOC_LITERAL(130, 2),  // "dy"
        QT_MOC_LITERAL(133, 17),  // "blockCountChanged"
        QT_MOC_LITERAL(151, 13),  // "newBlockCount"
        QT_MOC_LITERAL(165, 19),  // "modificationChanged"
        QT_MOC_LITERAL(185, 12),  // "setPlainText"
        QT_MOC_LITERAL(198, 4),  // "text"
        QT_MOC_LITERAL(203, 3),  // "cut"
        QT_MOC_LITERAL(207, 4),  // "copy"
        QT_MOC_LITERAL(212, 5),  // "paste"
        QT_MOC_LITERAL(218, 4),  // "undo"
        QT_MOC_LITERAL(223, 4),  // "redo"
        QT_MOC_LITERAL(228, 5),  // "clear"
        QT_MOC_LITERAL(234, 9),  // "selectAll"
        QT_MOC_LITERAL(244, 15),  // "insertPlainText"
        QT_MOC_LITERAL(260, 15),  // "appendPlainText"
        QT_MOC_LITERAL(276, 10),  // "appendHtml"
        QT_MOC_LITERAL(287, 4),  // "html"
        QT_MOC_LITERAL(292, 12),  // "centerCursor"
        QT_MOC_LITERAL(305, 6),  // "zoomIn"
        QT_MOC_LITERAL(312, 5),  // "range"
        QT_MOC_LITERAL(318, 7),  // "zoomOut"
        QT_MOC_LITERAL(326, 16),  // "inputMethodQuery"
        QT_MOC_LITERAL(343, 20),  // "Qt::InputMethodQuery"
        QT_MOC_LITERAL(364, 5),  // "query"
        QT_MOC_LITERAL(370, 8),  // "argument"
        QT_MOC_LITERAL(379, 15),  // "tabChangesFocus"
        QT_MOC_LITERAL(395, 13),  // "documentTitle"
        QT_MOC_LITERAL(409, 15),  // "undoRedoEnabled"
        QT_MOC_LITERAL(425, 12),  // "lineWrapMode"
        QT_MOC_LITERAL(438, 12),  // "LineWrapMode"
        QT_MOC_LITERAL(451, 8),  // "readOnly"
        QT_MOC_LITERAL(460, 9),  // "plainText"
        QT_MOC_LITERAL(470, 13),  // "overwriteMode"
        QT_MOC_LITERAL(484, 15),  // "tabStopDistance"
        QT_MOC_LITERAL(500, 11),  // "cursorWidth"
        QT_MOC_LITERAL(512, 20),  // "textInteractionFlags"
        QT_MOC_LITERAL(533, 24),  // "Qt::TextInteractionFlags"
        QT_MOC_LITERAL(558, 10),  // "blockCount"
        QT_MOC_LITERAL(569, 17),  // "maximumBlockCount"
        QT_MOC_LITERAL(587, 17),  // "backgroundVisible"
        QT_MOC_LITERAL(605, 14),  // "centerOnScroll"
        QT_MOC_LITERAL(620, 15),  // "placeholderText"
        QT_MOC_LITERAL(636, 6),  // "NoWrap"
        QT_MOC_LITERAL(643, 11)   // "WidgetWidth"
    },
    "QPlainTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "updateRequest",
    "rect",
    "dy",
    "blockCountChanged",
    "newBlockCount",
    "modificationChanged",
    "setPlainText",
    "text",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "appendPlainText",
    "appendHtml",
    "html",
    "centerCursor",
    "zoomIn",
    "range",
    "zoomOut",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "readOnly",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "blockCount",
    "maximumBlockCount",
    "backgroundVisible",
    "centerOnScroll",
    "placeholderText",
    "NoWrap",
    "WidgetWidth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlainTextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      15,  226, // properties
       1,  301, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,   17 /* Public */,
       3,    1,  171,    2, 0x06,   18 /* Public */,
       5,    1,  174,    2, 0x06,   20 /* Public */,
       6,    1,  177,    2, 0x06,   22 /* Public */,
       7,    0,  180,    2, 0x06,   24 /* Public */,
       8,    0,  181,    2, 0x06,   25 /* Public */,
       9,    2,  182,    2, 0x06,   26 /* Public */,
      12,    1,  187,    2, 0x06,   29 /* Public */,
      14,    1,  190,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  193,    2, 0x0a,   33 /* Public */,
      17,    0,  196,    2, 0x0a,   35 /* Public */,
      18,    0,  197,    2, 0x0a,   36 /* Public */,
      19,    0,  198,    2, 0x0a,   37 /* Public */,
      20,    0,  199,    2, 0x0a,   38 /* Public */,
      21,    0,  200,    2, 0x0a,   39 /* Public */,
      22,    0,  201,    2, 0x0a,   40 /* Public */,
      23,    0,  202,    2, 0x0a,   41 /* Public */,
      24,    1,  203,    2, 0x0a,   42 /* Public */,
      25,    1,  206,    2, 0x0a,   44 /* Public */,
      26,    1,  209,    2, 0x0a,   46 /* Public */,
      28,    0,  212,    2, 0x0a,   48 /* Public */,
      29,    1,  213,    2, 0x0a,   49 /* Public */,
      29,    0,  216,    2, 0x2a,   51 /* Public | MethodCloned */,
      31,    1,  217,    2, 0x0a,   52 /* Public */,
      31,    0,  220,    2, 0x2a,   54 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      32,    2,  221,    2, 0x102,   55 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 33, QMetaType::QVariant,   34,   35,

 // properties: name, type, flags
      36, QMetaType::Bool, 0x00015103, uint(-1), 0,
      37, QMetaType::QString, 0x00015103, uint(-1), 0,
      38, QMetaType::Bool, 0x00015103, uint(-1), 0,
      39, 0x80000000 | 40, 0x0001510b, uint(-1), 0,
      41, QMetaType::Bool, 0x00015103, uint(-1), 0,
      42, QMetaType::QString, 0x00115103, uint(0), 0,
      43, QMetaType::Bool, 0x00015103, uint(-1), 0,
      44, QMetaType::QReal, 0x00015103, uint(-1), 0,
      45, QMetaType::Int, 0x00015103, uint(-1), 0,
      46, 0x80000000 | 47, 0x0001510b, uint(-1), 0,
      48, QMetaType::Int, 0x00015001, uint(-1), 0,
      49, QMetaType::Int, 0x00015103, uint(-1), 0,
      50, QMetaType::Bool, 0x00015103, uint(-1), 0,
      51, QMetaType::Bool, 0x00015103, uint(-1), 0,
      52, QMetaType::QString, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      40,   40, 0x0,    2,  306,

 // enum data: key, value
      53, uint(QPlainTextEdit::NoWrap),
      54, uint(QPlainTextEdit::WidgetWidth),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlainTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlainTextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlainTextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlainTextEditENDCLASS_t,
        // property 'tabChangesFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'undoRedoEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lineWrapMode'
        QtPrivate::TypeAndForceComplete<LineWrapMode, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'plainText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabStopDistance'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'blockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumBlockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'backgroundVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'centerOnScroll'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'LineWrapMode'
        QtPrivate::TypeAndForceComplete<QPlainTextEdit::LineWrapMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlainTextEdit, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'blockCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'modificationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlainText'
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
        // method 'appendPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'centerCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void QPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlainTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->cursorPositionChanged(); break;
        case 6: _t->updateRequest((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->blockCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->cut(); break;
        case 11: _t->copy(); break;
        case 12: _t->paste(); break;
        case 13: _t->undo(); break;
        case 14: _t->redo(); break;
        case 15: _t->clear(); break;
        case 16: _t->selectAll(); break;
        case 17: _t->insertPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->appendPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->appendHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->centerCursor(); break;
        case 21: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->zoomIn(); break;
        case 23: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->zoomOut(); break;
        case 25: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlainTextEdit::*)();
            if (_t _q_method = &QPlainTextEdit::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(bool );
            if (_t _q_method = &QPlainTextEdit::undoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(bool );
            if (_t _q_method = &QPlainTextEdit::redoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(bool );
            if (_t _q_method = &QPlainTextEdit::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)();
            if (_t _q_method = &QPlainTextEdit::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)();
            if (_t _q_method = &QPlainTextEdit::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(const QRect & , int );
            if (_t _q_method = &QPlainTextEdit::updateRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(int );
            if (_t _q_method = &QPlainTextEdit::blockCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QPlainTextEdit::*)(bool );
            if (_t _q_method = &QPlainTextEdit::modificationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPlainTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->tabChangesFocus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->documentTitle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isUndoRedoEnabled(); break;
        case 3: *reinterpret_cast< LineWrapMode*>(_v) = _t->lineWrapMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->toPlainText(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->overwriteMode(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->tabStopDistance(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 9: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->blockCount(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->maximumBlockCount(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->backgroundVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->centerOnScroll(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPlainTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 4: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTabStopDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 11: _t->setMaximumBlockCount(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setBackgroundVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setCenterOnScroll(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlainTextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QPlainTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPlainTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlainTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlainTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlainTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QPlainTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QPlainTextEdit::updateRequest(const QRect & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QPlainTextEdit::blockCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QPlainTextEdit::modificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS = QtMocHelpers::stringData(
    "QPlainTextDocumentLayout",
    "cursorWidth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS_t {
    uint offsetsAndSizes[4];
    char stringdata0[25];
    char stringdata1[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS_t qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "QPlainTextDocumentLayout"
        QT_MOC_LITERAL(25, 11)   // "cursorWidth"
    },
    "QPlainTextDocumentLayout",
    "cursorWidth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlainTextDocumentLayoutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlainTextDocumentLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTextDocumentLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlainTextDocumentLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS_t,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlainTextDocumentLayout, std::true_type>
    >,
    nullptr
} };

void QPlainTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPlainTextDocumentLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPlainTextDocumentLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QPlainTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlainTextDocumentLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTextDocumentLayout::qt_metacast(_clname);
}

int QPlainTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
