/****************************************************************************
** Meta object code from reading C++ file 'qplatformsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformsystemtrayicon.h"
#include <qpa/qplatformscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsystemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS = QtMocHelpers::stringData(
    "QPlatformSystemTrayIcon",
    "activated",
    "",
    "QPlatformSystemTrayIcon::ActivationReason",
    "reason",
    "contextMenuRequested",
    "globalPos",
    "const QPlatformScreen*",
    "screen",
    "messageClicked",
    "ActivationReason",
    "Unknown",
    "Context",
    "DoubleClick",
    "Trigger",
    "MiddleClick",
    "MessageIcon",
    "NoIcon",
    "Information",
    "Warning",
    "Critical"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[24];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[42];
    char stringdata4[7];
    char stringdata5[21];
    char stringdata6[10];
    char stringdata7[23];
    char stringdata8[7];
    char stringdata9[15];
    char stringdata10[17];
    char stringdata11[8];
    char stringdata12[8];
    char stringdata13[12];
    char stringdata14[8];
    char stringdata15[12];
    char stringdata16[12];
    char stringdata17[7];
    char stringdata18[12];
    char stringdata19[8];
    char stringdata20[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS_t qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QPlatformSystemTrayIcon"
        QT_MOC_LITERAL(24, 9),  // "activated"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 41),  // "QPlatformSystemTrayIcon::Acti..."
        QT_MOC_LITERAL(77, 6),  // "reason"
        QT_MOC_LITERAL(84, 20),  // "contextMenuRequested"
        QT_MOC_LITERAL(105, 9),  // "globalPos"
        QT_MOC_LITERAL(115, 22),  // "const QPlatformScreen*"
        QT_MOC_LITERAL(138, 6),  // "screen"
        QT_MOC_LITERAL(145, 14),  // "messageClicked"
        QT_MOC_LITERAL(160, 16),  // "ActivationReason"
        QT_MOC_LITERAL(177, 7),  // "Unknown"
        QT_MOC_LITERAL(185, 7),  // "Context"
        QT_MOC_LITERAL(193, 11),  // "DoubleClick"
        QT_MOC_LITERAL(205, 7),  // "Trigger"
        QT_MOC_LITERAL(213, 11),  // "MiddleClick"
        QT_MOC_LITERAL(225, 11),  // "MessageIcon"
        QT_MOC_LITERAL(237, 6),  // "NoIcon"
        QT_MOC_LITERAL(244, 11),  // "Information"
        QT_MOC_LITERAL(256, 7),  // "Warning"
        QT_MOC_LITERAL(264, 8)   // "Critical"
    },
    "QPlatformSystemTrayIcon",
    "activated",
    "",
    "QPlatformSystemTrayIcon::ActivationReason",
    "reason",
    "contextMenuRequested",
    "globalPos",
    "const QPlatformScreen*",
    "screen",
    "messageClicked",
    "ActivationReason",
    "Unknown",
    "Context",
    "DoubleClick",
    "Trigger",
    "MiddleClick",
    "MessageIcon",
    "NoIcon",
    "Information",
    "Warning",
    "Critical"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformSystemTrayIconENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,
       5,    2,   35,    2, 0x06,    5 /* Public */,
       9,    0,   40,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    5,   51,
      16,   16, 0x0,    4,   61,

 // enum data: key, value
      11, uint(QPlatformSystemTrayIcon::Unknown),
      12, uint(QPlatformSystemTrayIcon::Context),
      13, uint(QPlatformSystemTrayIcon::DoubleClick),
      14, uint(QPlatformSystemTrayIcon::Trigger),
      15, uint(QPlatformSystemTrayIcon::MiddleClick),
      17, uint(QPlatformSystemTrayIcon::NoIcon),
      18, uint(QPlatformSystemTrayIcon::Information),
      19, uint(QPlatformSystemTrayIcon::Warning),
      20, uint(QPlatformSystemTrayIcon::Critical),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformSystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformSystemTrayIconENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS_t,
        // enum 'ActivationReason'
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::ActivationReason, std::true_type>,
        // enum 'MessageIcon'
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::MessageIcon, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'contextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPlatformScreen *, std::false_type>,
        // method 'messageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPlatformSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformSystemTrayIcon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< std::add_pointer_t<QPlatformSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QPlatformScreen*>>(_a[2]))); break;
        case 2: _t->messageClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformSystemTrayIcon::*)(QPlatformSystemTrayIcon::ActivationReason );
            if (_t _q_method = &QPlatformSystemTrayIcon::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformSystemTrayIcon::*)(QPoint , const QPlatformScreen * );
            if (_t _q_method = &QPlatformSystemTrayIcon::contextMenuRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPlatformSystemTrayIcon::*)();
            if (_t _q_method = &QPlatformSystemTrayIcon::messageClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformSystemTrayIconENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QPlatformSystemTrayIcon::activated(QPlatformSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSystemTrayIcon::contextMenuRequested(QPoint _t1, const QPlatformScreen * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
