/****************************************************************************
** Meta object code from reading C++ file 'qlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qlineedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlineedit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQLineEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQLineEditENDCLASS = QtMocHelpers::stringData(
    "QLineEdit",
    "textChanged",
    "",
    "textEdited",
    "cursorPositionChanged",
    "returnPressed",
    "editingFinished",
    "selectionChanged",
    "inputRejected",
    "setText",
    "clear",
    "selectAll",
    "undo",
    "redo",
    "cut",
    "copy",
    "paste",
    "_q_handleWindowActivate",
    "_q_textEdited",
    "_q_cursorPositionChanged",
    "_q_selectionChanged",
    "_q_updateNeeded",
    "_q_textChanged",
    "_q_clearButtonClicked",
    "_q_controlEditingFinished",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "property",
    "argument",
    "inputMask",
    "text",
    "maxLength",
    "frame",
    "echoMode",
    "EchoMode",
    "displayText",
    "cursorPosition",
    "alignment",
    "Qt::Alignment",
    "modified",
    "hasSelectedText",
    "selectedText",
    "dragEnabled",
    "readOnly",
    "undoAvailable",
    "redoAvailable",
    "acceptableInput",
    "placeholderText",
    "cursorMoveStyle",
    "Qt::CursorMoveStyle",
    "clearButtonEnabled",
    "ActionPosition",
    "LeadingPosition",
    "TrailingPosition",
    "Normal",
    "NoEcho",
    "Password",
    "PasswordEchoOnEdit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQLineEditENDCLASS_t {
    uint offsetsAndSizes[116];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[22];
    char stringdata5[14];
    char stringdata6[16];
    char stringdata7[17];
    char stringdata8[14];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[10];
    char stringdata12[5];
    char stringdata13[5];
    char stringdata14[4];
    char stringdata15[5];
    char stringdata16[6];
    char stringdata17[24];
    char stringdata18[14];
    char stringdata19[25];
    char stringdata20[20];
    char stringdata21[16];
    char stringdata22[15];
    char stringdata23[22];
    char stringdata24[26];
    char stringdata25[17];
    char stringdata26[21];
    char stringdata27[9];
    char stringdata28[9];
    char stringdata29[10];
    char stringdata30[5];
    char stringdata31[10];
    char stringdata32[6];
    char stringdata33[9];
    char stringdata34[9];
    char stringdata35[12];
    char stringdata36[15];
    char stringdata37[10];
    char stringdata38[14];
    char stringdata39[9];
    char stringdata40[16];
    char stringdata41[13];
    char stringdata42[12];
    char stringdata43[9];
    char stringdata44[14];
    char stringdata45[14];
    char stringdata46[16];
    char stringdata47[16];
    char stringdata48[16];
    char stringdata49[20];
    char stringdata50[19];
    char stringdata51[15];
    char stringdata52[16];
    char stringdata53[17];
    char stringdata54[7];
    char stringdata55[7];
    char stringdata56[9];
    char stringdata57[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQLineEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQLineEditENDCLASS_t qt_meta_stringdata_CLASSQLineEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QLineEdit"
        QT_MOC_LITERAL(10, 11),  // "textChanged"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 10),  // "textEdited"
        QT_MOC_LITERAL(34, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(56, 13),  // "returnPressed"
        QT_MOC_LITERAL(70, 15),  // "editingFinished"
        QT_MOC_LITERAL(86, 16),  // "selectionChanged"
        QT_MOC_LITERAL(103, 13),  // "inputRejected"
        QT_MOC_LITERAL(117, 7),  // "setText"
        QT_MOC_LITERAL(125, 5),  // "clear"
        QT_MOC_LITERAL(131, 9),  // "selectAll"
        QT_MOC_LITERAL(141, 4),  // "undo"
        QT_MOC_LITERAL(146, 4),  // "redo"
        QT_MOC_LITERAL(151, 3),  // "cut"
        QT_MOC_LITERAL(155, 4),  // "copy"
        QT_MOC_LITERAL(160, 5),  // "paste"
        QT_MOC_LITERAL(166, 23),  // "_q_handleWindowActivate"
        QT_MOC_LITERAL(190, 13),  // "_q_textEdited"
        QT_MOC_LITERAL(204, 24),  // "_q_cursorPositionChanged"
        QT_MOC_LITERAL(229, 19),  // "_q_selectionChanged"
        QT_MOC_LITERAL(249, 15),  // "_q_updateNeeded"
        QT_MOC_LITERAL(265, 14),  // "_q_textChanged"
        QT_MOC_LITERAL(280, 21),  // "_q_clearButtonClicked"
        QT_MOC_LITERAL(302, 25),  // "_q_controlEditingFinished"
        QT_MOC_LITERAL(328, 16),  // "inputMethodQuery"
        QT_MOC_LITERAL(345, 20),  // "Qt::InputMethodQuery"
        QT_MOC_LITERAL(366, 8),  // "property"
        QT_MOC_LITERAL(375, 8),  // "argument"
        QT_MOC_LITERAL(384, 9),  // "inputMask"
        QT_MOC_LITERAL(394, 4),  // "text"
        QT_MOC_LITERAL(399, 9),  // "maxLength"
        QT_MOC_LITERAL(409, 5),  // "frame"
        QT_MOC_LITERAL(415, 8),  // "echoMode"
        QT_MOC_LITERAL(424, 8),  // "EchoMode"
        QT_MOC_LITERAL(433, 11),  // "displayText"
        QT_MOC_LITERAL(445, 14),  // "cursorPosition"
        QT_MOC_LITERAL(460, 9),  // "alignment"
        QT_MOC_LITERAL(470, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(484, 8),  // "modified"
        QT_MOC_LITERAL(493, 15),  // "hasSelectedText"
        QT_MOC_LITERAL(509, 12),  // "selectedText"
        QT_MOC_LITERAL(522, 11),  // "dragEnabled"
        QT_MOC_LITERAL(534, 8),  // "readOnly"
        QT_MOC_LITERAL(543, 13),  // "undoAvailable"
        QT_MOC_LITERAL(557, 13),  // "redoAvailable"
        QT_MOC_LITERAL(571, 15),  // "acceptableInput"
        QT_MOC_LITERAL(587, 15),  // "placeholderText"
        QT_MOC_LITERAL(603, 15),  // "cursorMoveStyle"
        QT_MOC_LITERAL(619, 19),  // "Qt::CursorMoveStyle"
        QT_MOC_LITERAL(639, 18),  // "clearButtonEnabled"
        QT_MOC_LITERAL(658, 14),  // "ActionPosition"
        QT_MOC_LITERAL(673, 15),  // "LeadingPosition"
        QT_MOC_LITERAL(689, 16),  // "TrailingPosition"
        QT_MOC_LITERAL(706, 6),  // "Normal"
        QT_MOC_LITERAL(713, 6),  // "NoEcho"
        QT_MOC_LITERAL(720, 8),  // "Password"
        QT_MOC_LITERAL(729, 18)   // "PasswordEchoOnEdit"
    },
    "QLineEdit",
    "textChanged",
    "",
    "textEdited",
    "cursorPositionChanged",
    "returnPressed",
    "editingFinished",
    "selectionChanged",
    "inputRejected",
    "setText",
    "clear",
    "selectAll",
    "undo",
    "redo",
    "cut",
    "copy",
    "paste",
    "_q_handleWindowActivate",
    "_q_textEdited",
    "_q_cursorPositionChanged",
    "_q_selectionChanged",
    "_q_updateNeeded",
    "_q_textChanged",
    "_q_clearButtonClicked",
    "_q_controlEditingFinished",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "property",
    "argument",
    "inputMask",
    "text",
    "maxLength",
    "frame",
    "echoMode",
    "EchoMode",
    "displayText",
    "cursorPosition",
    "alignment",
    "Qt::Alignment",
    "modified",
    "hasSelectedText",
    "selectedText",
    "dragEnabled",
    "readOnly",
    "undoAvailable",
    "redoAvailable",
    "acceptableInput",
    "placeholderText",
    "cursorMoveStyle",
    "Qt::CursorMoveStyle",
    "clearButtonEnabled",
    "ActionPosition",
    "LeadingPosition",
    "TrailingPosition",
    "Normal",
    "NoEcho",
    "Password",
    "PasswordEchoOnEdit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQLineEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      19,  206, // properties
       2,  301, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  158,    2, 0x06,   22 /* Public */,
       3,    1,  161,    2, 0x06,   24 /* Public */,
       4,    2,  164,    2, 0x06,   26 /* Public */,
       5,    0,  169,    2, 0x06,   29 /* Public */,
       6,    0,  170,    2, 0x06,   30 /* Public */,
       7,    0,  171,    2, 0x06,   31 /* Public */,
       8,    0,  172,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  173,    2, 0x0a,   33 /* Public */,
      10,    0,  176,    2, 0x0a,   35 /* Public */,
      11,    0,  177,    2, 0x0a,   36 /* Public */,
      12,    0,  178,    2, 0x0a,   37 /* Public */,
      13,    0,  179,    2, 0x0a,   38 /* Public */,
      14,    0,  180,    2, 0x0a,   39 /* Public */,
      15,    0,  181,    2, 0x10a,   40 /* Public | MethodIsConst  */,
      16,    0,  182,    2, 0x0a,   41 /* Public */,
      17,    0,  183,    2, 0x08,   42 /* Private */,
      18,    1,  184,    2, 0x08,   43 /* Private */,
      19,    2,  187,    2, 0x08,   45 /* Private */,
      20,    0,  192,    2, 0x08,   48 /* Private */,
      21,    1,  193,    2, 0x08,   49 /* Private */,
      22,    1,  196,    2, 0x08,   51 /* Private */,
      23,    0,  199,    2, 0x08,   53 /* Private */,
      24,    0,  200,    2, 0x08,   54 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      25,    2,  201,    2, 0x102,   55 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 26, QMetaType::QVariant,   27,   28,

 // properties: name, type, flags
      29, QMetaType::QString, 0x00015103, uint(-1), 0,
      30, QMetaType::QString, 0x00115103, uint(0), 0,
      31, QMetaType::Int, 0x00015103, uint(-1), 0,
      32, QMetaType::Bool, 0x00015103, uint(-1), 0,
      33, 0x80000000 | 34, 0x0001510b, uint(-1), 0,
      35, QMetaType::QString, 0x00015001, uint(-1), 0,
      36, QMetaType::Int, 0x00015103, uint(-1), 0,
      37, 0x80000000 | 38, 0x0001510b, uint(-1), 0,
      39, QMetaType::Bool, 0x00014103, uint(-1), 0,
      40, QMetaType::Bool, 0x00015001, uint(-1), 0,
      41, QMetaType::QString, 0x00015001, uint(-1), 0,
      42, QMetaType::Bool, 0x00015103, uint(-1), 0,
      43, QMetaType::Bool, 0x00015103, uint(-1), 0,
      44, QMetaType::Bool, 0x00015001, uint(-1), 0,
      45, QMetaType::Bool, 0x00015001, uint(-1), 0,
      46, QMetaType::Bool, 0x00015001, uint(-1), 0,
      47, QMetaType::QString, 0x00015103, uint(-1), 0,
      48, 0x80000000 | 49, 0x0001510b, uint(-1), 0,
      50, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      51,   51, 0x0,    2,  311,
      34,   34, 0x0,    4,  315,

 // enum data: key, value
      52, uint(QLineEdit::LeadingPosition),
      53, uint(QLineEdit::TrailingPosition),
      54, uint(QLineEdit::Normal),
      55, uint(QLineEdit::NoEcho),
      56, uint(QLineEdit::Password),
      57, uint(QLineEdit::PasswordEchoOnEdit),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQLineEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQLineEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQLineEditENDCLASS_t,
        // property 'inputMask'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'maxLength'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'frame'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'echoMode'
        QtPrivate::TypeAndForceComplete<EchoMode, std::true_type>,
        // property 'displayText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cursorPosition'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'alignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // property 'modified'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasSelectedText'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectedText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dragEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'undoAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'redoAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'acceptableInput'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cursorMoveStyle'
        QtPrivate::TypeAndForceComplete<Qt::CursorMoveStyle, std::true_type>,
        // property 'clearButtonEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'ActionPosition'
        QtPrivate::TypeAndForceComplete<QLineEdit::ActionPosition, std::true_type>,
        // enum 'EchoMode'
        QtPrivate::TypeAndForceComplete<QLineEdit::EchoMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLineEdit, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputRejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_handleWindowActivate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_q_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateNeeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method '_q_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_q_clearButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_controlEditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void QLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QLineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->cursorPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->returnPressed(); break;
        case 4: _t->editingFinished(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->inputRejected(); break;
        case 7: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->selectAll(); break;
        case 10: _t->undo(); break;
        case 11: _t->redo(); break;
        case 12: _t->cut(); break;
        case 13: _t->copy(); break;
        case 14: _t->paste(); break;
        case 15: _t->d_func()->_q_handleWindowActivate(); break;
        case 16: _t->d_func()->_q_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->d_func()->_q_cursorPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->d_func()->_q_selectionChanged(); break;
        case 19: _t->d_func()->_q_updateNeeded((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 20: _t->d_func()->_q_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->d_func()->_q_clearButtonClicked(); break;
        case 22: _t->d_func()->_q_controlEditingFinished(); break;
        case 23: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QLineEdit::*)(const QString & );
            if (_t _q_method = &QLineEdit::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)(const QString & );
            if (_t _q_method = &QLineEdit::textEdited; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)(int , int );
            if (_t _q_method = &QLineEdit::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)();
            if (_t _q_method = &QLineEdit::returnPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)();
            if (_t _q_method = &QLineEdit::editingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)();
            if (_t _q_method = &QLineEdit::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QLineEdit::*)();
            if (_t _q_method = &QLineEdit::inputRejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->inputMask(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->maxLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasFrame(); break;
        case 4: *reinterpret_cast< EchoMode*>(_v) = _t->echoMode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->displayText(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 7: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isModified(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasSelectedText(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->selectedText(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->dragEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isUndoAvailable(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isRedoAvailable(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->hasAcceptableInput(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 17: *reinterpret_cast< Qt::CursorMoveStyle*>(_v) = _t->cursorMoveStyle(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isClearButtonEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInputMask(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMaxLength(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setEchoMode(*reinterpret_cast< EchoMode*>(_v)); break;
        case 6: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 8: _t->setModified(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setCursorMoveStyle(*reinterpret_cast< Qt::CursorMoveStyle*>(_v)); break;
        case 18: _t->setClearButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQLineEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QLineEdit::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineEdit::textEdited(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLineEdit::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLineEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QLineEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QLineEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QLineEdit::inputRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
