/****************************************************************************
** Meta object code from reading C++ file 'qcocoawindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcocoawindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcocoawindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCocoaWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCocoaWindowENDCLASS = QtMocHelpers::stringData(
    "QCocoaWindow",
    "viewDidChangeFrame",
    "Q_COCOA_NOTIFICATION_NSViewFrameDidChangeNotification",
    "viewDidChangeGlobalFrame",
    "Q_COCOA_NOTIFICATION_NSViewGlobalFrameDidChangeNotification",
    "windowDidMove",
    "Q_COCOA_NOTIFICATION_NSWindowDidMoveNotification",
    "windowDidResize",
    "Q_COCOA_NOTIFICATION_NSWindowDidResizeNotification",
    "windowDidEndLiveResize",
    "Q_COCOA_NOTIFICATION_NSWindowDidEndLiveResizeNotification",
    "windowDidBecomeKey",
    "Q_COCOA_NOTIFICATION_NSWindowDidBecomeKeyNotification",
    "windowDidResignKey",
    "Q_COCOA_NOTIFICATION_NSWindowDidResignKeyNotification",
    "windowDidMiniaturize",
    "Q_COCOA_NOTIFICATION_NSWindowDidMiniaturizeNotification",
    "windowDidDeminiaturize",
    "Q_COCOA_NOTIFICATION_NSWindowDidDeminiaturizeNotification",
    "windowWillEnterFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowWillEnterFullScreenNotification",
    "windowDidEnterFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidEnterFullScreenNotification",
    "windowWillExitFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowWillExitFullScreenNotification",
    "windowDidExitFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidExitFullScreenNotification",
    "windowDidOrderOnScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidOrderOnScreenAndFinishAnimatingNotific"
    "ation",
    "windowDidOrderOffScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidOrderOffScreenNotification",
    "windowDidChangeOcclusionState",
    "Q_COCOA_NOTIFICATION_NSWindowDidChangeOcclusionStateNotification",
    "windowDidChangeScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidChangeScreenNotification",
    "RecreationReasons",
    "RecreationReason",
    "RecreationNotNeeded",
    "ParentChanged",
    "MissingWindow",
    "WindowModalityChanged",
    "ContentViewChanged",
    "PanelChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCocoaWindowENDCLASS_t {
    uint offsetsAndSizes[86];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[54];
    char stringdata3[25];
    char stringdata4[60];
    char stringdata5[14];
    char stringdata6[49];
    char stringdata7[16];
    char stringdata8[51];
    char stringdata9[23];
    char stringdata10[58];
    char stringdata11[19];
    char stringdata12[54];
    char stringdata13[19];
    char stringdata14[54];
    char stringdata15[21];
    char stringdata16[56];
    char stringdata17[23];
    char stringdata18[58];
    char stringdata19[26];
    char stringdata20[61];
    char stringdata21[25];
    char stringdata22[60];
    char stringdata23[25];
    char stringdata24[60];
    char stringdata25[24];
    char stringdata26[59];
    char stringdata27[23];
    char stringdata28[76];
    char stringdata29[24];
    char stringdata30[59];
    char stringdata31[30];
    char stringdata32[65];
    char stringdata33[22];
    char stringdata34[57];
    char stringdata35[18];
    char stringdata36[17];
    char stringdata37[20];
    char stringdata38[14];
    char stringdata39[14];
    char stringdata40[22];
    char stringdata41[19];
    char stringdata42[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCocoaWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCocoaWindowENDCLASS_t qt_meta_stringdata_CLASSQCocoaWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QCocoaWindow"
        QT_MOC_LITERAL(13, 18),  // "viewDidChangeFrame"
        QT_MOC_LITERAL(32, 53),  // "Q_COCOA_NOTIFICATION_NSViewFr..."
        QT_MOC_LITERAL(86, 24),  // "viewDidChangeGlobalFrame"
        QT_MOC_LITERAL(111, 59),  // "Q_COCOA_NOTIFICATION_NSViewGl..."
        QT_MOC_LITERAL(171, 13),  // "windowDidMove"
        QT_MOC_LITERAL(185, 48),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(234, 15),  // "windowDidResize"
        QT_MOC_LITERAL(250, 50),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(301, 22),  // "windowDidEndLiveResize"
        QT_MOC_LITERAL(324, 57),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(382, 18),  // "windowDidBecomeKey"
        QT_MOC_LITERAL(401, 53),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(455, 18),  // "windowDidResignKey"
        QT_MOC_LITERAL(474, 53),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(528, 20),  // "windowDidMiniaturize"
        QT_MOC_LITERAL(549, 55),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(605, 22),  // "windowDidDeminiaturize"
        QT_MOC_LITERAL(628, 57),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(686, 25),  // "windowWillEnterFullScreen"
        QT_MOC_LITERAL(712, 60),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(773, 24),  // "windowDidEnterFullScreen"
        QT_MOC_LITERAL(798, 59),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(858, 24),  // "windowWillExitFullScreen"
        QT_MOC_LITERAL(883, 59),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(943, 23),  // "windowDidExitFullScreen"
        QT_MOC_LITERAL(967, 58),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(1026, 22),  // "windowDidOrderOnScreen"
        QT_MOC_LITERAL(1049, 75),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(1125, 23),  // "windowDidOrderOffScreen"
        QT_MOC_LITERAL(1149, 58),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(1208, 29),  // "windowDidChangeOcclusionState"
        QT_MOC_LITERAL(1238, 64),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(1303, 21),  // "windowDidChangeScreen"
        QT_MOC_LITERAL(1325, 56),  // "Q_COCOA_NOTIFICATION_NSWindow..."
        QT_MOC_LITERAL(1382, 17),  // "RecreationReasons"
        QT_MOC_LITERAL(1400, 16),  // "RecreationReason"
        QT_MOC_LITERAL(1417, 19),  // "RecreationNotNeeded"
        QT_MOC_LITERAL(1437, 13),  // "ParentChanged"
        QT_MOC_LITERAL(1451, 13),  // "MissingWindow"
        QT_MOC_LITERAL(1465, 21),  // "WindowModalityChanged"
        QT_MOC_LITERAL(1487, 18),  // "ContentViewChanged"
        QT_MOC_LITERAL(1506, 12)   // "PanelChanged"
    },
    "QCocoaWindow",
    "viewDidChangeFrame",
    "Q_COCOA_NOTIFICATION_NSViewFrameDidChangeNotification",
    "viewDidChangeGlobalFrame",
    "Q_COCOA_NOTIFICATION_NSViewGlobalFrameDidChangeNotification",
    "windowDidMove",
    "Q_COCOA_NOTIFICATION_NSWindowDidMoveNotification",
    "windowDidResize",
    "Q_COCOA_NOTIFICATION_NSWindowDidResizeNotification",
    "windowDidEndLiveResize",
    "Q_COCOA_NOTIFICATION_NSWindowDidEndLiveResizeNotification",
    "windowDidBecomeKey",
    "Q_COCOA_NOTIFICATION_NSWindowDidBecomeKeyNotification",
    "windowDidResignKey",
    "Q_COCOA_NOTIFICATION_NSWindowDidResignKeyNotification",
    "windowDidMiniaturize",
    "Q_COCOA_NOTIFICATION_NSWindowDidMiniaturizeNotification",
    "windowDidDeminiaturize",
    "Q_COCOA_NOTIFICATION_NSWindowDidDeminiaturizeNotification",
    "windowWillEnterFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowWillEnterFullScreenNotification",
    "windowDidEnterFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidEnterFullScreenNotification",
    "windowWillExitFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowWillExitFullScreenNotification",
    "windowDidExitFullScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidExitFullScreenNotification",
    "windowDidOrderOnScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidOrderOnScreenAndFinishAnimatingNotific"
    "ation",
    "windowDidOrderOffScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidOrderOffScreenNotification",
    "windowDidChangeOcclusionState",
    "Q_COCOA_NOTIFICATION_NSWindowDidChangeOcclusionStateNotification",
    "windowDidChangeScreen",
    "Q_COCOA_NOTIFICATION_NSWindowDidChangeScreenNotification",
    "RecreationReasons",
    "RecreationReason",
    "RecreationNotNeeded",
    "ParentChanged",
    "MissingWindow",
    "WindowModalityChanged",
    "ContentViewChanged",
    "PanelChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCocoaWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,  133, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x02,    2 /* Public */,
       3,    0,  117,    4, 0x02,    3 /* Public */,
       5,    0,  118,    6, 0x02,    4 /* Public */,
       7,    0,  119,    8, 0x02,    5 /* Public */,
       9,    0,  120,   10, 0x02,    6 /* Public */,
      11,    0,  121,   12, 0x02,    7 /* Public */,
      13,    0,  122,   14, 0x02,    8 /* Public */,
      15,    0,  123,   16, 0x02,    9 /* Public */,
      17,    0,  124,   18, 0x02,   10 /* Public */,
      19,    0,  125,   20, 0x02,   11 /* Public */,
      21,    0,  126,   22, 0x02,   12 /* Public */,
      23,    0,  127,   24, 0x02,   13 /* Public */,
      25,    0,  128,   26, 0x02,   14 /* Public */,
      27,    0,  129,   28, 0x02,   15 /* Public */,
      29,    0,  130,   30, 0x02,   16 /* Public */,
      31,    0,  131,   32, 0x02,   17 /* Public */,
      33,    0,  132,   34, 0x02,   18 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      35,   36, 0x1,    6,  138,

 // enum data: key, value
      37, uint(QCocoaWindow::RecreationNotNeeded),
      38, uint(QCocoaWindow::ParentChanged),
      39, uint(QCocoaWindow::MissingWindow),
      40, uint(QCocoaWindow::WindowModalityChanged),
      41, uint(QCocoaWindow::ContentViewChanged),
      42, uint(QCocoaWindow::PanelChanged),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCocoaWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCocoaWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCocoaWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCocoaWindowENDCLASS_t,
        // enum 'RecreationReasons'
        QtPrivate::TypeAndForceComplete<QCocoaWindow::RecreationReasons, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCocoaWindow, std::true_type>,
        // method 'viewDidChangeFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'viewDidChangeGlobalFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidResize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidEndLiveResize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidBecomeKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidResignKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidMiniaturize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidDeminiaturize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowWillEnterFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidEnterFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowWillExitFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidExitFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidOrderOnScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidOrderOffScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidChangeOcclusionState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowDidChangeScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCocoaWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCocoaWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewDidChangeFrame(); break;
        case 1: _t->viewDidChangeGlobalFrame(); break;
        case 2: _t->windowDidMove(); break;
        case 3: _t->windowDidResize(); break;
        case 4: _t->windowDidEndLiveResize(); break;
        case 5: _t->windowDidBecomeKey(); break;
        case 6: _t->windowDidResignKey(); break;
        case 7: _t->windowDidMiniaturize(); break;
        case 8: _t->windowDidDeminiaturize(); break;
        case 9: _t->windowWillEnterFullScreen(); break;
        case 10: _t->windowDidEnterFullScreen(); break;
        case 11: _t->windowWillExitFullScreen(); break;
        case 12: _t->windowDidExitFullScreen(); break;
        case 13: _t->windowDidOrderOnScreen(); break;
        case 14: _t->windowDidOrderOffScreen(); break;
        case 15: _t->windowDidChangeOcclusionState(); break;
        case 16: _t->windowDidChangeScreen(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QCocoaWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCocoaWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCocoaWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPlatformWindow"))
        return static_cast< QPlatformWindow*>(this);
    if (!strcmp(_clname, "QNativeInterface::Private::QCocoaWindow"))
        return static_cast< QNativeInterface::Private::QCocoaWindow*>(this);
    return QObject::qt_metacast(_clname);
}

int QCocoaWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
