/****************************************************************************
** Meta object code from reading C++ file 'qtabbar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtabbar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtabbar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQTabBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQTabBarENDCLASS = QtMocHelpers::stringData(
    "QTabBar",
    "currentChanged",
    "",
    "index",
    "tabCloseRequested",
    "tabMoved",
    "from",
    "to",
    "tabBarClicked",
    "tabBarDoubleClicked",
    "setCurrentIndex",
    "_q_scrollTabs",
    "_q_closeTab",
    "shape",
    "Shape",
    "currentIndex",
    "count",
    "drawBase",
    "iconSize",
    "elideMode",
    "Qt::TextElideMode",
    "usesScrollButtons",
    "tabsClosable",
    "selectionBehaviorOnRemove",
    "SelectionBehavior",
    "expanding",
    "movable",
    "documentMode",
    "autoHide",
    "changeCurrentOnDrag",
    "RoundedNorth",
    "RoundedSouth",
    "RoundedWest",
    "RoundedEast",
    "TriangularNorth",
    "TriangularSouth",
    "TriangularWest",
    "TriangularEast"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQTabBarENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[8];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[3];
    char stringdata8[14];
    char stringdata9[20];
    char stringdata10[16];
    char stringdata11[14];
    char stringdata12[12];
    char stringdata13[6];
    char stringdata14[6];
    char stringdata15[13];
    char stringdata16[6];
    char stringdata17[9];
    char stringdata18[9];
    char stringdata19[10];
    char stringdata20[18];
    char stringdata21[18];
    char stringdata22[13];
    char stringdata23[26];
    char stringdata24[18];
    char stringdata25[10];
    char stringdata26[8];
    char stringdata27[13];
    char stringdata28[9];
    char stringdata29[20];
    char stringdata30[13];
    char stringdata31[13];
    char stringdata32[12];
    char stringdata33[12];
    char stringdata34[16];
    char stringdata35[16];
    char stringdata36[15];
    char stringdata37[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQTabBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQTabBarENDCLASS_t qt_meta_stringdata_CLASSQTabBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QTabBar"
        QT_MOC_LITERAL(8, 14),  // "currentChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 5),  // "index"
        QT_MOC_LITERAL(30, 17),  // "tabCloseRequested"
        QT_MOC_LITERAL(48, 8),  // "tabMoved"
        QT_MOC_LITERAL(57, 4),  // "from"
        QT_MOC_LITERAL(62, 2),  // "to"
        QT_MOC_LITERAL(65, 13),  // "tabBarClicked"
        QT_MOC_LITERAL(79, 19),  // "tabBarDoubleClicked"
        QT_MOC_LITERAL(99, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(115, 13),  // "_q_scrollTabs"
        QT_MOC_LITERAL(129, 11),  // "_q_closeTab"
        QT_MOC_LITERAL(141, 5),  // "shape"
        QT_MOC_LITERAL(147, 5),  // "Shape"
        QT_MOC_LITERAL(153, 12),  // "currentIndex"
        QT_MOC_LITERAL(166, 5),  // "count"
        QT_MOC_LITERAL(172, 8),  // "drawBase"
        QT_MOC_LITERAL(181, 8),  // "iconSize"
        QT_MOC_LITERAL(190, 9),  // "elideMode"
        QT_MOC_LITERAL(200, 17),  // "Qt::TextElideMode"
        QT_MOC_LITERAL(218, 17),  // "usesScrollButtons"
        QT_MOC_LITERAL(236, 12),  // "tabsClosable"
        QT_MOC_LITERAL(249, 25),  // "selectionBehaviorOnRemove"
        QT_MOC_LITERAL(275, 17),  // "SelectionBehavior"
        QT_MOC_LITERAL(293, 9),  // "expanding"
        QT_MOC_LITERAL(303, 7),  // "movable"
        QT_MOC_LITERAL(311, 12),  // "documentMode"
        QT_MOC_LITERAL(324, 8),  // "autoHide"
        QT_MOC_LITERAL(333, 19),  // "changeCurrentOnDrag"
        QT_MOC_LITERAL(353, 12),  // "RoundedNorth"
        QT_MOC_LITERAL(366, 12),  // "RoundedSouth"
        QT_MOC_LITERAL(379, 11),  // "RoundedWest"
        QT_MOC_LITERAL(391, 11),  // "RoundedEast"
        QT_MOC_LITERAL(403, 15),  // "TriangularNorth"
        QT_MOC_LITERAL(419, 15),  // "TriangularSouth"
        QT_MOC_LITERAL(435, 14),  // "TriangularWest"
        QT_MOC_LITERAL(450, 14)   // "TriangularEast"
    },
    "QTabBar",
    "currentChanged",
    "",
    "index",
    "tabCloseRequested",
    "tabMoved",
    "from",
    "to",
    "tabBarClicked",
    "tabBarDoubleClicked",
    "setCurrentIndex",
    "_q_scrollTabs",
    "_q_closeTab",
    "shape",
    "Shape",
    "currentIndex",
    "count",
    "drawBase",
    "iconSize",
    "elideMode",
    "Qt::TextElideMode",
    "usesScrollButtons",
    "tabsClosable",
    "selectionBehaviorOnRemove",
    "SelectionBehavior",
    "expanding",
    "movable",
    "documentMode",
    "autoHide",
    "changeCurrentOnDrag",
    "RoundedNorth",
    "RoundedSouth",
    "RoundedWest",
    "RoundedEast",
    "TriangularNorth",
    "TriangularSouth",
    "TriangularWest",
    "TriangularEast"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQTabBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      14,   84, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,   16 /* Public */,
       4,    1,   65,    2, 0x06,   18 /* Public */,
       5,    2,   68,    2, 0x06,   20 /* Public */,
       8,    1,   73,    2, 0x06,   23 /* Public */,
       9,    1,   76,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   79,    2, 0x0a,   27 /* Public */,
      11,    0,   82,    2, 0x08,   29 /* Private */,
      12,    0,   83,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0001510b, uint(-1), 0,
      15, QMetaType::Int, 0x00015103, uint(0), 0,
      16, QMetaType::Int, 0x00015001, uint(-1), 0,
      17, QMetaType::Bool, 0x00015103, uint(-1), 0,
      18, QMetaType::QSize, 0x00015103, uint(-1), 0,
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,
      25, QMetaType::Bool, 0x00015103, uint(-1), 0,
      26, QMetaType::Bool, 0x00015103, uint(-1), 0,
      27, QMetaType::Bool, 0x00015103, uint(-1), 0,
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,
      29, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    8,  159,

 // enum data: key, value
      30, uint(QTabBar::RoundedNorth),
      31, uint(QTabBar::RoundedSouth),
      32, uint(QTabBar::RoundedWest),
      33, uint(QTabBar::RoundedEast),
      34, uint(QTabBar::TriangularNorth),
      35, uint(QTabBar::TriangularSouth),
      36, uint(QTabBar::TriangularWest),
      37, uint(QTabBar::TriangularEast),

       0        // eod
};

Q_CONSTINIT const QMetaObject QTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQTabBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQTabBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQTabBarENDCLASS_t,
        // property 'shape'
        QtPrivate::TypeAndForceComplete<Shape, std::true_type>,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'drawBase'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'elideMode'
        QtPrivate::TypeAndForceComplete<Qt::TextElideMode, std::true_type>,
        // property 'usesScrollButtons'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabsClosable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionBehaviorOnRemove'
        QtPrivate::TypeAndForceComplete<SelectionBehavior, std::true_type>,
        // property 'expanding'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'movable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoHide'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'changeCurrentOnDrag'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'Shape'
        QtPrivate::TypeAndForceComplete<QTabBar::Shape, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTabBar, std::true_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tabMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        // method '_q_scrollTabs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_closeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTabBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->tabMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->tabBarDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->d_func()->_q_scrollTabs(); break;
        case 7: _t->d_func()->_q_closeTab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTabBar::*)(int );
            if (_t _q_method = &QTabBar::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTabBar::*)(int );
            if (_t _q_method = &QTabBar::tabCloseRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTabBar::*)(int , int );
            if (_t _q_method = &QTabBar::tabMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTabBar::*)(int );
            if (_t _q_method = &QTabBar::tabBarClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTabBar::*)(int );
            if (_t _q_method = &QTabBar::tabBarDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QTabBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Shape*>(_v) = _t->shape(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->drawBase(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->elideMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->usesScrollButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->tabsClosable(); break;
        case 8: *reinterpret_cast< SelectionBehavior*>(_v) = _t->selectionBehaviorOnRemove(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->expanding(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isMovable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->documentMode(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->autoHide(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->changeCurrentOnDrag(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QTabBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShape(*reinterpret_cast< Shape*>(_v)); break;
        case 1: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDrawBase(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: _t->setUsesScrollButtons(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setSelectionBehaviorOnRemove(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 9: _t->setExpanding(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setAutoHide(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setChangeCurrentOnDrag(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQTabBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QTabBar::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTabBar::tabCloseRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTabBar::tabMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTabBar::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTabBar::tabBarDoubleClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
