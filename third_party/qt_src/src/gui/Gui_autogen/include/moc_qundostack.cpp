/****************************************************************************
** Meta object code from reading C++ file 'qundostack.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qundostack.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundostack.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQUndoStackENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQUndoStackENDCLASS = QtMocHelpers::stringData(
    "QUndoStack",
    "indexChanged",
    "",
    "idx",
    "cleanChanged",
    "clean",
    "canUndoChanged",
    "canUndo",
    "canRedoChanged",
    "canRedo",
    "undoTextChanged",
    "undoText",
    "redoTextChanged",
    "redoText",
    "setClean",
    "resetClean",
    "setIndex",
    "undo",
    "redo",
    "setActive",
    "active",
    "undoLimit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQUndoStackENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[8];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[16];
    char stringdata11[9];
    char stringdata12[16];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[11];
    char stringdata16[9];
    char stringdata17[5];
    char stringdata18[5];
    char stringdata19[10];
    char stringdata20[7];
    char stringdata21[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQUndoStackENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQUndoStackENDCLASS_t qt_meta_stringdata_CLASSQUndoStackENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QUndoStack"
        QT_MOC_LITERAL(11, 12),  // "indexChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 3),  // "idx"
        QT_MOC_LITERAL(29, 12),  // "cleanChanged"
        QT_MOC_LITERAL(42, 5),  // "clean"
        QT_MOC_LITERAL(48, 14),  // "canUndoChanged"
        QT_MOC_LITERAL(63, 7),  // "canUndo"
        QT_MOC_LITERAL(71, 14),  // "canRedoChanged"
        QT_MOC_LITERAL(86, 7),  // "canRedo"
        QT_MOC_LITERAL(94, 15),  // "undoTextChanged"
        QT_MOC_LITERAL(110, 8),  // "undoText"
        QT_MOC_LITERAL(119, 15),  // "redoTextChanged"
        QT_MOC_LITERAL(135, 8),  // "redoText"
        QT_MOC_LITERAL(144, 8),  // "setClean"
        QT_MOC_LITERAL(153, 10),  // "resetClean"
        QT_MOC_LITERAL(164, 8),  // "setIndex"
        QT_MOC_LITERAL(173, 4),  // "undo"
        QT_MOC_LITERAL(178, 4),  // "redo"
        QT_MOC_LITERAL(183, 9),  // "setActive"
        QT_MOC_LITERAL(193, 6),  // "active"
        QT_MOC_LITERAL(200, 9)   // "undoLimit"
    },
    "QUndoStack",
    "indexChanged",
    "",
    "idx",
    "cleanChanged",
    "clean",
    "canUndoChanged",
    "canUndo",
    "canRedoChanged",
    "canRedo",
    "undoTextChanged",
    "undoText",
    "redoTextChanged",
    "redoText",
    "setClean",
    "resetClean",
    "setIndex",
    "undo",
    "redo",
    "setActive",
    "active",
    "undoLimit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQUndoStackENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  121, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    8 /* Public */,
       4,    1,   95,    2, 0x06,   10 /* Public */,
       6,    1,   98,    2, 0x06,   12 /* Public */,
       8,    1,  101,    2, 0x06,   14 /* Public */,
      10,    1,  104,    2, 0x06,   16 /* Public */,
      12,    1,  107,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  110,    2, 0x0a,   20 /* Public */,
      15,    0,  111,    2, 0x0a,   21 /* Public */,
      16,    1,  112,    2, 0x0a,   22 /* Public */,
      17,    0,  115,    2, 0x0a,   24 /* Public */,
      18,    0,  116,    2, 0x0a,   25 /* Public */,
      19,    1,  117,    2, 0x0a,   26 /* Public */,
      19,    0,  120,    2, 0x2a,   28 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015103, uint(-1), 0,
      21, QMetaType::Int, 0x00015103, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015001, uint(3), 0,
      11, QMetaType::QString, 0x00015001, uint(4), 0,
      13, QMetaType::QString, 0x00015001, uint(5), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QUndoStack::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQUndoStackENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQUndoStackENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQUndoStackENDCLASS_t,
        // property 'active'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'undoLimit'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'canUndo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canRedo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'undoText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'redoText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'clean'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QUndoStack, std::true_type>,
        // method 'indexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cleanChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'canUndoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'canRedoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'undoTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'redoTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setClean'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetClean'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QUndoStack *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->cleanChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->canUndoChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->canRedoChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->undoTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->redoTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setClean(); break;
        case 7: _t->resetClean(); break;
        case 8: _t->setIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->setActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QUndoStack::*)(int );
            if (_t _q_method = &QUndoStack::indexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (_t _q_method = &QUndoStack::cleanChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (_t _q_method = &QUndoStack::canUndoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (_t _q_method = &QUndoStack::canRedoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(const QString & );
            if (_t _q_method = &QUndoStack::undoTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(const QString & );
            if (_t _q_method = &QUndoStack::redoTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QUndoStack *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->undoLimit(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canUndo(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canRedo(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->undoText(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->redoText(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isClean(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QUndoStack *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUndoLimit(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQUndoStackENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QUndoStack::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QUndoStack::cleanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QUndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QUndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QUndoStack::undoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QUndoStack::redoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
