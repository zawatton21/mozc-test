/****************************************************************************
** Meta object code from reading C++ file 'qcocoanativeinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcocoanativeinterface.h"
#include <QWindow>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcocoanativeinterface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS = QtMocHelpers::stringData(
    "QCocoaNativeInterface",
    "onAppFocusWindowChanged",
    "",
    "QWindow*",
    "window",
    "clearCurrentThreadCocoaEventDispatcherInterruptFlag"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[22];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[7];
    char stringdata5[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS_t qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QCocoaNativeInterface"
        QT_MOC_LITERAL(22, 23),  // "onAppFocusWindowChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 8),  // "QWindow*"
        QT_MOC_LITERAL(56, 6),  // "window"
        QT_MOC_LITERAL(63, 51)   // "clearCurrentThreadCocoaEventD..."
    },
    "QCocoaNativeInterface",
    "onAppFocusWindowChanged",
    "",
    "QWindow*",
    "window",
    "clearCurrentThreadCocoaEventDispatcherInterruptFlag"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCocoaNativeInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   29,    2, 0x00,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCocoaNativeInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformNativeInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCocoaNativeInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCocoaNativeInterface, std::true_type>,
        // method 'onAppFocusWindowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'clearCurrentThreadCocoaEventDispatcherInterruptFlag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCocoaNativeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCocoaNativeInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAppFocusWindowChanged((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 1: _t->clearCurrentThreadCocoaEventDispatcherInterruptFlag(); break;
        default: ;
        }
    }
}

const QMetaObject *QCocoaNativeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCocoaNativeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCocoaNativeInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlatformNativeInterface::qt_metacast(_clname);
}

int QCocoaNativeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformNativeInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
