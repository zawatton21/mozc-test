/****************************************************************************
** Meta object code from reading C++ file 'qapplication.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qapplication.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qapplication.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQApplicationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQApplicationENDCLASS = QtMocHelpers::stringData(
    "QApplication",
    "focusChanged",
    "",
    "QWidget*",
    "old",
    "now",
    "setStyleSheet",
    "sheet",
    "setAutoSipEnabled",
    "enabled",
    "closeAllWindows",
    "aboutQt",
    "cursorFlashTime",
    "doubleClickInterval",
    "keyboardInputInterval",
    "wheelScrollLines",
    "startDragTime",
    "startDragDistance",
    "styleSheet",
    "autoSipEnabled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQApplicationENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[4];
    char stringdata5[4];
    char stringdata6[14];
    char stringdata7[6];
    char stringdata8[18];
    char stringdata9[8];
    char stringdata10[16];
    char stringdata11[8];
    char stringdata12[16];
    char stringdata13[20];
    char stringdata14[22];
    char stringdata15[17];
    char stringdata16[14];
    char stringdata17[18];
    char stringdata18[11];
    char stringdata19[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQApplicationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQApplicationENDCLASS_t qt_meta_stringdata_CLASSQApplicationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QApplication"
        QT_MOC_LITERAL(13, 12),  // "focusChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "QWidget*"
        QT_MOC_LITERAL(36, 3),  // "old"
        QT_MOC_LITERAL(40, 3),  // "now"
        QT_MOC_LITERAL(44, 13),  // "setStyleSheet"
        QT_MOC_LITERAL(58, 5),  // "sheet"
        QT_MOC_LITERAL(64, 17),  // "setAutoSipEnabled"
        QT_MOC_LITERAL(82, 7),  // "enabled"
        QT_MOC_LITERAL(90, 15),  // "closeAllWindows"
        QT_MOC_LITERAL(106, 7),  // "aboutQt"
        QT_MOC_LITERAL(114, 15),  // "cursorFlashTime"
        QT_MOC_LITERAL(130, 19),  // "doubleClickInterval"
        QT_MOC_LITERAL(150, 21),  // "keyboardInputInterval"
        QT_MOC_LITERAL(172, 16),  // "wheelScrollLines"
        QT_MOC_LITERAL(189, 13),  // "startDragTime"
        QT_MOC_LITERAL(203, 17),  // "startDragDistance"
        QT_MOC_LITERAL(221, 10),  // "styleSheet"
        QT_MOC_LITERAL(232, 14)   // "autoSipEnabled"
    },
    "QApplication",
    "focusChanged",
    "",
    "QWidget*",
    "old",
    "now",
    "setStyleSheet",
    "sheet",
    "setAutoSipEnabled",
    "enabled",
    "closeAllWindows",
    "aboutQt",
    "cursorFlashTime",
    "doubleClickInterval",
    "keyboardInputInterval",
    "wheelScrollLines",
    "startDragTime",
    "startDragDistance",
    "styleSheet",
    "autoSipEnabled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQApplicationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   49,    2, 0x0a,   12 /* Public */,
       8,    1,   52,    2, 0x0a,   14 /* Public */,
      10,    0,   55,    2, 0x0a,   16 /* Public */,
      11,    0,   56,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(-1), 0,
      13, QMetaType::Int, 0x00015103, uint(-1), 0,
      14, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, QMetaType::Int, 0x00015103, uint(-1), 0,
      16, QMetaType::Int, 0x00015103, uint(-1), 0,
      17, QMetaType::Int, 0x00015103, uint(-1), 0,
      18, QMetaType::QString, 0x00015103, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QGuiApplication::staticMetaObject>(),
    qt_meta_stringdata_CLASSQApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQApplicationENDCLASS_t,
        // property 'cursorFlashTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'doubleClickInterval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'keyboardInputInterval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'wheelScrollLines'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'startDragTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'startDragDistance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'styleSheet'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'autoSipEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QApplication, std::true_type>,
        // method 'focusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'setStyleSheet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setAutoSipEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'closeAllWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutQt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 1: _t->setStyleSheet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setAutoSipEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->closeAllWindows(); break;
        case 4: _t->aboutQt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QApplication::*)(QWidget * , QWidget * );
            if (_t _q_method = &QApplication::focusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cursorFlashTime(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->doubleClickInterval(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->keyboardInputInterval(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->wheelScrollLines(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->startDragTime(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->startDragDistance(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->autoSipEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCursorFlashTime(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDoubleClickInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setKeyboardInputInterval(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setWheelScrollLines(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setStartDragTime(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setStartDragDistance(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAutoSipEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGuiApplication::qt_metacast(_clname);
}

int QApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGuiApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QApplication::focusChanged(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
