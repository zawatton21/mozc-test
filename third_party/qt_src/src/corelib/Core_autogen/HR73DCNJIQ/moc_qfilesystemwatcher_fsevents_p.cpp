/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemwatcher_fsevents_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qfilesystemwatcher_fsevents_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemwatcher_fsevents_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS = QtMocHelpers::stringData(
    "QFseventsFileSystemWatcherEngine",
    "emitFileChanged",
    "",
    "path",
    "removed",
    "emitDirectoryChanged",
    "scheduleStreamRestart",
    "doEmitFileChanged",
    "doEmitDirectoryChanged",
    "restartStream"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[33];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[21];
    char stringdata6[22];
    char stringdata7[18];
    char stringdata8[23];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS_t qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 32),  // "QFseventsFileSystemWatcherEngine"
        QT_MOC_LITERAL(33, 15),  // "emitFileChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 4),  // "path"
        QT_MOC_LITERAL(55, 7),  // "removed"
        QT_MOC_LITERAL(63, 20),  // "emitDirectoryChanged"
        QT_MOC_LITERAL(84, 21),  // "scheduleStreamRestart"
        QT_MOC_LITERAL(106, 17),  // "doEmitFileChanged"
        QT_MOC_LITERAL(124, 22),  // "doEmitDirectoryChanged"
        QT_MOC_LITERAL(147, 13)   // "restartStream"
    },
    "QFseventsFileSystemWatcherEngine",
    "emitFileChanged",
    "",
    "path",
    "removed",
    "emitDirectoryChanged",
    "scheduleStreamRestart",
    "doEmitFileChanged",
    "doEmitDirectoryChanged",
    "restartStream"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFseventsFileSystemWatcherEngineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    2,   55,    2, 0x06,    4 /* Public */,
       6,    0,   60,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   61,    2, 0x08,    8 /* Private */,
       8,    2,   66,    2, 0x08,   11 /* Private */,
       9,    0,   71,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject QFseventsFileSystemWatcherEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileSystemWatcherEngine::staticMetaObject>(),
    qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFseventsFileSystemWatcherEngineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFseventsFileSystemWatcherEngine, std::true_type>,
        // method 'emitFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitDirectoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scheduleStreamRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doEmitFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doEmitDirectoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'restartStream'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QFseventsFileSystemWatcherEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QFseventsFileSystemWatcherEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitFileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->emitDirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->scheduleStreamRestart(); break;
        case 3: _t->doEmitFileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->doEmitDirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: { bool _r = _t->restartStream();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QFseventsFileSystemWatcherEngine::*)(const QString & , bool );
            if (_t _q_method = &QFseventsFileSystemWatcherEngine::emitFileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QFseventsFileSystemWatcherEngine::*)(const QString & , bool );
            if (_t _q_method = &QFseventsFileSystemWatcherEngine::emitDirectoryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QFseventsFileSystemWatcherEngine::*)();
            if (_t _q_method = &QFseventsFileSystemWatcherEngine::scheduleStreamRestart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QFseventsFileSystemWatcherEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFseventsFileSystemWatcherEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQFseventsFileSystemWatcherEngineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFileSystemWatcherEngine::qt_metacast(_clname);
}

int QFseventsFileSystemWatcherEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemWatcherEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QFseventsFileSystemWatcherEngine::emitFileChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFseventsFileSystemWatcherEngine::emitDirectoryChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFseventsFileSystemWatcherEngine::scheduleStreamRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
