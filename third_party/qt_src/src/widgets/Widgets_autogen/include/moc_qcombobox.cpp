/****************************************************************************
** Meta object code from reading C++ file 'qcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qcombobox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcombobox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQComboBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQComboBoxENDCLASS = QtMocHelpers::stringData(
    "QComboBox",
    "editTextChanged",
    "",
    "activated",
    "index",
    "textActivated",
    "highlighted",
    "textHighlighted",
    "currentIndexChanged",
    "currentTextChanged",
    "clear",
    "clearEditText",
    "setEditText",
    "text",
    "setCurrentIndex",
    "setCurrentText",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "editable",
    "count",
    "currentText",
    "currentIndex",
    "currentData",
    "maxVisibleItems",
    "maxCount",
    "insertPolicy",
    "InsertPolicy",
    "sizeAdjustPolicy",
    "SizeAdjustPolicy",
    "minimumContentsLength",
    "iconSize",
    "placeholderText",
    "duplicatesEnabled",
    "frame",
    "modelColumn",
    "NoInsert",
    "InsertAtTop",
    "InsertAtCurrent",
    "InsertAtBottom",
    "InsertAfterCurrent",
    "InsertBeforeCurrent",
    "InsertAlphabetically",
    "AdjustToContents",
    "AdjustToContentsOnFirstShow",
    "AdjustToMinimumContentsLengthWithIcon"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQComboBoxENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[14];
    char stringdata6[12];
    char stringdata7[16];
    char stringdata8[20];
    char stringdata9[19];
    char stringdata10[6];
    char stringdata11[14];
    char stringdata12[12];
    char stringdata13[5];
    char stringdata14[16];
    char stringdata15[15];
    char stringdata16[17];
    char stringdata17[21];
    char stringdata18[6];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[6];
    char stringdata22[12];
    char stringdata23[13];
    char stringdata24[12];
    char stringdata25[16];
    char stringdata26[9];
    char stringdata27[13];
    char stringdata28[13];
    char stringdata29[17];
    char stringdata30[17];
    char stringdata31[22];
    char stringdata32[9];
    char stringdata33[16];
    char stringdata34[18];
    char stringdata35[6];
    char stringdata36[12];
    char stringdata37[9];
    char stringdata38[12];
    char stringdata39[16];
    char stringdata40[15];
    char stringdata41[19];
    char stringdata42[20];
    char stringdata43[21];
    char stringdata44[17];
    char stringdata45[28];
    char stringdata46[38];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQComboBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQComboBoxENDCLASS_t qt_meta_stringdata_CLASSQComboBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QComboBox"
        QT_MOC_LITERAL(10, 15),  // "editTextChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 9),  // "activated"
        QT_MOC_LITERAL(37, 5),  // "index"
        QT_MOC_LITERAL(43, 13),  // "textActivated"
        QT_MOC_LITERAL(57, 11),  // "highlighted"
        QT_MOC_LITERAL(69, 15),  // "textHighlighted"
        QT_MOC_LITERAL(85, 19),  // "currentIndexChanged"
        QT_MOC_LITERAL(105, 18),  // "currentTextChanged"
        QT_MOC_LITERAL(124, 5),  // "clear"
        QT_MOC_LITERAL(130, 13),  // "clearEditText"
        QT_MOC_LITERAL(144, 11),  // "setEditText"
        QT_MOC_LITERAL(156, 4),  // "text"
        QT_MOC_LITERAL(161, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(177, 14),  // "setCurrentText"
        QT_MOC_LITERAL(192, 16),  // "inputMethodQuery"
        QT_MOC_LITERAL(209, 20),  // "Qt::InputMethodQuery"
        QT_MOC_LITERAL(230, 5),  // "query"
        QT_MOC_LITERAL(236, 8),  // "argument"
        QT_MOC_LITERAL(245, 8),  // "editable"
        QT_MOC_LITERAL(254, 5),  // "count"
        QT_MOC_LITERAL(260, 11),  // "currentText"
        QT_MOC_LITERAL(272, 12),  // "currentIndex"
        QT_MOC_LITERAL(285, 11),  // "currentData"
        QT_MOC_LITERAL(297, 15),  // "maxVisibleItems"
        QT_MOC_LITERAL(313, 8),  // "maxCount"
        QT_MOC_LITERAL(322, 12),  // "insertPolicy"
        QT_MOC_LITERAL(335, 12),  // "InsertPolicy"
        QT_MOC_LITERAL(348, 16),  // "sizeAdjustPolicy"
        QT_MOC_LITERAL(365, 16),  // "SizeAdjustPolicy"
        QT_MOC_LITERAL(382, 21),  // "minimumContentsLength"
        QT_MOC_LITERAL(404, 8),  // "iconSize"
        QT_MOC_LITERAL(413, 15),  // "placeholderText"
        QT_MOC_LITERAL(429, 17),  // "duplicatesEnabled"
        QT_MOC_LITERAL(447, 5),  // "frame"
        QT_MOC_LITERAL(453, 11),  // "modelColumn"
        QT_MOC_LITERAL(465, 8),  // "NoInsert"
        QT_MOC_LITERAL(474, 11),  // "InsertAtTop"
        QT_MOC_LITERAL(486, 15),  // "InsertAtCurrent"
        QT_MOC_LITERAL(502, 14),  // "InsertAtBottom"
        QT_MOC_LITERAL(517, 18),  // "InsertAfterCurrent"
        QT_MOC_LITERAL(536, 19),  // "InsertBeforeCurrent"
        QT_MOC_LITERAL(556, 20),  // "InsertAlphabetically"
        QT_MOC_LITERAL(577, 16),  // "AdjustToContents"
        QT_MOC_LITERAL(594, 27),  // "AdjustToContentsOnFirstShow"
        QT_MOC_LITERAL(622, 37)   // "AdjustToMinimumContentsLength..."
    },
    "QComboBox",
    "editTextChanged",
    "",
    "activated",
    "index",
    "textActivated",
    "highlighted",
    "textHighlighted",
    "currentIndexChanged",
    "currentTextChanged",
    "clear",
    "clearEditText",
    "setEditText",
    "text",
    "setCurrentIndex",
    "setCurrentText",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "editable",
    "count",
    "currentText",
    "currentIndex",
    "currentData",
    "maxVisibleItems",
    "maxCount",
    "insertPolicy",
    "InsertPolicy",
    "sizeAdjustPolicy",
    "SizeAdjustPolicy",
    "minimumContentsLength",
    "iconSize",
    "placeholderText",
    "duplicatesEnabled",
    "frame",
    "modelColumn",
    "NoInsert",
    "InsertAtTop",
    "InsertAtCurrent",
    "InsertAtBottom",
    "InsertAfterCurrent",
    "InsertBeforeCurrent",
    "InsertAlphabetically",
    "AdjustToContents",
    "AdjustToContentsOnFirstShow",
    "AdjustToMinimumContentsLengthWithIcon"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQComboBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      15,  129, // properties
       2,  204, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,   18 /* Public */,
       3,    1,   95,    2, 0x06,   20 /* Public */,
       5,    1,   98,    2, 0x06,   22 /* Public */,
       6,    1,  101,    2, 0x06,   24 /* Public */,
       7,    1,  104,    2, 0x06,   26 /* Public */,
       8,    1,  107,    2, 0x06,   28 /* Public */,
       9,    1,  110,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  113,    2, 0x0a,   32 /* Public */,
      11,    0,  114,    2, 0x0a,   33 /* Public */,
      12,    1,  115,    2, 0x0a,   34 /* Public */,
      14,    1,  118,    2, 0x0a,   36 /* Public */,
      15,    1,  121,    2, 0x0a,   38 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    2,  124,    2, 0x102,   40 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   13,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 17, QMetaType::QVariant,   18,   19,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015103, uint(-1), 0,
      21, QMetaType::Int, 0x00015001, uint(-1), 0,
      22, QMetaType::QString, 0x00115103, uint(6), 0,
      23, QMetaType::Int, 0x00015103, uint(5), 0,
      24, QMetaType::QVariant, 0x00015001, uint(-1), 0,
      25, QMetaType::Int, 0x00015103, uint(-1), 0,
      26, QMetaType::Int, 0x00015103, uint(-1), 0,
      27, 0x80000000 | 28, 0x0001510b, uint(-1), 0,
      29, 0x80000000 | 30, 0x0001510b, uint(-1), 0,
      31, QMetaType::Int, 0x00015103, uint(-1), 0,
      32, QMetaType::QSize, 0x00015103, uint(-1), 0,
      33, QMetaType::QString, 0x00015103, uint(-1), 0,
      34, QMetaType::Bool, 0x00015103, uint(-1), 0,
      35, QMetaType::Bool, 0x00015103, uint(-1), 0,
      36, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      28,   28, 0x0,    7,  214,
      30,   30, 0x0,    3,  228,

 // enum data: key, value
      37, uint(QComboBox::NoInsert),
      38, uint(QComboBox::InsertAtTop),
      39, uint(QComboBox::InsertAtCurrent),
      40, uint(QComboBox::InsertAtBottom),
      41, uint(QComboBox::InsertAfterCurrent),
      42, uint(QComboBox::InsertBeforeCurrent),
      43, uint(QComboBox::InsertAlphabetically),
      44, uint(QComboBox::AdjustToContents),
      45, uint(QComboBox::AdjustToContentsOnFirstShow),
      46, uint(QComboBox::AdjustToMinimumContentsLengthWithIcon),

       0        // eod
};

Q_CONSTINIT const QMetaObject QComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQComboBoxENDCLASS_t,
        // property 'editable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentData'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'maxVisibleItems'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'insertPolicy'
        QtPrivate::TypeAndForceComplete<InsertPolicy, std::true_type>,
        // property 'sizeAdjustPolicy'
        QtPrivate::TypeAndForceComplete<SizeAdjustPolicy, std::true_type>,
        // property 'minimumContentsLength'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'duplicatesEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'frame'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'modelColumn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'InsertPolicy'
        QtPrivate::TypeAndForceComplete<QComboBox::InsertPolicy, std::true_type>,
        // enum 'SizeAdjustPolicy'
        QtPrivate::TypeAndForceComplete<QComboBox::SizeAdjustPolicy, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QComboBox, std::true_type>,
        // method 'editTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'highlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textHighlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearEditText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setEditText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void QComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->textHighlighted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->clear(); break;
        case 8: _t->clearEditText(); break;
        case 9: _t->setEditText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setCurrentText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QComboBox::*)(const QString & );
            if (_t _q_method = &QComboBox::editTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (_t _q_method = &QComboBox::activated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (_t _q_method = &QComboBox::textActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (_t _q_method = &QComboBox::highlighted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (_t _q_method = &QComboBox::textHighlighted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (_t _q_method = &QComboBox::currentIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (_t _q_method = &QComboBox::currentTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->currentText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->currentData(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->maxVisibleItems(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->maxCount(); break;
        case 7: *reinterpret_cast< InsertPolicy*>(_v) = _t->insertPolicy(); break;
        case 8: *reinterpret_cast< SizeAdjustPolicy*>(_v) = _t->sizeAdjustPolicy(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->minimumContentsLength(); break;
        case 10: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->duplicatesEnabled(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->hasFrame(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->modelColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEditable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCurrentText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMaxVisibleItems(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMaxCount(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setInsertPolicy(*reinterpret_cast< InsertPolicy*>(_v)); break;
        case 8: _t->setSizeAdjustPolicy(*reinterpret_cast< SizeAdjustPolicy*>(_v)); break;
        case 9: _t->setMinimumContentsLength(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 11: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setDuplicatesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setModelColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QComboBox::editTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QComboBox::activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QComboBox::textActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QComboBox::highlighted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QComboBox::textHighlighted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QComboBox::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QComboBox::currentTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
