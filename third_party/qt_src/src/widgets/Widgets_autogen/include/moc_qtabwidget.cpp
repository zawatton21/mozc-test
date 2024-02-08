/****************************************************************************
** Meta object code from reading C++ file 'qtabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtabwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtabwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTabWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTabWidgetENDCLASS = QtMocHelpers::stringData(
    "QTabWidget",
    "currentChanged",
    "",
    "index",
    "tabCloseRequested",
    "tabBarClicked",
    "tabBarDoubleClicked",
    "setCurrentIndex",
    "setCurrentWidget",
    "QWidget*",
    "widget",
    "_q_showTab",
    "_q_removeTab",
    "_q_tabMoved",
    "tabPosition",
    "TabPosition",
    "tabShape",
    "TabShape",
    "currentIndex",
    "count",
    "iconSize",
    "elideMode",
    "Qt::TextElideMode",
    "usesScrollButtons",
    "documentMode",
    "tabsClosable",
    "movable",
    "tabBarAutoHide",
    "North",
    "South",
    "West",
    "East",
    "Rounded",
    "Triangular"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTabWidgetENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[14];
    char stringdata6[20];
    char stringdata7[16];
    char stringdata8[17];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[11];
    char stringdata12[13];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[13];
    char stringdata19[6];
    char stringdata20[9];
    char stringdata21[10];
    char stringdata22[18];
    char stringdata23[18];
    char stringdata24[13];
    char stringdata25[13];
    char stringdata26[8];
    char stringdata27[15];
    char stringdata28[6];
    char stringdata29[6];
    char stringdata30[5];
    char stringdata31[5];
    char stringdata32[8];
    char stringdata33[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTabWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTabWidgetENDCLASS_t qt_meta_stringdata_CLASSQTabWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QTabWidget"
        QT_MOC_LITERAL(11, 14),  // "currentChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "index"
        QT_MOC_LITERAL(33, 17),  // "tabCloseRequested"
        QT_MOC_LITERAL(51, 13),  // "tabBarClicked"
        QT_MOC_LITERAL(65, 19),  // "tabBarDoubleClicked"
        QT_MOC_LITERAL(85, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(101, 16),  // "setCurrentWidget"
        QT_MOC_LITERAL(118, 8),  // "QWidget*"
        QT_MOC_LITERAL(127, 6),  // "widget"
        QT_MOC_LITERAL(134, 10),  // "_q_showTab"
        QT_MOC_LITERAL(145, 12),  // "_q_removeTab"
        QT_MOC_LITERAL(158, 11),  // "_q_tabMoved"
        QT_MOC_LITERAL(170, 11),  // "tabPosition"
        QT_MOC_LITERAL(182, 11),  // "TabPosition"
        QT_MOC_LITERAL(194, 8),  // "tabShape"
        QT_MOC_LITERAL(203, 8),  // "TabShape"
        QT_MOC_LITERAL(212, 12),  // "currentIndex"
        QT_MOC_LITERAL(225, 5),  // "count"
        QT_MOC_LITERAL(231, 8),  // "iconSize"
        QT_MOC_LITERAL(240, 9),  // "elideMode"
        QT_MOC_LITERAL(250, 17),  // "Qt::TextElideMode"
        QT_MOC_LITERAL(268, 17),  // "usesScrollButtons"
        QT_MOC_LITERAL(286, 12),  // "documentMode"
        QT_MOC_LITERAL(299, 12),  // "tabsClosable"
        QT_MOC_LITERAL(312, 7),  // "movable"
        QT_MOC_LITERAL(320, 14),  // "tabBarAutoHide"
        QT_MOC_LITERAL(335, 5),  // "North"
        QT_MOC_LITERAL(341, 5),  // "South"
        QT_MOC_LITERAL(347, 4),  // "West"
        QT_MOC_LITERAL(352, 4),  // "East"
        QT_MOC_LITERAL(357, 7),  // "Rounded"
        QT_MOC_LITERAL(365, 10)   // "Triangular"
    },
    "QTabWidget",
    "currentChanged",
    "",
    "index",
    "tabCloseRequested",
    "tabBarClicked",
    "tabBarDoubleClicked",
    "setCurrentIndex",
    "setCurrentWidget",
    "QWidget*",
    "widget",
    "_q_showTab",
    "_q_removeTab",
    "_q_tabMoved",
    "tabPosition",
    "TabPosition",
    "tabShape",
    "TabShape",
    "currentIndex",
    "count",
    "iconSize",
    "elideMode",
    "Qt::TextElideMode",
    "usesScrollButtons",
    "documentMode",
    "tabsClosable",
    "movable",
    "tabBarAutoHide",
    "North",
    "South",
    "West",
    "East",
    "Rounded",
    "Triangular"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTabWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   97, // properties
       2,  152, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,   14 /* Public */,
       4,    1,   71,    2, 0x06,   16 /* Public */,
       5,    1,   74,    2, 0x06,   18 /* Public */,
       6,    1,   77,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   80,    2, 0x0a,   22 /* Public */,
       8,    1,   83,    2, 0x0a,   24 /* Public */,
      11,    1,   86,    2, 0x08,   26 /* Private */,
      12,    1,   89,    2, 0x08,   28 /* Private */,
      13,    2,   92,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, QMetaType::Int, 0x00015103, uint(0), 0,
      19, QMetaType::Int, 0x00015001, uint(-1), 0,
      20, QMetaType::QSize, 0x00015103, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(-1), 0,
      23, QMetaType::Bool, 0x00015103, uint(-1), 0,
      24, QMetaType::Bool, 0x00015103, uint(-1), 0,
      25, QMetaType::Bool, 0x00015103, uint(-1), 0,
      26, QMetaType::Bool, 0x00015103, uint(-1), 0,
      27, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      15,   15, 0x0,    4,  162,
      17,   17, 0x0,    2,  170,

 // enum data: key, value
      28, uint(QTabWidget::North),
      29, uint(QTabWidget::South),
      30, uint(QTabWidget::West),
      31, uint(QTabWidget::East),
      32, uint(QTabWidget::Rounded),
      33, uint(QTabWidget::Triangular),

       0        // eod
};

Q_CONSTINIT const QMetaObject QTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTabWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTabWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTabWidgetENDCLASS_t,
        // property 'tabPosition'
        QtPrivate::TypeAndForceComplete<TabPosition, std::true_type>,
        // property 'tabShape'
        QtPrivate::TypeAndForceComplete<TabShape, std::true_type>,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'elideMode'
        QtPrivate::TypeAndForceComplete<Qt::TextElideMode, std::true_type>,
        // property 'usesScrollButtons'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabsClosable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'movable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabBarAutoHide'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'TabPosition'
        QtPrivate::TypeAndForceComplete<QTabWidget::TabPosition, std::true_type>,
        // enum 'TabShape'
        QtPrivate::TypeAndForceComplete<QTabWidget::TabShape, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTabWidget, std::true_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tabBarDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method '_q_showTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_removeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_tabMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->tabBarDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setCurrentWidget((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 6: _t->d_func()->_q_showTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->d_func()->_q_removeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->d_func()->_q_tabMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTabWidget::*)(int );
            if (_t _q_method = &QTabWidget::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTabWidget::*)(int );
            if (_t _q_method = &QTabWidget::tabCloseRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTabWidget::*)(int );
            if (_t _q_method = &QTabWidget::tabBarClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTabWidget::*)(int );
            if (_t _q_method = &QTabWidget::tabBarDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTabWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TabPosition*>(_v) = _t->tabPosition(); break;
        case 1: *reinterpret_cast< TabShape*>(_v) = _t->tabShape(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->elideMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->usesScrollButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->documentMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->tabsClosable(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isMovable(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->tabBarAutoHide(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTabWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabPosition(*reinterpret_cast< TabPosition*>(_v)); break;
        case 1: _t->setTabShape(*reinterpret_cast< TabShape*>(_v)); break;
        case 2: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: _t->setUsesScrollButtons(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setTabBarAutoHide(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTabWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QTabWidget::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTabWidget::tabCloseRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTabWidget::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTabWidget::tabBarDoubleClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
