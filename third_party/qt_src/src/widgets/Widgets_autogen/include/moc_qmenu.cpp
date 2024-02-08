/****************************************************************************
** Meta object code from reading C++ file 'qmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMenuENDCLASS = QtMocHelpers::stringData(
    "QMenu",
    "aboutToShow",
    "",
    "aboutToHide",
    "triggered",
    "QAction*",
    "action",
    "hovered",
    "internalDelayedPopup",
    "_q_actionTriggered",
    "_q_actionHovered",
    "_q_overrideMenuActionDestroyed",
    "_q_platformMenuAboutToShow",
    "tearOffEnabled",
    "title",
    "icon",
    "separatorsCollapsible",
    "toolTipsVisible"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMenuENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[6];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[9];
    char stringdata6[7];
    char stringdata7[8];
    char stringdata8[21];
    char stringdata9[19];
    char stringdata10[17];
    char stringdata11[31];
    char stringdata12[27];
    char stringdata13[15];
    char stringdata14[6];
    char stringdata15[5];
    char stringdata16[22];
    char stringdata17[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMenuENDCLASS_t qt_meta_stringdata_CLASSQMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "QMenu"
        QT_MOC_LITERAL(6, 11),  // "aboutToShow"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 11),  // "aboutToHide"
        QT_MOC_LITERAL(31, 9),  // "triggered"
        QT_MOC_LITERAL(41, 8),  // "QAction*"
        QT_MOC_LITERAL(50, 6),  // "action"
        QT_MOC_LITERAL(57, 7),  // "hovered"
        QT_MOC_LITERAL(65, 20),  // "internalDelayedPopup"
        QT_MOC_LITERAL(86, 18),  // "_q_actionTriggered"
        QT_MOC_LITERAL(105, 16),  // "_q_actionHovered"
        QT_MOC_LITERAL(122, 30),  // "_q_overrideMenuActionDestroyed"
        QT_MOC_LITERAL(153, 26),  // "_q_platformMenuAboutToShow"
        QT_MOC_LITERAL(180, 14),  // "tearOffEnabled"
        QT_MOC_LITERAL(195, 5),  // "title"
        QT_MOC_LITERAL(201, 4),  // "icon"
        QT_MOC_LITERAL(206, 21),  // "separatorsCollapsible"
        QT_MOC_LITERAL(228, 15)   // "toolTipsVisible"
    },
    "QMenu",
    "aboutToShow",
    "",
    "aboutToHide",
    "triggered",
    "QAction*",
    "action",
    "hovered",
    "internalDelayedPopup",
    "_q_actionTriggered",
    "_q_actionHovered",
    "_q_overrideMenuActionDestroyed",
    "_q_platformMenuAboutToShow",
    "tearOffEnabled",
    "title",
    "icon",
    "separatorsCollapsible",
    "toolTipsVisible"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   81, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    6 /* Public */,
       3,    0,   69,    2, 0x06,    7 /* Public */,
       4,    1,   70,    2, 0x06,    8 /* Public */,
       7,    1,   73,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   76,    2, 0x08,   12 /* Private */,
       9,    0,   77,    2, 0x08,   13 /* Private */,
      10,    0,   78,    2, 0x08,   14 /* Private */,
      11,    0,   79,    2, 0x08,   15 /* Private */,
      12,    0,   80,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,
      14, QMetaType::QString, 0x00015103, uint(-1), 0,
      15, QMetaType::QIcon, 0x00015103, uint(-1), 0,
      16, QMetaType::Bool, 0x00015103, uint(-1), 0,
      17, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMenuENDCLASS_t,
        // property 'tearOffEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'separatorsCollapsible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'toolTipsVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMenu, std::true_type>,
        // method 'aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'hovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'internalDelayedPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_actionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_actionHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_overrideMenuActionDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_platformMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->triggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 3: _t->hovered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 4: _t->internalDelayedPopup(); break;
        case 5: _t->d_func()->_q_actionTriggered(); break;
        case 6: _t->d_func()->_q_actionHovered(); break;
        case 7: _t->d_func()->_q_overrideMenuActionDestroyed(); break;
        case 8: _t->d_func()->_q_platformMenuAboutToShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMenu::*)();
            if (_t _q_method = &QMenu::aboutToShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMenu::*)();
            if (_t _q_method = &QMenu::aboutToHide; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMenu::*)(QAction * );
            if (_t _q_method = &QMenu::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMenu::*)(QAction * );
            if (_t _q_method = &QMenu::hovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTearOffEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->separatorsCollapsible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->toolTipsVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTearOffEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->setSeparatorsCollapsible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setToolTipsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMenu::triggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMenu::hovered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
