/****************************************************************************
** Meta object code from reading C++ file 'qplatformtheme.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformtheme.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformtheme.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPlatformThemeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPlatformThemeENDCLASS = QtMocHelpers::stringData(
    "QPlatformTheme",
    "ThemeHint",
    "CursorFlashTime",
    "KeyboardInputInterval",
    "MouseDoubleClickInterval",
    "StartDragDistance",
    "StartDragTime",
    "KeyboardAutoRepeatRate",
    "PasswordMaskDelay",
    "StartDragVelocity",
    "TextCursorWidth",
    "DropShadow",
    "MaximumScrollBarDragDistance",
    "ToolButtonStyle",
    "ToolBarIconSize",
    "ItemViewActivateItemOnSingleClick",
    "SystemIconThemeName",
    "SystemIconFallbackThemeName",
    "IconThemeSearchPaths",
    "StyleNames",
    "WindowAutoPlacement",
    "DialogButtonBoxLayout",
    "DialogButtonBoxButtonsHaveIcons",
    "UseFullScreenForPopupMenu",
    "KeyboardScheme",
    "UiEffects",
    "SpellCheckUnderlineStyle",
    "TabFocusBehavior",
    "IconPixmapSizes",
    "PasswordMaskCharacter",
    "DialogSnapToDefaultButton",
    "ContextMenuOnMouseRelease",
    "MousePressAndHoldInterval",
    "MouseDoubleClickDistance",
    "WheelScrollLines",
    "TouchDoubleTapDistance",
    "ShowShortcutsInContextMenus",
    "IconFallbackSearchPaths",
    "MouseQuickSelectionThreshold",
    "InteractiveResizeAcrossScreens",
    "ShowDirectoriesFirst",
    "PreselectFirstFileInDirectory",
    "ButtonPressKeys",
    "SetFocusOnTouchRelease",
    "FlickStartDistance",
    "FlickMaximumVelocity",
    "FlickDeceleration",
    "MenuBarFocusOnAltPressRelease",
    "MouseCursorTheme",
    "MouseCursorSize",
    "UnderlineShortcut",
    "DialogType",
    "FileDialog",
    "ColorDialog",
    "FontDialog",
    "MessageDialog",
    "Palette",
    "SystemPalette",
    "ToolTipPalette",
    "ToolButtonPalette",
    "ButtonPalette",
    "CheckBoxPalette",
    "RadioButtonPalette",
    "HeaderPalette",
    "ComboBoxPalette",
    "ItemViewPalette",
    "MessageBoxLabelPelette",
    "MessageBoxLabelPalette",
    "TabBarPalette",
    "LabelPalette",
    "GroupBoxPalette",
    "MenuPalette",
    "MenuBarPalette",
    "TextEditPalette",
    "TextLineEditPalette",
    "NPalettes",
    "Font",
    "SystemFont",
    "MenuFont",
    "MenuBarFont",
    "MenuItemFont",
    "MessageBoxFont",
    "LabelFont",
    "TipLabelFont",
    "StatusBarFont",
    "TitleBarFont",
    "MdiSubWindowTitleFont",
    "DockWidgetTitleFont",
    "PushButtonFont",
    "CheckBoxFont",
    "RadioButtonFont",
    "ToolButtonFont",
    "ItemViewFont",
    "ListViewFont",
    "HeaderViewFont",
    "ListBoxFont",
    "ComboMenuItemFont",
    "ComboLineEditFont",
    "SmallFont",
    "MiniFont",
    "FixedFont",
    "GroupBoxTitleFont",
    "TabButtonFont",
    "EditorFont",
    "NFonts",
    "StandardPixmap",
    "TitleBarMenuButton",
    "TitleBarMinButton",
    "TitleBarMaxButton",
    "TitleBarCloseButton",
    "TitleBarNormalButton",
    "TitleBarShadeButton",
    "TitleBarUnshadeButton",
    "TitleBarContextHelpButton",
    "DockWidgetCloseButton",
    "MessageBoxInformation",
    "MessageBoxWarning",
    "MessageBoxCritical",
    "MessageBoxQuestion",
    "DesktopIcon",
    "TrashIcon",
    "ComputerIcon",
    "DriveFDIcon",
    "DriveHDIcon",
    "DriveCDIcon",
    "DriveDVDIcon",
    "DriveNetIcon",
    "DirOpenIcon",
    "DirClosedIcon",
    "DirLinkIcon",
    "DirLinkOpenIcon",
    "FileIcon",
    "FileLinkIcon",
    "ToolBarHorizontalExtensionButton",
    "ToolBarVerticalExtensionButton",
    "FileDialogStart",
    "FileDialogEnd",
    "FileDialogToParent",
    "FileDialogNewFolder",
    "FileDialogDetailedView",
    "FileDialogInfoView",
    "FileDialogContentsView",
    "FileDialogListView",
    "FileDialogBack",
    "DirIcon",
    "DialogOkButton",
    "DialogCancelButton",
    "DialogHelpButton",
    "DialogOpenButton",
    "DialogSaveButton",
    "DialogCloseButton",
    "DialogApplyButton",
    "DialogResetButton",
    "DialogDiscardButton",
    "DialogYesButton",
    "DialogNoButton",
    "ArrowUp",
    "ArrowDown",
    "ArrowLeft",
    "ArrowRight",
    "ArrowBack",
    "ArrowForward",
    "DirHomeIcon",
    "CommandLink",
    "VistaShield",
    "BrowserReload",
    "BrowserStop",
    "MediaPlay",
    "MediaStop",
    "MediaPause",
    "MediaSkipForward",
    "MediaSkipBackward",
    "MediaSeekForward",
    "MediaSeekBackward",
    "MediaVolume",
    "MediaVolumeMuted",
    "LineEditClearButton",
    "DialogYesToAllButton",
    "DialogNoToAllButton",
    "DialogSaveAllButton",
    "DialogAbortButton",
    "DialogRetryButton",
    "DialogIgnoreButton",
    "RestoreDefaultsButton",
    "TabCloseButton",
    "NStandardPixmap",
    "CustomBase",
    "KeyboardSchemes",
    "WindowsKeyboardScheme",
    "MacKeyboardScheme",
    "X11KeyboardScheme",
    "KdeKeyboardScheme",
    "GnomeKeyboardScheme",
    "CdeKeyboardScheme",
    "UiEffect",
    "GeneralUiEffect",
    "AnimateMenuUiEffect",
    "FadeMenuUiEffect",
    "AnimateComboUiEffect",
    "AnimateTooltipUiEffect",
    "FadeTooltipUiEffect",
    "AnimateToolBoxUiEffect",
    "HoverEffect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPlatformThemeENDCLASS_t {
    uint offsetsAndSizes[406];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[16];
    char stringdata3[22];
    char stringdata4[25];
    char stringdata5[18];
    char stringdata6[14];
    char stringdata7[23];
    char stringdata8[18];
    char stringdata9[18];
    char stringdata10[16];
    char stringdata11[11];
    char stringdata12[29];
    char stringdata13[16];
    char stringdata14[16];
    char stringdata15[34];
    char stringdata16[20];
    char stringdata17[28];
    char stringdata18[21];
    char stringdata19[11];
    char stringdata20[20];
    char stringdata21[22];
    char stringdata22[32];
    char stringdata23[26];
    char stringdata24[15];
    char stringdata25[10];
    char stringdata26[25];
    char stringdata27[17];
    char stringdata28[16];
    char stringdata29[22];
    char stringdata30[26];
    char stringdata31[26];
    char stringdata32[26];
    char stringdata33[25];
    char stringdata34[17];
    char stringdata35[23];
    char stringdata36[28];
    char stringdata37[24];
    char stringdata38[29];
    char stringdata39[31];
    char stringdata40[21];
    char stringdata41[30];
    char stringdata42[16];
    char stringdata43[23];
    char stringdata44[19];
    char stringdata45[21];
    char stringdata46[18];
    char stringdata47[30];
    char stringdata48[17];
    char stringdata49[16];
    char stringdata50[18];
    char stringdata51[11];
    char stringdata52[11];
    char stringdata53[12];
    char stringdata54[11];
    char stringdata55[14];
    char stringdata56[8];
    char stringdata57[14];
    char stringdata58[15];
    char stringdata59[18];
    char stringdata60[14];
    char stringdata61[16];
    char stringdata62[19];
    char stringdata63[14];
    char stringdata64[16];
    char stringdata65[16];
    char stringdata66[23];
    char stringdata67[23];
    char stringdata68[14];
    char stringdata69[13];
    char stringdata70[16];
    char stringdata71[12];
    char stringdata72[15];
    char stringdata73[16];
    char stringdata74[20];
    char stringdata75[10];
    char stringdata76[5];
    char stringdata77[11];
    char stringdata78[9];
    char stringdata79[12];
    char stringdata80[13];
    char stringdata81[15];
    char stringdata82[10];
    char stringdata83[13];
    char stringdata84[14];
    char stringdata85[13];
    char stringdata86[22];
    char stringdata87[20];
    char stringdata88[15];
    char stringdata89[13];
    char stringdata90[16];
    char stringdata91[15];
    char stringdata92[13];
    char stringdata93[13];
    char stringdata94[15];
    char stringdata95[12];
    char stringdata96[18];
    char stringdata97[18];
    char stringdata98[10];
    char stringdata99[9];
    char stringdata100[10];
    char stringdata101[18];
    char stringdata102[14];
    char stringdata103[11];
    char stringdata104[7];
    char stringdata105[15];
    char stringdata106[19];
    char stringdata107[18];
    char stringdata108[18];
    char stringdata109[20];
    char stringdata110[21];
    char stringdata111[20];
    char stringdata112[22];
    char stringdata113[26];
    char stringdata114[22];
    char stringdata115[22];
    char stringdata116[18];
    char stringdata117[19];
    char stringdata118[19];
    char stringdata119[12];
    char stringdata120[10];
    char stringdata121[13];
    char stringdata122[12];
    char stringdata123[12];
    char stringdata124[12];
    char stringdata125[13];
    char stringdata126[13];
    char stringdata127[12];
    char stringdata128[14];
    char stringdata129[12];
    char stringdata130[16];
    char stringdata131[9];
    char stringdata132[13];
    char stringdata133[33];
    char stringdata134[31];
    char stringdata135[16];
    char stringdata136[14];
    char stringdata137[19];
    char stringdata138[20];
    char stringdata139[23];
    char stringdata140[19];
    char stringdata141[23];
    char stringdata142[19];
    char stringdata143[15];
    char stringdata144[8];
    char stringdata145[15];
    char stringdata146[19];
    char stringdata147[17];
    char stringdata148[17];
    char stringdata149[17];
    char stringdata150[18];
    char stringdata151[18];
    char stringdata152[18];
    char stringdata153[20];
    char stringdata154[16];
    char stringdata155[15];
    char stringdata156[8];
    char stringdata157[10];
    char stringdata158[10];
    char stringdata159[11];
    char stringdata160[10];
    char stringdata161[13];
    char stringdata162[12];
    char stringdata163[12];
    char stringdata164[12];
    char stringdata165[14];
    char stringdata166[12];
    char stringdata167[10];
    char stringdata168[10];
    char stringdata169[11];
    char stringdata170[17];
    char stringdata171[18];
    char stringdata172[17];
    char stringdata173[18];
    char stringdata174[12];
    char stringdata175[17];
    char stringdata176[20];
    char stringdata177[21];
    char stringdata178[20];
    char stringdata179[20];
    char stringdata180[18];
    char stringdata181[18];
    char stringdata182[19];
    char stringdata183[22];
    char stringdata184[15];
    char stringdata185[16];
    char stringdata186[11];
    char stringdata187[16];
    char stringdata188[22];
    char stringdata189[18];
    char stringdata190[18];
    char stringdata191[18];
    char stringdata192[20];
    char stringdata193[18];
    char stringdata194[9];
    char stringdata195[16];
    char stringdata196[20];
    char stringdata197[17];
    char stringdata198[21];
    char stringdata199[23];
    char stringdata200[20];
    char stringdata201[23];
    char stringdata202[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPlatformThemeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPlatformThemeENDCLASS_t qt_meta_stringdata_CLASSQPlatformThemeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QPlatformTheme"
        QT_MOC_LITERAL(15, 9),  // "ThemeHint"
        QT_MOC_LITERAL(25, 15),  // "CursorFlashTime"
        QT_MOC_LITERAL(41, 21),  // "KeyboardInputInterval"
        QT_MOC_LITERAL(63, 24),  // "MouseDoubleClickInterval"
        QT_MOC_LITERAL(88, 17),  // "StartDragDistance"
        QT_MOC_LITERAL(106, 13),  // "StartDragTime"
        QT_MOC_LITERAL(120, 22),  // "KeyboardAutoRepeatRate"
        QT_MOC_LITERAL(143, 17),  // "PasswordMaskDelay"
        QT_MOC_LITERAL(161, 17),  // "StartDragVelocity"
        QT_MOC_LITERAL(179, 15),  // "TextCursorWidth"
        QT_MOC_LITERAL(195, 10),  // "DropShadow"
        QT_MOC_LITERAL(206, 28),  // "MaximumScrollBarDragDistance"
        QT_MOC_LITERAL(235, 15),  // "ToolButtonStyle"
        QT_MOC_LITERAL(251, 15),  // "ToolBarIconSize"
        QT_MOC_LITERAL(267, 33),  // "ItemViewActivateItemOnSingleC..."
        QT_MOC_LITERAL(301, 19),  // "SystemIconThemeName"
        QT_MOC_LITERAL(321, 27),  // "SystemIconFallbackThemeName"
        QT_MOC_LITERAL(349, 20),  // "IconThemeSearchPaths"
        QT_MOC_LITERAL(370, 10),  // "StyleNames"
        QT_MOC_LITERAL(381, 19),  // "WindowAutoPlacement"
        QT_MOC_LITERAL(401, 21),  // "DialogButtonBoxLayout"
        QT_MOC_LITERAL(423, 31),  // "DialogButtonBoxButtonsHaveIcons"
        QT_MOC_LITERAL(455, 25),  // "UseFullScreenForPopupMenu"
        QT_MOC_LITERAL(481, 14),  // "KeyboardScheme"
        QT_MOC_LITERAL(496, 9),  // "UiEffects"
        QT_MOC_LITERAL(506, 24),  // "SpellCheckUnderlineStyle"
        QT_MOC_LITERAL(531, 16),  // "TabFocusBehavior"
        QT_MOC_LITERAL(548, 15),  // "IconPixmapSizes"
        QT_MOC_LITERAL(564, 21),  // "PasswordMaskCharacter"
        QT_MOC_LITERAL(586, 25),  // "DialogSnapToDefaultButton"
        QT_MOC_LITERAL(612, 25),  // "ContextMenuOnMouseRelease"
        QT_MOC_LITERAL(638, 25),  // "MousePressAndHoldInterval"
        QT_MOC_LITERAL(664, 24),  // "MouseDoubleClickDistance"
        QT_MOC_LITERAL(689, 16),  // "WheelScrollLines"
        QT_MOC_LITERAL(706, 22),  // "TouchDoubleTapDistance"
        QT_MOC_LITERAL(729, 27),  // "ShowShortcutsInContextMenus"
        QT_MOC_LITERAL(757, 23),  // "IconFallbackSearchPaths"
        QT_MOC_LITERAL(781, 28),  // "MouseQuickSelectionThreshold"
        QT_MOC_LITERAL(810, 30),  // "InteractiveResizeAcrossScreens"
        QT_MOC_LITERAL(841, 20),  // "ShowDirectoriesFirst"
        QT_MOC_LITERAL(862, 29),  // "PreselectFirstFileInDirectory"
        QT_MOC_LITERAL(892, 15),  // "ButtonPressKeys"
        QT_MOC_LITERAL(908, 22),  // "SetFocusOnTouchRelease"
        QT_MOC_LITERAL(931, 18),  // "FlickStartDistance"
        QT_MOC_LITERAL(950, 20),  // "FlickMaximumVelocity"
        QT_MOC_LITERAL(971, 17),  // "FlickDeceleration"
        QT_MOC_LITERAL(989, 29),  // "MenuBarFocusOnAltPressRelease"
        QT_MOC_LITERAL(1019, 16),  // "MouseCursorTheme"
        QT_MOC_LITERAL(1036, 15),  // "MouseCursorSize"
        QT_MOC_LITERAL(1052, 17),  // "UnderlineShortcut"
        QT_MOC_LITERAL(1070, 10),  // "DialogType"
        QT_MOC_LITERAL(1081, 10),  // "FileDialog"
        QT_MOC_LITERAL(1092, 11),  // "ColorDialog"
        QT_MOC_LITERAL(1104, 10),  // "FontDialog"
        QT_MOC_LITERAL(1115, 13),  // "MessageDialog"
        QT_MOC_LITERAL(1129, 7),  // "Palette"
        QT_MOC_LITERAL(1137, 13),  // "SystemPalette"
        QT_MOC_LITERAL(1151, 14),  // "ToolTipPalette"
        QT_MOC_LITERAL(1166, 17),  // "ToolButtonPalette"
        QT_MOC_LITERAL(1184, 13),  // "ButtonPalette"
        QT_MOC_LITERAL(1198, 15),  // "CheckBoxPalette"
        QT_MOC_LITERAL(1214, 18),  // "RadioButtonPalette"
        QT_MOC_LITERAL(1233, 13),  // "HeaderPalette"
        QT_MOC_LITERAL(1247, 15),  // "ComboBoxPalette"
        QT_MOC_LITERAL(1263, 15),  // "ItemViewPalette"
        QT_MOC_LITERAL(1279, 22),  // "MessageBoxLabelPelette"
        QT_MOC_LITERAL(1302, 22),  // "MessageBoxLabelPalette"
        QT_MOC_LITERAL(1325, 13),  // "TabBarPalette"
        QT_MOC_LITERAL(1339, 12),  // "LabelPalette"
        QT_MOC_LITERAL(1352, 15),  // "GroupBoxPalette"
        QT_MOC_LITERAL(1368, 11),  // "MenuPalette"
        QT_MOC_LITERAL(1380, 14),  // "MenuBarPalette"
        QT_MOC_LITERAL(1395, 15),  // "TextEditPalette"
        QT_MOC_LITERAL(1411, 19),  // "TextLineEditPalette"
        QT_MOC_LITERAL(1431, 9),  // "NPalettes"
        QT_MOC_LITERAL(1441, 4),  // "Font"
        QT_MOC_LITERAL(1446, 10),  // "SystemFont"
        QT_MOC_LITERAL(1457, 8),  // "MenuFont"
        QT_MOC_LITERAL(1466, 11),  // "MenuBarFont"
        QT_MOC_LITERAL(1478, 12),  // "MenuItemFont"
        QT_MOC_LITERAL(1491, 14),  // "MessageBoxFont"
        QT_MOC_LITERAL(1506, 9),  // "LabelFont"
        QT_MOC_LITERAL(1516, 12),  // "TipLabelFont"
        QT_MOC_LITERAL(1529, 13),  // "StatusBarFont"
        QT_MOC_LITERAL(1543, 12),  // "TitleBarFont"
        QT_MOC_LITERAL(1556, 21),  // "MdiSubWindowTitleFont"
        QT_MOC_LITERAL(1578, 19),  // "DockWidgetTitleFont"
        QT_MOC_LITERAL(1598, 14),  // "PushButtonFont"
        QT_MOC_LITERAL(1613, 12),  // "CheckBoxFont"
        QT_MOC_LITERAL(1626, 15),  // "RadioButtonFont"
        QT_MOC_LITERAL(1642, 14),  // "ToolButtonFont"
        QT_MOC_LITERAL(1657, 12),  // "ItemViewFont"
        QT_MOC_LITERAL(1670, 12),  // "ListViewFont"
        QT_MOC_LITERAL(1683, 14),  // "HeaderViewFont"
        QT_MOC_LITERAL(1698, 11),  // "ListBoxFont"
        QT_MOC_LITERAL(1710, 17),  // "ComboMenuItemFont"
        QT_MOC_LITERAL(1728, 17),  // "ComboLineEditFont"
        QT_MOC_LITERAL(1746, 9),  // "SmallFont"
        QT_MOC_LITERAL(1756, 8),  // "MiniFont"
        QT_MOC_LITERAL(1765, 9),  // "FixedFont"
        QT_MOC_LITERAL(1775, 17),  // "GroupBoxTitleFont"
        QT_MOC_LITERAL(1793, 13),  // "TabButtonFont"
        QT_MOC_LITERAL(1807, 10),  // "EditorFont"
        QT_MOC_LITERAL(1818, 6),  // "NFonts"
        QT_MOC_LITERAL(1825, 14),  // "StandardPixmap"
        QT_MOC_LITERAL(1840, 18),  // "TitleBarMenuButton"
        QT_MOC_LITERAL(1859, 17),  // "TitleBarMinButton"
        QT_MOC_LITERAL(1877, 17),  // "TitleBarMaxButton"
        QT_MOC_LITERAL(1895, 19),  // "TitleBarCloseButton"
        QT_MOC_LITERAL(1915, 20),  // "TitleBarNormalButton"
        QT_MOC_LITERAL(1936, 19),  // "TitleBarShadeButton"
        QT_MOC_LITERAL(1956, 21),  // "TitleBarUnshadeButton"
        QT_MOC_LITERAL(1978, 25),  // "TitleBarContextHelpButton"
        QT_MOC_LITERAL(2004, 21),  // "DockWidgetCloseButton"
        QT_MOC_LITERAL(2026, 21),  // "MessageBoxInformation"
        QT_MOC_LITERAL(2048, 17),  // "MessageBoxWarning"
        QT_MOC_LITERAL(2066, 18),  // "MessageBoxCritical"
        QT_MOC_LITERAL(2085, 18),  // "MessageBoxQuestion"
        QT_MOC_LITERAL(2104, 11),  // "DesktopIcon"
        QT_MOC_LITERAL(2116, 9),  // "TrashIcon"
        QT_MOC_LITERAL(2126, 12),  // "ComputerIcon"
        QT_MOC_LITERAL(2139, 11),  // "DriveFDIcon"
        QT_MOC_LITERAL(2151, 11),  // "DriveHDIcon"
        QT_MOC_LITERAL(2163, 11),  // "DriveCDIcon"
        QT_MOC_LITERAL(2175, 12),  // "DriveDVDIcon"
        QT_MOC_LITERAL(2188, 12),  // "DriveNetIcon"
        QT_MOC_LITERAL(2201, 11),  // "DirOpenIcon"
        QT_MOC_LITERAL(2213, 13),  // "DirClosedIcon"
        QT_MOC_LITERAL(2227, 11),  // "DirLinkIcon"
        QT_MOC_LITERAL(2239, 15),  // "DirLinkOpenIcon"
        QT_MOC_LITERAL(2255, 8),  // "FileIcon"
        QT_MOC_LITERAL(2264, 12),  // "FileLinkIcon"
        QT_MOC_LITERAL(2277, 32),  // "ToolBarHorizontalExtensionButton"
        QT_MOC_LITERAL(2310, 30),  // "ToolBarVerticalExtensionButton"
        QT_MOC_LITERAL(2341, 15),  // "FileDialogStart"
        QT_MOC_LITERAL(2357, 13),  // "FileDialogEnd"
        QT_MOC_LITERAL(2371, 18),  // "FileDialogToParent"
        QT_MOC_LITERAL(2390, 19),  // "FileDialogNewFolder"
        QT_MOC_LITERAL(2410, 22),  // "FileDialogDetailedView"
        QT_MOC_LITERAL(2433, 18),  // "FileDialogInfoView"
        QT_MOC_LITERAL(2452, 22),  // "FileDialogContentsView"
        QT_MOC_LITERAL(2475, 18),  // "FileDialogListView"
        QT_MOC_LITERAL(2494, 14),  // "FileDialogBack"
        QT_MOC_LITERAL(2509, 7),  // "DirIcon"
        QT_MOC_LITERAL(2517, 14),  // "DialogOkButton"
        QT_MOC_LITERAL(2532, 18),  // "DialogCancelButton"
        QT_MOC_LITERAL(2551, 16),  // "DialogHelpButton"
        QT_MOC_LITERAL(2568, 16),  // "DialogOpenButton"
        QT_MOC_LITERAL(2585, 16),  // "DialogSaveButton"
        QT_MOC_LITERAL(2602, 17),  // "DialogCloseButton"
        QT_MOC_LITERAL(2620, 17),  // "DialogApplyButton"
        QT_MOC_LITERAL(2638, 17),  // "DialogResetButton"
        QT_MOC_LITERAL(2656, 19),  // "DialogDiscardButton"
        QT_MOC_LITERAL(2676, 15),  // "DialogYesButton"
        QT_MOC_LITERAL(2692, 14),  // "DialogNoButton"
        QT_MOC_LITERAL(2707, 7),  // "ArrowUp"
        QT_MOC_LITERAL(2715, 9),  // "ArrowDown"
        QT_MOC_LITERAL(2725, 9),  // "ArrowLeft"
        QT_MOC_LITERAL(2735, 10),  // "ArrowRight"
        QT_MOC_LITERAL(2746, 9),  // "ArrowBack"
        QT_MOC_LITERAL(2756, 12),  // "ArrowForward"
        QT_MOC_LITERAL(2769, 11),  // "DirHomeIcon"
        QT_MOC_LITERAL(2781, 11),  // "CommandLink"
        QT_MOC_LITERAL(2793, 11),  // "VistaShield"
        QT_MOC_LITERAL(2805, 13),  // "BrowserReload"
        QT_MOC_LITERAL(2819, 11),  // "BrowserStop"
        QT_MOC_LITERAL(2831, 9),  // "MediaPlay"
        QT_MOC_LITERAL(2841, 9),  // "MediaStop"
        QT_MOC_LITERAL(2851, 10),  // "MediaPause"
        QT_MOC_LITERAL(2862, 16),  // "MediaSkipForward"
        QT_MOC_LITERAL(2879, 17),  // "MediaSkipBackward"
        QT_MOC_LITERAL(2897, 16),  // "MediaSeekForward"
        QT_MOC_LITERAL(2914, 17),  // "MediaSeekBackward"
        QT_MOC_LITERAL(2932, 11),  // "MediaVolume"
        QT_MOC_LITERAL(2944, 16),  // "MediaVolumeMuted"
        QT_MOC_LITERAL(2961, 19),  // "LineEditClearButton"
        QT_MOC_LITERAL(2981, 20),  // "DialogYesToAllButton"
        QT_MOC_LITERAL(3002, 19),  // "DialogNoToAllButton"
        QT_MOC_LITERAL(3022, 19),  // "DialogSaveAllButton"
        QT_MOC_LITERAL(3042, 17),  // "DialogAbortButton"
        QT_MOC_LITERAL(3060, 17),  // "DialogRetryButton"
        QT_MOC_LITERAL(3078, 18),  // "DialogIgnoreButton"
        QT_MOC_LITERAL(3097, 21),  // "RestoreDefaultsButton"
        QT_MOC_LITERAL(3119, 14),  // "TabCloseButton"
        QT_MOC_LITERAL(3134, 15),  // "NStandardPixmap"
        QT_MOC_LITERAL(3150, 10),  // "CustomBase"
        QT_MOC_LITERAL(3161, 15),  // "KeyboardSchemes"
        QT_MOC_LITERAL(3177, 21),  // "WindowsKeyboardScheme"
        QT_MOC_LITERAL(3199, 17),  // "MacKeyboardScheme"
        QT_MOC_LITERAL(3217, 17),  // "X11KeyboardScheme"
        QT_MOC_LITERAL(3235, 17),  // "KdeKeyboardScheme"
        QT_MOC_LITERAL(3253, 19),  // "GnomeKeyboardScheme"
        QT_MOC_LITERAL(3273, 17),  // "CdeKeyboardScheme"
        QT_MOC_LITERAL(3291, 8),  // "UiEffect"
        QT_MOC_LITERAL(3300, 15),  // "GeneralUiEffect"
        QT_MOC_LITERAL(3316, 19),  // "AnimateMenuUiEffect"
        QT_MOC_LITERAL(3336, 16),  // "FadeMenuUiEffect"
        QT_MOC_LITERAL(3353, 20),  // "AnimateComboUiEffect"
        QT_MOC_LITERAL(3374, 22),  // "AnimateTooltipUiEffect"
        QT_MOC_LITERAL(3397, 19),  // "FadeTooltipUiEffect"
        QT_MOC_LITERAL(3417, 22),  // "AnimateToolBoxUiEffect"
        QT_MOC_LITERAL(3440, 11)   // "HoverEffect"
    },
    "QPlatformTheme",
    "ThemeHint",
    "CursorFlashTime",
    "KeyboardInputInterval",
    "MouseDoubleClickInterval",
    "StartDragDistance",
    "StartDragTime",
    "KeyboardAutoRepeatRate",
    "PasswordMaskDelay",
    "StartDragVelocity",
    "TextCursorWidth",
    "DropShadow",
    "MaximumScrollBarDragDistance",
    "ToolButtonStyle",
    "ToolBarIconSize",
    "ItemViewActivateItemOnSingleClick",
    "SystemIconThemeName",
    "SystemIconFallbackThemeName",
    "IconThemeSearchPaths",
    "StyleNames",
    "WindowAutoPlacement",
    "DialogButtonBoxLayout",
    "DialogButtonBoxButtonsHaveIcons",
    "UseFullScreenForPopupMenu",
    "KeyboardScheme",
    "UiEffects",
    "SpellCheckUnderlineStyle",
    "TabFocusBehavior",
    "IconPixmapSizes",
    "PasswordMaskCharacter",
    "DialogSnapToDefaultButton",
    "ContextMenuOnMouseRelease",
    "MousePressAndHoldInterval",
    "MouseDoubleClickDistance",
    "WheelScrollLines",
    "TouchDoubleTapDistance",
    "ShowShortcutsInContextMenus",
    "IconFallbackSearchPaths",
    "MouseQuickSelectionThreshold",
    "InteractiveResizeAcrossScreens",
    "ShowDirectoriesFirst",
    "PreselectFirstFileInDirectory",
    "ButtonPressKeys",
    "SetFocusOnTouchRelease",
    "FlickStartDistance",
    "FlickMaximumVelocity",
    "FlickDeceleration",
    "MenuBarFocusOnAltPressRelease",
    "MouseCursorTheme",
    "MouseCursorSize",
    "UnderlineShortcut",
    "DialogType",
    "FileDialog",
    "ColorDialog",
    "FontDialog",
    "MessageDialog",
    "Palette",
    "SystemPalette",
    "ToolTipPalette",
    "ToolButtonPalette",
    "ButtonPalette",
    "CheckBoxPalette",
    "RadioButtonPalette",
    "HeaderPalette",
    "ComboBoxPalette",
    "ItemViewPalette",
    "MessageBoxLabelPelette",
    "MessageBoxLabelPalette",
    "TabBarPalette",
    "LabelPalette",
    "GroupBoxPalette",
    "MenuPalette",
    "MenuBarPalette",
    "TextEditPalette",
    "TextLineEditPalette",
    "NPalettes",
    "Font",
    "SystemFont",
    "MenuFont",
    "MenuBarFont",
    "MenuItemFont",
    "MessageBoxFont",
    "LabelFont",
    "TipLabelFont",
    "StatusBarFont",
    "TitleBarFont",
    "MdiSubWindowTitleFont",
    "DockWidgetTitleFont",
    "PushButtonFont",
    "CheckBoxFont",
    "RadioButtonFont",
    "ToolButtonFont",
    "ItemViewFont",
    "ListViewFont",
    "HeaderViewFont",
    "ListBoxFont",
    "ComboMenuItemFont",
    "ComboLineEditFont",
    "SmallFont",
    "MiniFont",
    "FixedFont",
    "GroupBoxTitleFont",
    "TabButtonFont",
    "EditorFont",
    "NFonts",
    "StandardPixmap",
    "TitleBarMenuButton",
    "TitleBarMinButton",
    "TitleBarMaxButton",
    "TitleBarCloseButton",
    "TitleBarNormalButton",
    "TitleBarShadeButton",
    "TitleBarUnshadeButton",
    "TitleBarContextHelpButton",
    "DockWidgetCloseButton",
    "MessageBoxInformation",
    "MessageBoxWarning",
    "MessageBoxCritical",
    "MessageBoxQuestion",
    "DesktopIcon",
    "TrashIcon",
    "ComputerIcon",
    "DriveFDIcon",
    "DriveHDIcon",
    "DriveCDIcon",
    "DriveDVDIcon",
    "DriveNetIcon",
    "DirOpenIcon",
    "DirClosedIcon",
    "DirLinkIcon",
    "DirLinkOpenIcon",
    "FileIcon",
    "FileLinkIcon",
    "ToolBarHorizontalExtensionButton",
    "ToolBarVerticalExtensionButton",
    "FileDialogStart",
    "FileDialogEnd",
    "FileDialogToParent",
    "FileDialogNewFolder",
    "FileDialogDetailedView",
    "FileDialogInfoView",
    "FileDialogContentsView",
    "FileDialogListView",
    "FileDialogBack",
    "DirIcon",
    "DialogOkButton",
    "DialogCancelButton",
    "DialogHelpButton",
    "DialogOpenButton",
    "DialogSaveButton",
    "DialogCloseButton",
    "DialogApplyButton",
    "DialogResetButton",
    "DialogDiscardButton",
    "DialogYesButton",
    "DialogNoButton",
    "ArrowUp",
    "ArrowDown",
    "ArrowLeft",
    "ArrowRight",
    "ArrowBack",
    "ArrowForward",
    "DirHomeIcon",
    "CommandLink",
    "VistaShield",
    "BrowserReload",
    "BrowserStop",
    "MediaPlay",
    "MediaStop",
    "MediaPause",
    "MediaSkipForward",
    "MediaSkipBackward",
    "MediaSeekForward",
    "MediaSeekBackward",
    "MediaVolume",
    "MediaVolumeMuted",
    "LineEditClearButton",
    "DialogYesToAllButton",
    "DialogNoToAllButton",
    "DialogSaveAllButton",
    "DialogAbortButton",
    "DialogRetryButton",
    "DialogIgnoreButton",
    "RestoreDefaultsButton",
    "TabCloseButton",
    "NStandardPixmap",
    "CustomBase",
    "KeyboardSchemes",
    "WindowsKeyboardScheme",
    "MacKeyboardScheme",
    "X11KeyboardScheme",
    "KdeKeyboardScheme",
    "GnomeKeyboardScheme",
    "CdeKeyboardScheme",
    "UiEffect",
    "GeneralUiEffect",
    "AnimateMenuUiEffect",
    "FadeMenuUiEffect",
    "AnimateComboUiEffect",
    "AnimateTooltipUiEffect",
    "FadeTooltipUiEffect",
    "AnimateToolBoxUiEffect",
    "HoverEffect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPlatformThemeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       7,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   49,   49,
      51,   51, 0x0,    4,  147,
      56,   56, 0x0,   19,  155,
      76,   76, 0x0,   28,  193,
     105,  105, 0x0,   81,  249,
     187,  187, 0x0,    6,  411,
     194,  194, 0x0,    8,  423,

 // enum data: key, value
       2, uint(QPlatformTheme::CursorFlashTime),
       3, uint(QPlatformTheme::KeyboardInputInterval),
       4, uint(QPlatformTheme::MouseDoubleClickInterval),
       5, uint(QPlatformTheme::StartDragDistance),
       6, uint(QPlatformTheme::StartDragTime),
       7, uint(QPlatformTheme::KeyboardAutoRepeatRate),
       8, uint(QPlatformTheme::PasswordMaskDelay),
       9, uint(QPlatformTheme::StartDragVelocity),
      10, uint(QPlatformTheme::TextCursorWidth),
      11, uint(QPlatformTheme::DropShadow),
      12, uint(QPlatformTheme::MaximumScrollBarDragDistance),
      13, uint(QPlatformTheme::ToolButtonStyle),
      14, uint(QPlatformTheme::ToolBarIconSize),
      15, uint(QPlatformTheme::ItemViewActivateItemOnSingleClick),
      16, uint(QPlatformTheme::SystemIconThemeName),
      17, uint(QPlatformTheme::SystemIconFallbackThemeName),
      18, uint(QPlatformTheme::IconThemeSearchPaths),
      19, uint(QPlatformTheme::StyleNames),
      20, uint(QPlatformTheme::WindowAutoPlacement),
      21, uint(QPlatformTheme::DialogButtonBoxLayout),
      22, uint(QPlatformTheme::DialogButtonBoxButtonsHaveIcons),
      23, uint(QPlatformTheme::UseFullScreenForPopupMenu),
      24, uint(QPlatformTheme::KeyboardScheme),
      25, uint(QPlatformTheme::UiEffects),
      26, uint(QPlatformTheme::SpellCheckUnderlineStyle),
      27, uint(QPlatformTheme::TabFocusBehavior),
      28, uint(QPlatformTheme::IconPixmapSizes),
      29, uint(QPlatformTheme::PasswordMaskCharacter),
      30, uint(QPlatformTheme::DialogSnapToDefaultButton),
      31, uint(QPlatformTheme::ContextMenuOnMouseRelease),
      32, uint(QPlatformTheme::MousePressAndHoldInterval),
      33, uint(QPlatformTheme::MouseDoubleClickDistance),
      34, uint(QPlatformTheme::WheelScrollLines),
      35, uint(QPlatformTheme::TouchDoubleTapDistance),
      36, uint(QPlatformTheme::ShowShortcutsInContextMenus),
      37, uint(QPlatformTheme::IconFallbackSearchPaths),
      38, uint(QPlatformTheme::MouseQuickSelectionThreshold),
      39, uint(QPlatformTheme::InteractiveResizeAcrossScreens),
      40, uint(QPlatformTheme::ShowDirectoriesFirst),
      41, uint(QPlatformTheme::PreselectFirstFileInDirectory),
      42, uint(QPlatformTheme::ButtonPressKeys),
      43, uint(QPlatformTheme::SetFocusOnTouchRelease),
      44, uint(QPlatformTheme::FlickStartDistance),
      45, uint(QPlatformTheme::FlickMaximumVelocity),
      46, uint(QPlatformTheme::FlickDeceleration),
      47, uint(QPlatformTheme::MenuBarFocusOnAltPressRelease),
      48, uint(QPlatformTheme::MouseCursorTheme),
      49, uint(QPlatformTheme::MouseCursorSize),
      50, uint(QPlatformTheme::UnderlineShortcut),
      52, uint(QPlatformTheme::FileDialog),
      53, uint(QPlatformTheme::ColorDialog),
      54, uint(QPlatformTheme::FontDialog),
      55, uint(QPlatformTheme::MessageDialog),
      57, uint(QPlatformTheme::SystemPalette),
      58, uint(QPlatformTheme::ToolTipPalette),
      59, uint(QPlatformTheme::ToolButtonPalette),
      60, uint(QPlatformTheme::ButtonPalette),
      61, uint(QPlatformTheme::CheckBoxPalette),
      62, uint(QPlatformTheme::RadioButtonPalette),
      63, uint(QPlatformTheme::HeaderPalette),
      64, uint(QPlatformTheme::ComboBoxPalette),
      65, uint(QPlatformTheme::ItemViewPalette),
      66, uint(QPlatformTheme::MessageBoxLabelPelette),
      67, uint(QPlatformTheme::MessageBoxLabelPalette),
      68, uint(QPlatformTheme::TabBarPalette),
      69, uint(QPlatformTheme::LabelPalette),
      70, uint(QPlatformTheme::GroupBoxPalette),
      71, uint(QPlatformTheme::MenuPalette),
      72, uint(QPlatformTheme::MenuBarPalette),
      73, uint(QPlatformTheme::TextEditPalette),
      74, uint(QPlatformTheme::TextLineEditPalette),
      75, uint(QPlatformTheme::NPalettes),
      77, uint(QPlatformTheme::SystemFont),
      78, uint(QPlatformTheme::MenuFont),
      79, uint(QPlatformTheme::MenuBarFont),
      80, uint(QPlatformTheme::MenuItemFont),
      81, uint(QPlatformTheme::MessageBoxFont),
      82, uint(QPlatformTheme::LabelFont),
      83, uint(QPlatformTheme::TipLabelFont),
      84, uint(QPlatformTheme::StatusBarFont),
      85, uint(QPlatformTheme::TitleBarFont),
      86, uint(QPlatformTheme::MdiSubWindowTitleFont),
      87, uint(QPlatformTheme::DockWidgetTitleFont),
      88, uint(QPlatformTheme::PushButtonFont),
      89, uint(QPlatformTheme::CheckBoxFont),
      90, uint(QPlatformTheme::RadioButtonFont),
      91, uint(QPlatformTheme::ToolButtonFont),
      92, uint(QPlatformTheme::ItemViewFont),
      93, uint(QPlatformTheme::ListViewFont),
      94, uint(QPlatformTheme::HeaderViewFont),
      95, uint(QPlatformTheme::ListBoxFont),
      96, uint(QPlatformTheme::ComboMenuItemFont),
      97, uint(QPlatformTheme::ComboLineEditFont),
      98, uint(QPlatformTheme::SmallFont),
      99, uint(QPlatformTheme::MiniFont),
     100, uint(QPlatformTheme::FixedFont),
     101, uint(QPlatformTheme::GroupBoxTitleFont),
     102, uint(QPlatformTheme::TabButtonFont),
     103, uint(QPlatformTheme::EditorFont),
     104, uint(QPlatformTheme::NFonts),
     106, uint(QPlatformTheme::TitleBarMenuButton),
     107, uint(QPlatformTheme::TitleBarMinButton),
     108, uint(QPlatformTheme::TitleBarMaxButton),
     109, uint(QPlatformTheme::TitleBarCloseButton),
     110, uint(QPlatformTheme::TitleBarNormalButton),
     111, uint(QPlatformTheme::TitleBarShadeButton),
     112, uint(QPlatformTheme::TitleBarUnshadeButton),
     113, uint(QPlatformTheme::TitleBarContextHelpButton),
     114, uint(QPlatformTheme::DockWidgetCloseButton),
     115, uint(QPlatformTheme::MessageBoxInformation),
     116, uint(QPlatformTheme::MessageBoxWarning),
     117, uint(QPlatformTheme::MessageBoxCritical),
     118, uint(QPlatformTheme::MessageBoxQuestion),
     119, uint(QPlatformTheme::DesktopIcon),
     120, uint(QPlatformTheme::TrashIcon),
     121, uint(QPlatformTheme::ComputerIcon),
     122, uint(QPlatformTheme::DriveFDIcon),
     123, uint(QPlatformTheme::DriveHDIcon),
     124, uint(QPlatformTheme::DriveCDIcon),
     125, uint(QPlatformTheme::DriveDVDIcon),
     126, uint(QPlatformTheme::DriveNetIcon),
     127, uint(QPlatformTheme::DirOpenIcon),
     128, uint(QPlatformTheme::DirClosedIcon),
     129, uint(QPlatformTheme::DirLinkIcon),
     130, uint(QPlatformTheme::DirLinkOpenIcon),
     131, uint(QPlatformTheme::FileIcon),
     132, uint(QPlatformTheme::FileLinkIcon),
     133, uint(QPlatformTheme::ToolBarHorizontalExtensionButton),
     134, uint(QPlatformTheme::ToolBarVerticalExtensionButton),
     135, uint(QPlatformTheme::FileDialogStart),
     136, uint(QPlatformTheme::FileDialogEnd),
     137, uint(QPlatformTheme::FileDialogToParent),
     138, uint(QPlatformTheme::FileDialogNewFolder),
     139, uint(QPlatformTheme::FileDialogDetailedView),
     140, uint(QPlatformTheme::FileDialogInfoView),
     141, uint(QPlatformTheme::FileDialogContentsView),
     142, uint(QPlatformTheme::FileDialogListView),
     143, uint(QPlatformTheme::FileDialogBack),
     144, uint(QPlatformTheme::DirIcon),
     145, uint(QPlatformTheme::DialogOkButton),
     146, uint(QPlatformTheme::DialogCancelButton),
     147, uint(QPlatformTheme::DialogHelpButton),
     148, uint(QPlatformTheme::DialogOpenButton),
     149, uint(QPlatformTheme::DialogSaveButton),
     150, uint(QPlatformTheme::DialogCloseButton),
     151, uint(QPlatformTheme::DialogApplyButton),
     152, uint(QPlatformTheme::DialogResetButton),
     153, uint(QPlatformTheme::DialogDiscardButton),
     154, uint(QPlatformTheme::DialogYesButton),
     155, uint(QPlatformTheme::DialogNoButton),
     156, uint(QPlatformTheme::ArrowUp),
     157, uint(QPlatformTheme::ArrowDown),
     158, uint(QPlatformTheme::ArrowLeft),
     159, uint(QPlatformTheme::ArrowRight),
     160, uint(QPlatformTheme::ArrowBack),
     161, uint(QPlatformTheme::ArrowForward),
     162, uint(QPlatformTheme::DirHomeIcon),
     163, uint(QPlatformTheme::CommandLink),
     164, uint(QPlatformTheme::VistaShield),
     165, uint(QPlatformTheme::BrowserReload),
     166, uint(QPlatformTheme::BrowserStop),
     167, uint(QPlatformTheme::MediaPlay),
     168, uint(QPlatformTheme::MediaStop),
     169, uint(QPlatformTheme::MediaPause),
     170, uint(QPlatformTheme::MediaSkipForward),
     171, uint(QPlatformTheme::MediaSkipBackward),
     172, uint(QPlatformTheme::MediaSeekForward),
     173, uint(QPlatformTheme::MediaSeekBackward),
     174, uint(QPlatformTheme::MediaVolume),
     175, uint(QPlatformTheme::MediaVolumeMuted),
     176, uint(QPlatformTheme::LineEditClearButton),
     177, uint(QPlatformTheme::DialogYesToAllButton),
     178, uint(QPlatformTheme::DialogNoToAllButton),
     179, uint(QPlatformTheme::DialogSaveAllButton),
     180, uint(QPlatformTheme::DialogAbortButton),
     181, uint(QPlatformTheme::DialogRetryButton),
     182, uint(QPlatformTheme::DialogIgnoreButton),
     183, uint(QPlatformTheme::RestoreDefaultsButton),
     184, uint(QPlatformTheme::TabCloseButton),
     185, uint(QPlatformTheme::NStandardPixmap),
     186, uint(QPlatformTheme::CustomBase),
     188, uint(QPlatformTheme::WindowsKeyboardScheme),
     189, uint(QPlatformTheme::MacKeyboardScheme),
     190, uint(QPlatformTheme::X11KeyboardScheme),
     191, uint(QPlatformTheme::KdeKeyboardScheme),
     192, uint(QPlatformTheme::GnomeKeyboardScheme),
     193, uint(QPlatformTheme::CdeKeyboardScheme),
     195, uint(QPlatformTheme::GeneralUiEffect),
     196, uint(QPlatformTheme::AnimateMenuUiEffect),
     197, uint(QPlatformTheme::FadeMenuUiEffect),
     198, uint(QPlatformTheme::AnimateComboUiEffect),
     199, uint(QPlatformTheme::AnimateTooltipUiEffect),
     200, uint(QPlatformTheme::FadeTooltipUiEffect),
     201, uint(QPlatformTheme::AnimateToolBoxUiEffect),
     202, uint(QPlatformTheme::HoverEffect),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformTheme::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQPlatformThemeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPlatformThemeENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPlatformThemeENDCLASS_t,
        // enum 'ThemeHint'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::ThemeHint, std::true_type>,
        // enum 'DialogType'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::DialogType, std::true_type>,
        // enum 'Palette'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::Palette, std::true_type>,
        // enum 'Font'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::Font, std::true_type>,
        // enum 'StandardPixmap'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::StandardPixmap, std::true_type>,
        // enum 'KeyboardSchemes'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::KeyboardSchemes, std::true_type>,
        // enum 'UiEffect'
        QtPrivate::TypeAndForceComplete<QPlatformTheme::UiEffect, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformTheme, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
