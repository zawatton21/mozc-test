/****************************************************************************
** Meta object code from reading C++ file 'qinputmethod.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qinputmethod.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputmethod.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQInputMethodENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQInputMethodENDCLASS = QtMocHelpers::stringData(
    "QInputMethod",
    "cursorRectangleChanged",
    "",
    "anchorRectangleChanged",
    "keyboardRectangleChanged",
    "inputItemClipRectangleChanged",
    "visibleChanged",
    "animatingChanged",
    "localeChanged",
    "inputDirectionChanged",
    "Qt::LayoutDirection",
    "newDirection",
    "show",
    "hide",
    "update",
    "Qt::InputMethodQueries",
    "queries",
    "reset",
    "commit",
    "invokeAction",
    "Action",
    "a",
    "cursorPosition",
    "cursorRectangle",
    "anchorRectangle",
    "keyboardRectangle",
    "inputItemClipRectangle",
    "visible",
    "animating",
    "locale",
    "inputDirection",
    "Click",
    "ContextMenu"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQInputMethodENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[13];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[25];
    char stringdata5[30];
    char stringdata6[15];
    char stringdata7[17];
    char stringdata8[14];
    char stringdata9[22];
    char stringdata10[20];
    char stringdata11[13];
    char stringdata12[5];
    char stringdata13[5];
    char stringdata14[7];
    char stringdata15[23];
    char stringdata16[8];
    char stringdata17[6];
    char stringdata18[7];
    char stringdata19[13];
    char stringdata20[7];
    char stringdata21[2];
    char stringdata22[15];
    char stringdata23[16];
    char stringdata24[16];
    char stringdata25[18];
    char stringdata26[23];
    char stringdata27[8];
    char stringdata28[10];
    char stringdata29[7];
    char stringdata30[15];
    char stringdata31[6];
    char stringdata32[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQInputMethodENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQInputMethodENDCLASS_t qt_meta_stringdata_CLASSQInputMethodENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QInputMethod"
        QT_MOC_LITERAL(13, 22),  // "cursorRectangleChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "anchorRectangleChanged"
        QT_MOC_LITERAL(60, 24),  // "keyboardRectangleChanged"
        QT_MOC_LITERAL(85, 29),  // "inputItemClipRectangleChanged"
        QT_MOC_LITERAL(115, 14),  // "visibleChanged"
        QT_MOC_LITERAL(130, 16),  // "animatingChanged"
        QT_MOC_LITERAL(147, 13),  // "localeChanged"
        QT_MOC_LITERAL(161, 21),  // "inputDirectionChanged"
        QT_MOC_LITERAL(183, 19),  // "Qt::LayoutDirection"
        QT_MOC_LITERAL(203, 12),  // "newDirection"
        QT_MOC_LITERAL(216, 4),  // "show"
        QT_MOC_LITERAL(221, 4),  // "hide"
        QT_MOC_LITERAL(226, 6),  // "update"
        QT_MOC_LITERAL(233, 22),  // "Qt::InputMethodQueries"
        QT_MOC_LITERAL(256, 7),  // "queries"
        QT_MOC_LITERAL(264, 5),  // "reset"
        QT_MOC_LITERAL(270, 6),  // "commit"
        QT_MOC_LITERAL(277, 12),  // "invokeAction"
        QT_MOC_LITERAL(290, 6),  // "Action"
        QT_MOC_LITERAL(297, 1),  // "a"
        QT_MOC_LITERAL(299, 14),  // "cursorPosition"
        QT_MOC_LITERAL(314, 15),  // "cursorRectangle"
        QT_MOC_LITERAL(330, 15),  // "anchorRectangle"
        QT_MOC_LITERAL(346, 17),  // "keyboardRectangle"
        QT_MOC_LITERAL(364, 22),  // "inputItemClipRectangle"
        QT_MOC_LITERAL(387, 7),  // "visible"
        QT_MOC_LITERAL(395, 9),  // "animating"
        QT_MOC_LITERAL(405, 6),  // "locale"
        QT_MOC_LITERAL(412, 14),  // "inputDirection"
        QT_MOC_LITERAL(427, 5),  // "Click"
        QT_MOC_LITERAL(433, 11)   // "ContextMenu"
    },
    "QInputMethod",
    "cursorRectangleChanged",
    "",
    "anchorRectangleChanged",
    "keyboardRectangleChanged",
    "inputItemClipRectangleChanged",
    "visibleChanged",
    "animatingChanged",
    "localeChanged",
    "inputDirectionChanged",
    "Qt::LayoutDirection",
    "newDirection",
    "show",
    "hide",
    "update",
    "Qt::InputMethodQueries",
    "queries",
    "reset",
    "commit",
    "invokeAction",
    "Action",
    "a",
    "cursorPosition",
    "cursorRectangle",
    "anchorRectangle",
    "keyboardRectangle",
    "inputItemClipRectangle",
    "visible",
    "animating",
    "locale",
    "inputDirection",
    "Click",
    "ContextMenu"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQInputMethodENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       8,  120, // properties
       1,  160, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,   10 /* Public */,
       3,    0,   99,    2, 0x06,   11 /* Public */,
       4,    0,  100,    2, 0x06,   12 /* Public */,
       5,    0,  101,    2, 0x06,   13 /* Public */,
       6,    0,  102,    2, 0x06,   14 /* Public */,
       7,    0,  103,    2, 0x06,   15 /* Public */,
       8,    0,  104,    2, 0x06,   16 /* Public */,
       9,    1,  105,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  108,    2, 0x0a,   19 /* Public */,
      13,    0,  109,    2, 0x0a,   20 /* Public */,
      14,    1,  110,    2, 0x0a,   21 /* Public */,
      17,    0,  113,    2, 0x0a,   23 /* Public */,
      18,    0,  114,    2, 0x0a,   24 /* Public */,
      19,    2,  115,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,   21,   22,

 // properties: name, type, flags
      23, QMetaType::QRectF, 0x00015001, uint(0), 0,
      24, QMetaType::QRectF, 0x00015001, uint(1), 0,
      25, QMetaType::QRectF, 0x00015001, uint(2), 0,
      26, QMetaType::QRectF, 0x00015001, uint(3), 0,
      27, QMetaType::Bool, 0x00015001, uint(4), 0,
      28, QMetaType::Bool, 0x00015001, uint(5), 0,
      29, QMetaType::QLocale, 0x00015001, uint(6), 0,
      30, 0x80000000 | 10, 0x00015009, uint(7), 0,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,    2,  165,

 // enum data: key, value
      31, uint(QInputMethod::Click),
      32, uint(QInputMethod::ContextMenu),

       0        // eod
};

Q_CONSTINIT const QMetaObject QInputMethod::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQInputMethodENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQInputMethodENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQInputMethodENDCLASS_t,
        // property 'cursorRectangle'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'anchorRectangle'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'keyboardRectangle'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'inputItemClipRectangle'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'animating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'locale'
        QtPrivate::TypeAndForceComplete<QLocale, std::true_type>,
        // property 'inputDirection'
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::true_type>,
        // enum 'Action'
        QtPrivate::TypeAndForceComplete<QInputMethod::Action, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QInputMethod, std::true_type>,
        // method 'cursorRectangleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'anchorRectangleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyboardRectangleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputItemClipRectangleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animatingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'localeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputDirectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::false_type>,
        // method 'show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQueries, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'invokeAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Action, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QInputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QInputMethod *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cursorRectangleChanged(); break;
        case 1: _t->anchorRectangleChanged(); break;
        case 2: _t->keyboardRectangleChanged(); break;
        case 3: _t->inputItemClipRectangleChanged(); break;
        case 4: _t->visibleChanged(); break;
        case 5: _t->animatingChanged(); break;
        case 6: _t->localeChanged(); break;
        case 7: _t->inputDirectionChanged((*reinterpret_cast< std::add_pointer_t<Qt::LayoutDirection>>(_a[1]))); break;
        case 8: _t->show(); break;
        case 9: _t->hide(); break;
        case 10: _t->update((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQueries>>(_a[1]))); break;
        case 11: _t->reset(); break;
        case 12: _t->commit(); break;
        case 13: _t->invokeAction((*reinterpret_cast< std::add_pointer_t<Action>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::cursorRectangleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::anchorRectangleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::keyboardRectangleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::inputItemClipRectangleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::animatingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)();
            if (_t _q_method = &QInputMethod::localeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QInputMethod::*)(Qt::LayoutDirection );
            if (_t _q_method = &QInputMethod::inputDirectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QInputMethod *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = _t->cursorRectangle(); break;
        case 1: *reinterpret_cast< QRectF*>(_v) = _t->anchorRectangle(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = _t->keyboardRectangle(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->inputItemClipRectangle(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isAnimating(); break;
        case 6: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 7: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->inputDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QInputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQInputMethodENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QInputMethod::cursorRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInputMethod::anchorRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInputMethod::keyboardRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInputMethod::inputItemClipRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QInputMethod::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QInputMethod::animatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QInputMethod::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QInputMethod::inputDirectionChanged(Qt::LayoutDirection _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
