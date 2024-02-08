/****************************************************************************
** Meta object code from reading C++ file 'qplatformgraphicsbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformgraphicsbuffer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformgraphicsbuffer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS = QtMocHelpers::stringData(
    "QPlatformGraphicsBuffer",
    "unlocked",
    "",
    "AccessTypes",
    "previousAccessTypes",
    "AccessType",
    "None",
    "SWReadAccess",
    "SWWriteAccess",
    "TextureAccess",
    "HWCompositor",
    "Origin",
    "OriginBottomLeft",
    "OriginTopLeft"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[24];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[20];
    char stringdata5[11];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[13];
    char stringdata11[7];
    char stringdata12[17];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS_t qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QPlatformGraphicsBuffer"
        QT_MOC_LITERAL(24, 8),  // "unlocked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 11),  // "AccessTypes"
        QT_MOC_LITERAL(46, 19),  // "previousAccessTypes"
        QT_MOC_LITERAL(66, 10),  // "AccessType"
        QT_MOC_LITERAL(77, 4),  // "None"
        QT_MOC_LITERAL(82, 12),  // "SWReadAccess"
        QT_MOC_LITERAL(95, 13),  // "SWWriteAccess"
        QT_MOC_LITERAL(109, 13),  // "TextureAccess"
        QT_MOC_LITERAL(123, 12),  // "HWCompositor"
        QT_MOC_LITERAL(136, 6),  // "Origin"
        QT_MOC_LITERAL(143, 16),  // "OriginBottomLeft"
        QT_MOC_LITERAL(160, 13)   // "OriginTopLeft"
    },
    "QPlatformGraphicsBuffer",
    "unlocked",
    "",
    "AccessTypes",
    "previousAccessTypes",
    "AccessType",
    "None",
    "SWReadAccess",
    "SWWriteAccess",
    "TextureAccess",
    "HWCompositor",
    "Origin",
    "OriginBottomLeft",
    "OriginTopLeft"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformGraphicsBufferENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    5,   33,
      11,   11, 0x0,    2,   43,

 // enum data: key, value
       6, uint(QPlatformGraphicsBuffer::None),
       7, uint(QPlatformGraphicsBuffer::SWReadAccess),
       8, uint(QPlatformGraphicsBuffer::SWWriteAccess),
       9, uint(QPlatformGraphicsBuffer::TextureAccess),
      10, uint(QPlatformGraphicsBuffer::HWCompositor),
      12, uint(QPlatformGraphicsBuffer::OriginBottomLeft),
      13, uint(QPlatformGraphicsBuffer::OriginTopLeft),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformGraphicsBuffer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformGraphicsBufferENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS_t,
        // enum 'AccessType'
        QtPrivate::TypeAndForceComplete<QPlatformGraphicsBuffer::AccessType, std::true_type>,
        // enum 'Origin'
        QtPrivate::TypeAndForceComplete<QPlatformGraphicsBuffer::Origin, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformGraphicsBuffer, std::true_type>,
        // method 'unlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccessTypes, std::false_type>
    >,
    nullptr
} };

void QPlatformGraphicsBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformGraphicsBuffer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->unlocked((*reinterpret_cast< std::add_pointer_t<AccessTypes>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformGraphicsBuffer::*)(AccessTypes );
            if (_t _q_method = &QPlatformGraphicsBuffer::unlocked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformGraphicsBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformGraphicsBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPlatformGraphicsBufferENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformGraphicsBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QPlatformGraphicsBuffer::unlocked(AccessTypes _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
