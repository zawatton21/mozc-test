/****************************************************************************
** Meta object code from reading C++ file 'qdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQDialogENDCLASS = QtMocHelpers::stringData(
    "QDialog",
    "finished",
    "",
    "result",
    "accepted",
    "rejected",
    "open",
    "exec",
    "done",
    "accept",
    "reject",
    "sizeGripEnabled",
    "modal"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[8];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[7];
    char stringdata10[7];
    char stringdata11[16];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQDialogENDCLASS_t qt_meta_stringdata_CLASSQDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QDialog"
        QT_MOC_LITERAL(8, 8),  // "finished"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 6),  // "result"
        QT_MOC_LITERAL(25, 8),  // "accepted"
        QT_MOC_LITERAL(34, 8),  // "rejected"
        QT_MOC_LITERAL(43, 4),  // "open"
        QT_MOC_LITERAL(48, 4),  // "exec"
        QT_MOC_LITERAL(53, 4),  // "done"
        QT_MOC_LITERAL(58, 6),  // "accept"
        QT_MOC_LITERAL(65, 6),  // "reject"
        QT_MOC_LITERAL(72, 15),  // "sizeGripEnabled"
        QT_MOC_LITERAL(88, 5)   // "modal"
    },
    "QDialog",
    "finished",
    "",
    "result",
    "accepted",
    "rejected",
    "open",
    "exec",
    "done",
    "accept",
    "reject",
    "sizeGripEnabled",
    "modal"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    3 /* Public */,
       4,    0,   65,    2, 0x06,    5 /* Public */,
       5,    0,   66,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   67,    2, 0x0a,    7 /* Public */,
       7,    0,   68,    2, 0x0a,    8 /* Public */,
       8,    1,   69,    2, 0x0a,    9 /* Public */,
       9,    0,   72,    2, 0x0a,   11 /* Public */,
      10,    0,   73,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00015103, uint(-1), 0,
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQDialogENDCLASS_t,
        // property 'sizeGripEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'modal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDialog, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exec'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->accepted(); break;
        case 2: _t->rejected(); break;
        case 3: _t->open(); break;
        case 4: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->done((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->accept(); break;
        case 7: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDialog::*)(int );
            if (_t _q_method = &QDialog::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDialog::*)();
            if (_t _q_method = &QDialog::accepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QDialog::*)();
            if (_t _q_method = &QDialog::rejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSizeGripEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isModal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSizeGripEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setModal(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDialog::finished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDialog::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
