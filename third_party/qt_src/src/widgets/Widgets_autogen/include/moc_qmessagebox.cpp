/****************************************************************************
** Meta object code from reading C++ file 'qmessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qmessagebox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmessagebox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMessageBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQMessageBoxENDCLASS = QtMocHelpers::stringData(
    "QMessageBox",
    "buttonClicked",
    "",
    "QAbstractButton*",
    "button",
    "_q_buttonClicked",
    "_q_helperClicked",
    "QPlatformDialogHelper::StandardButton",
    "QPlatformDialogHelper::ButtonRole",
    "text",
    "icon",
    "Icon",
    "iconPixmap",
    "textFormat",
    "Qt::TextFormat",
    "standardButtons",
    "StandardButtons",
    "detailedText",
    "informativeText",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "options",
    "Options",
    "Option",
    "DontUseNativeDialog",
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question",
    "StandardButton",
    "NoButton",
    "Ok",
    "Save",
    "SaveAll",
    "Open",
    "Yes",
    "YesToAll",
    "No",
    "NoToAll",
    "Abort",
    "Retry",
    "Ignore",
    "Close",
    "Cancel",
    "Discard",
    "Help",
    "Apply",
    "Reset",
    "RestoreDefaults",
    "FirstButton",
    "LastButton",
    "YesAll",
    "NoAll",
    "Default",
    "Escape",
    "FlagMask",
    "ButtonMask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMessageBoxENDCLASS_t {
    uint offsetsAndSizes[116];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[17];
    char stringdata6[17];
    char stringdata7[38];
    char stringdata8[34];
    char stringdata9[5];
    char stringdata10[5];
    char stringdata11[5];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[15];
    char stringdata15[16];
    char stringdata16[16];
    char stringdata17[13];
    char stringdata18[16];
    char stringdata19[21];
    char stringdata20[25];
    char stringdata21[8];
    char stringdata22[8];
    char stringdata23[7];
    char stringdata24[20];
    char stringdata25[7];
    char stringdata26[12];
    char stringdata27[8];
    char stringdata28[9];
    char stringdata29[9];
    char stringdata30[15];
    char stringdata31[9];
    char stringdata32[3];
    char stringdata33[5];
    char stringdata34[8];
    char stringdata35[5];
    char stringdata36[4];
    char stringdata37[9];
    char stringdata38[3];
    char stringdata39[8];
    char stringdata40[6];
    char stringdata41[6];
    char stringdata42[7];
    char stringdata43[6];
    char stringdata44[7];
    char stringdata45[8];
    char stringdata46[5];
    char stringdata47[6];
    char stringdata48[6];
    char stringdata49[16];
    char stringdata50[12];
    char stringdata51[11];
    char stringdata52[7];
    char stringdata53[6];
    char stringdata54[8];
    char stringdata55[7];
    char stringdata56[9];
    char stringdata57[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMessageBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMessageBoxENDCLASS_t qt_meta_stringdata_CLASSQMessageBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QMessageBox"
        QT_MOC_LITERAL(12, 13),  // "buttonClicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(44, 6),  // "button"
        QT_MOC_LITERAL(51, 16),  // "_q_buttonClicked"
        QT_MOC_LITERAL(68, 16),  // "_q_helperClicked"
        QT_MOC_LITERAL(85, 37),  // "QPlatformDialogHelper::Standa..."
        QT_MOC_LITERAL(123, 33),  // "QPlatformDialogHelper::Button..."
        QT_MOC_LITERAL(157, 4),  // "text"
        QT_MOC_LITERAL(162, 4),  // "icon"
        QT_MOC_LITERAL(167, 4),  // "Icon"
        QT_MOC_LITERAL(172, 10),  // "iconPixmap"
        QT_MOC_LITERAL(183, 10),  // "textFormat"
        QT_MOC_LITERAL(194, 14),  // "Qt::TextFormat"
        QT_MOC_LITERAL(209, 15),  // "standardButtons"
        QT_MOC_LITERAL(225, 15),  // "StandardButtons"
        QT_MOC_LITERAL(241, 12),  // "detailedText"
        QT_MOC_LITERAL(254, 15),  // "informativeText"
        QT_MOC_LITERAL(270, 20),  // "textInteractionFlags"
        QT_MOC_LITERAL(291, 24),  // "Qt::TextInteractionFlags"
        QT_MOC_LITERAL(316, 7),  // "options"
        QT_MOC_LITERAL(324, 7),  // "Options"
        QT_MOC_LITERAL(332, 6),  // "Option"
        QT_MOC_LITERAL(339, 19),  // "DontUseNativeDialog"
        QT_MOC_LITERAL(359, 6),  // "NoIcon"
        QT_MOC_LITERAL(366, 11),  // "Information"
        QT_MOC_LITERAL(378, 7),  // "Warning"
        QT_MOC_LITERAL(386, 8),  // "Critical"
        QT_MOC_LITERAL(395, 8),  // "Question"
        QT_MOC_LITERAL(404, 14),  // "StandardButton"
        QT_MOC_LITERAL(419, 8),  // "NoButton"
        QT_MOC_LITERAL(428, 2),  // "Ok"
        QT_MOC_LITERAL(431, 4),  // "Save"
        QT_MOC_LITERAL(436, 7),  // "SaveAll"
        QT_MOC_LITERAL(444, 4),  // "Open"
        QT_MOC_LITERAL(449, 3),  // "Yes"
        QT_MOC_LITERAL(453, 8),  // "YesToAll"
        QT_MOC_LITERAL(462, 2),  // "No"
        QT_MOC_LITERAL(465, 7),  // "NoToAll"
        QT_MOC_LITERAL(473, 5),  // "Abort"
        QT_MOC_LITERAL(479, 5),  // "Retry"
        QT_MOC_LITERAL(485, 6),  // "Ignore"
        QT_MOC_LITERAL(492, 5),  // "Close"
        QT_MOC_LITERAL(498, 6),  // "Cancel"
        QT_MOC_LITERAL(505, 7),  // "Discard"
        QT_MOC_LITERAL(513, 4),  // "Help"
        QT_MOC_LITERAL(518, 5),  // "Apply"
        QT_MOC_LITERAL(524, 5),  // "Reset"
        QT_MOC_LITERAL(530, 15),  // "RestoreDefaults"
        QT_MOC_LITERAL(546, 11),  // "FirstButton"
        QT_MOC_LITERAL(558, 10),  // "LastButton"
        QT_MOC_LITERAL(569, 6),  // "YesAll"
        QT_MOC_LITERAL(576, 5),  // "NoAll"
        QT_MOC_LITERAL(582, 7),  // "Default"
        QT_MOC_LITERAL(590, 6),  // "Escape"
        QT_MOC_LITERAL(597, 8),  // "FlagMask"
        QT_MOC_LITERAL(606, 10)   // "ButtonMask"
    },
    "QMessageBox",
    "buttonClicked",
    "",
    "QAbstractButton*",
    "button",
    "_q_buttonClicked",
    "_q_helperClicked",
    "QPlatformDialogHelper::StandardButton",
    "QPlatformDialogHelper::ButtonRole",
    "text",
    "icon",
    "Icon",
    "iconPixmap",
    "textFormat",
    "Qt::TextFormat",
    "standardButtons",
    "StandardButtons",
    "detailedText",
    "informativeText",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "options",
    "Options",
    "Option",
    "DontUseNativeDialog",
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question",
    "StandardButton",
    "NoButton",
    "Ok",
    "Save",
    "SaveAll",
    "Open",
    "Yes",
    "YesToAll",
    "No",
    "NoToAll",
    "Abort",
    "Retry",
    "Ignore",
    "Close",
    "Cancel",
    "Discard",
    "Help",
    "Apply",
    "Reset",
    "RestoreDefaults",
    "FirstButton",
    "LastButton",
    "YesAll",
    "NoAll",
    "Default",
    "Escape",
    "FlagMask",
    "ButtonMask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMessageBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   43, // properties
       3,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   35,    2, 0x08,   15 /* Private */,
       6,    2,   38,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 8,    2,    2,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00015103, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      12, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
      13, 0x80000000 | 14, 0x0001510b, uint(-1), 0,
      15, 0x80000000 | 16, 0x0001510b, uint(-1), 0,
      17, QMetaType::QString, 0x00015103, uint(-1), 0,
      18, QMetaType::QString, 0x00015103, uint(-1), 0,
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      23,   23, 0x3,    1,  103,
      11,   11, 0x0,    5,  105,
      16,   30, 0x1,   27,  115,

 // enum data: key, value
      24, uint(QMessageBox::Option::DontUseNativeDialog),
      25, uint(QMessageBox::NoIcon),
      26, uint(QMessageBox::Information),
      27, uint(QMessageBox::Warning),
      28, uint(QMessageBox::Critical),
      29, uint(QMessageBox::Question),
      31, uint(QMessageBox::NoButton),
      32, uint(QMessageBox::Ok),
      33, uint(QMessageBox::Save),
      34, uint(QMessageBox::SaveAll),
      35, uint(QMessageBox::Open),
      36, uint(QMessageBox::Yes),
      37, uint(QMessageBox::YesToAll),
      38, uint(QMessageBox::No),
      39, uint(QMessageBox::NoToAll),
      40, uint(QMessageBox::Abort),
      41, uint(QMessageBox::Retry),
      42, uint(QMessageBox::Ignore),
      43, uint(QMessageBox::Close),
      44, uint(QMessageBox::Cancel),
      45, uint(QMessageBox::Discard),
      46, uint(QMessageBox::Help),
      47, uint(QMessageBox::Apply),
      48, uint(QMessageBox::Reset),
      49, uint(QMessageBox::RestoreDefaults),
      50, uint(QMessageBox::FirstButton),
      51, uint(QMessageBox::LastButton),
      52, uint(QMessageBox::YesAll),
      53, uint(QMessageBox::NoAll),
      54, uint(QMessageBox::Default),
      55, uint(QMessageBox::Escape),
      56, uint(QMessageBox::FlagMask),
      57, uint(QMessageBox::ButtonMask),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMessageBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMessageBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMessageBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMessageBoxENDCLASS_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<Icon, std::true_type>,
        // property 'iconPixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'textFormat'
        QtPrivate::TypeAndForceComplete<Qt::TextFormat, std::true_type>,
        // property 'standardButtons'
        QtPrivate::TypeAndForceComplete<StandardButtons, std::true_type>,
        // property 'detailedText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'informativeText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'options'
        QtPrivate::TypeAndForceComplete<Options, std::true_type>,
        // enum 'Option'
        QtPrivate::TypeAndForceComplete<QMessageBox::Option, std::true_type>,
        // enum 'Icon'
        QtPrivate::TypeAndForceComplete<QMessageBox::Icon, std::true_type>,
        // enum 'StandardButtons'
        QtPrivate::TypeAndForceComplete<QMessageBox::StandardButtons, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMessageBox, std::true_type>,
        // method 'buttonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method '_q_buttonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method '_q_helperClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::StandardButton, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformDialogHelper::ButtonRole, std::false_type>
    >,
    nullptr
} };

void QMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMessageBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->d_func()->_q_buttonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 2: _t->d_func()->_q_helperClicked((*reinterpret_cast< std::add_pointer_t<QPlatformDialogHelper::StandardButton>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlatformDialogHelper::ButtonRole>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMessageBox::*)(QAbstractButton * );
            if (_t _q_method = &QMessageBox::buttonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMessageBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< Icon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< QPixmap*>(_v) = _t->iconPixmap(); break;
        case 3: *reinterpret_cast< Qt::TextFormat*>(_v) = _t->textFormat(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->detailedText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->informativeText(); break;
        case 7: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 8: *reinterpret_cast< Options*>(_v) = _t->options(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMessageBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< Icon*>(_v)); break;
        case 2: _t->setIconPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: _t->setTextFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 4: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: _t->setDetailedText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setInformativeText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 8: _t->setOptions(*reinterpret_cast< Options*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMessageBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QMessageBox::buttonClicked(QAbstractButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
