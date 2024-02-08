/****************************************************************************
** Meta object code from reading C++ file 'qtextdocumentlayout_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qtextdocumentlayout_p.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextdocumentlayout_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS = QtMocHelpers::stringData(
    "QTextDocumentLayout",
    "cursorWidth",
    "idealWidth",
    "contentHasAlignment"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[12];
    char stringdata2[11];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS_t qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QTextDocumentLayout"
        QT_MOC_LITERAL(20, 11),  // "cursorWidth"
        QT_MOC_LITERAL(32, 10),  // "idealWidth"
        QT_MOC_LITERAL(43, 19)   // "contentHasAlignment"
    },
    "QTextDocumentLayout",
    "cursorWidth",
    "idealWidth",
    "contentHasAlignment"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTextDocumentLayoutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015103, uint(-1), 0,
       2, QMetaType::QReal, 0x00015001, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTextDocumentLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTextDocumentLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTextDocumentLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS_t,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'idealWidth'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'contentHasAlignment'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTextDocumentLayout, std::true_type>
    >,
    nullptr
} };

void QTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTextDocumentLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->idealWidth(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->contentHasAlignment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTextDocumentLayout *>(_o);
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

const QMetaObject *QTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTextDocumentLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTextDocumentLayout::qt_metacast(_clname);
}

int QTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
