/****************************************************************************
** Meta object code from reading C++ file 'qmainwindowlayout_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmainwindowlayout_p.h"
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindowlayout_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS = QtMocHelpers::stringData(
    "QDockWidgetGroupWindow",
    "resized",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[23];
    char stringdata1[8];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS_t qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "QDockWidgetGroupWindow"
        QT_MOC_LITERAL(23, 7),  // "resized"
        QT_MOC_LITERAL(31, 0)   // ""
    },
    "QDockWidgetGroupWindow",
    "resized",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDockWidgetGroupWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDockWidgetGroupWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDockWidgetGroupWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDockWidgetGroupWindow, std::true_type>,
        // method 'resized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDockWidgetGroupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDockWidgetGroupWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDockWidgetGroupWindow::*)();
            if (_t _q_method = &QDockWidgetGroupWindow::resized; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QDockWidgetGroupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDockWidgetGroupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDockWidgetGroupWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDockWidgetGroupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QDockWidgetGroupWindow::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS = QtMocHelpers::stringData(
    "QMainWindowLayout",
    "updateGapIndicator",
    "",
    "tabChanged",
    "tabMoved",
    "from",
    "to"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[5];
    char stringdata6[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS_t qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QMainWindowLayout"
        QT_MOC_LITERAL(18, 18),  // "updateGapIndicator"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 10),  // "tabChanged"
        QT_MOC_LITERAL(49, 8),  // "tabMoved"
        QT_MOC_LITERAL(58, 4),  // "from"
        QT_MOC_LITERAL(63, 2)   // "to"
    },
    "QMainWindowLayout",
    "updateGapIndicator",
    "",
    "tabChanged",
    "tabMoved",
    "from",
    "to"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMainWindowLayoutENDCLASS[] = {

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
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    2,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMainWindowLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMainWindowLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMainWindowLayout, std::true_type>,
        // method 'updateGapIndicator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tabMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QMainWindowLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMainWindowLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGapIndicator(); break;
        case 1: _t->tabChanged(); break;
        case 2: _t->tabMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *QMainWindowLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainWindowLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMainWindowLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QMainWindowLayoutSeparatorHelper<QMainWindowLayout>"))
        return static_cast< QMainWindowLayoutSeparatorHelper<QMainWindowLayout>*>(this);
    return QLayout::qt_metacast(_clname);
}

int QMainWindowLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
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
