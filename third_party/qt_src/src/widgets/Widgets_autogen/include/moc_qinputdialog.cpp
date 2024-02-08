/****************************************************************************
** Meta object code from reading C++ file 'qinputdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qinputdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQInputDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQInputDialogENDCLASS = QtMocHelpers::stringData(
    "QInputDialog",
    "textValueChanged",
    "",
    "text",
    "textValueSelected",
    "intValueChanged",
    "value",
    "intValueSelected",
    "doubleValueChanged",
    "doubleValueSelected",
    "_q_textChanged",
    "_q_plainTextEditTextChanged",
    "_q_currentRowChanged",
    "QModelIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQInputDialogENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[6];
    char stringdata7[17];
    char stringdata8[19];
    char stringdata9[20];
    char stringdata10[15];
    char stringdata11[28];
    char stringdata12[21];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQInputDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQInputDialogENDCLASS_t qt_meta_stringdata_CLASSQInputDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QInputDialog"
        QT_MOC_LITERAL(13, 16),  // "textValueChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 4),  // "text"
        QT_MOC_LITERAL(36, 17),  // "textValueSelected"
        QT_MOC_LITERAL(54, 15),  // "intValueChanged"
        QT_MOC_LITERAL(70, 5),  // "value"
        QT_MOC_LITERAL(76, 16),  // "intValueSelected"
        QT_MOC_LITERAL(93, 18),  // "doubleValueChanged"
        QT_MOC_LITERAL(112, 19),  // "doubleValueSelected"
        QT_MOC_LITERAL(132, 14),  // "_q_textChanged"
        QT_MOC_LITERAL(147, 27),  // "_q_plainTextEditTextChanged"
        QT_MOC_LITERAL(175, 20),  // "_q_currentRowChanged"
        QT_MOC_LITERAL(196, 11)   // "QModelIndex"
    },
    "QInputDialog",
    "textValueChanged",
    "",
    "text",
    "textValueSelected",
    "intValueChanged",
    "value",
    "intValueSelected",
    "doubleValueChanged",
    "doubleValueSelected",
    "_q_textChanged",
    "_q_plainTextEditTextChanged",
    "_q_currentRowChanged",
    "QModelIndex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQInputDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    1,   74,    2, 0x06,    5 /* Public */,
       7,    1,   77,    2, 0x06,    7 /* Public */,
       8,    1,   80,    2, 0x06,    9 /* Public */,
       9,    1,   83,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   86,    2, 0x08,   13 /* Private */,
      11,    0,   89,    2, 0x08,   15 /* Private */,
      12,    2,   90,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QInputDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSQInputDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQInputDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQInputDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QInputDialog, std::true_type>,
        // method 'textValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textValueSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'intValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'intValueSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'doubleValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'doubleValueSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_q_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_q_plainTextEditTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void QInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QInputDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textValueChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->textValueSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->intValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->intValueSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->doubleValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->doubleValueSelected((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->d_func()->_q_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->d_func()->_q_plainTextEditTextChanged(); break;
        case 8: _t->d_func()->_q_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QInputDialog::*)(const QString & );
            if (_t _q_method = &QInputDialog::textValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QInputDialog::*)(const QString & );
            if (_t _q_method = &QInputDialog::textValueSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QInputDialog::*)(int );
            if (_t _q_method = &QInputDialog::intValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QInputDialog::*)(int );
            if (_t _q_method = &QInputDialog::intValueSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QInputDialog::*)(double );
            if (_t _q_method = &QInputDialog::doubleValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QInputDialog::*)(double );
            if (_t _q_method = &QInputDialog::doubleValueSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *QInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQInputDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QInputDialog::textValueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInputDialog::textValueSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInputDialog::intValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QInputDialog::intValueSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInputDialog::doubleValueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QInputDialog::doubleValueSelected(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
