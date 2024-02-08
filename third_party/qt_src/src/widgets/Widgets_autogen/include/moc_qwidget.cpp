/****************************************************************************
** Meta object code from reading C++ file 'qwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQWidgetENDCLASS = QtMocHelpers::stringData(
    "QWidget",
    "windowTitleChanged",
    "",
    "title",
    "windowIconChanged",
    "icon",
    "windowIconTextChanged",
    "iconText",
    "customContextMenuRequested",
    "pos",
    "setEnabled",
    "setDisabled",
    "setWindowModified",
    "setWindowTitle",
    "setStyleSheet",
    "styleSheet",
    "setFocus",
    "update",
    "repaint",
    "setVisible",
    "visible",
    "setHidden",
    "hidden",
    "show",
    "hide",
    "showMinimized",
    "showMaximized",
    "showFullScreen",
    "showNormal",
    "close",
    "raise",
    "lower",
    "updateMicroFocus",
    "Qt::InputMethodQuery",
    "query",
    "_q_showIfNotHidden",
    "_q_closestWindowHandle",
    "QWindow*",
    "grab",
    "rectangle",
    "modal",
    "windowModality",
    "Qt::WindowModality",
    "enabled",
    "geometry",
    "frameGeometry",
    "normalGeometry",
    "x",
    "y",
    "frameSize",
    "size",
    "width",
    "height",
    "rect",
    "childrenRect",
    "childrenRegion",
    "sizePolicy",
    "minimumSize",
    "maximumSize",
    "minimumWidth",
    "minimumHeight",
    "maximumWidth",
    "maximumHeight",
    "sizeIncrement",
    "baseSize",
    "palette",
    "font",
    "cursor",
    "mouseTracking",
    "tabletTracking",
    "isActiveWindow",
    "focusPolicy",
    "Qt::FocusPolicy",
    "focus",
    "contextMenuPolicy",
    "Qt::ContextMenuPolicy",
    "updatesEnabled",
    "minimized",
    "maximized",
    "fullScreen",
    "sizeHint",
    "minimumSizeHint",
    "acceptDrops",
    "windowTitle",
    "windowIcon",
    "windowIconText",
    "windowOpacity",
    "windowModified",
    "toolTip",
    "toolTipDuration",
    "statusTip",
    "accessibleName",
    "accessibleDescription",
    "layoutDirection",
    "Qt::LayoutDirection",
    "autoFillBackground",
    "locale",
    "windowFilePath",
    "inputMethodHints",
    "Qt::InputMethodHints"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQWidgetENDCLASS_t {
    uint offsetsAndSizes[200];
    char stringdata0[8];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[5];
    char stringdata6[22];
    char stringdata7[9];
    char stringdata8[27];
    char stringdata9[4];
    char stringdata10[11];
    char stringdata11[12];
    char stringdata12[18];
    char stringdata13[15];
    char stringdata14[14];
    char stringdata15[11];
    char stringdata16[9];
    char stringdata17[7];
    char stringdata18[8];
    char stringdata19[11];
    char stringdata20[8];
    char stringdata21[10];
    char stringdata22[7];
    char stringdata23[5];
    char stringdata24[5];
    char stringdata25[14];
    char stringdata26[14];
    char stringdata27[15];
    char stringdata28[11];
    char stringdata29[6];
    char stringdata30[6];
    char stringdata31[6];
    char stringdata32[17];
    char stringdata33[21];
    char stringdata34[6];
    char stringdata35[19];
    char stringdata36[23];
    char stringdata37[9];
    char stringdata38[5];
    char stringdata39[10];
    char stringdata40[6];
    char stringdata41[15];
    char stringdata42[19];
    char stringdata43[8];
    char stringdata44[9];
    char stringdata45[14];
    char stringdata46[15];
    char stringdata47[2];
    char stringdata48[2];
    char stringdata49[10];
    char stringdata50[5];
    char stringdata51[6];
    char stringdata52[7];
    char stringdata53[5];
    char stringdata54[13];
    char stringdata55[15];
    char stringdata56[11];
    char stringdata57[12];
    char stringdata58[12];
    char stringdata59[13];
    char stringdata60[14];
    char stringdata61[13];
    char stringdata62[14];
    char stringdata63[14];
    char stringdata64[9];
    char stringdata65[8];
    char stringdata66[5];
    char stringdata67[7];
    char stringdata68[14];
    char stringdata69[15];
    char stringdata70[15];
    char stringdata71[12];
    char stringdata72[16];
    char stringdata73[6];
    char stringdata74[18];
    char stringdata75[22];
    char stringdata76[15];
    char stringdata77[10];
    char stringdata78[10];
    char stringdata79[11];
    char stringdata80[9];
    char stringdata81[16];
    char stringdata82[12];
    char stringdata83[12];
    char stringdata84[11];
    char stringdata85[15];
    char stringdata86[14];
    char stringdata87[15];
    char stringdata88[8];
    char stringdata89[16];
    char stringdata90[10];
    char stringdata91[15];
    char stringdata92[22];
    char stringdata93[16];
    char stringdata94[20];
    char stringdata95[19];
    char stringdata96[7];
    char stringdata97[15];
    char stringdata98[17];
    char stringdata99[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQWidgetENDCLASS_t qt_meta_stringdata_CLASSQWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QWidget"
        QT_MOC_LITERAL(8, 18),  // "windowTitleChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "title"
        QT_MOC_LITERAL(34, 17),  // "windowIconChanged"
        QT_MOC_LITERAL(52, 4),  // "icon"
        QT_MOC_LITERAL(57, 21),  // "windowIconTextChanged"
        QT_MOC_LITERAL(79, 8),  // "iconText"
        QT_MOC_LITERAL(88, 26),  // "customContextMenuRequested"
        QT_MOC_LITERAL(115, 3),  // "pos"
        QT_MOC_LITERAL(119, 10),  // "setEnabled"
        QT_MOC_LITERAL(130, 11),  // "setDisabled"
        QT_MOC_LITERAL(142, 17),  // "setWindowModified"
        QT_MOC_LITERAL(160, 14),  // "setWindowTitle"
        QT_MOC_LITERAL(175, 13),  // "setStyleSheet"
        QT_MOC_LITERAL(189, 10),  // "styleSheet"
        QT_MOC_LITERAL(200, 8),  // "setFocus"
        QT_MOC_LITERAL(209, 6),  // "update"
        QT_MOC_LITERAL(216, 7),  // "repaint"
        QT_MOC_LITERAL(224, 10),  // "setVisible"
        QT_MOC_LITERAL(235, 7),  // "visible"
        QT_MOC_LITERAL(243, 9),  // "setHidden"
        QT_MOC_LITERAL(253, 6),  // "hidden"
        QT_MOC_LITERAL(260, 4),  // "show"
        QT_MOC_LITERAL(265, 4),  // "hide"
        QT_MOC_LITERAL(270, 13),  // "showMinimized"
        QT_MOC_LITERAL(284, 13),  // "showMaximized"
        QT_MOC_LITERAL(298, 14),  // "showFullScreen"
        QT_MOC_LITERAL(313, 10),  // "showNormal"
        QT_MOC_LITERAL(324, 5),  // "close"
        QT_MOC_LITERAL(330, 5),  // "raise"
        QT_MOC_LITERAL(336, 5),  // "lower"
        QT_MOC_LITERAL(342, 16),  // "updateMicroFocus"
        QT_MOC_LITERAL(359, 20),  // "Qt::InputMethodQuery"
        QT_MOC_LITERAL(380, 5),  // "query"
        QT_MOC_LITERAL(386, 18),  // "_q_showIfNotHidden"
        QT_MOC_LITERAL(405, 22),  // "_q_closestWindowHandle"
        QT_MOC_LITERAL(428, 8),  // "QWindow*"
        QT_MOC_LITERAL(437, 4),  // "grab"
        QT_MOC_LITERAL(442, 9),  // "rectangle"
        QT_MOC_LITERAL(452, 5),  // "modal"
        QT_MOC_LITERAL(458, 14),  // "windowModality"
        QT_MOC_LITERAL(473, 18),  // "Qt::WindowModality"
        QT_MOC_LITERAL(492, 7),  // "enabled"
        QT_MOC_LITERAL(500, 8),  // "geometry"
        QT_MOC_LITERAL(509, 13),  // "frameGeometry"
        QT_MOC_LITERAL(523, 14),  // "normalGeometry"
        QT_MOC_LITERAL(538, 1),  // "x"
        QT_MOC_LITERAL(540, 1),  // "y"
        QT_MOC_LITERAL(542, 9),  // "frameSize"
        QT_MOC_LITERAL(552, 4),  // "size"
        QT_MOC_LITERAL(557, 5),  // "width"
        QT_MOC_LITERAL(563, 6),  // "height"
        QT_MOC_LITERAL(570, 4),  // "rect"
        QT_MOC_LITERAL(575, 12),  // "childrenRect"
        QT_MOC_LITERAL(588, 14),  // "childrenRegion"
        QT_MOC_LITERAL(603, 10),  // "sizePolicy"
        QT_MOC_LITERAL(614, 11),  // "minimumSize"
        QT_MOC_LITERAL(626, 11),  // "maximumSize"
        QT_MOC_LITERAL(638, 12),  // "minimumWidth"
        QT_MOC_LITERAL(651, 13),  // "minimumHeight"
        QT_MOC_LITERAL(665, 12),  // "maximumWidth"
        QT_MOC_LITERAL(678, 13),  // "maximumHeight"
        QT_MOC_LITERAL(692, 13),  // "sizeIncrement"
        QT_MOC_LITERAL(706, 8),  // "baseSize"
        QT_MOC_LITERAL(715, 7),  // "palette"
        QT_MOC_LITERAL(723, 4),  // "font"
        QT_MOC_LITERAL(728, 6),  // "cursor"
        QT_MOC_LITERAL(735, 13),  // "mouseTracking"
        QT_MOC_LITERAL(749, 14),  // "tabletTracking"
        QT_MOC_LITERAL(764, 14),  // "isActiveWindow"
        QT_MOC_LITERAL(779, 11),  // "focusPolicy"
        QT_MOC_LITERAL(791, 15),  // "Qt::FocusPolicy"
        QT_MOC_LITERAL(807, 5),  // "focus"
        QT_MOC_LITERAL(813, 17),  // "contextMenuPolicy"
        QT_MOC_LITERAL(831, 21),  // "Qt::ContextMenuPolicy"
        QT_MOC_LITERAL(853, 14),  // "updatesEnabled"
        QT_MOC_LITERAL(868, 9),  // "minimized"
        QT_MOC_LITERAL(878, 9),  // "maximized"
        QT_MOC_LITERAL(888, 10),  // "fullScreen"
        QT_MOC_LITERAL(899, 8),  // "sizeHint"
        QT_MOC_LITERAL(908, 15),  // "minimumSizeHint"
        QT_MOC_LITERAL(924, 11),  // "acceptDrops"
        QT_MOC_LITERAL(936, 11),  // "windowTitle"
        QT_MOC_LITERAL(948, 10),  // "windowIcon"
        QT_MOC_LITERAL(959, 14),  // "windowIconText"
        QT_MOC_LITERAL(974, 13),  // "windowOpacity"
        QT_MOC_LITERAL(988, 14),  // "windowModified"
        QT_MOC_LITERAL(1003, 7),  // "toolTip"
        QT_MOC_LITERAL(1011, 15),  // "toolTipDuration"
        QT_MOC_LITERAL(1027, 9),  // "statusTip"
        QT_MOC_LITERAL(1037, 14),  // "accessibleName"
        QT_MOC_LITERAL(1052, 21),  // "accessibleDescription"
        QT_MOC_LITERAL(1074, 15),  // "layoutDirection"
        QT_MOC_LITERAL(1090, 19),  // "Qt::LayoutDirection"
        QT_MOC_LITERAL(1110, 18),  // "autoFillBackground"
        QT_MOC_LITERAL(1129, 6),  // "locale"
        QT_MOC_LITERAL(1136, 14),  // "windowFilePath"
        QT_MOC_LITERAL(1151, 16),  // "inputMethodHints"
        QT_MOC_LITERAL(1168, 20)   // "Qt::InputMethodHints"
    },
    "QWidget",
    "windowTitleChanged",
    "",
    "title",
    "windowIconChanged",
    "icon",
    "windowIconTextChanged",
    "iconText",
    "customContextMenuRequested",
    "pos",
    "setEnabled",
    "setDisabled",
    "setWindowModified",
    "setWindowTitle",
    "setStyleSheet",
    "styleSheet",
    "setFocus",
    "update",
    "repaint",
    "setVisible",
    "visible",
    "setHidden",
    "hidden",
    "show",
    "hide",
    "showMinimized",
    "showMaximized",
    "showFullScreen",
    "showNormal",
    "close",
    "raise",
    "lower",
    "updateMicroFocus",
    "Qt::InputMethodQuery",
    "query",
    "_q_showIfNotHidden",
    "_q_closestWindowHandle",
    "QWindow*",
    "grab",
    "rectangle",
    "modal",
    "windowModality",
    "Qt::WindowModality",
    "enabled",
    "geometry",
    "frameGeometry",
    "normalGeometry",
    "x",
    "y",
    "frameSize",
    "size",
    "width",
    "height",
    "rect",
    "childrenRect",
    "childrenRegion",
    "sizePolicy",
    "minimumSize",
    "maximumSize",
    "minimumWidth",
    "minimumHeight",
    "maximumWidth",
    "maximumHeight",
    "sizeIncrement",
    "baseSize",
    "palette",
    "font",
    "cursor",
    "mouseTracking",
    "tabletTracking",
    "isActiveWindow",
    "focusPolicy",
    "Qt::FocusPolicy",
    "focus",
    "contextMenuPolicy",
    "Qt::ContextMenuPolicy",
    "updatesEnabled",
    "minimized",
    "maximized",
    "fullScreen",
    "sizeHint",
    "minimumSizeHint",
    "acceptDrops",
    "windowTitle",
    "windowIcon",
    "windowIconText",
    "windowOpacity",
    "windowModified",
    "toolTip",
    "toolTipDuration",
    "statusTip",
    "accessibleName",
    "accessibleDescription",
    "layoutDirection",
    "Qt::LayoutDirection",
    "autoFillBackground",
    "locale",
    "windowFilePath",
    "inputMethodHints",
    "Qt::InputMethodHints"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      58,  243, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,   59 /* Public */,
       4,    1,  191,    2, 0x06,   61 /* Public */,
       6,    1,  194,    2, 0x06,   63 /* Public */,
       8,    1,  197,    2, 0x06,   65 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  200,    2, 0x0a,   67 /* Public */,
      11,    1,  203,    2, 0x0a,   69 /* Public */,
      12,    1,  206,    2, 0x0a,   71 /* Public */,
      13,    1,  209,    2, 0x0a,   73 /* Public */,
      14,    1,  212,    2, 0x0a,   75 /* Public */,
      16,    0,  215,    2, 0x0a,   77 /* Public */,
      17,    0,  216,    2, 0x0a,   78 /* Public */,
      18,    0,  217,    2, 0x0a,   79 /* Public */,
      19,    1,  218,    2, 0x0a,   80 /* Public */,
      21,    1,  221,    2, 0x0a,   82 /* Public */,
      23,    0,  224,    2, 0x0a,   84 /* Public */,
      24,    0,  225,    2, 0x0a,   85 /* Public */,
      25,    0,  226,    2, 0x0a,   86 /* Public */,
      26,    0,  227,    2, 0x0a,   87 /* Public */,
      27,    0,  228,    2, 0x0a,   88 /* Public */,
      28,    0,  229,    2, 0x0a,   89 /* Public */,
      29,    0,  230,    2, 0x0a,   90 /* Public */,
      30,    0,  231,    2, 0x0a,   91 /* Public */,
      31,    0,  232,    2, 0x0a,   92 /* Public */,
      32,    1,  233,    2, 0x09,   93 /* Protected */,
      32,    0,  236,    2, 0x29,   95 /* Protected | MethodCloned */,
      35,    0,  237,    2, 0x08,   96 /* Private */,
      36,    0,  238,    2, 0x08,   97 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      38,    1,  239,    2, 0x02,   98 /* Public */,
      38,    0,  242,    2, 0x22,  100 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QIcon,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QPoint,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 37,

 // methods: parameters
    QMetaType::QPixmap, QMetaType::QRect,   39,
    QMetaType::QPixmap,

 // properties: name, type, flags
      40, QMetaType::Bool, 0x00015001, uint(-1), 0,
      41, 0x80000000 | 42, 0x0001510b, uint(-1), 0,
      43, QMetaType::Bool, 0x00015103, uint(-1), 0,
      44, QMetaType::QRect, 0x00015103, uint(-1), 0,
      45, QMetaType::QRect, 0x00015001, uint(-1), 0,
      46, QMetaType::QRect, 0x00015001, uint(-1), 0,
      47, QMetaType::Int, 0x00015001, uint(-1), 0,
      48, QMetaType::Int, 0x00015001, uint(-1), 0,
       9, QMetaType::QPoint, 0x00004003, uint(-1), 0,
      49, QMetaType::QSize, 0x00015001, uint(-1), 0,
      50, QMetaType::QSize, 0x00004003, uint(-1), 0,
      51, QMetaType::Int, 0x00015001, uint(-1), 0,
      52, QMetaType::Int, 0x00015001, uint(-1), 0,
      53, QMetaType::QRect, 0x00015001, uint(-1), 0,
      54, QMetaType::QRect, 0x00015001, uint(-1), 0,
      55, QMetaType::QRegion, 0x00015001, uint(-1), 0,
      56, QMetaType::QSizePolicy, 0x00015103, uint(-1), 0,
      57, QMetaType::QSize, 0x00015103, uint(-1), 0,
      58, QMetaType::QSize, 0x00015103, uint(-1), 0,
      59, QMetaType::Int, 0x00004103, uint(-1), 0,
      60, QMetaType::Int, 0x00004103, uint(-1), 0,
      61, QMetaType::Int, 0x00004103, uint(-1), 0,
      62, QMetaType::Int, 0x00004103, uint(-1), 0,
      63, QMetaType::QSize, 0x00015103, uint(-1), 0,
      64, QMetaType::QSize, 0x00015103, uint(-1), 0,
      65, QMetaType::QPalette, 0x00015103, uint(-1), 0,
      66, QMetaType::QFont, 0x00015103, uint(-1), 0,
      67, QMetaType::QCursor, 0x00015107, uint(-1), 0,
      68, QMetaType::Bool, 0x00015103, uint(-1), 0,
      69, QMetaType::Bool, 0x00015103, uint(-1), 0,
      70, QMetaType::Bool, 0x00015001, uint(-1), 0,
      71, 0x80000000 | 72, 0x0001510b, uint(-1), 0,
      73, QMetaType::Bool, 0x00015001, uint(-1), 0,
      74, 0x80000000 | 75, 0x0001510b, uint(-1), 0,
      76, QMetaType::Bool, 0x00014103, uint(-1), 0,
      20, QMetaType::Bool, 0x00014103, uint(-1), 0,
      77, QMetaType::Bool, 0x00015001, uint(-1), 0,
      78, QMetaType::Bool, 0x00015001, uint(-1), 0,
      79, QMetaType::Bool, 0x00015001, uint(-1), 0,
      80, QMetaType::QSize, 0x00015001, uint(-1), 0,
      81, QMetaType::QSize, 0x00015001, uint(-1), 0,
      82, QMetaType::Bool, 0x00015103, uint(-1), 0,
      83, QMetaType::QString, 0x00015103, uint(0), 0,
      84, QMetaType::QIcon, 0x00015103, uint(1), 0,
      85, QMetaType::QString, 0x00015103, uint(2), 0,
      86, QMetaType::Double, 0x00015103, uint(-1), 0,
      87, QMetaType::Bool, 0x00015103, uint(-1), 0,
      88, QMetaType::QString, 0x00015103, uint(-1), 0,
      89, QMetaType::Int, 0x00015103, uint(-1), 0,
      90, QMetaType::QString, 0x00015103, uint(-1), 0,
      91, QMetaType::QString, 0x00015103, uint(-1), 0,
      92, QMetaType::QString, 0x00015103, uint(-1), 0,
      93, 0x80000000 | 94, 0x0001510f, uint(-1), 0,
      95, QMetaType::Bool, 0x00015103, uint(-1), 0,
      15, QMetaType::QString, 0x00015103, uint(-1), 0,
      96, QMetaType::QLocale, 0x00015107, uint(-1), 0,
      97, QMetaType::QString, 0x00015103, uint(-1), 0,
      98, 0x80000000 | 99, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQWidgetENDCLASS_t,
        // property 'modal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'windowModality'
        QtPrivate::TypeAndForceComplete<Qt::WindowModality, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'geometry'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'frameGeometry'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'normalGeometry'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'x'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pos'
        QtPrivate::TypeAndForceComplete<QPoint, std::true_type>,
        // property 'frameSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'width'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'height'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'childrenRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'childrenRegion'
        QtPrivate::TypeAndForceComplete<QRegion, std::true_type>,
        // property 'sizePolicy'
        QtPrivate::TypeAndForceComplete<QSizePolicy, std::true_type>,
        // property 'minimumSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'maximumSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'minimumWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'minimumHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sizeIncrement'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'baseSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'palette'
        QtPrivate::TypeAndForceComplete<QPalette, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'cursor'
        QtPrivate::TypeAndForceComplete<QCursor, std::true_type>,
        // property 'mouseTracking'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabletTracking'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isActiveWindow'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'focusPolicy'
        QtPrivate::TypeAndForceComplete<Qt::FocusPolicy, std::true_type>,
        // property 'focus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'contextMenuPolicy'
        QtPrivate::TypeAndForceComplete<Qt::ContextMenuPolicy, std::true_type>,
        // property 'updatesEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minimized'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'maximized'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fullScreen'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sizeHint'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'minimumSizeHint'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'acceptDrops'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'windowTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'windowIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'windowIconText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'windowOpacity'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'windowModified'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'toolTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'toolTipDuration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'statusTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'accessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'accessibleDescription'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'layoutDirection'
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::true_type>,
        // property 'autoFillBackground'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'styleSheet'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'locale'
        QtPrivate::TypeAndForceComplete<QLocale, std::true_type>,
        // property 'windowFilePath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'inputMethodHints'
        QtPrivate::TypeAndForceComplete<Qt::InputMethodHints, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWidget, std::true_type>,
        // method 'windowTitleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'windowIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'windowIconTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'setEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setWindowModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setWindowTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setStyleSheet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repaint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHidden'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMinimized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMaximized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNormal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'raise'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMicroFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        // method 'updateMicroFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_showIfNotHidden'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_closestWindowHandle'
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'grab'
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'grab'
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>
    >,
    nullptr
} };

void QWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowTitleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->windowIconChanged((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 2: _t->windowIconTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->setEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setWindowModified((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setWindowTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setStyleSheet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setFocus(); break;
        case 10: _t->update(); break;
        case 11: _t->repaint(); break;
        case 12: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setHidden((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->show(); break;
        case 15: _t->hide(); break;
        case 16: _t->showMinimized(); break;
        case 17: _t->showMaximized(); break;
        case 18: _t->showFullScreen(); break;
        case 19: _t->showNormal(); break;
        case 20: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->raise(); break;
        case 22: _t->lower(); break;
        case 23: _t->updateMicroFocus((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1]))); break;
        case 24: _t->updateMicroFocus(); break;
        case 25: _t->d_func()->_q_showIfNotHidden(); break;
        case 26: { QWindow* _r = _t->d_func()->_q_closestWindowHandle();
            if (_a[0]) *reinterpret_cast< QWindow**>(_a[0]) = std::move(_r); }  break;
        case 27: { QPixmap _r = _t->grab((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 28: { QPixmap _r = _t->grab();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWidget::*)(const QString & );
            if (_t _q_method = &QWidget::windowTitleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWidget::*)(const QIcon & );
            if (_t _q_method = &QWidget::windowIconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QWidget::*)(const QString & );
            if (_t _q_method = &QWidget::windowIconTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QWidget::*)(const QPoint & );
            if (_t _q_method = &QWidget::customContextMenuRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isModal(); break;
        case 1: *reinterpret_cast< Qt::WindowModality*>(_v) = _t->windowModality(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 4: *reinterpret_cast< QRect*>(_v) = _t->frameGeometry(); break;
        case 5: *reinterpret_cast< QRect*>(_v) = _t->normalGeometry(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 8: *reinterpret_cast< QPoint*>(_v) = _t->pos(); break;
        case 9: *reinterpret_cast< QSize*>(_v) = _t->frameSize(); break;
        case 10: *reinterpret_cast< QSize*>(_v) = _t->size(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 13: *reinterpret_cast< QRect*>(_v) = _t->rect(); break;
        case 14: *reinterpret_cast< QRect*>(_v) = _t->childrenRect(); break;
        case 15: *reinterpret_cast< QRegion*>(_v) = _t->childrenRegion(); break;
        case 16: *reinterpret_cast< QSizePolicy*>(_v) = _t->sizePolicy(); break;
        case 17: *reinterpret_cast< QSize*>(_v) = _t->minimumSize(); break;
        case 18: *reinterpret_cast< QSize*>(_v) = _t->maximumSize(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->minimumWidth(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->minimumHeight(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->maximumWidth(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->maximumHeight(); break;
        case 23: *reinterpret_cast< QSize*>(_v) = _t->sizeIncrement(); break;
        case 24: *reinterpret_cast< QSize*>(_v) = _t->baseSize(); break;
        case 25: *reinterpret_cast< QPalette*>(_v) = _t->palette(); break;
        case 26: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 27: *reinterpret_cast< QCursor*>(_v) = _t->cursor(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->hasMouseTracking(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->hasTabletTracking(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->isActiveWindow(); break;
        case 31: *reinterpret_cast< Qt::FocusPolicy*>(_v) = _t->focusPolicy(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 33: *reinterpret_cast< Qt::ContextMenuPolicy*>(_v) = _t->contextMenuPolicy(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->updatesEnabled(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->isMinimized(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->isMaximized(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->isFullScreen(); break;
        case 39: *reinterpret_cast< QSize*>(_v) = _t->sizeHint(); break;
        case 40: *reinterpret_cast< QSize*>(_v) = _t->minimumSizeHint(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->acceptDrops(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 43: *reinterpret_cast< QIcon*>(_v) = _t->windowIcon(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->windowIconText(); break;
        case 45: *reinterpret_cast< double*>(_v) = _t->windowOpacity(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isWindowModified(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->toolTip(); break;
        case 48: *reinterpret_cast< int*>(_v) = _t->toolTipDuration(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->statusTip(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->accessibleName(); break;
        case 51: *reinterpret_cast< QString*>(_v) = _t->accessibleDescription(); break;
        case 52: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->autoFillBackground(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 55: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->windowFilePath(); break;
        case 57: *reinterpret_cast< Qt::InputMethodHints*>(_v) = _t->inputMethodHints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setWindowModality(*reinterpret_cast< Qt::WindowModality*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setGeometry(*reinterpret_cast< QRect*>(_v)); break;
        case 8: _t->move(*reinterpret_cast< QPoint*>(_v)); break;
        case 10: _t->resize(*reinterpret_cast< QSize*>(_v)); break;
        case 16: _t->setSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 17: _t->setMinimumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 18: _t->setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 19: _t->setMinimumWidth(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setMinimumHeight(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setMaximumWidth(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setMaximumHeight(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setSizeIncrement(*reinterpret_cast< QSize*>(_v)); break;
        case 24: _t->setBaseSize(*reinterpret_cast< QSize*>(_v)); break;
        case 25: _t->setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 26: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 27: _t->setCursor(*reinterpret_cast< QCursor*>(_v)); break;
        case 28: _t->setMouseTracking(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setTabletTracking(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setFocusPolicy(*reinterpret_cast< Qt::FocusPolicy*>(_v)); break;
        case 33: _t->setContextMenuPolicy(*reinterpret_cast< Qt::ContextMenuPolicy*>(_v)); break;
        case 34: _t->setUpdatesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setAcceptDrops(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        case 43: _t->setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 44: _t->setWindowIconText(*reinterpret_cast< QString*>(_v)); break;
        case 45: _t->setWindowOpacity(*reinterpret_cast< double*>(_v)); break;
        case 46: _t->setWindowModified(*reinterpret_cast< bool*>(_v)); break;
        case 47: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 48: _t->setToolTipDuration(*reinterpret_cast< int*>(_v)); break;
        case 49: _t->setStatusTip(*reinterpret_cast< QString*>(_v)); break;
        case 50: _t->setAccessibleName(*reinterpret_cast< QString*>(_v)); break;
        case 51: _t->setAccessibleDescription(*reinterpret_cast< QString*>(_v)); break;
        case 52: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 53: _t->setAutoFillBackground(*reinterpret_cast< bool*>(_v)); break;
        case 54: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 55: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        case 56: _t->setWindowFilePath(*reinterpret_cast< QString*>(_v)); break;
        case 57: _t->setInputMethodHints(*reinterpret_cast< Qt::InputMethodHints*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 27: _t->unsetCursor(); break;
        case 52: _t->unsetLayoutDirection(); break;
        case 55: _t->unsetLocale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPaintDevice"))
        return static_cast< QPaintDevice*>(this);
    return QObject::qt_metacast(_clname);
}

int QWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void QWidget::windowTitleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWidget::windowIconChanged(const QIcon & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWidget::windowIconTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWidget::customContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
