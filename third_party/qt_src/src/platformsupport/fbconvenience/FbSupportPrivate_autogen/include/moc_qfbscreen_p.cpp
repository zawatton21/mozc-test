/****************************************************************************
** Meta object code from reading C++ file 'qfbscreen_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qfbscreen_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfbscreen_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQFbScreenENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFbScreenENDCLASS = QtMocHelpers::stringData(
    "QFbScreen",
    "setDirty",
    "",
    "rect",
    "setPhysicalSize",
    "size",
    "setGeometry"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFbScreenENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[16];
    char stringdata5[5];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFbScreenENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFbScreenENDCLASS_t qt_meta_stringdata_CLASSQFbScreenENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QFbScreen"
        QT_MOC_LITERAL(10, 8),  // "setDirty"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 4),  // "rect"
        QT_MOC_LITERAL(25, 15),  // "setPhysicalSize"
        QT_MOC_LITERAL(41, 4),  // "size"
        QT_MOC_LITERAL(46, 11)   // "setGeometry"
    },
    "QFbScreen",
    "setDirty",
    "",
    "rect",
    "setPhysicalSize",
    "size",
    "setGeometry"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFbScreenENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    1,   35,    2, 0x0a,    3 /* Public */,
       6,    1,   38,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void, QMetaType::QRect,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject QFbScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQFbScreenENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFbScreenENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFbScreenENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFbScreen, std::true_type>,
        // method 'setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'setPhysicalSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'setGeometry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>
    >,
    nullptr
} };

void QFbScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QFbScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDirty((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 1: _t->setPhysicalSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: _t->setGeometry((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QFbScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFbScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQFbScreenENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPlatformScreen"))
        return static_cast< QPlatformScreen*>(this);
    return QObject::qt_metacast(_clname);
}

int QFbScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
