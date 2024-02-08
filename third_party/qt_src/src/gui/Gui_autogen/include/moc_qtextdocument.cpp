/****************************************************************************
** Meta object code from reading C++ file 'qtextdocument.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qtextdocument.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextdocument.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTextDocumentENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTextDocumentENDCLASS = QtMocHelpers::stringData(
    "QTextDocument",
    "contentsChange",
    "",
    "from",
    "charsRemoved",
    "charsAdded",
    "contentsChanged",
    "undoAvailable",
    "redoAvailable",
    "undoCommandAdded",
    "modificationChanged",
    "m",
    "cursorPositionChanged",
    "QTextCursor",
    "cursor",
    "blockCountChanged",
    "newBlockCount",
    "baseUrlChanged",
    "url",
    "documentLayoutChanged",
    "undo",
    "redo",
    "appendUndoItem",
    "QAbstractUndoItem*",
    "setModified",
    "loadResource",
    "type",
    "name",
    "undoRedoEnabled",
    "modified",
    "pageSize",
    "defaultFont",
    "useDesignMetrics",
    "layoutEnabled",
    "size",
    "textWidth",
    "blockCount",
    "indentWidth",
    "defaultStyleSheet",
    "maximumBlockCount",
    "documentMargin",
    "baseUrl",
    "ResourceType",
    "UnknownResource",
    "HtmlResource",
    "ImageResource",
    "StyleSheetResource",
    "MarkdownResource",
    "UserResource"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTextDocumentENDCLASS_t {
    uint offsetsAndSizes[98];
    char stringdata0[14];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[13];
    char stringdata5[11];
    char stringdata6[16];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[17];
    char stringdata10[20];
    char stringdata11[2];
    char stringdata12[22];
    char stringdata13[12];
    char stringdata14[7];
    char stringdata15[18];
    char stringdata16[14];
    char stringdata17[15];
    char stringdata18[4];
    char stringdata19[22];
    char stringdata20[5];
    char stringdata21[5];
    char stringdata22[15];
    char stringdata23[19];
    char stringdata24[12];
    char stringdata25[13];
    char stringdata26[5];
    char stringdata27[5];
    char stringdata28[16];
    char stringdata29[9];
    char stringdata30[9];
    char stringdata31[12];
    char stringdata32[17];
    char stringdata33[14];
    char stringdata34[5];
    char stringdata35[10];
    char stringdata36[11];
    char stringdata37[12];
    char stringdata38[18];
    char stringdata39[18];
    char stringdata40[15];
    char stringdata41[8];
    char stringdata42[13];
    char stringdata43[16];
    char stringdata44[13];
    char stringdata45[14];
    char stringdata46[19];
    char stringdata47[17];
    char stringdata48[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTextDocumentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTextDocumentENDCLASS_t qt_meta_stringdata_CLASSQTextDocumentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QTextDocument"
        QT_MOC_LITERAL(14, 14),  // "contentsChange"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 4),  // "from"
        QT_MOC_LITERAL(35, 12),  // "charsRemoved"
        QT_MOC_LITERAL(48, 10),  // "charsAdded"
        QT_MOC_LITERAL(59, 15),  // "contentsChanged"
        QT_MOC_LITERAL(75, 13),  // "undoAvailable"
        QT_MOC_LITERAL(89, 13),  // "redoAvailable"
        QT_MOC_LITERAL(103, 16),  // "undoCommandAdded"
        QT_MOC_LITERAL(120, 19),  // "modificationChanged"
        QT_MOC_LITERAL(140, 1),  // "m"
        QT_MOC_LITERAL(142, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(164, 11),  // "QTextCursor"
        QT_MOC_LITERAL(176, 6),  // "cursor"
        QT_MOC_LITERAL(183, 17),  // "blockCountChanged"
        QT_MOC_LITERAL(201, 13),  // "newBlockCount"
        QT_MOC_LITERAL(215, 14),  // "baseUrlChanged"
        QT_MOC_LITERAL(230, 3),  // "url"
        QT_MOC_LITERAL(234, 21),  // "documentLayoutChanged"
        QT_MOC_LITERAL(256, 4),  // "undo"
        QT_MOC_LITERAL(261, 4),  // "redo"
        QT_MOC_LITERAL(266, 14),  // "appendUndoItem"
        QT_MOC_LITERAL(281, 18),  // "QAbstractUndoItem*"
        QT_MOC_LITERAL(300, 11),  // "setModified"
        QT_MOC_LITERAL(312, 12),  // "loadResource"
        QT_MOC_LITERAL(325, 4),  // "type"
        QT_MOC_LITERAL(330, 4),  // "name"
        QT_MOC_LITERAL(335, 15),  // "undoRedoEnabled"
        QT_MOC_LITERAL(351, 8),  // "modified"
        QT_MOC_LITERAL(360, 8),  // "pageSize"
        QT_MOC_LITERAL(369, 11),  // "defaultFont"
        QT_MOC_LITERAL(381, 16),  // "useDesignMetrics"
        QT_MOC_LITERAL(398, 13),  // "layoutEnabled"
        QT_MOC_LITERAL(412, 4),  // "size"
        QT_MOC_LITERAL(417, 9),  // "textWidth"
        QT_MOC_LITERAL(427, 10),  // "blockCount"
        QT_MOC_LITERAL(438, 11),  // "indentWidth"
        QT_MOC_LITERAL(450, 17),  // "defaultStyleSheet"
        QT_MOC_LITERAL(468, 17),  // "maximumBlockCount"
        QT_MOC_LITERAL(486, 14),  // "documentMargin"
        QT_MOC_LITERAL(501, 7),  // "baseUrl"
        QT_MOC_LITERAL(509, 12),  // "ResourceType"
        QT_MOC_LITERAL(522, 15),  // "UnknownResource"
        QT_MOC_LITERAL(538, 12),  // "HtmlResource"
        QT_MOC_LITERAL(551, 13),  // "ImageResource"
        QT_MOC_LITERAL(565, 18),  // "StyleSheetResource"
        QT_MOC_LITERAL(584, 16),  // "MarkdownResource"
        QT_MOC_LITERAL(601, 12)   // "UserResource"
    },
    "QTextDocument",
    "contentsChange",
    "",
    "from",
    "charsRemoved",
    "charsAdded",
    "contentsChanged",
    "undoAvailable",
    "redoAvailable",
    "undoCommandAdded",
    "modificationChanged",
    "m",
    "cursorPositionChanged",
    "QTextCursor",
    "cursor",
    "blockCountChanged",
    "newBlockCount",
    "baseUrlChanged",
    "url",
    "documentLayoutChanged",
    "undo",
    "redo",
    "appendUndoItem",
    "QAbstractUndoItem*",
    "setModified",
    "loadResource",
    "type",
    "name",
    "undoRedoEnabled",
    "modified",
    "pageSize",
    "defaultFont",
    "useDesignMetrics",
    "layoutEnabled",
    "size",
    "textWidth",
    "blockCount",
    "indentWidth",
    "defaultStyleSheet",
    "maximumBlockCount",
    "documentMargin",
    "baseUrl",
    "ResourceType",
    "UnknownResource",
    "HtmlResource",
    "ImageResource",
    "StyleSheetResource",
    "MarkdownResource",
    "UserResource"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTextDocumentENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      14,  152, // properties
       1,  222, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  110,    2, 0x06,   16 /* Public */,
       6,    0,  117,    2, 0x06,   20 /* Public */,
       7,    1,  118,    2, 0x06,   21 /* Public */,
       8,    1,  121,    2, 0x06,   23 /* Public */,
       9,    0,  124,    2, 0x06,   25 /* Public */,
      10,    1,  125,    2, 0x06,   26 /* Public */,
      12,    1,  128,    2, 0x06,   28 /* Public */,
      15,    1,  131,    2, 0x06,   30 /* Public */,
      17,    1,  134,    2, 0x06,   32 /* Public */,
      19,    0,  137,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  138,    2, 0x0a,   35 /* Public */,
      21,    0,  139,    2, 0x0a,   36 /* Public */,
      22,    1,  140,    2, 0x0a,   37 /* Public */,
      24,    1,  143,    2, 0x0a,   39 /* Public */,
      24,    0,  146,    2, 0x2a,   41 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      25,    2,  147,    2, 0x01,   42 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QUrl,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, QMetaType::Int, QMetaType::QUrl,   26,   27,

 // properties: name, type, flags
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,
      29, QMetaType::Bool, 0x00014103, uint(-1), 0,
      30, QMetaType::QSizeF, 0x00015103, uint(-1), 0,
      31, QMetaType::QFont, 0x00015103, uint(-1), 0,
      32, QMetaType::Bool, 0x00015103, uint(-1), 0,
      33, QMetaType::Bool, 0x00015103, uint(-1), 0,
      34, QMetaType::QSizeF, 0x00015001, uint(-1), 0,
      35, QMetaType::QReal, 0x00015103, uint(-1), 0,
      36, QMetaType::Int, 0x00015001, uint(-1), 0,
      37, QMetaType::QReal, 0x00015103, uint(-1), 0,
      38, QMetaType::QString, 0x00015103, uint(-1), 0,
      39, QMetaType::Int, 0x00015103, uint(-1), 0,
      40, QMetaType::QReal, 0x00015103, uint(-1), 0,
      41, QMetaType::QUrl, 0x00015103, uint(8), 0,

 // enums: name, alias, flags, count, data
      42,   42, 0x0,    6,  227,

 // enum data: key, value
      43, uint(QTextDocument::UnknownResource),
      44, uint(QTextDocument::HtmlResource),
      45, uint(QTextDocument::ImageResource),
      46, uint(QTextDocument::StyleSheetResource),
      47, uint(QTextDocument::MarkdownResource),
      48, uint(QTextDocument::UserResource),

       0        // eod
};

Q_CONSTINIT const QMetaObject QTextDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTextDocumentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTextDocumentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTextDocumentENDCLASS_t,
        // property 'undoRedoEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'modified'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pageSize'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'defaultFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'useDesignMetrics'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'layoutEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'textWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'blockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'indentWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'defaultStyleSheet'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'maximumBlockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'documentMargin'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'baseUrl'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // enum 'ResourceType'
        QtPrivate::TypeAndForceComplete<QTextDocument::ResourceType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTextDocument, std::true_type>,
        // method 'contentsChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'contentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'undoCommandAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modificationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCursor &, std::false_type>,
        // method 'blockCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'baseUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'documentLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appendUndoItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractUndoItem *, std::false_type>,
        // method 'setModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadResource'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void QTextDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTextDocument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->contentsChanged(); break;
        case 2: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->undoCommandAdded(); break;
        case 5: _t->modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->cursorPositionChanged((*reinterpret_cast< std::add_pointer_t<QTextCursor>>(_a[1]))); break;
        case 7: _t->blockCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->baseUrlChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 9: _t->documentLayoutChanged(); break;
        case 10: _t->undo(); break;
        case 11: _t->redo(); break;
        case 12: _t->appendUndoItem((*reinterpret_cast< std::add_pointer_t<QAbstractUndoItem*>>(_a[1]))); break;
        case 13: _t->setModified((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setModified(); break;
        case 15: { QVariant _r = _t->loadResource((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTextDocument::*)(int , int , int );
            if (_t _q_method = &QTextDocument::contentsChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)();
            if (_t _q_method = &QTextDocument::contentsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(bool );
            if (_t _q_method = &QTextDocument::undoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(bool );
            if (_t _q_method = &QTextDocument::redoAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)();
            if (_t _q_method = &QTextDocument::undoCommandAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(bool );
            if (_t _q_method = &QTextDocument::modificationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(const QTextCursor & );
            if (_t _q_method = &QTextDocument::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(int );
            if (_t _q_method = &QTextDocument::blockCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)(const QUrl & );
            if (_t _q_method = &QTextDocument::baseUrlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QTextDocument::*)();
            if (_t _q_method = &QTextDocument::documentLayoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTextDocument *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isUndoRedoEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isModified(); break;
        case 2: *reinterpret_cast< QSizeF*>(_v) = _t->pageSize(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = _t->defaultFont(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useDesignMetrics(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isLayoutEnabled(); break;
        case 6: *reinterpret_cast< QSizeF*>(_v) = _t->size(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->textWidth(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->blockCount(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->indentWidth(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->defaultStyleSheet(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->maximumBlockCount(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->documentMargin(); break;
        case 13: *reinterpret_cast< QUrl*>(_v) = _t->baseUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTextDocument *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setModified(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPageSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 3: _t->setDefaultFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: _t->setUseDesignMetrics(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLayoutEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTextWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setIndentWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setDefaultStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setMaximumBlockCount(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setDocumentMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setBaseUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTextDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTextDocumentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTextDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QTextDocument::contentsChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTextDocument::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QTextDocument::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTextDocument::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextDocument::undoCommandAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QTextDocument::modificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTextDocument::cursorPositionChanged(const QTextCursor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QTextDocument::blockCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QTextDocument::baseUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QTextDocument::documentLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
