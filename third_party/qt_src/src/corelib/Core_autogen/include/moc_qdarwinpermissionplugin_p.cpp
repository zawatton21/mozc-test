/****************************************************************************
** Meta object code from reading C++ file 'qdarwinpermissionplugin_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platform/darwin/qdarwinpermissionplugin_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdarwinpermissionplugin_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS = QtMocHelpers::stringData(
    "QDarwinPermissionPlugin",
    "permissionUpdated",
    "",
    "Qt::PermissionStatus",
    "status",
    "PermissionCallback",
    "callback"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[24];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[7];
    char stringdata5[19];
    char stringdata6[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS_t qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QDarwinPermissionPlugin"
        QT_MOC_LITERAL(24, 17),  // "permissionUpdated"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 20),  // "Qt::PermissionStatus"
        QT_MOC_LITERAL(64, 6),  // "status"
        QT_MOC_LITERAL(71, 18),  // "PermissionCallback"
        QT_MOC_LITERAL(90, 8)   // "callback"
    },
    "QDarwinPermissionPlugin",
    "permissionUpdated",
    "",
    "Qt::PermissionStatus",
    "status",
    "PermissionCallback",
    "callback"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDarwinPermissionPluginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDarwinPermissionPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QPermissionPlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDarwinPermissionPluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDarwinPermissionPlugin, std::true_type>,
        // method 'permissionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::PermissionStatus, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PermissionCallback &, std::false_type>
    >,
    nullptr
} };

void QDarwinPermissionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDarwinPermissionPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->permissionUpdated((*reinterpret_cast< std::add_pointer_t<Qt::PermissionStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PermissionCallback>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *QDarwinPermissionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDarwinPermissionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDarwinPermissionPluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPermissionPlugin::qt_metacast(_clname);
}

int QDarwinPermissionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPermissionPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
