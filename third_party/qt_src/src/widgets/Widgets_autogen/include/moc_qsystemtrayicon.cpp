/****************************************************************************
** Meta object code from reading C++ file 'qsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qsystemtrayicon.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsystemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS = QtMocHelpers::stringData(
    "QSystemTrayIcon",
    "activated",
    "",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "messageClicked",
    "setVisible",
    "visible",
    "show",
    "hide",
    "showMessage",
    "title",
    "msg",
    "icon",
    "msecs",
    "QSystemTrayIcon::MessageIcon",
    "_q_emitActivated",
    "QPlatformSystemTrayIcon::ActivationReason",
    "toolTip"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[34];
    char stringdata4[7];
    char stringdata5[15];
    char stringdata6[11];
    char stringdata7[8];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[12];
    char stringdata11[6];
    char stringdata12[4];
    char stringdata13[5];
    char stringdata14[6];
    char stringdata15[29];
    char stringdata16[17];
    char stringdata17[42];
    char stringdata18[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS_t qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QSystemTrayIcon"
        QT_MOC_LITERAL(16, 9),  // "activated"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(61, 6),  // "reason"
        QT_MOC_LITERAL(68, 14),  // "messageClicked"
        QT_MOC_LITERAL(83, 10),  // "setVisible"
        QT_MOC_LITERAL(94, 7),  // "visible"
        QT_MOC_LITERAL(102, 4),  // "show"
        QT_MOC_LITERAL(107, 4),  // "hide"
        QT_MOC_LITERAL(112, 11),  // "showMessage"
        QT_MOC_LITERAL(124, 5),  // "title"
        QT_MOC_LITERAL(130, 3),  // "msg"
        QT_MOC_LITERAL(134, 4),  // "icon"
        QT_MOC_LITERAL(139, 5),  // "msecs"
        QT_MOC_LITERAL(145, 28),  // "QSystemTrayIcon::MessageIcon"
        QT_MOC_LITERAL(174, 16),  // "_q_emitActivated"
        QT_MOC_LITERAL(191, 41),  // "QPlatformSystemTrayIcon::Acti..."
        QT_MOC_LITERAL(233, 7)   // "toolTip"
    },
    "QSystemTrayIcon",
    "activated",
    "",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "messageClicked",
    "setVisible",
    "visible",
    "show",
    "hide",
    "showMessage",
    "title",
    "msg",
    "icon",
    "msecs",
    "QSystemTrayIcon::MessageIcon",
    "_q_emitActivated",
    "QPlatformSystemTrayIcon::ActivationReason",
    "toolTip"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSystemTrayIconENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    4 /* Public */,
       5,    0,   83,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   84,    2, 0x0a,    7 /* Public */,
       8,    0,   87,    2, 0x0a,    9 /* Public */,
       9,    0,   88,    2, 0x0a,   10 /* Public */,
      10,    4,   89,    2, 0x0a,   11 /* Public */,
      10,    3,   98,    2, 0x2a,   16 /* Public | MethodCloned */,
      10,    4,  105,    2, 0x0a,   20 /* Public */,
      10,    3,  114,    2, 0x2a,   25 /* Public | MethodCloned */,
      10,    2,  121,    2, 0x2a,   29 /* Public | MethodCloned */,
      16,    1,  126,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 15, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 15,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 17,    2,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00015103, uint(-1), 0,
      13, QMetaType::QIcon, 0x00015103, uint(-1), 0,
       7, QMetaType::Bool, 0x00014103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSystemTrayIconENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS_t,
        // property 'toolTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'messageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::MessageIcon, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::MessageIcon, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_q_emitActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::ActivationReason, std::false_type>
    >,
    nullptr
} };

void QSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 1: _t->messageClicked(); break;
        case 2: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->show(); break;
        case 4: _t->hide(); break;
        case 5: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 6: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[3]))); break;
        case 7: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::MessageIcon>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 8: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::MessageIcon>>(_a[3]))); break;
        case 9: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->d_func()->_q_emitActivated((*reinterpret_cast< std::add_pointer_t<QPlatformSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSystemTrayIcon::*)(QSystemTrayIcon::ActivationReason );
            if (_t _q_method = &QSystemTrayIcon::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSystemTrayIcon::*)();
            if (_t _q_method = &QSystemTrayIcon::messageClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->toolTip(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSystemTrayIconENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
