/****************************************************************************
** Meta object code from reading C++ file 'qguiapplication.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qguiapplication.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qguiapplication.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGuiApplicationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGuiApplicationENDCLASS = QtMocHelpers::stringData(
    "QGuiApplication",
    "fontDatabaseChanged",
    "",
    "screenAdded",
    "QScreen*",
    "screen",
    "screenRemoved",
    "primaryScreenChanged",
    "lastWindowClosed",
    "focusObjectChanged",
    "focusObject",
    "focusWindowChanged",
    "QWindow*",
    "focusWindow",
    "applicationStateChanged",
    "Qt::ApplicationState",
    "state",
    "layoutDirectionChanged",
    "Qt::LayoutDirection",
    "direction",
    "commitDataRequest",
    "QSessionManager&",
    "sessionManager",
    "saveStateRequest",
    "applicationDisplayNameChanged",
    "paletteChanged",
    "pal",
    "fontChanged",
    "font",
    "setBadgeNumber",
    "number",
    "_q_updateFocusObject",
    "object",
    "windowIcon",
    "applicationDisplayName",
    "desktopFileName",
    "layoutDirection",
    "platformName",
    "quitOnLastWindowClosed",
    "primaryScreen"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGuiApplicationENDCLASS_t {
    uint offsetsAndSizes[80];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[7];
    char stringdata6[14];
    char stringdata7[21];
    char stringdata8[17];
    char stringdata9[19];
    char stringdata10[12];
    char stringdata11[19];
    char stringdata12[9];
    char stringdata13[12];
    char stringdata14[24];
    char stringdata15[21];
    char stringdata16[6];
    char stringdata17[23];
    char stringdata18[20];
    char stringdata19[10];
    char stringdata20[18];
    char stringdata21[17];
    char stringdata22[15];
    char stringdata23[17];
    char stringdata24[30];
    char stringdata25[15];
    char stringdata26[4];
    char stringdata27[12];
    char stringdata28[5];
    char stringdata29[15];
    char stringdata30[7];
    char stringdata31[21];
    char stringdata32[7];
    char stringdata33[11];
    char stringdata34[23];
    char stringdata35[16];
    char stringdata36[16];
    char stringdata37[13];
    char stringdata38[23];
    char stringdata39[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGuiApplicationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGuiApplicationENDCLASS_t qt_meta_stringdata_CLASSQGuiApplicationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QGuiApplication"
        QT_MOC_LITERAL(16, 19),  // "fontDatabaseChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 11),  // "screenAdded"
        QT_MOC_LITERAL(49, 8),  // "QScreen*"
        QT_MOC_LITERAL(58, 6),  // "screen"
        QT_MOC_LITERAL(65, 13),  // "screenRemoved"
        QT_MOC_LITERAL(79, 20),  // "primaryScreenChanged"
        QT_MOC_LITERAL(100, 16),  // "lastWindowClosed"
        QT_MOC_LITERAL(117, 18),  // "focusObjectChanged"
        QT_MOC_LITERAL(136, 11),  // "focusObject"
        QT_MOC_LITERAL(148, 18),  // "focusWindowChanged"
        QT_MOC_LITERAL(167, 8),  // "QWindow*"
        QT_MOC_LITERAL(176, 11),  // "focusWindow"
        QT_MOC_LITERAL(188, 23),  // "applicationStateChanged"
        QT_MOC_LITERAL(212, 20),  // "Qt::ApplicationState"
        QT_MOC_LITERAL(233, 5),  // "state"
        QT_MOC_LITERAL(239, 22),  // "layoutDirectionChanged"
        QT_MOC_LITERAL(262, 19),  // "Qt::LayoutDirection"
        QT_MOC_LITERAL(282, 9),  // "direction"
        QT_MOC_LITERAL(292, 17),  // "commitDataRequest"
        QT_MOC_LITERAL(310, 16),  // "QSessionManager&"
        QT_MOC_LITERAL(327, 14),  // "sessionManager"
        QT_MOC_LITERAL(342, 16),  // "saveStateRequest"
        QT_MOC_LITERAL(359, 29),  // "applicationDisplayNameChanged"
        QT_MOC_LITERAL(389, 14),  // "paletteChanged"
        QT_MOC_LITERAL(404, 3),  // "pal"
        QT_MOC_LITERAL(408, 11),  // "fontChanged"
        QT_MOC_LITERAL(420, 4),  // "font"
        QT_MOC_LITERAL(425, 14),  // "setBadgeNumber"
        QT_MOC_LITERAL(440, 6),  // "number"
        QT_MOC_LITERAL(447, 20),  // "_q_updateFocusObject"
        QT_MOC_LITERAL(468, 6),  // "object"
        QT_MOC_LITERAL(475, 10),  // "windowIcon"
        QT_MOC_LITERAL(486, 22),  // "applicationDisplayName"
        QT_MOC_LITERAL(509, 15),  // "desktopFileName"
        QT_MOC_LITERAL(525, 15),  // "layoutDirection"
        QT_MOC_LITERAL(541, 12),  // "platformName"
        QT_MOC_LITERAL(554, 22),  // "quitOnLastWindowClosed"
        QT_MOC_LITERAL(577, 13)   // "primaryScreen"
    },
    "QGuiApplication",
    "fontDatabaseChanged",
    "",
    "screenAdded",
    "QScreen*",
    "screen",
    "screenRemoved",
    "primaryScreenChanged",
    "lastWindowClosed",
    "focusObjectChanged",
    "focusObject",
    "focusWindowChanged",
    "QWindow*",
    "focusWindow",
    "applicationStateChanged",
    "Qt::ApplicationState",
    "state",
    "layoutDirectionChanged",
    "Qt::LayoutDirection",
    "direction",
    "commitDataRequest",
    "QSessionManager&",
    "sessionManager",
    "saveStateRequest",
    "applicationDisplayNameChanged",
    "paletteChanged",
    "pal",
    "fontChanged",
    "font",
    "setBadgeNumber",
    "number",
    "_q_updateFocusObject",
    "object",
    "windowIcon",
    "applicationDisplayName",
    "desktopFileName",
    "layoutDirection",
    "platformName",
    "quitOnLastWindowClosed",
    "primaryScreen"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGuiApplicationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       7,  152, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    8 /* Public */,
       3,    1,  111,    2, 0x06,    9 /* Public */,
       6,    1,  114,    2, 0x06,   11 /* Public */,
       7,    1,  117,    2, 0x06,   13 /* Public */,
       8,    0,  120,    2, 0x06,   15 /* Public */,
       9,    1,  121,    2, 0x06,   16 /* Public */,
      11,    1,  124,    2, 0x06,   18 /* Public */,
      14,    1,  127,    2, 0x06,   20 /* Public */,
      17,    1,  130,    2, 0x06,   22 /* Public */,
      20,    1,  133,    2, 0x06,   24 /* Public */,
      23,    1,  136,    2, 0x06,   26 /* Public */,
      24,    0,  139,    2, 0x06,   28 /* Public */,
      25,    1,  140,    2, 0x06,   29 /* Public */,
      27,    1,  143,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    1,  146,    2, 0x0a,   33 /* Public */,
      31,    1,  149,    2, 0x08,   35 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPalette,   26,
    QMetaType::Void, QMetaType::QFont,   28,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,   30,
    QMetaType::Void, QMetaType::QObjectStar,   32,

 // properties: name, type, flags
      33, QMetaType::QIcon, 0x00015103, uint(-1), 0,
      34, QMetaType::QString, 0x00015103, uint(11), 0,
      35, QMetaType::QString, 0x00015103, uint(-1), 0,
      36, 0x80000000 | 18, 0x0001510b, uint(8), 0,
      37, QMetaType::QString, 0x00005001, uint(-1), 0,
      38, QMetaType::Bool, 0x00015103, uint(-1), 0,
      39, 0x80000000 | 4, 0x00005009, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGuiApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QCoreApplication::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGuiApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGuiApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGuiApplicationENDCLASS_t,
        // property 'windowIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'applicationDisplayName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'desktopFileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'layoutDirection'
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::true_type>,
        // property 'platformName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitOnLastWindowClosed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'primaryScreen'
        QtPrivate::TypeAndForceComplete<QScreen*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGuiApplication, std::true_type>,
        // method 'fontDatabaseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'screenAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>,
        // method 'screenRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>,
        // method 'primaryScreenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>,
        // method 'lastWindowClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusObjectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'focusWindowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'applicationStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ApplicationState, std::false_type>,
        // method 'layoutDirectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::false_type>,
        // method 'commitDataRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSessionManager &, std::false_type>,
        // method 'saveStateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSessionManager &, std::false_type>,
        // method 'applicationDisplayNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPalette &, std::false_type>,
        // method 'fontChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'setBadgeNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_updateFocusObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QGuiApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGuiApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fontDatabaseChanged(); break;
        case 1: _t->screenAdded((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 2: _t->screenRemoved((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 3: _t->primaryScreenChanged((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 4: _t->lastWindowClosed(); break;
        case 5: _t->focusObjectChanged((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 6: _t->focusWindowChanged((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 7: _t->applicationStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::ApplicationState>>(_a[1]))); break;
        case 8: _t->layoutDirectionChanged((*reinterpret_cast< std::add_pointer_t<Qt::LayoutDirection>>(_a[1]))); break;
        case 9: _t->commitDataRequest((*reinterpret_cast< std::add_pointer_t<QSessionManager&>>(_a[1]))); break;
        case 10: _t->saveStateRequest((*reinterpret_cast< std::add_pointer_t<QSessionManager&>>(_a[1]))); break;
        case 11: _t->applicationDisplayNameChanged(); break;
        case 12: _t->paletteChanged((*reinterpret_cast< std::add_pointer_t<QPalette>>(_a[1]))); break;
        case 13: _t->fontChanged((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 14: _t->setBadgeNumber((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 15: _t->d_func()->_q_updateFocusObject((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGuiApplication::*)();
            if (_t _q_method = &QGuiApplication::fontDatabaseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QScreen * );
            if (_t _q_method = &QGuiApplication::screenAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QScreen * );
            if (_t _q_method = &QGuiApplication::screenRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QScreen * );
            if (_t _q_method = &QGuiApplication::primaryScreenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)();
            if (_t _q_method = &QGuiApplication::lastWindowClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QObject * );
            if (_t _q_method = &QGuiApplication::focusObjectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QWindow * );
            if (_t _q_method = &QGuiApplication::focusWindowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(Qt::ApplicationState );
            if (_t _q_method = &QGuiApplication::applicationStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(Qt::LayoutDirection );
            if (_t _q_method = &QGuiApplication::layoutDirectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QSessionManager & );
            if (_t _q_method = &QGuiApplication::commitDataRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(QSessionManager & );
            if (_t _q_method = &QGuiApplication::saveStateRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)();
            if (_t _q_method = &QGuiApplication::applicationDisplayNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(const QPalette & );
            if (_t _q_method = &QGuiApplication::paletteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGuiApplication::*)(const QFont & );
            if (_t _q_method = &QGuiApplication::fontChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGuiApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->windowIcon(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationDisplayName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->desktopFileName(); break;
        case 3: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->platformName(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->quitOnLastWindowClosed(); break;
        case 6: *reinterpret_cast< QScreen**>(_v) = _t->primaryScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGuiApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->setApplicationDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDesktopFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 5: _t->setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGuiApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGuiApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGuiApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int QGuiApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGuiApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGuiApplication::screenAdded(QScreen * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGuiApplication::screenRemoved(QScreen * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGuiApplication::primaryScreenChanged(QScreen * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGuiApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGuiApplication::focusObjectChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGuiApplication::focusWindowChanged(QWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGuiApplication::applicationStateChanged(Qt::ApplicationState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGuiApplication::commitDataRequest(QSessionManager & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGuiApplication::saveStateRequest(QSessionManager & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGuiApplication::applicationDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QGuiApplication::paletteChanged(const QPalette & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QGuiApplication::fontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
