/****************************************************************************
** Meta object code from reading C++ file 'qprocess.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qprocess.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocess.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQProcessENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQProcessENDCLASS = QtMocHelpers::stringData(
    "QProcess",
    "started",
    "",
    "finished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "errorOccurred",
    "QProcess::ProcessError",
    "error",
    "stateChanged",
    "QProcess::ProcessState",
    "state",
    "readyReadStandardOutput",
    "readyReadStandardError",
    "terminate",
    "kill",
    "_q_canReadStandardOutput",
    "_q_canReadStandardError",
    "_q_canWrite",
    "_q_startupNotification",
    "_q_processDied",
    "ProcessError",
    "FailedToStart",
    "Crashed",
    "Timedout",
    "ReadError",
    "WriteError",
    "UnknownError",
    "ProcessState",
    "NotRunning",
    "Starting",
    "Running",
    "ProcessChannel",
    "StandardOutput",
    "StandardError",
    "ProcessChannelMode",
    "SeparateChannels",
    "MergedChannels",
    "ForwardedChannels",
    "ForwardedOutputChannel",
    "ForwardedErrorChannel",
    "InputChannelMode",
    "ManagedInputChannel",
    "ForwardedInputChannel",
    "ExitStatus",
    "NormalExit",
    "CrashExit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQProcessENDCLASS_t {
    uint offsetsAndSizes[96];
    char stringdata0[9];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[21];
    char stringdata6[11];
    char stringdata7[14];
    char stringdata8[23];
    char stringdata9[6];
    char stringdata10[13];
    char stringdata11[23];
    char stringdata12[6];
    char stringdata13[24];
    char stringdata14[23];
    char stringdata15[10];
    char stringdata16[5];
    char stringdata17[25];
    char stringdata18[24];
    char stringdata19[12];
    char stringdata20[23];
    char stringdata21[15];
    char stringdata22[13];
    char stringdata23[14];
    char stringdata24[8];
    char stringdata25[9];
    char stringdata26[10];
    char stringdata27[11];
    char stringdata28[13];
    char stringdata29[13];
    char stringdata30[11];
    char stringdata31[9];
    char stringdata32[8];
    char stringdata33[15];
    char stringdata34[15];
    char stringdata35[14];
    char stringdata36[19];
    char stringdata37[17];
    char stringdata38[15];
    char stringdata39[18];
    char stringdata40[23];
    char stringdata41[22];
    char stringdata42[17];
    char stringdata43[20];
    char stringdata44[22];
    char stringdata45[11];
    char stringdata46[11];
    char stringdata47[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQProcessENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQProcessENDCLASS_t qt_meta_stringdata_CLASSQProcessENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "QProcess"
        QT_MOC_LITERAL(9, 7),  // "started"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 8),  // "finished"
        QT_MOC_LITERAL(27, 8),  // "exitCode"
        QT_MOC_LITERAL(36, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(57, 10),  // "exitStatus"
        QT_MOC_LITERAL(68, 13),  // "errorOccurred"
        QT_MOC_LITERAL(82, 22),  // "QProcess::ProcessError"
        QT_MOC_LITERAL(105, 5),  // "error"
        QT_MOC_LITERAL(111, 12),  // "stateChanged"
        QT_MOC_LITERAL(124, 22),  // "QProcess::ProcessState"
        QT_MOC_LITERAL(147, 5),  // "state"
        QT_MOC_LITERAL(153, 23),  // "readyReadStandardOutput"
        QT_MOC_LITERAL(177, 22),  // "readyReadStandardError"
        QT_MOC_LITERAL(200, 9),  // "terminate"
        QT_MOC_LITERAL(210, 4),  // "kill"
        QT_MOC_LITERAL(215, 24),  // "_q_canReadStandardOutput"
        QT_MOC_LITERAL(240, 23),  // "_q_canReadStandardError"
        QT_MOC_LITERAL(264, 11),  // "_q_canWrite"
        QT_MOC_LITERAL(276, 22),  // "_q_startupNotification"
        QT_MOC_LITERAL(299, 14),  // "_q_processDied"
        QT_MOC_LITERAL(314, 12),  // "ProcessError"
        QT_MOC_LITERAL(327, 13),  // "FailedToStart"
        QT_MOC_LITERAL(341, 7),  // "Crashed"
        QT_MOC_LITERAL(349, 8),  // "Timedout"
        QT_MOC_LITERAL(358, 9),  // "ReadError"
        QT_MOC_LITERAL(368, 10),  // "WriteError"
        QT_MOC_LITERAL(379, 12),  // "UnknownError"
        QT_MOC_LITERAL(392, 12),  // "ProcessState"
        QT_MOC_LITERAL(405, 10),  // "NotRunning"
        QT_MOC_LITERAL(416, 8),  // "Starting"
        QT_MOC_LITERAL(425, 7),  // "Running"
        QT_MOC_LITERAL(433, 14),  // "ProcessChannel"
        QT_MOC_LITERAL(448, 14),  // "StandardOutput"
        QT_MOC_LITERAL(463, 13),  // "StandardError"
        QT_MOC_LITERAL(477, 18),  // "ProcessChannelMode"
        QT_MOC_LITERAL(496, 16),  // "SeparateChannels"
        QT_MOC_LITERAL(513, 14),  // "MergedChannels"
        QT_MOC_LITERAL(528, 17),  // "ForwardedChannels"
        QT_MOC_LITERAL(546, 22),  // "ForwardedOutputChannel"
        QT_MOC_LITERAL(569, 21),  // "ForwardedErrorChannel"
        QT_MOC_LITERAL(591, 16),  // "InputChannelMode"
        QT_MOC_LITERAL(608, 19),  // "ManagedInputChannel"
        QT_MOC_LITERAL(628, 21),  // "ForwardedInputChannel"
        QT_MOC_LITERAL(650, 10),  // "ExitStatus"
        QT_MOC_LITERAL(661, 10),  // "NormalExit"
        QT_MOC_LITERAL(672, 9)   // "CrashExit"
    },
    "QProcess",
    "started",
    "",
    "finished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "errorOccurred",
    "QProcess::ProcessError",
    "error",
    "stateChanged",
    "QProcess::ProcessState",
    "state",
    "readyReadStandardOutput",
    "readyReadStandardError",
    "terminate",
    "kill",
    "_q_canReadStandardOutput",
    "_q_canReadStandardError",
    "_q_canWrite",
    "_q_startupNotification",
    "_q_processDied",
    "ProcessError",
    "FailedToStart",
    "Crashed",
    "Timedout",
    "ReadError",
    "WriteError",
    "UnknownError",
    "ProcessState",
    "NotRunning",
    "Starting",
    "Running",
    "ProcessChannel",
    "StandardOutput",
    "StandardError",
    "ProcessChannelMode",
    "SeparateChannels",
    "MergedChannels",
    "ForwardedChannels",
    "ForwardedOutputChannel",
    "ForwardedErrorChannel",
    "InputChannelMode",
    "ManagedInputChannel",
    "ForwardedInputChannel",
    "ExitStatus",
    "NormalExit",
    "CrashExit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQProcessENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       6,  122, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    7 /* Public */,
       3,    2,   99,    2, 0x06,    8 /* Public */,
       3,    1,  104,    2, 0x26,   11 /* Public | MethodCloned */,
       7,    1,  107,    2, 0x06,   13 /* Public */,
      10,    1,  110,    2, 0x06,   15 /* Public */,
      13,    0,  113,    2, 0x06,   17 /* Public */,
      14,    0,  114,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  115,    2, 0x0a,   19 /* Public */,
      16,    0,  116,    2, 0x0a,   20 /* Public */,
      17,    0,  117,    2, 0x08,   21 /* Private */,
      18,    0,  118,    2, 0x08,   22 /* Private */,
      19,    0,  119,    2, 0x08,   23 /* Private */,
      20,    0,  120,    2, 0x08,   24 /* Private */,
      21,    0,  121,    2, 0x08,   25 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      22,   22, 0x0,    6,  152,
      29,   29, 0x0,    3,  164,
      33,   33, 0x0,    2,  170,
      36,   36, 0x0,    5,  174,
      42,   42, 0x0,    2,  184,
      45,   45, 0x0,    2,  188,

 // enum data: key, value
      23, uint(QProcess::FailedToStart),
      24, uint(QProcess::Crashed),
      25, uint(QProcess::Timedout),
      26, uint(QProcess::ReadError),
      27, uint(QProcess::WriteError),
      28, uint(QProcess::UnknownError),
      30, uint(QProcess::NotRunning),
      31, uint(QProcess::Starting),
      32, uint(QProcess::Running),
      34, uint(QProcess::StandardOutput),
      35, uint(QProcess::StandardError),
      37, uint(QProcess::SeparateChannels),
      38, uint(QProcess::MergedChannels),
      39, uint(QProcess::ForwardedChannels),
      40, uint(QProcess::ForwardedOutputChannel),
      41, uint(QProcess::ForwardedErrorChannel),
      43, uint(QProcess::ManagedInputChannel),
      44, uint(QProcess::ForwardedInputChannel),
      46, uint(QProcess::NormalExit),
      47, uint(QProcess::CrashExit),

       0        // eod
};

Q_CONSTINIT const QMetaObject QProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_CLASSQProcessENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQProcessENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQProcessENDCLASS_t,
        // enum 'ProcessError'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::true_type>,
        // enum 'ProcessState'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessState, std::true_type>,
        // enum 'ProcessChannel'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessChannel, std::true_type>,
        // enum 'ProcessChannelMode'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessChannelMode, std::true_type>,
        // enum 'InputChannelMode'
        QtPrivate::TypeAndForceComplete<QProcess::InputChannelMode, std::true_type>,
        // enum 'ExitStatus'
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QProcess, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessState, std::false_type>,
        // method 'readyReadStandardOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyReadStandardError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terminate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'kill'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_canReadStandardOutput'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_canReadStandardError'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_canWrite'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_startupNotification'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_processDied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessState>>(_a[1])), QPrivateSignal()); break;
        case 5: _t->readyReadStandardOutput(QPrivateSignal()); break;
        case 6: _t->readyReadStandardError(QPrivateSignal()); break;
        case 7: _t->terminate(); break;
        case 8: _t->kill(); break;
        case 9: { bool _r = _t->d_func()->_q_canReadStandardOutput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->d_func()->_q_canReadStandardError();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->d_func()->_q_canWrite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->d_func()->_q_startupNotification();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->d_func()->_q_processDied(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QProcess::*)(QPrivateSignal);
            if (_t _q_method = &QProcess::started; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QProcess::*)(int , QProcess::ExitStatus );
            if (_t _q_method = &QProcess::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QProcess::*)(QProcess::ProcessError );
            if (_t _q_method = &QProcess::errorOccurred; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QProcess::*)(QProcess::ProcessState , QPrivateSignal);
            if (_t _q_method = &QProcess::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QProcess::*)(QPrivateSignal);
            if (_t _q_method = &QProcess::readyReadStandardOutput; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QProcess::*)(QPrivateSignal);
            if (_t _q_method = &QProcess::readyReadStandardError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *QProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQProcessENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QProcess::started(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProcess::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QProcess::errorOccurred(QProcess::ProcessError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QProcess::stateChanged(QProcess::ProcessState _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QProcess::readyReadStandardOutput(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QProcess::readyReadStandardError(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
