/****************************************************************************
** Meta object code from reading C++ file 'qaction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qaction.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaction.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQActionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQActionENDCLASS = QtMocHelpers::stringData(
    "QAction",
    "changed",
    "",
    "enabledChanged",
    "enabled",
    "checkableChanged",
    "checkable",
    "visibleChanged",
    "triggered",
    "checked",
    "hovered",
    "toggled",
    "trigger",
    "hover",
    "setChecked",
    "toggle",
    "setEnabled",
    "resetEnabled",
    "setDisabled",
    "b",
    "setVisible",
    "icon",
    "text",
    "iconText",
    "toolTip",
    "statusTip",
    "whatsThis",
    "font",
    "shortcut",
    "QKeySequence",
    "shortcutContext",
    "Qt::ShortcutContext",
    "autoRepeat",
    "visible",
    "menuRole",
    "MenuRole",
    "iconVisibleInMenu",
    "shortcutVisibleInContextMenu",
    "priority",
    "Priority",
    "NoRole",
    "TextHeuristicRole",
    "ApplicationSpecificRole",
    "AboutQtRole",
    "AboutRole",
    "PreferencesRole",
    "QuitRole",
    "LowPriority",
    "NormalPriority",
    "HighPriority"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQActionENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[8];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[8];
    char stringdata5[17];
    char stringdata6[10];
    char stringdata7[15];
    char stringdata8[10];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[8];
    char stringdata13[6];
    char stringdata14[11];
    char stringdata15[7];
    char stringdata16[11];
    char stringdata17[13];
    char stringdata18[12];
    char stringdata19[2];
    char stringdata20[11];
    char stringdata21[5];
    char stringdata22[5];
    char stringdata23[9];
    char stringdata24[8];
    char stringdata25[10];
    char stringdata26[10];
    char stringdata27[5];
    char stringdata28[9];
    char stringdata29[13];
    char stringdata30[16];
    char stringdata31[20];
    char stringdata32[11];
    char stringdata33[8];
    char stringdata34[9];
    char stringdata35[9];
    char stringdata36[18];
    char stringdata37[29];
    char stringdata38[9];
    char stringdata39[9];
    char stringdata40[7];
    char stringdata41[18];
    char stringdata42[24];
    char stringdata43[12];
    char stringdata44[10];
    char stringdata45[16];
    char stringdata46[9];
    char stringdata47[12];
    char stringdata48[15];
    char stringdata49[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQActionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQActionENDCLASS_t qt_meta_stringdata_CLASSQActionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QAction"
        QT_MOC_LITERAL(8, 7),  // "changed"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 14),  // "enabledChanged"
        QT_MOC_LITERAL(32, 7),  // "enabled"
        QT_MOC_LITERAL(40, 16),  // "checkableChanged"
        QT_MOC_LITERAL(57, 9),  // "checkable"
        QT_MOC_LITERAL(67, 14),  // "visibleChanged"
        QT_MOC_LITERAL(82, 9),  // "triggered"
        QT_MOC_LITERAL(92, 7),  // "checked"
        QT_MOC_LITERAL(100, 7),  // "hovered"
        QT_MOC_LITERAL(108, 7),  // "toggled"
        QT_MOC_LITERAL(116, 7),  // "trigger"
        QT_MOC_LITERAL(124, 5),  // "hover"
        QT_MOC_LITERAL(130, 10),  // "setChecked"
        QT_MOC_LITERAL(141, 6),  // "toggle"
        QT_MOC_LITERAL(148, 10),  // "setEnabled"
        QT_MOC_LITERAL(159, 12),  // "resetEnabled"
        QT_MOC_LITERAL(172, 11),  // "setDisabled"
        QT_MOC_LITERAL(184, 1),  // "b"
        QT_MOC_LITERAL(186, 10),  // "setVisible"
        QT_MOC_LITERAL(197, 4),  // "icon"
        QT_MOC_LITERAL(202, 4),  // "text"
        QT_MOC_LITERAL(207, 8),  // "iconText"
        QT_MOC_LITERAL(216, 7),  // "toolTip"
        QT_MOC_LITERAL(224, 9),  // "statusTip"
        QT_MOC_LITERAL(234, 9),  // "whatsThis"
        QT_MOC_LITERAL(244, 4),  // "font"
        QT_MOC_LITERAL(249, 8),  // "shortcut"
        QT_MOC_LITERAL(258, 12),  // "QKeySequence"
        QT_MOC_LITERAL(271, 15),  // "shortcutContext"
        QT_MOC_LITERAL(287, 19),  // "Qt::ShortcutContext"
        QT_MOC_LITERAL(307, 10),  // "autoRepeat"
        QT_MOC_LITERAL(318, 7),  // "visible"
        QT_MOC_LITERAL(326, 8),  // "menuRole"
        QT_MOC_LITERAL(335, 8),  // "MenuRole"
        QT_MOC_LITERAL(344, 17),  // "iconVisibleInMenu"
        QT_MOC_LITERAL(362, 28),  // "shortcutVisibleInContextMenu"
        QT_MOC_LITERAL(391, 8),  // "priority"
        QT_MOC_LITERAL(400, 8),  // "Priority"
        QT_MOC_LITERAL(409, 6),  // "NoRole"
        QT_MOC_LITERAL(416, 17),  // "TextHeuristicRole"
        QT_MOC_LITERAL(434, 23),  // "ApplicationSpecificRole"
        QT_MOC_LITERAL(458, 11),  // "AboutQtRole"
        QT_MOC_LITERAL(470, 9),  // "AboutRole"
        QT_MOC_LITERAL(480, 15),  // "PreferencesRole"
        QT_MOC_LITERAL(496, 8),  // "QuitRole"
        QT_MOC_LITERAL(505, 11),  // "LowPriority"
        QT_MOC_LITERAL(517, 14),  // "NormalPriority"
        QT_MOC_LITERAL(532, 12)   // "HighPriority"
    },
    "QAction",
    "changed",
    "",
    "enabledChanged",
    "enabled",
    "checkableChanged",
    "checkable",
    "visibleChanged",
    "triggered",
    "checked",
    "hovered",
    "toggled",
    "trigger",
    "hover",
    "setChecked",
    "toggle",
    "setEnabled",
    "resetEnabled",
    "setDisabled",
    "b",
    "setVisible",
    "icon",
    "text",
    "iconText",
    "toolTip",
    "statusTip",
    "whatsThis",
    "font",
    "shortcut",
    "QKeySequence",
    "shortcutContext",
    "Qt::ShortcutContext",
    "autoRepeat",
    "visible",
    "menuRole",
    "MenuRole",
    "iconVisibleInMenu",
    "shortcutVisibleInContextMenu",
    "priority",
    "Priority",
    "NoRole",
    "TextHeuristicRole",
    "ApplicationSpecificRole",
    "AboutQtRole",
    "AboutRole",
    "PreferencesRole",
    "QuitRole",
    "LowPriority",
    "NormalPriority",
    "HighPriority"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQActionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      18,  142, // properties
       2,  232, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,   21 /* Public */,
       3,    1,  111,    2, 0x06,   22 /* Public */,
       5,    1,  114,    2, 0x06,   24 /* Public */,
       7,    0,  117,    2, 0x06,   26 /* Public */,
       8,    1,  118,    2, 0x06,   27 /* Public */,
       8,    0,  121,    2, 0x26,   29 /* Public | MethodCloned */,
      10,    0,  122,    2, 0x06,   30 /* Public */,
      11,    1,  123,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  126,    2, 0x0a,   33 /* Public */,
      13,    0,  127,    2, 0x0a,   34 /* Public */,
      14,    1,  128,    2, 0x0a,   35 /* Public */,
      15,    0,  131,    2, 0x0a,   37 /* Public */,
      16,    1,  132,    2, 0x0a,   38 /* Public */,
      17,    0,  135,    2, 0x0a,   40 /* Public */,
      18,    1,  136,    2, 0x0a,   41 /* Public */,
      20,    1,  139,    2, 0x0a,   43 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00015903, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(7), 0,
       4, QMetaType::Bool, 0x00015907, uint(1), 0,
      21, QMetaType::QIcon, 0x00015103, uint(0), 0,
      22, QMetaType::QString, 0x00015103, uint(0), 0,
      23, QMetaType::QString, 0x00015103, uint(0), 0,
      24, QMetaType::QString, 0x00015103, uint(0), 0,
      25, QMetaType::QString, 0x00015103, uint(0), 0,
      26, QMetaType::QString, 0x00015103, uint(0), 0,
      27, QMetaType::QFont, 0x00015103, uint(0), 0,
      28, 0x80000000 | 29, 0x0001510b, uint(0), 0,
      30, 0x80000000 | 31, 0x0001510b, uint(0), 0,
      32, QMetaType::Bool, 0x00015103, uint(0), 0,
      33, QMetaType::Bool, 0x00015903, uint(3), 0,
      34, 0x80000000 | 35, 0x0001510b, uint(0), 0,
      36, QMetaType::Bool, 0x00015103, uint(0), 0,
      37, QMetaType::Bool, 0x00015103, uint(0), 0,
      38, 0x80000000 | 39, 0x0001510b, uint(0), 0,

 // enums: name, alias, flags, count, data
      35,   35, 0x0,    7,  242,
      39,   39, 0x0,    3,  256,

 // enum data: key, value
      40, uint(QAction::NoRole),
      41, uint(QAction::TextHeuristicRole),
      42, uint(QAction::ApplicationSpecificRole),
      43, uint(QAction::AboutQtRole),
      44, uint(QAction::AboutRole),
      45, uint(QAction::PreferencesRole),
      46, uint(QAction::QuitRole),
      47, uint(QAction::LowPriority),
      48, uint(QAction::NormalPriority),
      49, uint(QAction::HighPriority),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQActionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQActionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQActionENDCLASS_t,
        // property 'checkable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'toolTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'whatsThis'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'shortcut'
        QtPrivate::TypeAndForceComplete<QKeySequence, std::true_type>,
        // property 'shortcutContext'
        QtPrivate::TypeAndForceComplete<Qt::ShortcutContext, std::true_type>,
        // property 'autoRepeat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'menuRole'
        QtPrivate::TypeAndForceComplete<MenuRole, std::true_type>,
        // property 'iconVisibleInMenu'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'shortcutVisibleInContextMenu'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'priority'
        QtPrivate::TypeAndForceComplete<Priority, std::true_type>,
        // enum 'MenuRole'
        QtPrivate::TypeAndForceComplete<QAction::MenuRole, std::true_type>,
        // enum 'Priority'
        QtPrivate::TypeAndForceComplete<QAction::Priority, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAction, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'checkableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resetEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->enabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->checkableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->triggered(); break;
        case 6: _t->hovered(); break;
        case 7: _t->toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->trigger(); break;
        case 9: _t->hover(); break;
        case 10: _t->setChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->toggle(); break;
        case 12: _t->setEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->resetEnabled(); break;
        case 14: _t->setDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAction::*)();
            if (_t _q_method = &QAction::changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAction::*)(bool );
            if (_t _q_method = &QAction::enabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAction::*)(bool );
            if (_t _q_method = &QAction::checkableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAction::*)();
            if (_t _q_method = &QAction::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAction::*)(bool );
            if (_t _q_method = &QAction::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAction::*)();
            if (_t _q_method = &QAction::hovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QAction::*)(bool );
            if (_t _q_method = &QAction::toggled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isCheckable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isChecked(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->iconText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->toolTip(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->statusTip(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->whatsThis(); break;
        case 9: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 10: *reinterpret_cast< QKeySequence*>(_v) = _t->shortcut(); break;
        case 11: *reinterpret_cast< Qt::ShortcutContext*>(_v) = _t->shortcutContext(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->autoRepeat(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 14: *reinterpret_cast< MenuRole*>(_v) = _t->menuRole(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isIconVisibleInMenu(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isShortcutVisibleInContextMenu(); break;
        case 17: *reinterpret_cast< Priority*>(_v) = _t->priority(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setIconText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setStatusTip(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setWhatsThis(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 10: _t->setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 11: _t->setShortcutContext(*reinterpret_cast< Qt::ShortcutContext*>(_v)); break;
        case 12: _t->setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setMenuRole(*reinterpret_cast< MenuRole*>(_v)); break;
        case 15: _t->setIconVisibleInMenu(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setShortcutVisibleInContextMenu(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setPriority(*reinterpret_cast< Priority*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QAction *>(_o);
        (void)_t;
        switch (_id) {
        case 2: _t->resetEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQActionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QAction::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAction::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAction::checkableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAction::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QAction::triggered(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void QAction::hovered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QAction::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
