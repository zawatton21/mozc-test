/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qfilesystemmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQFileSystemModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFileSystemModelENDCLASS = QtMocHelpers::stringData(
    "QFileSystemModel",
    "rootPathChanged",
    "",
    "newPath",
    "fileRenamed",
    "path",
    "oldName",
    "newName",
    "directoryLoaded",
    "_q_directoryChanged",
    "directory",
    "list",
    "_q_performDelayedSort",
    "_q_fileSystemChanged",
    "QList<std::pair<QString,QFileInfo>>",
    "_q_resolvedName",
    "fileName",
    "resolvedName",
    "resolveSymlinks",
    "readOnly",
    "nameFilterDisables",
    "options",
    "Options",
    "Option",
    "DontWatchForChanges",
    "DontResolveSymlinks",
    "DontUseCustomDirectoryIcons"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFileSystemModelENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[12];
    char stringdata5[5];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[16];
    char stringdata9[20];
    char stringdata10[10];
    char stringdata11[5];
    char stringdata12[22];
    char stringdata13[21];
    char stringdata14[36];
    char stringdata15[16];
    char stringdata16[9];
    char stringdata17[13];
    char stringdata18[16];
    char stringdata19[9];
    char stringdata20[19];
    char stringdata21[8];
    char stringdata22[8];
    char stringdata23[7];
    char stringdata24[20];
    char stringdata25[20];
    char stringdata26[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFileSystemModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFileSystemModelENDCLASS_t qt_meta_stringdata_CLASSQFileSystemModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QFileSystemModel"
        QT_MOC_LITERAL(17, 15),  // "rootPathChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 7),  // "newPath"
        QT_MOC_LITERAL(42, 11),  // "fileRenamed"
        QT_MOC_LITERAL(54, 4),  // "path"
        QT_MOC_LITERAL(59, 7),  // "oldName"
        QT_MOC_LITERAL(67, 7),  // "newName"
        QT_MOC_LITERAL(75, 15),  // "directoryLoaded"
        QT_MOC_LITERAL(91, 19),  // "_q_directoryChanged"
        QT_MOC_LITERAL(111, 9),  // "directory"
        QT_MOC_LITERAL(121, 4),  // "list"
        QT_MOC_LITERAL(126, 21),  // "_q_performDelayedSort"
        QT_MOC_LITERAL(148, 20),  // "_q_fileSystemChanged"
        QT_MOC_LITERAL(169, 35),  // "QList<std::pair<QString,QFile..."
        QT_MOC_LITERAL(205, 15),  // "_q_resolvedName"
        QT_MOC_LITERAL(221, 8),  // "fileName"
        QT_MOC_LITERAL(230, 12),  // "resolvedName"
        QT_MOC_LITERAL(243, 15),  // "resolveSymlinks"
        QT_MOC_LITERAL(259, 8),  // "readOnly"
        QT_MOC_LITERAL(268, 18),  // "nameFilterDisables"
        QT_MOC_LITERAL(287, 7),  // "options"
        QT_MOC_LITERAL(295, 7),  // "Options"
        QT_MOC_LITERAL(303, 6),  // "Option"
        QT_MOC_LITERAL(310, 19),  // "DontWatchForChanges"
        QT_MOC_LITERAL(330, 19),  // "DontResolveSymlinks"
        QT_MOC_LITERAL(350, 27)   // "DontUseCustomDirectoryIcons"
    },
    "QFileSystemModel",
    "rootPathChanged",
    "",
    "newPath",
    "fileRenamed",
    "path",
    "oldName",
    "newName",
    "directoryLoaded",
    "_q_directoryChanged",
    "directory",
    "list",
    "_q_performDelayedSort",
    "_q_fileSystemChanged",
    "QList<std::pair<QString,QFileInfo>>",
    "_q_resolvedName",
    "fileName",
    "resolvedName",
    "resolveSymlinks",
    "readOnly",
    "nameFilterDisables",
    "options",
    "Options",
    "Option",
    "DontWatchForChanges",
    "DontResolveSymlinks",
    "DontUseCustomDirectoryIcons"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFileSystemModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   85, // properties
       1,  105, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    6 /* Public */,
       4,    3,   59,    2, 0x06,    8 /* Public */,
       8,    1,   66,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   69,    2, 0x08,   14 /* Private */,
      12,    0,   74,    2, 0x08,   17 /* Private */,
      13,    2,   75,    2, 0x08,   18 /* Private */,
      15,    2,   80,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    5,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00015103, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,
      20, QMetaType::Bool, 0x00015103, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      23,   23, 0x0,    3,  110,

 // enum data: key, value
      24, uint(QFileSystemModel::DontWatchForChanges),
      25, uint(QFileSystemModel::DontResolveSymlinks),
      26, uint(QFileSystemModel::DontUseCustomDirectoryIcons),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFileSystemModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSQFileSystemModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFileSystemModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFileSystemModelENDCLASS_t,
        // property 'resolveSymlinks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'nameFilterDisables'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'options'
        QtPrivate::TypeAndForceComplete<Options, std::true_type>,
        // enum 'Option'
        QtPrivate::TypeAndForceComplete<QFileSystemModel::Option, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFileSystemModel, std::true_type>,
        // method 'rootPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileRenamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'directoryLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_q_directoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method '_q_performDelayedSort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_fileSystemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPair<QString,QFileInfo>> &, std::false_type>,
        // method '_q_resolvedName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QFileSystemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QFileSystemModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rootPathChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->fileRenamed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->directoryLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->d_func()->_q_directoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 4: _t->d_func()->_q_performDelayedSort(); break;
        case 5: _t->d_func()->_q_fileSystemChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<QString,QFileInfo>>>>(_a[2]))); break;
        case 6: _t->d_func()->_q_resolvedName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QFileSystemModel::*)(const QString & );
            if (_t _q_method = &QFileSystemModel::rootPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QFileSystemModel::*)(const QString & , const QString & , const QString & );
            if (_t _q_method = &QFileSystemModel::fileRenamed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QFileSystemModel::*)(const QString & );
            if (_t _q_method = &QFileSystemModel::directoryLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QFileSystemModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->resolveSymlinks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nameFilterDisables(); break;
        case 3: *reinterpret_cast< Options*>(_v) = _t->options(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QFileSystemModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResolveSymlinks(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNameFilterDisables(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setOptions(*reinterpret_cast< Options*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QFileSystemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileSystemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQFileSystemModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QFileSystemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QFileSystemModel::rootPathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileSystemModel::fileRenamed(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileSystemModel::directoryLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
