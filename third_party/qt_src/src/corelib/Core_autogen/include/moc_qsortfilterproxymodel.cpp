/****************************************************************************
** Meta object code from reading C++ file 'qsortfilterproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qsortfilterproxymodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsortfilterproxymodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS = QtMocHelpers::stringData(
    "QSortFilterProxyModel",
    "dynamicSortFilterChanged",
    "",
    "dynamicSortFilter",
    "filterCaseSensitivityChanged",
    "Qt::CaseSensitivity",
    "filterCaseSensitivity",
    "sortCaseSensitivityChanged",
    "sortCaseSensitivity",
    "sortLocaleAwareChanged",
    "sortLocaleAware",
    "sortRoleChanged",
    "sortRole",
    "filterRoleChanged",
    "filterRole",
    "recursiveFilteringEnabledChanged",
    "recursiveFilteringEnabled",
    "autoAcceptChildRowsChanged",
    "autoAcceptChildRows",
    "setFilterRegularExpression",
    "pattern",
    "regularExpression",
    "setFilterWildcard",
    "setFilterFixedString",
    "invalidate",
    "filterRegularExpression",
    "filterKeyColumn",
    "isSortLocaleAware"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[22];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[29];
    char stringdata5[20];
    char stringdata6[22];
    char stringdata7[27];
    char stringdata8[20];
    char stringdata9[23];
    char stringdata10[16];
    char stringdata11[16];
    char stringdata12[9];
    char stringdata13[18];
    char stringdata14[11];
    char stringdata15[33];
    char stringdata16[26];
    char stringdata17[27];
    char stringdata18[20];
    char stringdata19[27];
    char stringdata20[8];
    char stringdata21[18];
    char stringdata22[18];
    char stringdata23[21];
    char stringdata24[11];
    char stringdata25[24];
    char stringdata26[16];
    char stringdata27[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS_t qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QSortFilterProxyModel"
        QT_MOC_LITERAL(22, 24),  // "dynamicSortFilterChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 17),  // "dynamicSortFilter"
        QT_MOC_LITERAL(66, 28),  // "filterCaseSensitivityChanged"
        QT_MOC_LITERAL(95, 19),  // "Qt::CaseSensitivity"
        QT_MOC_LITERAL(115, 21),  // "filterCaseSensitivity"
        QT_MOC_LITERAL(137, 26),  // "sortCaseSensitivityChanged"
        QT_MOC_LITERAL(164, 19),  // "sortCaseSensitivity"
        QT_MOC_LITERAL(184, 22),  // "sortLocaleAwareChanged"
        QT_MOC_LITERAL(207, 15),  // "sortLocaleAware"
        QT_MOC_LITERAL(223, 15),  // "sortRoleChanged"
        QT_MOC_LITERAL(239, 8),  // "sortRole"
        QT_MOC_LITERAL(248, 17),  // "filterRoleChanged"
        QT_MOC_LITERAL(266, 10),  // "filterRole"
        QT_MOC_LITERAL(277, 32),  // "recursiveFilteringEnabledChanged"
        QT_MOC_LITERAL(310, 25),  // "recursiveFilteringEnabled"
        QT_MOC_LITERAL(336, 26),  // "autoAcceptChildRowsChanged"
        QT_MOC_LITERAL(363, 19),  // "autoAcceptChildRows"
        QT_MOC_LITERAL(383, 26),  // "setFilterRegularExpression"
        QT_MOC_LITERAL(410, 7),  // "pattern"
        QT_MOC_LITERAL(418, 17),  // "regularExpression"
        QT_MOC_LITERAL(436, 17),  // "setFilterWildcard"
        QT_MOC_LITERAL(454, 20),  // "setFilterFixedString"
        QT_MOC_LITERAL(475, 10),  // "invalidate"
        QT_MOC_LITERAL(486, 23),  // "filterRegularExpression"
        QT_MOC_LITERAL(510, 15),  // "filterKeyColumn"
        QT_MOC_LITERAL(526, 17)   // "isSortLocaleAware"
    },
    "QSortFilterProxyModel",
    "dynamicSortFilterChanged",
    "",
    "dynamicSortFilter",
    "filterCaseSensitivityChanged",
    "Qt::CaseSensitivity",
    "filterCaseSensitivity",
    "sortCaseSensitivityChanged",
    "sortCaseSensitivity",
    "sortLocaleAwareChanged",
    "sortLocaleAware",
    "sortRoleChanged",
    "sortRole",
    "filterRoleChanged",
    "filterRole",
    "recursiveFilteringEnabledChanged",
    "recursiveFilteringEnabled",
    "autoAcceptChildRowsChanged",
    "autoAcceptChildRows",
    "setFilterRegularExpression",
    "pattern",
    "regularExpression",
    "setFilterWildcard",
    "setFilterFixedString",
    "invalidate",
    "filterRegularExpression",
    "filterKeyColumn",
    "isSortLocaleAware"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSortFilterProxyModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      10,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,   11 /* Public */,
       4,    1,   95,    2, 0x06,   13 /* Public */,
       7,    1,   98,    2, 0x06,   15 /* Public */,
       9,    1,  101,    2, 0x06,   17 /* Public */,
      11,    1,  104,    2, 0x06,   19 /* Public */,
      13,    1,  107,    2, 0x06,   21 /* Public */,
      15,    1,  110,    2, 0x06,   23 /* Public */,
      17,    1,  113,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    1,  116,    2, 0x0a,   27 /* Public */,
      19,    1,  119,    2, 0x0a,   29 /* Public */,
      22,    1,  122,    2, 0x0a,   31 /* Public */,
      23,    1,  125,    2, 0x0a,   33 /* Public */,
      24,    0,  128,    2, 0x0a,   35 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QRegularExpression,   21,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::QRegularExpression, 0x02015103, uint(-1), 0,
      26, QMetaType::Int, 0x02015103, uint(-1), 0,
       3, QMetaType::Bool, 0x02015103, uint(-1), 0,
       6, 0x80000000 | 5, 0x0201510b, uint(1), 0,
       8, 0x80000000 | 5, 0x0201510b, uint(2), 0,
      27, QMetaType::Bool, 0x02015003, uint(3), 0,
      12, QMetaType::Int, 0x02015103, uint(4), 0,
      14, QMetaType::Int, 0x02015103, uint(5), 0,
      16, QMetaType::Bool, 0x02015103, uint(6), 0,
      18, QMetaType::Bool, 0x02015103, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSortFilterProxyModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS_t,
        // property 'filterRegularExpression'
        QtPrivate::TypeAndForceComplete<QRegularExpression, std::true_type>,
        // property 'filterKeyColumn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'dynamicSortFilter'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'filterCaseSensitivity'
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::true_type>,
        // property 'sortCaseSensitivity'
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::true_type>,
        // property 'isSortLocaleAware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sortRole'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'filterRole'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'recursiveFilteringEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoAcceptChildRows'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSortFilterProxyModel, std::true_type>,
        // method 'dynamicSortFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'filterCaseSensitivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'sortCaseSensitivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'sortLocaleAwareChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sortRoleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'filterRoleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'recursiveFilteringEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'autoAcceptChildRowsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFilterRegularExpression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFilterRegularExpression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>,
        // method 'setFilterWildcard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFilterFixedString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'invalidate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dynamicSortFilterChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->filterCaseSensitivityChanged((*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[1]))); break;
        case 2: _t->sortCaseSensitivityChanged((*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[1]))); break;
        case 3: _t->sortLocaleAwareChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->sortRoleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->filterRoleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->recursiveFilteringEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->autoAcceptChildRowsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setFilterRegularExpression((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setFilterRegularExpression((*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[1]))); break;
        case 10: _t->setFilterWildcard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setFilterFixedString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->invalidate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSortFilterProxyModel::*)(bool );
            if (_t _q_method = &QSortFilterProxyModel::dynamicSortFilterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(Qt::CaseSensitivity );
            if (_t _q_method = &QSortFilterProxyModel::filterCaseSensitivityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(Qt::CaseSensitivity );
            if (_t _q_method = &QSortFilterProxyModel::sortCaseSensitivityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(bool );
            if (_t _q_method = &QSortFilterProxyModel::sortLocaleAwareChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(int );
            if (_t _q_method = &QSortFilterProxyModel::sortRoleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(int );
            if (_t _q_method = &QSortFilterProxyModel::filterRoleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(bool );
            if (_t _q_method = &QSortFilterProxyModel::recursiveFilteringEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QSortFilterProxyModel::*)(bool );
            if (_t _q_method = &QSortFilterProxyModel::autoAcceptChildRowsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSortFilterProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRegularExpression*>(_v) = _t->filterRegularExpression(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->filterKeyColumn(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->dynamicSortFilter(); break;
        case 3: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->filterCaseSensitivity(); break;
        case 4: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->sortCaseSensitivity(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSortLocaleAware(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->sortRole(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->filterRole(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isRecursiveFilteringEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autoAcceptChildRows(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSortFilterProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilterRegularExpression(*reinterpret_cast< QRegularExpression*>(_v)); break;
        case 1: _t->setFilterKeyColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setDynamicSortFilter(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFilterCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 4: _t->setSortCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 5: _t->setSortLocaleAware(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSortRole(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setFilterRole(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setRecursiveFilteringEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoAcceptChildRows(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
        auto *_t = static_cast<QSortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableFilterRegularExpression(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableFilterKeyColumn(); break;
        case 2: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableDynamicSortFilter(); break;
        case 3: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableFilterCaseSensitivity(); break;
        case 4: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSortCaseSensitivity(); break;
        case 5: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableIsSortLocaleAware(); break;
        case 6: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSortRole(); break;
        case 7: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableFilterRole(); break;
        case 8: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableRecursiveFilteringEnabled(); break;
        case 9: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableAutoAcceptChildRows(); break;
        default: break;
        }
    }
}

const QMetaObject *QSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSortFilterProxyModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int QSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QSortFilterProxyModel::dynamicSortFilterChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSortFilterProxyModel::filterCaseSensitivityChanged(Qt::CaseSensitivity _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSortFilterProxyModel::sortCaseSensitivityChanged(Qt::CaseSensitivity _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSortFilterProxyModel::sortLocaleAwareChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSortFilterProxyModel::sortRoleChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSortFilterProxyModel::filterRoleChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSortFilterProxyModel::recursiveFilteringEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSortFilterProxyModel::autoAcceptChildRowsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
