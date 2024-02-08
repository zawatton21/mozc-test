/****************************************************************************
** Meta object code from reading C++ file 'qdarwinpermissionplugin_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platform/darwin/qdarwinpermissionplugin_p_p.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdarwinpermissionplugin_p_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS = QtMocHelpers::stringData(
    "QDarwinLocationPermissionPlugin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS_t qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31)   // "QDarwinLocationPermissionPlugin"
    },
    "QDarwinLocationPermissionPlugin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDarwinLocationPermissionPluginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QDarwinLocationPermissionPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDarwinPermissionPlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDarwinLocationPermissionPluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDarwinLocationPermissionPlugin, std::true_type>
    >,
    nullptr
} };

void QDarwinLocationPermissionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QDarwinLocationPermissionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDarwinLocationPermissionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDarwinLocationPermissionPluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDarwinPermissionPlugin::qt_metacast(_clname);
}

int QDarwinLocationPermissionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDarwinPermissionPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_QDarwinLocationPermissionPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2d,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  'P',  'e',  'r',  'm',  'i', 
    's',  's',  'i',  'o',  'n',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '.',  '6',  '.',  '5', 
    // "className"
    0x03,  0x78,  0x1f,  'Q',  'D',  'a',  'r',  'w', 
    'i',  'n',  'L',  'o',  'c',  'a',  't',  'i', 
    'o',  'n',  'P',  'e',  'r',  'm',  'i',  's', 
    's',  'i',  'o',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6b,  'P',  'e',  'r',  'm',  'i', 
    's',  's',  'i',  'o',  'n',  's',  0x81,  0x73, 
    'Q',  'L',  'o',  'c',  'a',  't',  'i',  'o', 
    'n',  'P',  'e',  'r',  'm',  'i',  's',  's', 
    'i',  'o',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(QDarwinLocationPermissionPlugin, QDarwinLocationPermissionPlugin, qt_pluginMetaDataV2_QDarwinLocationPermissionPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_QDarwinLocationPermissionPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2d,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  'P',  'e',  'r',  'm',  'i', 
    's',  's',  'i',  'o',  'n',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '.',  '6',  '.',  '5', 
    // "className"
    0x03,  0x78,  0x1f,  'Q',  'D',  'a',  'r',  'w', 
    'i',  'n',  'L',  'o',  'c',  'a',  't',  'i', 
    'o',  'n',  'P',  'e',  'r',  'm',  'i',  's', 
    's',  'i',  'o',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x6b,  'P',  'e',  'r',  'm',  'i', 
    's',  's',  'i',  'o',  'n',  's',  0x81,  0x73, 
    'Q',  'L',  'o',  'c',  'a',  't',  'i',  'o', 
    'n',  'P',  'e',  'r',  'm',  'i',  's',  's', 
    'i',  'o',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QDarwinLocationPermissionPlugin, QDarwinLocationPermissionPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
