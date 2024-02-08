/****************************************************************************
** Meta object code from reading C++ file 'qsyntaxhighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qsyntaxhighlighter.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsyntaxhighlighter.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS = QtMocHelpers::stringData(
    "QSyntaxHighlighter",
    "rehighlight",
    "",
    "rehighlightBlock",
    "QTextBlock",
    "block",
    "_q_reformatBlocks",
    "from",
    "charsRemoved",
    "charsAdded",
    "_q_delayedRehighlight"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[18];
    char stringdata7[5];
    char stringdata8[13];
    char stringdata9[11];
    char stringdata10[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS_t qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QSyntaxHighlighter"
        QT_MOC_LITERAL(19, 11),  // "rehighlight"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 16),  // "rehighlightBlock"
        QT_MOC_LITERAL(49, 10),  // "QTextBlock"
        QT_MOC_LITERAL(60, 5),  // "block"
        QT_MOC_LITERAL(66, 17),  // "_q_reformatBlocks"
        QT_MOC_LITERAL(84, 4),  // "from"
        QT_MOC_LITERAL(89, 12),  // "charsRemoved"
        QT_MOC_LITERAL(102, 10),  // "charsAdded"
        QT_MOC_LITERAL(113, 21)   // "_q_delayedRehighlight"
    },
    "QSyntaxHighlighter",
    "rehighlight",
    "",
    "rehighlightBlock",
    "QTextBlock",
    "block",
    "_q_reformatBlocks",
    "from",
    "charsRemoved",
    "charsAdded",
    "_q_delayedRehighlight"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSyntaxHighlighterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    1,   39,    2, 0x0a,    2 /* Public */,
       6,    3,   42,    2, 0x08,    4 /* Private */,
      10,    0,   49,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSyntaxHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSyntaxHighlighterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSyntaxHighlighter, std::true_type>,
        // method 'rehighlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rehighlightBlock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextBlock &, std::false_type>,
        // method '_q_reformatBlocks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_delayedRehighlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSyntaxHighlighter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rehighlight(); break;
        case 1: _t->rehighlightBlock((*reinterpret_cast< std::add_pointer_t<QTextBlock>>(_a[1]))); break;
        case 2: _t->d_func()->_q_reformatBlocks((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->d_func()->_q_delayedRehighlight(); break;
        default: ;
        }
    }
}

const QMetaObject *QSyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSyntaxHighlighterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
