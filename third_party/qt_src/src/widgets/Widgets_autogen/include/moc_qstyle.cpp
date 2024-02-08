/****************************************************************************
** Meta object code from reading C++ file 'qstyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../styles/qstyle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstyle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQStyleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQStyleENDCLASS = QtMocHelpers::stringData(
    "QStyle",
    "StateFlag",
    "State_None",
    "State_Enabled",
    "State_Raised",
    "State_Sunken",
    "State_Off",
    "State_NoChange",
    "State_On",
    "State_DownArrow",
    "State_Horizontal",
    "State_HasFocus",
    "State_Top",
    "State_Bottom",
    "State_FocusAtBorder",
    "State_AutoRaise",
    "State_MouseOver",
    "State_UpArrow",
    "State_Selected",
    "State_Active",
    "State_Window",
    "State_Open",
    "State_Children",
    "State_Item",
    "State_Sibling",
    "State_Editing",
    "State_KeyboardFocusChange",
    "State_ReadOnly",
    "State_Small",
    "State_Mini",
    "PrimitiveElement",
    "PE_Frame",
    "PE_FrameDefaultButton",
    "PE_FrameDockWidget",
    "PE_FrameFocusRect",
    "PE_FrameGroupBox",
    "PE_FrameLineEdit",
    "PE_FrameMenu",
    "PE_FrameStatusBarItem",
    "PE_FrameTabWidget",
    "PE_FrameWindow",
    "PE_FrameButtonBevel",
    "PE_FrameButtonTool",
    "PE_FrameTabBarBase",
    "PE_PanelButtonCommand",
    "PE_PanelButtonBevel",
    "PE_PanelButtonTool",
    "PE_PanelMenuBar",
    "PE_PanelToolBar",
    "PE_PanelLineEdit",
    "PE_IndicatorArrowDown",
    "PE_IndicatorArrowLeft",
    "PE_IndicatorArrowRight",
    "PE_IndicatorArrowUp",
    "PE_IndicatorBranch",
    "PE_IndicatorButtonDropDown",
    "PE_IndicatorItemViewItemCheck",
    "PE_IndicatorCheckBox",
    "PE_IndicatorDockWidgetResizeHandle",
    "PE_IndicatorHeaderArrow",
    "PE_IndicatorMenuCheckMark",
    "PE_IndicatorProgressChunk",
    "PE_IndicatorRadioButton",
    "PE_IndicatorSpinDown",
    "PE_IndicatorSpinMinus",
    "PE_IndicatorSpinPlus",
    "PE_IndicatorSpinUp",
    "PE_IndicatorToolBarHandle",
    "PE_IndicatorToolBarSeparator",
    "PE_PanelTipLabel",
    "PE_IndicatorTabTear",
    "PE_IndicatorTabTearLeft",
    "PE_PanelScrollAreaCorner",
    "PE_Widget",
    "PE_IndicatorColumnViewArrow",
    "PE_IndicatorItemViewItemDrop",
    "PE_PanelItemViewItem",
    "PE_PanelItemViewRow",
    "PE_PanelStatusBar",
    "PE_IndicatorTabClose",
    "PE_PanelMenu",
    "PE_IndicatorTabTearRight",
    "PE_CustomBase",
    "ControlElement",
    "CE_PushButton",
    "CE_PushButtonBevel",
    "CE_PushButtonLabel",
    "CE_CheckBox",
    "CE_CheckBoxLabel",
    "CE_RadioButton",
    "CE_RadioButtonLabel",
    "CE_TabBarTab",
    "CE_TabBarTabShape",
    "CE_TabBarTabLabel",
    "CE_ProgressBar",
    "CE_ProgressBarGroove",
    "CE_ProgressBarContents",
    "CE_ProgressBarLabel",
    "CE_MenuItem",
    "CE_MenuScroller",
    "CE_MenuVMargin",
    "CE_MenuHMargin",
    "CE_MenuTearoff",
    "CE_MenuEmptyArea",
    "CE_MenuBarItem",
    "CE_MenuBarEmptyArea",
    "CE_ToolButtonLabel",
    "CE_Header",
    "CE_HeaderSection",
    "CE_HeaderLabel",
    "CE_ToolBoxTab",
    "CE_SizeGrip",
    "CE_Splitter",
    "CE_RubberBand",
    "CE_DockWidgetTitle",
    "CE_ScrollBarAddLine",
    "CE_ScrollBarSubLine",
    "CE_ScrollBarAddPage",
    "CE_ScrollBarSubPage",
    "CE_ScrollBarSlider",
    "CE_ScrollBarFirst",
    "CE_ScrollBarLast",
    "CE_FocusFrame",
    "CE_ComboBoxLabel",
    "CE_ToolBar",
    "CE_ToolBoxTabShape",
    "CE_ToolBoxTabLabel",
    "CE_HeaderEmptyArea",
    "CE_ColumnViewGrip",
    "CE_ItemViewItem",
    "CE_ShapedFrame",
    "CE_CustomBase",
    "SubElement",
    "SE_PushButtonContents",
    "SE_PushButtonFocusRect",
    "SE_CheckBoxIndicator",
    "SE_CheckBoxContents",
    "SE_CheckBoxFocusRect",
    "SE_CheckBoxClickRect",
    "SE_RadioButtonIndicator",
    "SE_RadioButtonContents",
    "SE_RadioButtonFocusRect",
    "SE_RadioButtonClickRect",
    "SE_ComboBoxFocusRect",
    "SE_SliderFocusRect",
    "SE_ProgressBarGroove",
    "SE_ProgressBarContents",
    "SE_ProgressBarLabel",
    "SE_ToolBoxTabContents",
    "SE_HeaderLabel",
    "SE_HeaderArrow",
    "SE_TabWidgetTabBar",
    "SE_TabWidgetTabPane",
    "SE_TabWidgetTabContents",
    "SE_TabWidgetLeftCorner",
    "SE_TabWidgetRightCorner",
    "SE_ItemViewItemCheckIndicator",
    "SE_TabBarTearIndicator",
    "SE_TabBarTearIndicatorLeft",
    "SE_TreeViewDisclosureItem",
    "SE_LineEditContents",
    "SE_FrameContents",
    "SE_DockWidgetCloseButton",
    "SE_DockWidgetFloatButton",
    "SE_DockWidgetTitleBarText",
    "SE_DockWidgetIcon",
    "SE_CheckBoxLayoutItem",
    "SE_ComboBoxLayoutItem",
    "SE_DateTimeEditLayoutItem",
    "SE_LabelLayoutItem",
    "SE_ProgressBarLayoutItem",
    "SE_PushButtonLayoutItem",
    "SE_RadioButtonLayoutItem",
    "SE_SliderLayoutItem",
    "SE_SpinBoxLayoutItem",
    "SE_ToolButtonLayoutItem",
    "SE_FrameLayoutItem",
    "SE_GroupBoxLayoutItem",
    "SE_TabWidgetLayoutItem",
    "SE_ItemViewItemDecoration",
    "SE_ItemViewItemText",
    "SE_ItemViewItemFocusRect",
    "SE_TabBarTabLeftButton",
    "SE_TabBarTabRightButton",
    "SE_TabBarTabText",
    "SE_ShapedFrameContents",
    "SE_ToolBarHandle",
    "SE_TabBarScrollLeftButton",
    "SE_TabBarScrollRightButton",
    "SE_TabBarTearIndicatorRight",
    "SE_PushButtonBevel",
    "SE_CustomBase",
    "ComplexControl",
    "CC_SpinBox",
    "CC_ComboBox",
    "CC_ScrollBar",
    "CC_Slider",
    "CC_ToolButton",
    "CC_TitleBar",
    "CC_Dial",
    "CC_GroupBox",
    "CC_MdiControls",
    "CC_CustomBase",
    "SubControl",
    "SC_None",
    "SC_ScrollBarAddLine",
    "SC_ScrollBarSubLine",
    "SC_ScrollBarAddPage",
    "SC_ScrollBarSubPage",
    "SC_ScrollBarFirst",
    "SC_ScrollBarLast",
    "SC_ScrollBarSlider",
    "SC_ScrollBarGroove",
    "SC_SpinBoxUp",
    "SC_SpinBoxDown",
    "SC_SpinBoxFrame",
    "SC_SpinBoxEditField",
    "SC_ComboBoxFrame",
    "SC_ComboBoxEditField",
    "SC_ComboBoxArrow",
    "SC_ComboBoxListBoxPopup",
    "SC_SliderGroove",
    "SC_SliderHandle",
    "SC_SliderTickmarks",
    "SC_ToolButton",
    "SC_ToolButtonMenu",
    "SC_TitleBarSysMenu",
    "SC_TitleBarMinButton",
    "SC_TitleBarMaxButton",
    "SC_TitleBarCloseButton",
    "SC_TitleBarNormalButton",
    "SC_TitleBarShadeButton",
    "SC_TitleBarUnshadeButton",
    "SC_TitleBarContextHelpButton",
    "SC_TitleBarLabel",
    "SC_DialGroove",
    "SC_DialHandle",
    "SC_DialTickmarks",
    "SC_GroupBoxCheckBox",
    "SC_GroupBoxLabel",
    "SC_GroupBoxContents",
    "SC_GroupBoxFrame",
    "SC_MdiMinButton",
    "SC_MdiNormalButton",
    "SC_MdiCloseButton",
    "SC_CustomBase",
    "SC_All",
    "PixelMetric",
    "PM_ButtonMargin",
    "PM_ButtonDefaultIndicator",
    "PM_MenuButtonIndicator",
    "PM_ButtonShiftHorizontal",
    "PM_ButtonShiftVertical",
    "PM_DefaultFrameWidth",
    "PM_SpinBoxFrameWidth",
    "PM_ComboBoxFrameWidth",
    "PM_MaximumDragDistance",
    "PM_ScrollBarExtent",
    "PM_ScrollBarSliderMin",
    "PM_SliderThickness",
    "PM_SliderControlThickness",
    "PM_SliderLength",
    "PM_SliderTickmarkOffset",
    "PM_SliderSpaceAvailable",
    "PM_DockWidgetSeparatorExtent",
    "PM_DockWidgetHandleExtent",
    "PM_DockWidgetFrameWidth",
    "PM_TabBarTabOverlap",
    "PM_TabBarTabHSpace",
    "PM_TabBarTabVSpace",
    "PM_TabBarBaseHeight",
    "PM_TabBarBaseOverlap",
    "PM_ProgressBarChunkWidth",
    "PM_SplitterWidth",
    "PM_TitleBarHeight",
    "PM_MenuScrollerHeight",
    "PM_MenuHMargin",
    "PM_MenuVMargin",
    "PM_MenuPanelWidth",
    "PM_MenuTearoffHeight",
    "PM_MenuDesktopFrameWidth",
    "PM_MenuBarPanelWidth",
    "PM_MenuBarItemSpacing",
    "PM_MenuBarVMargin",
    "PM_MenuBarHMargin",
    "PM_IndicatorWidth",
    "PM_IndicatorHeight",
    "PM_ExclusiveIndicatorWidth",
    "PM_ExclusiveIndicatorHeight",
    "PM_DialogButtonsSeparator",
    "PM_DialogButtonsButtonWidth",
    "PM_DialogButtonsButtonHeight",
    "PM_MdiSubWindowFrameWidth",
    "PM_MdiSubWindowMinimizedWidth",
    "PM_HeaderMargin",
    "PM_HeaderMarkSize",
    "PM_HeaderGripMargin",
    "PM_TabBarTabShiftHorizontal",
    "PM_TabBarTabShiftVertical",
    "PM_TabBarScrollButtonWidth",
    "PM_ToolBarFrameWidth",
    "PM_ToolBarHandleExtent",
    "PM_ToolBarItemSpacing",
    "PM_ToolBarItemMargin",
    "PM_ToolBarSeparatorExtent",
    "PM_ToolBarExtensionExtent",
    "PM_SpinBoxSliderHeight",
    "PM_ToolBarIconSize",
    "PM_ListViewIconSize",
    "PM_IconViewIconSize",
    "PM_SmallIconSize",
    "PM_LargeIconSize",
    "PM_FocusFrameVMargin",
    "PM_FocusFrameHMargin",
    "PM_ToolTipLabelFrameWidth",
    "PM_CheckBoxLabelSpacing",
    "PM_TabBarIconSize",
    "PM_SizeGripSize",
    "PM_DockWidgetTitleMargin",
    "PM_MessageBoxIconSize",
    "PM_ButtonIconSize",
    "PM_DockWidgetTitleBarButtonMargin",
    "PM_RadioButtonLabelSpacing",
    "PM_LayoutLeftMargin",
    "PM_LayoutTopMargin",
    "PM_LayoutRightMargin",
    "PM_LayoutBottomMargin",
    "PM_LayoutHorizontalSpacing",
    "PM_LayoutVerticalSpacing",
    "PM_TabBar_ScrollButtonOverlap",
    "PM_TextCursorWidth",
    "PM_TabCloseIndicatorWidth",
    "PM_TabCloseIndicatorHeight",
    "PM_ScrollView_ScrollBarSpacing",
    "PM_ScrollView_ScrollBarOverlap",
    "PM_SubMenuOverlap",
    "PM_TreeViewIndentation",
    "PM_HeaderDefaultSectionSizeHorizontal",
    "PM_HeaderDefaultSectionSizeVertical",
    "PM_TitleBarButtonIconSize",
    "PM_TitleBarButtonSize",
    "PM_LineEditIconSize",
    "PM_LineEditIconMargin",
    "PM_CustomBase",
    "ContentsType",
    "CT_PushButton",
    "CT_CheckBox",
    "CT_RadioButton",
    "CT_ToolButton",
    "CT_ComboBox",
    "CT_Splitter",
    "CT_ProgressBar",
    "CT_MenuItem",
    "CT_MenuBarItem",
    "CT_MenuBar",
    "CT_Menu",
    "CT_TabBarTab",
    "CT_Slider",
    "CT_ScrollBar",
    "CT_LineEdit",
    "CT_SpinBox",
    "CT_SizeGrip",
    "CT_TabWidget",
    "CT_DialogButtons",
    "CT_HeaderSection",
    "CT_GroupBox",
    "CT_MdiControls",
    "CT_ItemViewItem",
    "CT_CustomBase",
    "RequestSoftwareInputPanel",
    "RSIP_OnMouseClickAndAlreadyFocused",
    "RSIP_OnMouseClick",
    "StyleHint",
    "SH_EtchDisabledText",
    "SH_DitherDisabledText",
    "SH_ScrollBar_MiddleClickAbsolutePosition",
    "SH_ScrollBar_ScrollWhenPointerLeavesControl",
    "SH_TabBar_SelectMouseType",
    "SH_TabBar_Alignment",
    "SH_Header_ArrowAlignment",
    "SH_Slider_SnapToValue",
    "SH_Slider_SloppyKeyEvents",
    "SH_ProgressDialog_CenterCancelButton",
    "SH_ProgressDialog_TextLabelAlignment",
    "SH_PrintDialog_RightAlignButtons",
    "SH_MainWindow_SpaceBelowMenuBar",
    "SH_FontDialog_SelectAssociatedText",
    "SH_Menu_AllowActiveAndDisabled",
    "SH_Menu_SpaceActivatesItem",
    "SH_Menu_SubMenuPopupDelay",
    "SH_ScrollView_FrameOnlyAroundContents",
    "SH_MenuBar_AltKeyNavigation",
    "SH_ComboBox_ListMouseTracking",
    "SH_Menu_MouseTracking",
    "SH_MenuBar_MouseTracking",
    "SH_ItemView_ChangeHighlightOnFocus",
    "SH_Widget_ShareActivation",
    "SH_Workspace_FillSpaceOnMaximize",
    "SH_ComboBox_Popup",
    "SH_TitleBar_NoBorder",
    "SH_Slider_StopMouseOverSlider",
    "SH_BlinkCursorWhenTextSelected",
    "SH_RichText_FullWidthSelection",
    "SH_Menu_Scrollable",
    "SH_GroupBox_TextLabelVerticalAlignment",
    "SH_GroupBox_TextLabelColor",
    "SH_Menu_SloppySubMenus",
    "SH_Table_GridLineColor",
    "SH_LineEdit_PasswordCharacter",
    "SH_DialogButtons_DefaultButton",
    "SH_ToolBox_SelectedPageTitleBold",
    "SH_TabBar_PreferNoArrows",
    "SH_ScrollBar_LeftClickAbsolutePosition",
    "SH_ListViewExpand_SelectMouseType",
    "SH_UnderlineShortcut",
    "SH_SpinBox_AnimateButton",
    "SH_SpinBox_KeyPressAutoRepeatRate",
    "SH_SpinBox_ClickAutoRepeatRate",
    "SH_Menu_FillScreenWithScroll",
    "SH_ToolTipLabel_Opacity",
    "SH_DrawMenuBarSeparator",
    "SH_TitleBar_ModifyNotification",
    "SH_Button_FocusPolicy",
    "SH_MessageBox_UseBorderForButtonSpacing",
    "SH_TitleBar_AutoRaise",
    "SH_ToolButton_PopupDelay",
    "SH_FocusFrame_Mask",
    "SH_RubberBand_Mask",
    "SH_WindowFrame_Mask",
    "SH_SpinControls_DisableOnBounds",
    "SH_Dial_BackgroundRole",
    "SH_ComboBox_LayoutDirection",
    "SH_ItemView_EllipsisLocation",
    "SH_ItemView_ShowDecorationSelected",
    "SH_ItemView_ActivateItemOnSingleClick",
    "SH_ScrollBar_ContextMenu",
    "SH_ScrollBar_RollBetweenButtons",
    "SH_Slider_AbsoluteSetButtons",
    "SH_Slider_PageSetButtons",
    "SH_Menu_KeyboardSearch",
    "SH_TabBar_ElideMode",
    "SH_DialogButtonLayout",
    "SH_ComboBox_PopupFrameStyle",
    "SH_MessageBox_TextInteractionFlags",
    "SH_DialogButtonBox_ButtonsHaveIcons",
    "SH_MessageBox_CenterButtons",
    "SH_Menu_SelectionWrap",
    "SH_ItemView_MovementWithoutUpdatingSelection",
    "SH_ToolTip_Mask",
    "SH_FocusFrame_AboveWidget",
    "SH_TextControl_FocusIndicatorTextCharFormat",
    "SH_WizardStyle",
    "SH_ItemView_ArrowKeysNavigateIntoChildren",
    "SH_Menu_Mask",
    "SH_Menu_FlashTriggeredItem",
    "SH_Menu_FadeOutOnHide",
    "SH_SpinBox_ClickAutoRepeatThreshold",
    "SH_ItemView_PaintAlternatingRowColorsForEmptyArea",
    "SH_FormLayoutWrapPolicy",
    "SH_TabWidget_DefaultTabPosition",
    "SH_ToolBar_Movable",
    "SH_FormLayoutFieldGrowthPolicy",
    "SH_FormLayoutFormAlignment",
    "SH_FormLayoutLabelAlignment",
    "SH_ItemView_DrawDelegateFrame",
    "SH_TabBar_CloseButtonPosition",
    "SH_DockWidget_ButtonsHaveFrame",
    "SH_ToolButtonStyle",
    "SH_RequestSoftwareInputPanel",
    "SH_ScrollBar_Transient",
    "SH_Menu_SupportsSections",
    "SH_ToolTip_WakeUpDelay",
    "SH_ToolTip_FallAsleepDelay",
    "SH_Widget_Animate",
    "SH_Splitter_OpaqueResize",
    "SH_ComboBox_UseNativePopup",
    "SH_LineEdit_PasswordMaskDelay",
    "SH_TabBar_ChangeCurrentDelay",
    "SH_Menu_SubMenuUniDirection",
    "SH_Menu_SubMenuUniDirectionFailCount",
    "SH_Menu_SubMenuSloppySelectOtherActions",
    "SH_Menu_SubMenuSloppyCloseTimeout",
    "SH_Menu_SubMenuResetWhenReenteringParent",
    "SH_Menu_SubMenuDontStartSloppyOnLeave",
    "SH_ItemView_ScrollMode",
    "SH_TitleBar_ShowToolTipsOnButtons",
    "SH_Widget_Animation_Duration",
    "SH_ComboBox_AllowWheelScrolling",
    "SH_SpinBox_ButtonsInsideFrame",
    "SH_SpinBox_StepModifier",
    "SH_TabBar_AllowWheelScrolling",
    "SH_Table_AlwaysDrawLeftTopGridLines",
    "SH_SpinBox_SelectOnStep",
    "SH_CustomBase",
    "StandardPixmap",
    "SP_TitleBarMenuButton",
    "SP_TitleBarMinButton",
    "SP_TitleBarMaxButton",
    "SP_TitleBarCloseButton",
    "SP_TitleBarNormalButton",
    "SP_TitleBarShadeButton",
    "SP_TitleBarUnshadeButton",
    "SP_TitleBarContextHelpButton",
    "SP_DockWidgetCloseButton",
    "SP_MessageBoxInformation",
    "SP_MessageBoxWarning",
    "SP_MessageBoxCritical",
    "SP_MessageBoxQuestion",
    "SP_DesktopIcon",
    "SP_TrashIcon",
    "SP_ComputerIcon",
    "SP_DriveFDIcon",
    "SP_DriveHDIcon",
    "SP_DriveCDIcon",
    "SP_DriveDVDIcon",
    "SP_DriveNetIcon",
    "SP_DirOpenIcon",
    "SP_DirClosedIcon",
    "SP_DirLinkIcon",
    "SP_DirLinkOpenIcon",
    "SP_FileIcon",
    "SP_FileLinkIcon",
    "SP_ToolBarHorizontalExtensionButton",
    "SP_ToolBarVerticalExtensionButton",
    "SP_FileDialogStart",
    "SP_FileDialogEnd",
    "SP_FileDialogToParent",
    "SP_FileDialogNewFolder",
    "SP_FileDialogDetailedView",
    "SP_FileDialogInfoView",
    "SP_FileDialogContentsView",
    "SP_FileDialogListView",
    "SP_FileDialogBack",
    "SP_DirIcon",
    "SP_DialogOkButton",
    "SP_DialogCancelButton",
    "SP_DialogHelpButton",
    "SP_DialogOpenButton",
    "SP_DialogSaveButton",
    "SP_DialogCloseButton",
    "SP_DialogApplyButton",
    "SP_DialogResetButton",
    "SP_DialogDiscardButton",
    "SP_DialogYesButton",
    "SP_DialogNoButton",
    "SP_ArrowUp",
    "SP_ArrowDown",
    "SP_ArrowLeft",
    "SP_ArrowRight",
    "SP_ArrowBack",
    "SP_ArrowForward",
    "SP_DirHomeIcon",
    "SP_CommandLink",
    "SP_VistaShield",
    "SP_BrowserReload",
    "SP_BrowserStop",
    "SP_MediaPlay",
    "SP_MediaStop",
    "SP_MediaPause",
    "SP_MediaSkipForward",
    "SP_MediaSkipBackward",
    "SP_MediaSeekForward",
    "SP_MediaSeekBackward",
    "SP_MediaVolume",
    "SP_MediaVolumeMuted",
    "SP_LineEditClearButton",
    "SP_DialogYesToAllButton",
    "SP_DialogNoToAllButton",
    "SP_DialogSaveAllButton",
    "SP_DialogAbortButton",
    "SP_DialogRetryButton",
    "SP_DialogIgnoreButton",
    "SP_RestoreDefaultsButton",
    "SP_TabCloseButton",
    "NStandardPixmap",
    "SP_CustomBase"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQStyleENDCLASS_t {
    uint offsetsAndSizes[1152];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[11];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[15];
    char stringdata8[9];
    char stringdata9[16];
    char stringdata10[17];
    char stringdata11[15];
    char stringdata12[10];
    char stringdata13[13];
    char stringdata14[20];
    char stringdata15[16];
    char stringdata16[16];
    char stringdata17[14];
    char stringdata18[15];
    char stringdata19[13];
    char stringdata20[13];
    char stringdata21[11];
    char stringdata22[15];
    char stringdata23[11];
    char stringdata24[14];
    char stringdata25[14];
    char stringdata26[26];
    char stringdata27[15];
    char stringdata28[12];
    char stringdata29[11];
    char stringdata30[17];
    char stringdata31[9];
    char stringdata32[22];
    char stringdata33[19];
    char stringdata34[18];
    char stringdata35[17];
    char stringdata36[17];
    char stringdata37[13];
    char stringdata38[22];
    char stringdata39[18];
    char stringdata40[15];
    char stringdata41[20];
    char stringdata42[19];
    char stringdata43[19];
    char stringdata44[22];
    char stringdata45[20];
    char stringdata46[19];
    char stringdata47[16];
    char stringdata48[16];
    char stringdata49[17];
    char stringdata50[22];
    char stringdata51[22];
    char stringdata52[23];
    char stringdata53[20];
    char stringdata54[19];
    char stringdata55[27];
    char stringdata56[30];
    char stringdata57[21];
    char stringdata58[35];
    char stringdata59[24];
    char stringdata60[26];
    char stringdata61[26];
    char stringdata62[24];
    char stringdata63[21];
    char stringdata64[22];
    char stringdata65[21];
    char stringdata66[19];
    char stringdata67[26];
    char stringdata68[29];
    char stringdata69[17];
    char stringdata70[20];
    char stringdata71[24];
    char stringdata72[25];
    char stringdata73[10];
    char stringdata74[28];
    char stringdata75[29];
    char stringdata76[21];
    char stringdata77[20];
    char stringdata78[18];
    char stringdata79[21];
    char stringdata80[13];
    char stringdata81[25];
    char stringdata82[14];
    char stringdata83[15];
    char stringdata84[14];
    char stringdata85[19];
    char stringdata86[19];
    char stringdata87[12];
    char stringdata88[17];
    char stringdata89[15];
    char stringdata90[20];
    char stringdata91[13];
    char stringdata92[18];
    char stringdata93[18];
    char stringdata94[15];
    char stringdata95[21];
    char stringdata96[23];
    char stringdata97[20];
    char stringdata98[12];
    char stringdata99[16];
    char stringdata100[15];
    char stringdata101[15];
    char stringdata102[15];
    char stringdata103[17];
    char stringdata104[15];
    char stringdata105[20];
    char stringdata106[19];
    char stringdata107[10];
    char stringdata108[17];
    char stringdata109[15];
    char stringdata110[14];
    char stringdata111[12];
    char stringdata112[12];
    char stringdata113[14];
    char stringdata114[19];
    char stringdata115[20];
    char stringdata116[20];
    char stringdata117[20];
    char stringdata118[20];
    char stringdata119[19];
    char stringdata120[18];
    char stringdata121[17];
    char stringdata122[14];
    char stringdata123[17];
    char stringdata124[11];
    char stringdata125[19];
    char stringdata126[19];
    char stringdata127[19];
    char stringdata128[18];
    char stringdata129[16];
    char stringdata130[15];
    char stringdata131[14];
    char stringdata132[11];
    char stringdata133[22];
    char stringdata134[23];
    char stringdata135[21];
    char stringdata136[20];
    char stringdata137[21];
    char stringdata138[21];
    char stringdata139[24];
    char stringdata140[23];
    char stringdata141[24];
    char stringdata142[24];
    char stringdata143[21];
    char stringdata144[19];
    char stringdata145[21];
    char stringdata146[23];
    char stringdata147[20];
    char stringdata148[22];
    char stringdata149[15];
    char stringdata150[15];
    char stringdata151[19];
    char stringdata152[20];
    char stringdata153[24];
    char stringdata154[23];
    char stringdata155[24];
    char stringdata156[30];
    char stringdata157[23];
    char stringdata158[27];
    char stringdata159[26];
    char stringdata160[20];
    char stringdata161[17];
    char stringdata162[25];
    char stringdata163[25];
    char stringdata164[26];
    char stringdata165[18];
    char stringdata166[22];
    char stringdata167[22];
    char stringdata168[26];
    char stringdata169[19];
    char stringdata170[25];
    char stringdata171[24];
    char stringdata172[25];
    char stringdata173[20];
    char stringdata174[21];
    char stringdata175[24];
    char stringdata176[19];
    char stringdata177[22];
    char stringdata178[23];
    char stringdata179[26];
    char stringdata180[20];
    char stringdata181[25];
    char stringdata182[23];
    char stringdata183[24];
    char stringdata184[17];
    char stringdata185[23];
    char stringdata186[17];
    char stringdata187[26];
    char stringdata188[27];
    char stringdata189[28];
    char stringdata190[19];
    char stringdata191[14];
    char stringdata192[15];
    char stringdata193[11];
    char stringdata194[12];
    char stringdata195[13];
    char stringdata196[10];
    char stringdata197[14];
    char stringdata198[12];
    char stringdata199[8];
    char stringdata200[12];
    char stringdata201[15];
    char stringdata202[14];
    char stringdata203[11];
    char stringdata204[8];
    char stringdata205[20];
    char stringdata206[20];
    char stringdata207[20];
    char stringdata208[20];
    char stringdata209[18];
    char stringdata210[17];
    char stringdata211[19];
    char stringdata212[19];
    char stringdata213[13];
    char stringdata214[15];
    char stringdata215[16];
    char stringdata216[20];
    char stringdata217[17];
    char stringdata218[21];
    char stringdata219[17];
    char stringdata220[24];
    char stringdata221[16];
    char stringdata222[16];
    char stringdata223[19];
    char stringdata224[14];
    char stringdata225[18];
    char stringdata226[19];
    char stringdata227[21];
    char stringdata228[21];
    char stringdata229[23];
    char stringdata230[24];
    char stringdata231[23];
    char stringdata232[25];
    char stringdata233[29];
    char stringdata234[17];
    char stringdata235[14];
    char stringdata236[14];
    char stringdata237[17];
    char stringdata238[20];
    char stringdata239[17];
    char stringdata240[20];
    char stringdata241[17];
    char stringdata242[16];
    char stringdata243[19];
    char stringdata244[18];
    char stringdata245[14];
    char stringdata246[7];
    char stringdata247[12];
    char stringdata248[16];
    char stringdata249[26];
    char stringdata250[23];
    char stringdata251[25];
    char stringdata252[23];
    char stringdata253[21];
    char stringdata254[21];
    char stringdata255[22];
    char stringdata256[23];
    char stringdata257[19];
    char stringdata258[22];
    char stringdata259[19];
    char stringdata260[26];
    char stringdata261[16];
    char stringdata262[24];
    char stringdata263[24];
    char stringdata264[29];
    char stringdata265[26];
    char stringdata266[24];
    char stringdata267[20];
    char stringdata268[19];
    char stringdata269[19];
    char stringdata270[20];
    char stringdata271[21];
    char stringdata272[25];
    char stringdata273[17];
    char stringdata274[18];
    char stringdata275[22];
    char stringdata276[15];
    char stringdata277[15];
    char stringdata278[18];
    char stringdata279[21];
    char stringdata280[25];
    char stringdata281[21];
    char stringdata282[22];
    char stringdata283[18];
    char stringdata284[18];
    char stringdata285[18];
    char stringdata286[19];
    char stringdata287[27];
    char stringdata288[28];
    char stringdata289[26];
    char stringdata290[28];
    char stringdata291[29];
    char stringdata292[26];
    char stringdata293[30];
    char stringdata294[16];
    char stringdata295[18];
    char stringdata296[20];
    char stringdata297[28];
    char stringdata298[26];
    char stringdata299[27];
    char stringdata300[21];
    char stringdata301[23];
    char stringdata302[22];
    char stringdata303[21];
    char stringdata304[26];
    char stringdata305[26];
    char stringdata306[23];
    char stringdata307[19];
    char stringdata308[20];
    char stringdata309[20];
    char stringdata310[17];
    char stringdata311[17];
    char stringdata312[21];
    char stringdata313[21];
    char stringdata314[26];
    char stringdata315[24];
    char stringdata316[18];
    char stringdata317[16];
    char stringdata318[25];
    char stringdata319[22];
    char stringdata320[18];
    char stringdata321[34];
    char stringdata322[27];
    char stringdata323[20];
    char stringdata324[19];
    char stringdata325[21];
    char stringdata326[22];
    char stringdata327[27];
    char stringdata328[25];
    char stringdata329[30];
    char stringdata330[19];
    char stringdata331[26];
    char stringdata332[27];
    char stringdata333[31];
    char stringdata334[31];
    char stringdata335[18];
    char stringdata336[23];
    char stringdata337[38];
    char stringdata338[36];
    char stringdata339[26];
    char stringdata340[22];
    char stringdata341[20];
    char stringdata342[22];
    char stringdata343[14];
    char stringdata344[13];
    char stringdata345[14];
    char stringdata346[12];
    char stringdata347[15];
    char stringdata348[14];
    char stringdata349[12];
    char stringdata350[12];
    char stringdata351[15];
    char stringdata352[12];
    char stringdata353[15];
    char stringdata354[11];
    char stringdata355[8];
    char stringdata356[13];
    char stringdata357[10];
    char stringdata358[13];
    char stringdata359[12];
    char stringdata360[11];
    char stringdata361[12];
    char stringdata362[13];
    char stringdata363[17];
    char stringdata364[17];
    char stringdata365[12];
    char stringdata366[15];
    char stringdata367[16];
    char stringdata368[14];
    char stringdata369[26];
    char stringdata370[35];
    char stringdata371[18];
    char stringdata372[10];
    char stringdata373[20];
    char stringdata374[22];
    char stringdata375[41];
    char stringdata376[44];
    char stringdata377[26];
    char stringdata378[20];
    char stringdata379[25];
    char stringdata380[22];
    char stringdata381[26];
    char stringdata382[37];
    char stringdata383[37];
    char stringdata384[33];
    char stringdata385[32];
    char stringdata386[35];
    char stringdata387[31];
    char stringdata388[27];
    char stringdata389[26];
    char stringdata390[38];
    char stringdata391[28];
    char stringdata392[30];
    char stringdata393[22];
    char stringdata394[25];
    char stringdata395[35];
    char stringdata396[26];
    char stringdata397[33];
    char stringdata398[18];
    char stringdata399[21];
    char stringdata400[30];
    char stringdata401[31];
    char stringdata402[31];
    char stringdata403[19];
    char stringdata404[39];
    char stringdata405[27];
    char stringdata406[23];
    char stringdata407[23];
    char stringdata408[30];
    char stringdata409[31];
    char stringdata410[33];
    char stringdata411[25];
    char stringdata412[39];
    char stringdata413[34];
    char stringdata414[21];
    char stringdata415[25];
    char stringdata416[34];
    char stringdata417[31];
    char stringdata418[29];
    char stringdata419[24];
    char stringdata420[24];
    char stringdata421[31];
    char stringdata422[22];
    char stringdata423[40];
    char stringdata424[22];
    char stringdata425[25];
    char stringdata426[19];
    char stringdata427[19];
    char stringdata428[20];
    char stringdata429[32];
    char stringdata430[23];
    char stringdata431[28];
    char stringdata432[29];
    char stringdata433[35];
    char stringdata434[38];
    char stringdata435[25];
    char stringdata436[32];
    char stringdata437[29];
    char stringdata438[25];
    char stringdata439[23];
    char stringdata440[20];
    char stringdata441[22];
    char stringdata442[28];
    char stringdata443[35];
    char stringdata444[36];
    char stringdata445[28];
    char stringdata446[22];
    char stringdata447[45];
    char stringdata448[16];
    char stringdata449[26];
    char stringdata450[44];
    char stringdata451[15];
    char stringdata452[42];
    char stringdata453[13];
    char stringdata454[27];
    char stringdata455[22];
    char stringdata456[36];
    char stringdata457[50];
    char stringdata458[24];
    char stringdata459[32];
    char stringdata460[19];
    char stringdata461[31];
    char stringdata462[27];
    char stringdata463[28];
    char stringdata464[30];
    char stringdata465[30];
    char stringdata466[31];
    char stringdata467[19];
    char stringdata468[29];
    char stringdata469[23];
    char stringdata470[25];
    char stringdata471[23];
    char stringdata472[27];
    char stringdata473[18];
    char stringdata474[25];
    char stringdata475[27];
    char stringdata476[30];
    char stringdata477[29];
    char stringdata478[28];
    char stringdata479[37];
    char stringdata480[40];
    char stringdata481[34];
    char stringdata482[41];
    char stringdata483[38];
    char stringdata484[23];
    char stringdata485[34];
    char stringdata486[29];
    char stringdata487[32];
    char stringdata488[30];
    char stringdata489[24];
    char stringdata490[30];
    char stringdata491[36];
    char stringdata492[24];
    char stringdata493[14];
    char stringdata494[15];
    char stringdata495[22];
    char stringdata496[21];
    char stringdata497[21];
    char stringdata498[23];
    char stringdata499[24];
    char stringdata500[23];
    char stringdata501[25];
    char stringdata502[29];
    char stringdata503[25];
    char stringdata504[25];
    char stringdata505[21];
    char stringdata506[22];
    char stringdata507[22];
    char stringdata508[15];
    char stringdata509[13];
    char stringdata510[16];
    char stringdata511[15];
    char stringdata512[15];
    char stringdata513[15];
    char stringdata514[16];
    char stringdata515[16];
    char stringdata516[15];
    char stringdata517[17];
    char stringdata518[15];
    char stringdata519[19];
    char stringdata520[12];
    char stringdata521[16];
    char stringdata522[36];
    char stringdata523[34];
    char stringdata524[19];
    char stringdata525[17];
    char stringdata526[22];
    char stringdata527[23];
    char stringdata528[26];
    char stringdata529[22];
    char stringdata530[26];
    char stringdata531[22];
    char stringdata532[18];
    char stringdata533[11];
    char stringdata534[18];
    char stringdata535[22];
    char stringdata536[20];
    char stringdata537[20];
    char stringdata538[20];
    char stringdata539[21];
    char stringdata540[21];
    char stringdata541[21];
    char stringdata542[23];
    char stringdata543[19];
    char stringdata544[18];
    char stringdata545[11];
    char stringdata546[13];
    char stringdata547[13];
    char stringdata548[14];
    char stringdata549[13];
    char stringdata550[16];
    char stringdata551[15];
    char stringdata552[15];
    char stringdata553[15];
    char stringdata554[17];
    char stringdata555[15];
    char stringdata556[13];
    char stringdata557[13];
    char stringdata558[14];
    char stringdata559[20];
    char stringdata560[21];
    char stringdata561[20];
    char stringdata562[21];
    char stringdata563[15];
    char stringdata564[20];
    char stringdata565[23];
    char stringdata566[24];
    char stringdata567[23];
    char stringdata568[23];
    char stringdata569[21];
    char stringdata570[21];
    char stringdata571[22];
    char stringdata572[25];
    char stringdata573[18];
    char stringdata574[16];
    char stringdata575[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQStyleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQStyleENDCLASS_t qt_meta_stringdata_CLASSQStyleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QStyle"
        QT_MOC_LITERAL(7, 9),  // "StateFlag"
        QT_MOC_LITERAL(17, 10),  // "State_None"
        QT_MOC_LITERAL(28, 13),  // "State_Enabled"
        QT_MOC_LITERAL(42, 12),  // "State_Raised"
        QT_MOC_LITERAL(55, 12),  // "State_Sunken"
        QT_MOC_LITERAL(68, 9),  // "State_Off"
        QT_MOC_LITERAL(78, 14),  // "State_NoChange"
        QT_MOC_LITERAL(93, 8),  // "State_On"
        QT_MOC_LITERAL(102, 15),  // "State_DownArrow"
        QT_MOC_LITERAL(118, 16),  // "State_Horizontal"
        QT_MOC_LITERAL(135, 14),  // "State_HasFocus"
        QT_MOC_LITERAL(150, 9),  // "State_Top"
        QT_MOC_LITERAL(160, 12),  // "State_Bottom"
        QT_MOC_LITERAL(173, 19),  // "State_FocusAtBorder"
        QT_MOC_LITERAL(193, 15),  // "State_AutoRaise"
        QT_MOC_LITERAL(209, 15),  // "State_MouseOver"
        QT_MOC_LITERAL(225, 13),  // "State_UpArrow"
        QT_MOC_LITERAL(239, 14),  // "State_Selected"
        QT_MOC_LITERAL(254, 12),  // "State_Active"
        QT_MOC_LITERAL(267, 12),  // "State_Window"
        QT_MOC_LITERAL(280, 10),  // "State_Open"
        QT_MOC_LITERAL(291, 14),  // "State_Children"
        QT_MOC_LITERAL(306, 10),  // "State_Item"
        QT_MOC_LITERAL(317, 13),  // "State_Sibling"
        QT_MOC_LITERAL(331, 13),  // "State_Editing"
        QT_MOC_LITERAL(345, 25),  // "State_KeyboardFocusChange"
        QT_MOC_LITERAL(371, 14),  // "State_ReadOnly"
        QT_MOC_LITERAL(386, 11),  // "State_Small"
        QT_MOC_LITERAL(398, 10),  // "State_Mini"
        QT_MOC_LITERAL(409, 16),  // "PrimitiveElement"
        QT_MOC_LITERAL(426, 8),  // "PE_Frame"
        QT_MOC_LITERAL(435, 21),  // "PE_FrameDefaultButton"
        QT_MOC_LITERAL(457, 18),  // "PE_FrameDockWidget"
        QT_MOC_LITERAL(476, 17),  // "PE_FrameFocusRect"
        QT_MOC_LITERAL(494, 16),  // "PE_FrameGroupBox"
        QT_MOC_LITERAL(511, 16),  // "PE_FrameLineEdit"
        QT_MOC_LITERAL(528, 12),  // "PE_FrameMenu"
        QT_MOC_LITERAL(541, 21),  // "PE_FrameStatusBarItem"
        QT_MOC_LITERAL(563, 17),  // "PE_FrameTabWidget"
        QT_MOC_LITERAL(581, 14),  // "PE_FrameWindow"
        QT_MOC_LITERAL(596, 19),  // "PE_FrameButtonBevel"
        QT_MOC_LITERAL(616, 18),  // "PE_FrameButtonTool"
        QT_MOC_LITERAL(635, 18),  // "PE_FrameTabBarBase"
        QT_MOC_LITERAL(654, 21),  // "PE_PanelButtonCommand"
        QT_MOC_LITERAL(676, 19),  // "PE_PanelButtonBevel"
        QT_MOC_LITERAL(696, 18),  // "PE_PanelButtonTool"
        QT_MOC_LITERAL(715, 15),  // "PE_PanelMenuBar"
        QT_MOC_LITERAL(731, 15),  // "PE_PanelToolBar"
        QT_MOC_LITERAL(747, 16),  // "PE_PanelLineEdit"
        QT_MOC_LITERAL(764, 21),  // "PE_IndicatorArrowDown"
        QT_MOC_LITERAL(786, 21),  // "PE_IndicatorArrowLeft"
        QT_MOC_LITERAL(808, 22),  // "PE_IndicatorArrowRight"
        QT_MOC_LITERAL(831, 19),  // "PE_IndicatorArrowUp"
        QT_MOC_LITERAL(851, 18),  // "PE_IndicatorBranch"
        QT_MOC_LITERAL(870, 26),  // "PE_IndicatorButtonDropDown"
        QT_MOC_LITERAL(897, 29),  // "PE_IndicatorItemViewItemCheck"
        QT_MOC_LITERAL(927, 20),  // "PE_IndicatorCheckBox"
        QT_MOC_LITERAL(948, 34),  // "PE_IndicatorDockWidgetResizeH..."
        QT_MOC_LITERAL(983, 23),  // "PE_IndicatorHeaderArrow"
        QT_MOC_LITERAL(1007, 25),  // "PE_IndicatorMenuCheckMark"
        QT_MOC_LITERAL(1033, 25),  // "PE_IndicatorProgressChunk"
        QT_MOC_LITERAL(1059, 23),  // "PE_IndicatorRadioButton"
        QT_MOC_LITERAL(1083, 20),  // "PE_IndicatorSpinDown"
        QT_MOC_LITERAL(1104, 21),  // "PE_IndicatorSpinMinus"
        QT_MOC_LITERAL(1126, 20),  // "PE_IndicatorSpinPlus"
        QT_MOC_LITERAL(1147, 18),  // "PE_IndicatorSpinUp"
        QT_MOC_LITERAL(1166, 25),  // "PE_IndicatorToolBarHandle"
        QT_MOC_LITERAL(1192, 28),  // "PE_IndicatorToolBarSeparator"
        QT_MOC_LITERAL(1221, 16),  // "PE_PanelTipLabel"
        QT_MOC_LITERAL(1238, 19),  // "PE_IndicatorTabTear"
        QT_MOC_LITERAL(1258, 23),  // "PE_IndicatorTabTearLeft"
        QT_MOC_LITERAL(1282, 24),  // "PE_PanelScrollAreaCorner"
        QT_MOC_LITERAL(1307, 9),  // "PE_Widget"
        QT_MOC_LITERAL(1317, 27),  // "PE_IndicatorColumnViewArrow"
        QT_MOC_LITERAL(1345, 28),  // "PE_IndicatorItemViewItemDrop"
        QT_MOC_LITERAL(1374, 20),  // "PE_PanelItemViewItem"
        QT_MOC_LITERAL(1395, 19),  // "PE_PanelItemViewRow"
        QT_MOC_LITERAL(1415, 17),  // "PE_PanelStatusBar"
        QT_MOC_LITERAL(1433, 20),  // "PE_IndicatorTabClose"
        QT_MOC_LITERAL(1454, 12),  // "PE_PanelMenu"
        QT_MOC_LITERAL(1467, 24),  // "PE_IndicatorTabTearRight"
        QT_MOC_LITERAL(1492, 13),  // "PE_CustomBase"
        QT_MOC_LITERAL(1506, 14),  // "ControlElement"
        QT_MOC_LITERAL(1521, 13),  // "CE_PushButton"
        QT_MOC_LITERAL(1535, 18),  // "CE_PushButtonBevel"
        QT_MOC_LITERAL(1554, 18),  // "CE_PushButtonLabel"
        QT_MOC_LITERAL(1573, 11),  // "CE_CheckBox"
        QT_MOC_LITERAL(1585, 16),  // "CE_CheckBoxLabel"
        QT_MOC_LITERAL(1602, 14),  // "CE_RadioButton"
        QT_MOC_LITERAL(1617, 19),  // "CE_RadioButtonLabel"
        QT_MOC_LITERAL(1637, 12),  // "CE_TabBarTab"
        QT_MOC_LITERAL(1650, 17),  // "CE_TabBarTabShape"
        QT_MOC_LITERAL(1668, 17),  // "CE_TabBarTabLabel"
        QT_MOC_LITERAL(1686, 14),  // "CE_ProgressBar"
        QT_MOC_LITERAL(1701, 20),  // "CE_ProgressBarGroove"
        QT_MOC_LITERAL(1722, 22),  // "CE_ProgressBarContents"
        QT_MOC_LITERAL(1745, 19),  // "CE_ProgressBarLabel"
        QT_MOC_LITERAL(1765, 11),  // "CE_MenuItem"
        QT_MOC_LITERAL(1777, 15),  // "CE_MenuScroller"
        QT_MOC_LITERAL(1793, 14),  // "CE_MenuVMargin"
        QT_MOC_LITERAL(1808, 14),  // "CE_MenuHMargin"
        QT_MOC_LITERAL(1823, 14),  // "CE_MenuTearoff"
        QT_MOC_LITERAL(1838, 16),  // "CE_MenuEmptyArea"
        QT_MOC_LITERAL(1855, 14),  // "CE_MenuBarItem"
        QT_MOC_LITERAL(1870, 19),  // "CE_MenuBarEmptyArea"
        QT_MOC_LITERAL(1890, 18),  // "CE_ToolButtonLabel"
        QT_MOC_LITERAL(1909, 9),  // "CE_Header"
        QT_MOC_LITERAL(1919, 16),  // "CE_HeaderSection"
        QT_MOC_LITERAL(1936, 14),  // "CE_HeaderLabel"
        QT_MOC_LITERAL(1951, 13),  // "CE_ToolBoxTab"
        QT_MOC_LITERAL(1965, 11),  // "CE_SizeGrip"
        QT_MOC_LITERAL(1977, 11),  // "CE_Splitter"
        QT_MOC_LITERAL(1989, 13),  // "CE_RubberBand"
        QT_MOC_LITERAL(2003, 18),  // "CE_DockWidgetTitle"
        QT_MOC_LITERAL(2022, 19),  // "CE_ScrollBarAddLine"
        QT_MOC_LITERAL(2042, 19),  // "CE_ScrollBarSubLine"
        QT_MOC_LITERAL(2062, 19),  // "CE_ScrollBarAddPage"
        QT_MOC_LITERAL(2082, 19),  // "CE_ScrollBarSubPage"
        QT_MOC_LITERAL(2102, 18),  // "CE_ScrollBarSlider"
        QT_MOC_LITERAL(2121, 17),  // "CE_ScrollBarFirst"
        QT_MOC_LITERAL(2139, 16),  // "CE_ScrollBarLast"
        QT_MOC_LITERAL(2156, 13),  // "CE_FocusFrame"
        QT_MOC_LITERAL(2170, 16),  // "CE_ComboBoxLabel"
        QT_MOC_LITERAL(2187, 10),  // "CE_ToolBar"
        QT_MOC_LITERAL(2198, 18),  // "CE_ToolBoxTabShape"
        QT_MOC_LITERAL(2217, 18),  // "CE_ToolBoxTabLabel"
        QT_MOC_LITERAL(2236, 18),  // "CE_HeaderEmptyArea"
        QT_MOC_LITERAL(2255, 17),  // "CE_ColumnViewGrip"
        QT_MOC_LITERAL(2273, 15),  // "CE_ItemViewItem"
        QT_MOC_LITERAL(2289, 14),  // "CE_ShapedFrame"
        QT_MOC_LITERAL(2304, 13),  // "CE_CustomBase"
        QT_MOC_LITERAL(2318, 10),  // "SubElement"
        QT_MOC_LITERAL(2329, 21),  // "SE_PushButtonContents"
        QT_MOC_LITERAL(2351, 22),  // "SE_PushButtonFocusRect"
        QT_MOC_LITERAL(2374, 20),  // "SE_CheckBoxIndicator"
        QT_MOC_LITERAL(2395, 19),  // "SE_CheckBoxContents"
        QT_MOC_LITERAL(2415, 20),  // "SE_CheckBoxFocusRect"
        QT_MOC_LITERAL(2436, 20),  // "SE_CheckBoxClickRect"
        QT_MOC_LITERAL(2457, 23),  // "SE_RadioButtonIndicator"
        QT_MOC_LITERAL(2481, 22),  // "SE_RadioButtonContents"
        QT_MOC_LITERAL(2504, 23),  // "SE_RadioButtonFocusRect"
        QT_MOC_LITERAL(2528, 23),  // "SE_RadioButtonClickRect"
        QT_MOC_LITERAL(2552, 20),  // "SE_ComboBoxFocusRect"
        QT_MOC_LITERAL(2573, 18),  // "SE_SliderFocusRect"
        QT_MOC_LITERAL(2592, 20),  // "SE_ProgressBarGroove"
        QT_MOC_LITERAL(2613, 22),  // "SE_ProgressBarContents"
        QT_MOC_LITERAL(2636, 19),  // "SE_ProgressBarLabel"
        QT_MOC_LITERAL(2656, 21),  // "SE_ToolBoxTabContents"
        QT_MOC_LITERAL(2678, 14),  // "SE_HeaderLabel"
        QT_MOC_LITERAL(2693, 14),  // "SE_HeaderArrow"
        QT_MOC_LITERAL(2708, 18),  // "SE_TabWidgetTabBar"
        QT_MOC_LITERAL(2727, 19),  // "SE_TabWidgetTabPane"
        QT_MOC_LITERAL(2747, 23),  // "SE_TabWidgetTabContents"
        QT_MOC_LITERAL(2771, 22),  // "SE_TabWidgetLeftCorner"
        QT_MOC_LITERAL(2794, 23),  // "SE_TabWidgetRightCorner"
        QT_MOC_LITERAL(2818, 29),  // "SE_ItemViewItemCheckIndicator"
        QT_MOC_LITERAL(2848, 22),  // "SE_TabBarTearIndicator"
        QT_MOC_LITERAL(2871, 26),  // "SE_TabBarTearIndicatorLeft"
        QT_MOC_LITERAL(2898, 25),  // "SE_TreeViewDisclosureItem"
        QT_MOC_LITERAL(2924, 19),  // "SE_LineEditContents"
        QT_MOC_LITERAL(2944, 16),  // "SE_FrameContents"
        QT_MOC_LITERAL(2961, 24),  // "SE_DockWidgetCloseButton"
        QT_MOC_LITERAL(2986, 24),  // "SE_DockWidgetFloatButton"
        QT_MOC_LITERAL(3011, 25),  // "SE_DockWidgetTitleBarText"
        QT_MOC_LITERAL(3037, 17),  // "SE_DockWidgetIcon"
        QT_MOC_LITERAL(3055, 21),  // "SE_CheckBoxLayoutItem"
        QT_MOC_LITERAL(3077, 21),  // "SE_ComboBoxLayoutItem"
        QT_MOC_LITERAL(3099, 25),  // "SE_DateTimeEditLayoutItem"
        QT_MOC_LITERAL(3125, 18),  // "SE_LabelLayoutItem"
        QT_MOC_LITERAL(3144, 24),  // "SE_ProgressBarLayoutItem"
        QT_MOC_LITERAL(3169, 23),  // "SE_PushButtonLayoutItem"
        QT_MOC_LITERAL(3193, 24),  // "SE_RadioButtonLayoutItem"
        QT_MOC_LITERAL(3218, 19),  // "SE_SliderLayoutItem"
        QT_MOC_LITERAL(3238, 20),  // "SE_SpinBoxLayoutItem"
        QT_MOC_LITERAL(3259, 23),  // "SE_ToolButtonLayoutItem"
        QT_MOC_LITERAL(3283, 18),  // "SE_FrameLayoutItem"
        QT_MOC_LITERAL(3302, 21),  // "SE_GroupBoxLayoutItem"
        QT_MOC_LITERAL(3324, 22),  // "SE_TabWidgetLayoutItem"
        QT_MOC_LITERAL(3347, 25),  // "SE_ItemViewItemDecoration"
        QT_MOC_LITERAL(3373, 19),  // "SE_ItemViewItemText"
        QT_MOC_LITERAL(3393, 24),  // "SE_ItemViewItemFocusRect"
        QT_MOC_LITERAL(3418, 22),  // "SE_TabBarTabLeftButton"
        QT_MOC_LITERAL(3441, 23),  // "SE_TabBarTabRightButton"
        QT_MOC_LITERAL(3465, 16),  // "SE_TabBarTabText"
        QT_MOC_LITERAL(3482, 22),  // "SE_ShapedFrameContents"
        QT_MOC_LITERAL(3505, 16),  // "SE_ToolBarHandle"
        QT_MOC_LITERAL(3522, 25),  // "SE_TabBarScrollLeftButton"
        QT_MOC_LITERAL(3548, 26),  // "SE_TabBarScrollRightButton"
        QT_MOC_LITERAL(3575, 27),  // "SE_TabBarTearIndicatorRight"
        QT_MOC_LITERAL(3603, 18),  // "SE_PushButtonBevel"
        QT_MOC_LITERAL(3622, 13),  // "SE_CustomBase"
        QT_MOC_LITERAL(3636, 14),  // "ComplexControl"
        QT_MOC_LITERAL(3651, 10),  // "CC_SpinBox"
        QT_MOC_LITERAL(3662, 11),  // "CC_ComboBox"
        QT_MOC_LITERAL(3674, 12),  // "CC_ScrollBar"
        QT_MOC_LITERAL(3687, 9),  // "CC_Slider"
        QT_MOC_LITERAL(3697, 13),  // "CC_ToolButton"
        QT_MOC_LITERAL(3711, 11),  // "CC_TitleBar"
        QT_MOC_LITERAL(3723, 7),  // "CC_Dial"
        QT_MOC_LITERAL(3731, 11),  // "CC_GroupBox"
        QT_MOC_LITERAL(3743, 14),  // "CC_MdiControls"
        QT_MOC_LITERAL(3758, 13),  // "CC_CustomBase"
        QT_MOC_LITERAL(3772, 10),  // "SubControl"
        QT_MOC_LITERAL(3783, 7),  // "SC_None"
        QT_MOC_LITERAL(3791, 19),  // "SC_ScrollBarAddLine"
        QT_MOC_LITERAL(3811, 19),  // "SC_ScrollBarSubLine"
        QT_MOC_LITERAL(3831, 19),  // "SC_ScrollBarAddPage"
        QT_MOC_LITERAL(3851, 19),  // "SC_ScrollBarSubPage"
        QT_MOC_LITERAL(3871, 17),  // "SC_ScrollBarFirst"
        QT_MOC_LITERAL(3889, 16),  // "SC_ScrollBarLast"
        QT_MOC_LITERAL(3906, 18),  // "SC_ScrollBarSlider"
        QT_MOC_LITERAL(3925, 18),  // "SC_ScrollBarGroove"
        QT_MOC_LITERAL(3944, 12),  // "SC_SpinBoxUp"
        QT_MOC_LITERAL(3957, 14),  // "SC_SpinBoxDown"
        QT_MOC_LITERAL(3972, 15),  // "SC_SpinBoxFrame"
        QT_MOC_LITERAL(3988, 19),  // "SC_SpinBoxEditField"
        QT_MOC_LITERAL(4008, 16),  // "SC_ComboBoxFrame"
        QT_MOC_LITERAL(4025, 20),  // "SC_ComboBoxEditField"
        QT_MOC_LITERAL(4046, 16),  // "SC_ComboBoxArrow"
        QT_MOC_LITERAL(4063, 23),  // "SC_ComboBoxListBoxPopup"
        QT_MOC_LITERAL(4087, 15),  // "SC_SliderGroove"
        QT_MOC_LITERAL(4103, 15),  // "SC_SliderHandle"
        QT_MOC_LITERAL(4119, 18),  // "SC_SliderTickmarks"
        QT_MOC_LITERAL(4138, 13),  // "SC_ToolButton"
        QT_MOC_LITERAL(4152, 17),  // "SC_ToolButtonMenu"
        QT_MOC_LITERAL(4170, 18),  // "SC_TitleBarSysMenu"
        QT_MOC_LITERAL(4189, 20),  // "SC_TitleBarMinButton"
        QT_MOC_LITERAL(4210, 20),  // "SC_TitleBarMaxButton"
        QT_MOC_LITERAL(4231, 22),  // "SC_TitleBarCloseButton"
        QT_MOC_LITERAL(4254, 23),  // "SC_TitleBarNormalButton"
        QT_MOC_LITERAL(4278, 22),  // "SC_TitleBarShadeButton"
        QT_MOC_LITERAL(4301, 24),  // "SC_TitleBarUnshadeButton"
        QT_MOC_LITERAL(4326, 28),  // "SC_TitleBarContextHelpButton"
        QT_MOC_LITERAL(4355, 16),  // "SC_TitleBarLabel"
        QT_MOC_LITERAL(4372, 13),  // "SC_DialGroove"
        QT_MOC_LITERAL(4386, 13),  // "SC_DialHandle"
        QT_MOC_LITERAL(4400, 16),  // "SC_DialTickmarks"
        QT_MOC_LITERAL(4417, 19),  // "SC_GroupBoxCheckBox"
        QT_MOC_LITERAL(4437, 16),  // "SC_GroupBoxLabel"
        QT_MOC_LITERAL(4454, 19),  // "SC_GroupBoxContents"
        QT_MOC_LITERAL(4474, 16),  // "SC_GroupBoxFrame"
        QT_MOC_LITERAL(4491, 15),  // "SC_MdiMinButton"
        QT_MOC_LITERAL(4507, 18),  // "SC_MdiNormalButton"
        QT_MOC_LITERAL(4526, 17),  // "SC_MdiCloseButton"
        QT_MOC_LITERAL(4544, 13),  // "SC_CustomBase"
        QT_MOC_LITERAL(4558, 6),  // "SC_All"
        QT_MOC_LITERAL(4565, 11),  // "PixelMetric"
        QT_MOC_LITERAL(4577, 15),  // "PM_ButtonMargin"
        QT_MOC_LITERAL(4593, 25),  // "PM_ButtonDefaultIndicator"
        QT_MOC_LITERAL(4619, 22),  // "PM_MenuButtonIndicator"
        QT_MOC_LITERAL(4642, 24),  // "PM_ButtonShiftHorizontal"
        QT_MOC_LITERAL(4667, 22),  // "PM_ButtonShiftVertical"
        QT_MOC_LITERAL(4690, 20),  // "PM_DefaultFrameWidth"
        QT_MOC_LITERAL(4711, 20),  // "PM_SpinBoxFrameWidth"
        QT_MOC_LITERAL(4732, 21),  // "PM_ComboBoxFrameWidth"
        QT_MOC_LITERAL(4754, 22),  // "PM_MaximumDragDistance"
        QT_MOC_LITERAL(4777, 18),  // "PM_ScrollBarExtent"
        QT_MOC_LITERAL(4796, 21),  // "PM_ScrollBarSliderMin"
        QT_MOC_LITERAL(4818, 18),  // "PM_SliderThickness"
        QT_MOC_LITERAL(4837, 25),  // "PM_SliderControlThickness"
        QT_MOC_LITERAL(4863, 15),  // "PM_SliderLength"
        QT_MOC_LITERAL(4879, 23),  // "PM_SliderTickmarkOffset"
        QT_MOC_LITERAL(4903, 23),  // "PM_SliderSpaceAvailable"
        QT_MOC_LITERAL(4927, 28),  // "PM_DockWidgetSeparatorExtent"
        QT_MOC_LITERAL(4956, 25),  // "PM_DockWidgetHandleExtent"
        QT_MOC_LITERAL(4982, 23),  // "PM_DockWidgetFrameWidth"
        QT_MOC_LITERAL(5006, 19),  // "PM_TabBarTabOverlap"
        QT_MOC_LITERAL(5026, 18),  // "PM_TabBarTabHSpace"
        QT_MOC_LITERAL(5045, 18),  // "PM_TabBarTabVSpace"
        QT_MOC_LITERAL(5064, 19),  // "PM_TabBarBaseHeight"
        QT_MOC_LITERAL(5084, 20),  // "PM_TabBarBaseOverlap"
        QT_MOC_LITERAL(5105, 24),  // "PM_ProgressBarChunkWidth"
        QT_MOC_LITERAL(5130, 16),  // "PM_SplitterWidth"
        QT_MOC_LITERAL(5147, 17),  // "PM_TitleBarHeight"
        QT_MOC_LITERAL(5165, 21),  // "PM_MenuScrollerHeight"
        QT_MOC_LITERAL(5187, 14),  // "PM_MenuHMargin"
        QT_MOC_LITERAL(5202, 14),  // "PM_MenuVMargin"
        QT_MOC_LITERAL(5217, 17),  // "PM_MenuPanelWidth"
        QT_MOC_LITERAL(5235, 20),  // "PM_MenuTearoffHeight"
        QT_MOC_LITERAL(5256, 24),  // "PM_MenuDesktopFrameWidth"
        QT_MOC_LITERAL(5281, 20),  // "PM_MenuBarPanelWidth"
        QT_MOC_LITERAL(5302, 21),  // "PM_MenuBarItemSpacing"
        QT_MOC_LITERAL(5324, 17),  // "PM_MenuBarVMargin"
        QT_MOC_LITERAL(5342, 17),  // "PM_MenuBarHMargin"
        QT_MOC_LITERAL(5360, 17),  // "PM_IndicatorWidth"
        QT_MOC_LITERAL(5378, 18),  // "PM_IndicatorHeight"
        QT_MOC_LITERAL(5397, 26),  // "PM_ExclusiveIndicatorWidth"
        QT_MOC_LITERAL(5424, 27),  // "PM_ExclusiveIndicatorHeight"
        QT_MOC_LITERAL(5452, 25),  // "PM_DialogButtonsSeparator"
        QT_MOC_LITERAL(5478, 27),  // "PM_DialogButtonsButtonWidth"
        QT_MOC_LITERAL(5506, 28),  // "PM_DialogButtonsButtonHeight"
        QT_MOC_LITERAL(5535, 25),  // "PM_MdiSubWindowFrameWidth"
        QT_MOC_LITERAL(5561, 29),  // "PM_MdiSubWindowMinimizedWidth"
        QT_MOC_LITERAL(5591, 15),  // "PM_HeaderMargin"
        QT_MOC_LITERAL(5607, 17),  // "PM_HeaderMarkSize"
        QT_MOC_LITERAL(5625, 19),  // "PM_HeaderGripMargin"
        QT_MOC_LITERAL(5645, 27),  // "PM_TabBarTabShiftHorizontal"
        QT_MOC_LITERAL(5673, 25),  // "PM_TabBarTabShiftVertical"
        QT_MOC_LITERAL(5699, 26),  // "PM_TabBarScrollButtonWidth"
        QT_MOC_LITERAL(5726, 20),  // "PM_ToolBarFrameWidth"
        QT_MOC_LITERAL(5747, 22),  // "PM_ToolBarHandleExtent"
        QT_MOC_LITERAL(5770, 21),  // "PM_ToolBarItemSpacing"
        QT_MOC_LITERAL(5792, 20),  // "PM_ToolBarItemMargin"
        QT_MOC_LITERAL(5813, 25),  // "PM_ToolBarSeparatorExtent"
        QT_MOC_LITERAL(5839, 25),  // "PM_ToolBarExtensionExtent"
        QT_MOC_LITERAL(5865, 22),  // "PM_SpinBoxSliderHeight"
        QT_MOC_LITERAL(5888, 18),  // "PM_ToolBarIconSize"
        QT_MOC_LITERAL(5907, 19),  // "PM_ListViewIconSize"
        QT_MOC_LITERAL(5927, 19),  // "PM_IconViewIconSize"
        QT_MOC_LITERAL(5947, 16),  // "PM_SmallIconSize"
        QT_MOC_LITERAL(5964, 16),  // "PM_LargeIconSize"
        QT_MOC_LITERAL(5981, 20),  // "PM_FocusFrameVMargin"
        QT_MOC_LITERAL(6002, 20),  // "PM_FocusFrameHMargin"
        QT_MOC_LITERAL(6023, 25),  // "PM_ToolTipLabelFrameWidth"
        QT_MOC_LITERAL(6049, 23),  // "PM_CheckBoxLabelSpacing"
        QT_MOC_LITERAL(6073, 17),  // "PM_TabBarIconSize"
        QT_MOC_LITERAL(6091, 15),  // "PM_SizeGripSize"
        QT_MOC_LITERAL(6107, 24),  // "PM_DockWidgetTitleMargin"
        QT_MOC_LITERAL(6132, 21),  // "PM_MessageBoxIconSize"
        QT_MOC_LITERAL(6154, 17),  // "PM_ButtonIconSize"
        QT_MOC_LITERAL(6172, 33),  // "PM_DockWidgetTitleBarButtonMa..."
        QT_MOC_LITERAL(6206, 26),  // "PM_RadioButtonLabelSpacing"
        QT_MOC_LITERAL(6233, 19),  // "PM_LayoutLeftMargin"
        QT_MOC_LITERAL(6253, 18),  // "PM_LayoutTopMargin"
        QT_MOC_LITERAL(6272, 20),  // "PM_LayoutRightMargin"
        QT_MOC_LITERAL(6293, 21),  // "PM_LayoutBottomMargin"
        QT_MOC_LITERAL(6315, 26),  // "PM_LayoutHorizontalSpacing"
        QT_MOC_LITERAL(6342, 24),  // "PM_LayoutVerticalSpacing"
        QT_MOC_LITERAL(6367, 29),  // "PM_TabBar_ScrollButtonOverlap"
        QT_MOC_LITERAL(6397, 18),  // "PM_TextCursorWidth"
        QT_MOC_LITERAL(6416, 25),  // "PM_TabCloseIndicatorWidth"
        QT_MOC_LITERAL(6442, 26),  // "PM_TabCloseIndicatorHeight"
        QT_MOC_LITERAL(6469, 30),  // "PM_ScrollView_ScrollBarSpacing"
        QT_MOC_LITERAL(6500, 30),  // "PM_ScrollView_ScrollBarOverlap"
        QT_MOC_LITERAL(6531, 17),  // "PM_SubMenuOverlap"
        QT_MOC_LITERAL(6549, 22),  // "PM_TreeViewIndentation"
        QT_MOC_LITERAL(6572, 37),  // "PM_HeaderDefaultSectionSizeHo..."
        QT_MOC_LITERAL(6610, 35),  // "PM_HeaderDefaultSectionSizeVe..."
        QT_MOC_LITERAL(6646, 25),  // "PM_TitleBarButtonIconSize"
        QT_MOC_LITERAL(6672, 21),  // "PM_TitleBarButtonSize"
        QT_MOC_LITERAL(6694, 19),  // "PM_LineEditIconSize"
        QT_MOC_LITERAL(6714, 21),  // "PM_LineEditIconMargin"
        QT_MOC_LITERAL(6736, 13),  // "PM_CustomBase"
        QT_MOC_LITERAL(6750, 12),  // "ContentsType"
        QT_MOC_LITERAL(6763, 13),  // "CT_PushButton"
        QT_MOC_LITERAL(6777, 11),  // "CT_CheckBox"
        QT_MOC_LITERAL(6789, 14),  // "CT_RadioButton"
        QT_MOC_LITERAL(6804, 13),  // "CT_ToolButton"
        QT_MOC_LITERAL(6818, 11),  // "CT_ComboBox"
        QT_MOC_LITERAL(6830, 11),  // "CT_Splitter"
        QT_MOC_LITERAL(6842, 14),  // "CT_ProgressBar"
        QT_MOC_LITERAL(6857, 11),  // "CT_MenuItem"
        QT_MOC_LITERAL(6869, 14),  // "CT_MenuBarItem"
        QT_MOC_LITERAL(6884, 10),  // "CT_MenuBar"
        QT_MOC_LITERAL(6895, 7),  // "CT_Menu"
        QT_MOC_LITERAL(6903, 12),  // "CT_TabBarTab"
        QT_MOC_LITERAL(6916, 9),  // "CT_Slider"
        QT_MOC_LITERAL(6926, 12),  // "CT_ScrollBar"
        QT_MOC_LITERAL(6939, 11),  // "CT_LineEdit"
        QT_MOC_LITERAL(6951, 10),  // "CT_SpinBox"
        QT_MOC_LITERAL(6962, 11),  // "CT_SizeGrip"
        QT_MOC_LITERAL(6974, 12),  // "CT_TabWidget"
        QT_MOC_LITERAL(6987, 16),  // "CT_DialogButtons"
        QT_MOC_LITERAL(7004, 16),  // "CT_HeaderSection"
        QT_MOC_LITERAL(7021, 11),  // "CT_GroupBox"
        QT_MOC_LITERAL(7033, 14),  // "CT_MdiControls"
        QT_MOC_LITERAL(7048, 15),  // "CT_ItemViewItem"
        QT_MOC_LITERAL(7064, 13),  // "CT_CustomBase"
        QT_MOC_LITERAL(7078, 25),  // "RequestSoftwareInputPanel"
        QT_MOC_LITERAL(7104, 34),  // "RSIP_OnMouseClickAndAlreadyFo..."
        QT_MOC_LITERAL(7139, 17),  // "RSIP_OnMouseClick"
        QT_MOC_LITERAL(7157, 9),  // "StyleHint"
        QT_MOC_LITERAL(7167, 19),  // "SH_EtchDisabledText"
        QT_MOC_LITERAL(7187, 21),  // "SH_DitherDisabledText"
        QT_MOC_LITERAL(7209, 40),  // "SH_ScrollBar_MiddleClickAbsol..."
        QT_MOC_LITERAL(7250, 43),  // "SH_ScrollBar_ScrollWhenPointe..."
        QT_MOC_LITERAL(7294, 25),  // "SH_TabBar_SelectMouseType"
        QT_MOC_LITERAL(7320, 19),  // "SH_TabBar_Alignment"
        QT_MOC_LITERAL(7340, 24),  // "SH_Header_ArrowAlignment"
        QT_MOC_LITERAL(7365, 21),  // "SH_Slider_SnapToValue"
        QT_MOC_LITERAL(7387, 25),  // "SH_Slider_SloppyKeyEvents"
        QT_MOC_LITERAL(7413, 36),  // "SH_ProgressDialog_CenterCance..."
        QT_MOC_LITERAL(7450, 36),  // "SH_ProgressDialog_TextLabelAl..."
        QT_MOC_LITERAL(7487, 32),  // "SH_PrintDialog_RightAlignButtons"
        QT_MOC_LITERAL(7520, 31),  // "SH_MainWindow_SpaceBelowMenuBar"
        QT_MOC_LITERAL(7552, 34),  // "SH_FontDialog_SelectAssociate..."
        QT_MOC_LITERAL(7587, 30),  // "SH_Menu_AllowActiveAndDisabled"
        QT_MOC_LITERAL(7618, 26),  // "SH_Menu_SpaceActivatesItem"
        QT_MOC_LITERAL(7645, 25),  // "SH_Menu_SubMenuPopupDelay"
        QT_MOC_LITERAL(7671, 37),  // "SH_ScrollView_FrameOnlyAround..."
        QT_MOC_LITERAL(7709, 27),  // "SH_MenuBar_AltKeyNavigation"
        QT_MOC_LITERAL(7737, 29),  // "SH_ComboBox_ListMouseTracking"
        QT_MOC_LITERAL(7767, 21),  // "SH_Menu_MouseTracking"
        QT_MOC_LITERAL(7789, 24),  // "SH_MenuBar_MouseTracking"
        QT_MOC_LITERAL(7814, 34),  // "SH_ItemView_ChangeHighlightOn..."
        QT_MOC_LITERAL(7849, 25),  // "SH_Widget_ShareActivation"
        QT_MOC_LITERAL(7875, 32),  // "SH_Workspace_FillSpaceOnMaximize"
        QT_MOC_LITERAL(7908, 17),  // "SH_ComboBox_Popup"
        QT_MOC_LITERAL(7926, 20),  // "SH_TitleBar_NoBorder"
        QT_MOC_LITERAL(7947, 29),  // "SH_Slider_StopMouseOverSlider"
        QT_MOC_LITERAL(7977, 30),  // "SH_BlinkCursorWhenTextSelected"
        QT_MOC_LITERAL(8008, 30),  // "SH_RichText_FullWidthSelection"
        QT_MOC_LITERAL(8039, 18),  // "SH_Menu_Scrollable"
        QT_MOC_LITERAL(8058, 38),  // "SH_GroupBox_TextLabelVertical..."
        QT_MOC_LITERAL(8097, 26),  // "SH_GroupBox_TextLabelColor"
        QT_MOC_LITERAL(8124, 22),  // "SH_Menu_SloppySubMenus"
        QT_MOC_LITERAL(8147, 22),  // "SH_Table_GridLineColor"
        QT_MOC_LITERAL(8170, 29),  // "SH_LineEdit_PasswordCharacter"
        QT_MOC_LITERAL(8200, 30),  // "SH_DialogButtons_DefaultButton"
        QT_MOC_LITERAL(8231, 32),  // "SH_ToolBox_SelectedPageTitleBold"
        QT_MOC_LITERAL(8264, 24),  // "SH_TabBar_PreferNoArrows"
        QT_MOC_LITERAL(8289, 38),  // "SH_ScrollBar_LeftClickAbsolut..."
        QT_MOC_LITERAL(8328, 33),  // "SH_ListViewExpand_SelectMouse..."
        QT_MOC_LITERAL(8362, 20),  // "SH_UnderlineShortcut"
        QT_MOC_LITERAL(8383, 24),  // "SH_SpinBox_AnimateButton"
        QT_MOC_LITERAL(8408, 33),  // "SH_SpinBox_KeyPressAutoRepeat..."
        QT_MOC_LITERAL(8442, 30),  // "SH_SpinBox_ClickAutoRepeatRate"
        QT_MOC_LITERAL(8473, 28),  // "SH_Menu_FillScreenWithScroll"
        QT_MOC_LITERAL(8502, 23),  // "SH_ToolTipLabel_Opacity"
        QT_MOC_LITERAL(8526, 23),  // "SH_DrawMenuBarSeparator"
        QT_MOC_LITERAL(8550, 30),  // "SH_TitleBar_ModifyNotification"
        QT_MOC_LITERAL(8581, 21),  // "SH_Button_FocusPolicy"
        QT_MOC_LITERAL(8603, 39),  // "SH_MessageBox_UseBorderForBut..."
        QT_MOC_LITERAL(8643, 21),  // "SH_TitleBar_AutoRaise"
        QT_MOC_LITERAL(8665, 24),  // "SH_ToolButton_PopupDelay"
        QT_MOC_LITERAL(8690, 18),  // "SH_FocusFrame_Mask"
        QT_MOC_LITERAL(8709, 18),  // "SH_RubberBand_Mask"
        QT_MOC_LITERAL(8728, 19),  // "SH_WindowFrame_Mask"
        QT_MOC_LITERAL(8748, 31),  // "SH_SpinControls_DisableOnBounds"
        QT_MOC_LITERAL(8780, 22),  // "SH_Dial_BackgroundRole"
        QT_MOC_LITERAL(8803, 27),  // "SH_ComboBox_LayoutDirection"
        QT_MOC_LITERAL(8831, 28),  // "SH_ItemView_EllipsisLocation"
        QT_MOC_LITERAL(8860, 34),  // "SH_ItemView_ShowDecorationSel..."
        QT_MOC_LITERAL(8895, 37),  // "SH_ItemView_ActivateItemOnSin..."
        QT_MOC_LITERAL(8933, 24),  // "SH_ScrollBar_ContextMenu"
        QT_MOC_LITERAL(8958, 31),  // "SH_ScrollBar_RollBetweenButtons"
        QT_MOC_LITERAL(8990, 28),  // "SH_Slider_AbsoluteSetButtons"
        QT_MOC_LITERAL(9019, 24),  // "SH_Slider_PageSetButtons"
        QT_MOC_LITERAL(9044, 22),  // "SH_Menu_KeyboardSearch"
        QT_MOC_LITERAL(9067, 19),  // "SH_TabBar_ElideMode"
        QT_MOC_LITERAL(9087, 21),  // "SH_DialogButtonLayout"
        QT_MOC_LITERAL(9109, 27),  // "SH_ComboBox_PopupFrameStyle"
        QT_MOC_LITERAL(9137, 34),  // "SH_MessageBox_TextInteraction..."
        QT_MOC_LITERAL(9172, 35),  // "SH_DialogButtonBox_ButtonsHav..."
        QT_MOC_LITERAL(9208, 27),  // "SH_MessageBox_CenterButtons"
        QT_MOC_LITERAL(9236, 21),  // "SH_Menu_SelectionWrap"
        QT_MOC_LITERAL(9258, 44),  // "SH_ItemView_MovementWithoutUp..."
        QT_MOC_LITERAL(9303, 15),  // "SH_ToolTip_Mask"
        QT_MOC_LITERAL(9319, 25),  // "SH_FocusFrame_AboveWidget"
        QT_MOC_LITERAL(9345, 43),  // "SH_TextControl_FocusIndicator..."
        QT_MOC_LITERAL(9389, 14),  // "SH_WizardStyle"
        QT_MOC_LITERAL(9404, 41),  // "SH_ItemView_ArrowKeysNavigate..."
        QT_MOC_LITERAL(9446, 12),  // "SH_Menu_Mask"
        QT_MOC_LITERAL(9459, 26),  // "SH_Menu_FlashTriggeredItem"
        QT_MOC_LITERAL(9486, 21),  // "SH_Menu_FadeOutOnHide"
        QT_MOC_LITERAL(9508, 35),  // "SH_SpinBox_ClickAutoRepeatThr..."
        QT_MOC_LITERAL(9544, 49),  // "SH_ItemView_PaintAlternatingR..."
        QT_MOC_LITERAL(9594, 23),  // "SH_FormLayoutWrapPolicy"
        QT_MOC_LITERAL(9618, 31),  // "SH_TabWidget_DefaultTabPosition"
        QT_MOC_LITERAL(9650, 18),  // "SH_ToolBar_Movable"
        QT_MOC_LITERAL(9669, 30),  // "SH_FormLayoutFieldGrowthPolicy"
        QT_MOC_LITERAL(9700, 26),  // "SH_FormLayoutFormAlignment"
        QT_MOC_LITERAL(9727, 27),  // "SH_FormLayoutLabelAlignment"
        QT_MOC_LITERAL(9755, 29),  // "SH_ItemView_DrawDelegateFrame"
        QT_MOC_LITERAL(9785, 29),  // "SH_TabBar_CloseButtonPosition"
        QT_MOC_LITERAL(9815, 30),  // "SH_DockWidget_ButtonsHaveFrame"
        QT_MOC_LITERAL(9846, 18),  // "SH_ToolButtonStyle"
        QT_MOC_LITERAL(9865, 28),  // "SH_RequestSoftwareInputPanel"
        QT_MOC_LITERAL(9894, 22),  // "SH_ScrollBar_Transient"
        QT_MOC_LITERAL(9917, 24),  // "SH_Menu_SupportsSections"
        QT_MOC_LITERAL(9942, 22),  // "SH_ToolTip_WakeUpDelay"
        QT_MOC_LITERAL(9965, 26),  // "SH_ToolTip_FallAsleepDelay"
        QT_MOC_LITERAL(9992, 17),  // "SH_Widget_Animate"
        QT_MOC_LITERAL(10010, 24),  // "SH_Splitter_OpaqueResize"
        QT_MOC_LITERAL(10035, 26),  // "SH_ComboBox_UseNativePopup"
        QT_MOC_LITERAL(10062, 29),  // "SH_LineEdit_PasswordMaskDelay"
        QT_MOC_LITERAL(10092, 28),  // "SH_TabBar_ChangeCurrentDelay"
        QT_MOC_LITERAL(10121, 27),  // "SH_Menu_SubMenuUniDirection"
        QT_MOC_LITERAL(10149, 36),  // "SH_Menu_SubMenuUniDirectionFa..."
        QT_MOC_LITERAL(10186, 39),  // "SH_Menu_SubMenuSloppySelectOt..."
        QT_MOC_LITERAL(10226, 33),  // "SH_Menu_SubMenuSloppyCloseTim..."
        QT_MOC_LITERAL(10260, 40),  // "SH_Menu_SubMenuResetWhenReent..."
        QT_MOC_LITERAL(10301, 37),  // "SH_Menu_SubMenuDontStartSlopp..."
        QT_MOC_LITERAL(10339, 22),  // "SH_ItemView_ScrollMode"
        QT_MOC_LITERAL(10362, 33),  // "SH_TitleBar_ShowToolTipsOnBut..."
        QT_MOC_LITERAL(10396, 28),  // "SH_Widget_Animation_Duration"
        QT_MOC_LITERAL(10425, 31),  // "SH_ComboBox_AllowWheelScrolling"
        QT_MOC_LITERAL(10457, 29),  // "SH_SpinBox_ButtonsInsideFrame"
        QT_MOC_LITERAL(10487, 23),  // "SH_SpinBox_StepModifier"
        QT_MOC_LITERAL(10511, 29),  // "SH_TabBar_AllowWheelScrolling"
        QT_MOC_LITERAL(10541, 35),  // "SH_Table_AlwaysDrawLeftTopGri..."
        QT_MOC_LITERAL(10577, 23),  // "SH_SpinBox_SelectOnStep"
        QT_MOC_LITERAL(10601, 13),  // "SH_CustomBase"
        QT_MOC_LITERAL(10615, 14),  // "StandardPixmap"
        QT_MOC_LITERAL(10630, 21),  // "SP_TitleBarMenuButton"
        QT_MOC_LITERAL(10652, 20),  // "SP_TitleBarMinButton"
        QT_MOC_LITERAL(10673, 20),  // "SP_TitleBarMaxButton"
        QT_MOC_LITERAL(10694, 22),  // "SP_TitleBarCloseButton"
        QT_MOC_LITERAL(10717, 23),  // "SP_TitleBarNormalButton"
        QT_MOC_LITERAL(10741, 22),  // "SP_TitleBarShadeButton"
        QT_MOC_LITERAL(10764, 24),  // "SP_TitleBarUnshadeButton"
        QT_MOC_LITERAL(10789, 28),  // "SP_TitleBarContextHelpButton"
        QT_MOC_LITERAL(10818, 24),  // "SP_DockWidgetCloseButton"
        QT_MOC_LITERAL(10843, 24),  // "SP_MessageBoxInformation"
        QT_MOC_LITERAL(10868, 20),  // "SP_MessageBoxWarning"
        QT_MOC_LITERAL(10889, 21),  // "SP_MessageBoxCritical"
        QT_MOC_LITERAL(10911, 21),  // "SP_MessageBoxQuestion"
        QT_MOC_LITERAL(10933, 14),  // "SP_DesktopIcon"
        QT_MOC_LITERAL(10948, 12),  // "SP_TrashIcon"
        QT_MOC_LITERAL(10961, 15),  // "SP_ComputerIcon"
        QT_MOC_LITERAL(10977, 14),  // "SP_DriveFDIcon"
        QT_MOC_LITERAL(10992, 14),  // "SP_DriveHDIcon"
        QT_MOC_LITERAL(11007, 14),  // "SP_DriveCDIcon"
        QT_MOC_LITERAL(11022, 15),  // "SP_DriveDVDIcon"
        QT_MOC_LITERAL(11038, 15),  // "SP_DriveNetIcon"
        QT_MOC_LITERAL(11054, 14),  // "SP_DirOpenIcon"
        QT_MOC_LITERAL(11069, 16),  // "SP_DirClosedIcon"
        QT_MOC_LITERAL(11086, 14),  // "SP_DirLinkIcon"
        QT_MOC_LITERAL(11101, 18),  // "SP_DirLinkOpenIcon"
        QT_MOC_LITERAL(11120, 11),  // "SP_FileIcon"
        QT_MOC_LITERAL(11132, 15),  // "SP_FileLinkIcon"
        QT_MOC_LITERAL(11148, 35),  // "SP_ToolBarHorizontalExtension..."
        QT_MOC_LITERAL(11184, 33),  // "SP_ToolBarVerticalExtensionBu..."
        QT_MOC_LITERAL(11218, 18),  // "SP_FileDialogStart"
        QT_MOC_LITERAL(11237, 16),  // "SP_FileDialogEnd"
        QT_MOC_LITERAL(11254, 21),  // "SP_FileDialogToParent"
        QT_MOC_LITERAL(11276, 22),  // "SP_FileDialogNewFolder"
        QT_MOC_LITERAL(11299, 25),  // "SP_FileDialogDetailedView"
        QT_MOC_LITERAL(11325, 21),  // "SP_FileDialogInfoView"
        QT_MOC_LITERAL(11347, 25),  // "SP_FileDialogContentsView"
        QT_MOC_LITERAL(11373, 21),  // "SP_FileDialogListView"
        QT_MOC_LITERAL(11395, 17),  // "SP_FileDialogBack"
        QT_MOC_LITERAL(11413, 10),  // "SP_DirIcon"
        QT_MOC_LITERAL(11424, 17),  // "SP_DialogOkButton"
        QT_MOC_LITERAL(11442, 21),  // "SP_DialogCancelButton"
        QT_MOC_LITERAL(11464, 19),  // "SP_DialogHelpButton"
        QT_MOC_LITERAL(11484, 19),  // "SP_DialogOpenButton"
        QT_MOC_LITERAL(11504, 19),  // "SP_DialogSaveButton"
        QT_MOC_LITERAL(11524, 20),  // "SP_DialogCloseButton"
        QT_MOC_LITERAL(11545, 20),  // "SP_DialogApplyButton"
        QT_MOC_LITERAL(11566, 20),  // "SP_DialogResetButton"
        QT_MOC_LITERAL(11587, 22),  // "SP_DialogDiscardButton"
        QT_MOC_LITERAL(11610, 18),  // "SP_DialogYesButton"
        QT_MOC_LITERAL(11629, 17),  // "SP_DialogNoButton"
        QT_MOC_LITERAL(11647, 10),  // "SP_ArrowUp"
        QT_MOC_LITERAL(11658, 12),  // "SP_ArrowDown"
        QT_MOC_LITERAL(11671, 12),  // "SP_ArrowLeft"
        QT_MOC_LITERAL(11684, 13),  // "SP_ArrowRight"
        QT_MOC_LITERAL(11698, 12),  // "SP_ArrowBack"
        QT_MOC_LITERAL(11711, 15),  // "SP_ArrowForward"
        QT_MOC_LITERAL(11727, 14),  // "SP_DirHomeIcon"
        QT_MOC_LITERAL(11742, 14),  // "SP_CommandLink"
        QT_MOC_LITERAL(11757, 14),  // "SP_VistaShield"
        QT_MOC_LITERAL(11772, 16),  // "SP_BrowserReload"
        QT_MOC_LITERAL(11789, 14),  // "SP_BrowserStop"
        QT_MOC_LITERAL(11804, 12),  // "SP_MediaPlay"
        QT_MOC_LITERAL(11817, 12),  // "SP_MediaStop"
        QT_MOC_LITERAL(11830, 13),  // "SP_MediaPause"
        QT_MOC_LITERAL(11844, 19),  // "SP_MediaSkipForward"
        QT_MOC_LITERAL(11864, 20),  // "SP_MediaSkipBackward"
        QT_MOC_LITERAL(11885, 19),  // "SP_MediaSeekForward"
        QT_MOC_LITERAL(11905, 20),  // "SP_MediaSeekBackward"
        QT_MOC_LITERAL(11926, 14),  // "SP_MediaVolume"
        QT_MOC_LITERAL(11941, 19),  // "SP_MediaVolumeMuted"
        QT_MOC_LITERAL(11961, 22),  // "SP_LineEditClearButton"
        QT_MOC_LITERAL(11984, 23),  // "SP_DialogYesToAllButton"
        QT_MOC_LITERAL(12008, 22),  // "SP_DialogNoToAllButton"
        QT_MOC_LITERAL(12031, 22),  // "SP_DialogSaveAllButton"
        QT_MOC_LITERAL(12054, 20),  // "SP_DialogAbortButton"
        QT_MOC_LITERAL(12075, 20),  // "SP_DialogRetryButton"
        QT_MOC_LITERAL(12096, 21),  // "SP_DialogIgnoreButton"
        QT_MOC_LITERAL(12118, 24),  // "SP_RestoreDefaultsButton"
        QT_MOC_LITERAL(12143, 17),  // "SP_TabCloseButton"
        QT_MOC_LITERAL(12161, 15),  // "NStandardPixmap"
        QT_MOC_LITERAL(12177, 13)   // "SP_CustomBase"
    },
    "QStyle",
    "StateFlag",
    "State_None",
    "State_Enabled",
    "State_Raised",
    "State_Sunken",
    "State_Off",
    "State_NoChange",
    "State_On",
    "State_DownArrow",
    "State_Horizontal",
    "State_HasFocus",
    "State_Top",
    "State_Bottom",
    "State_FocusAtBorder",
    "State_AutoRaise",
    "State_MouseOver",
    "State_UpArrow",
    "State_Selected",
    "State_Active",
    "State_Window",
    "State_Open",
    "State_Children",
    "State_Item",
    "State_Sibling",
    "State_Editing",
    "State_KeyboardFocusChange",
    "State_ReadOnly",
    "State_Small",
    "State_Mini",
    "PrimitiveElement",
    "PE_Frame",
    "PE_FrameDefaultButton",
    "PE_FrameDockWidget",
    "PE_FrameFocusRect",
    "PE_FrameGroupBox",
    "PE_FrameLineEdit",
    "PE_FrameMenu",
    "PE_FrameStatusBarItem",
    "PE_FrameTabWidget",
    "PE_FrameWindow",
    "PE_FrameButtonBevel",
    "PE_FrameButtonTool",
    "PE_FrameTabBarBase",
    "PE_PanelButtonCommand",
    "PE_PanelButtonBevel",
    "PE_PanelButtonTool",
    "PE_PanelMenuBar",
    "PE_PanelToolBar",
    "PE_PanelLineEdit",
    "PE_IndicatorArrowDown",
    "PE_IndicatorArrowLeft",
    "PE_IndicatorArrowRight",
    "PE_IndicatorArrowUp",
    "PE_IndicatorBranch",
    "PE_IndicatorButtonDropDown",
    "PE_IndicatorItemViewItemCheck",
    "PE_IndicatorCheckBox",
    "PE_IndicatorDockWidgetResizeHandle",
    "PE_IndicatorHeaderArrow",
    "PE_IndicatorMenuCheckMark",
    "PE_IndicatorProgressChunk",
    "PE_IndicatorRadioButton",
    "PE_IndicatorSpinDown",
    "PE_IndicatorSpinMinus",
    "PE_IndicatorSpinPlus",
    "PE_IndicatorSpinUp",
    "PE_IndicatorToolBarHandle",
    "PE_IndicatorToolBarSeparator",
    "PE_PanelTipLabel",
    "PE_IndicatorTabTear",
    "PE_IndicatorTabTearLeft",
    "PE_PanelScrollAreaCorner",
    "PE_Widget",
    "PE_IndicatorColumnViewArrow",
    "PE_IndicatorItemViewItemDrop",
    "PE_PanelItemViewItem",
    "PE_PanelItemViewRow",
    "PE_PanelStatusBar",
    "PE_IndicatorTabClose",
    "PE_PanelMenu",
    "PE_IndicatorTabTearRight",
    "PE_CustomBase",
    "ControlElement",
    "CE_PushButton",
    "CE_PushButtonBevel",
    "CE_PushButtonLabel",
    "CE_CheckBox",
    "CE_CheckBoxLabel",
    "CE_RadioButton",
    "CE_RadioButtonLabel",
    "CE_TabBarTab",
    "CE_TabBarTabShape",
    "CE_TabBarTabLabel",
    "CE_ProgressBar",
    "CE_ProgressBarGroove",
    "CE_ProgressBarContents",
    "CE_ProgressBarLabel",
    "CE_MenuItem",
    "CE_MenuScroller",
    "CE_MenuVMargin",
    "CE_MenuHMargin",
    "CE_MenuTearoff",
    "CE_MenuEmptyArea",
    "CE_MenuBarItem",
    "CE_MenuBarEmptyArea",
    "CE_ToolButtonLabel",
    "CE_Header",
    "CE_HeaderSection",
    "CE_HeaderLabel",
    "CE_ToolBoxTab",
    "CE_SizeGrip",
    "CE_Splitter",
    "CE_RubberBand",
    "CE_DockWidgetTitle",
    "CE_ScrollBarAddLine",
    "CE_ScrollBarSubLine",
    "CE_ScrollBarAddPage",
    "CE_ScrollBarSubPage",
    "CE_ScrollBarSlider",
    "CE_ScrollBarFirst",
    "CE_ScrollBarLast",
    "CE_FocusFrame",
    "CE_ComboBoxLabel",
    "CE_ToolBar",
    "CE_ToolBoxTabShape",
    "CE_ToolBoxTabLabel",
    "CE_HeaderEmptyArea",
    "CE_ColumnViewGrip",
    "CE_ItemViewItem",
    "CE_ShapedFrame",
    "CE_CustomBase",
    "SubElement",
    "SE_PushButtonContents",
    "SE_PushButtonFocusRect",
    "SE_CheckBoxIndicator",
    "SE_CheckBoxContents",
    "SE_CheckBoxFocusRect",
    "SE_CheckBoxClickRect",
    "SE_RadioButtonIndicator",
    "SE_RadioButtonContents",
    "SE_RadioButtonFocusRect",
    "SE_RadioButtonClickRect",
    "SE_ComboBoxFocusRect",
    "SE_SliderFocusRect",
    "SE_ProgressBarGroove",
    "SE_ProgressBarContents",
    "SE_ProgressBarLabel",
    "SE_ToolBoxTabContents",
    "SE_HeaderLabel",
    "SE_HeaderArrow",
    "SE_TabWidgetTabBar",
    "SE_TabWidgetTabPane",
    "SE_TabWidgetTabContents",
    "SE_TabWidgetLeftCorner",
    "SE_TabWidgetRightCorner",
    "SE_ItemViewItemCheckIndicator",
    "SE_TabBarTearIndicator",
    "SE_TabBarTearIndicatorLeft",
    "SE_TreeViewDisclosureItem",
    "SE_LineEditContents",
    "SE_FrameContents",
    "SE_DockWidgetCloseButton",
    "SE_DockWidgetFloatButton",
    "SE_DockWidgetTitleBarText",
    "SE_DockWidgetIcon",
    "SE_CheckBoxLayoutItem",
    "SE_ComboBoxLayoutItem",
    "SE_DateTimeEditLayoutItem",
    "SE_LabelLayoutItem",
    "SE_ProgressBarLayoutItem",
    "SE_PushButtonLayoutItem",
    "SE_RadioButtonLayoutItem",
    "SE_SliderLayoutItem",
    "SE_SpinBoxLayoutItem",
    "SE_ToolButtonLayoutItem",
    "SE_FrameLayoutItem",
    "SE_GroupBoxLayoutItem",
    "SE_TabWidgetLayoutItem",
    "SE_ItemViewItemDecoration",
    "SE_ItemViewItemText",
    "SE_ItemViewItemFocusRect",
    "SE_TabBarTabLeftButton",
    "SE_TabBarTabRightButton",
    "SE_TabBarTabText",
    "SE_ShapedFrameContents",
    "SE_ToolBarHandle",
    "SE_TabBarScrollLeftButton",
    "SE_TabBarScrollRightButton",
    "SE_TabBarTearIndicatorRight",
    "SE_PushButtonBevel",
    "SE_CustomBase",
    "ComplexControl",
    "CC_SpinBox",
    "CC_ComboBox",
    "CC_ScrollBar",
    "CC_Slider",
    "CC_ToolButton",
    "CC_TitleBar",
    "CC_Dial",
    "CC_GroupBox",
    "CC_MdiControls",
    "CC_CustomBase",
    "SubControl",
    "SC_None",
    "SC_ScrollBarAddLine",
    "SC_ScrollBarSubLine",
    "SC_ScrollBarAddPage",
    "SC_ScrollBarSubPage",
    "SC_ScrollBarFirst",
    "SC_ScrollBarLast",
    "SC_ScrollBarSlider",
    "SC_ScrollBarGroove",
    "SC_SpinBoxUp",
    "SC_SpinBoxDown",
    "SC_SpinBoxFrame",
    "SC_SpinBoxEditField",
    "SC_ComboBoxFrame",
    "SC_ComboBoxEditField",
    "SC_ComboBoxArrow",
    "SC_ComboBoxListBoxPopup",
    "SC_SliderGroove",
    "SC_SliderHandle",
    "SC_SliderTickmarks",
    "SC_ToolButton",
    "SC_ToolButtonMenu",
    "SC_TitleBarSysMenu",
    "SC_TitleBarMinButton",
    "SC_TitleBarMaxButton",
    "SC_TitleBarCloseButton",
    "SC_TitleBarNormalButton",
    "SC_TitleBarShadeButton",
    "SC_TitleBarUnshadeButton",
    "SC_TitleBarContextHelpButton",
    "SC_TitleBarLabel",
    "SC_DialGroove",
    "SC_DialHandle",
    "SC_DialTickmarks",
    "SC_GroupBoxCheckBox",
    "SC_GroupBoxLabel",
    "SC_GroupBoxContents",
    "SC_GroupBoxFrame",
    "SC_MdiMinButton",
    "SC_MdiNormalButton",
    "SC_MdiCloseButton",
    "SC_CustomBase",
    "SC_All",
    "PixelMetric",
    "PM_ButtonMargin",
    "PM_ButtonDefaultIndicator",
    "PM_MenuButtonIndicator",
    "PM_ButtonShiftHorizontal",
    "PM_ButtonShiftVertical",
    "PM_DefaultFrameWidth",
    "PM_SpinBoxFrameWidth",
    "PM_ComboBoxFrameWidth",
    "PM_MaximumDragDistance",
    "PM_ScrollBarExtent",
    "PM_ScrollBarSliderMin",
    "PM_SliderThickness",
    "PM_SliderControlThickness",
    "PM_SliderLength",
    "PM_SliderTickmarkOffset",
    "PM_SliderSpaceAvailable",
    "PM_DockWidgetSeparatorExtent",
    "PM_DockWidgetHandleExtent",
    "PM_DockWidgetFrameWidth",
    "PM_TabBarTabOverlap",
    "PM_TabBarTabHSpace",
    "PM_TabBarTabVSpace",
    "PM_TabBarBaseHeight",
    "PM_TabBarBaseOverlap",
    "PM_ProgressBarChunkWidth",
    "PM_SplitterWidth",
    "PM_TitleBarHeight",
    "PM_MenuScrollerHeight",
    "PM_MenuHMargin",
    "PM_MenuVMargin",
    "PM_MenuPanelWidth",
    "PM_MenuTearoffHeight",
    "PM_MenuDesktopFrameWidth",
    "PM_MenuBarPanelWidth",
    "PM_MenuBarItemSpacing",
    "PM_MenuBarVMargin",
    "PM_MenuBarHMargin",
    "PM_IndicatorWidth",
    "PM_IndicatorHeight",
    "PM_ExclusiveIndicatorWidth",
    "PM_ExclusiveIndicatorHeight",
    "PM_DialogButtonsSeparator",
    "PM_DialogButtonsButtonWidth",
    "PM_DialogButtonsButtonHeight",
    "PM_MdiSubWindowFrameWidth",
    "PM_MdiSubWindowMinimizedWidth",
    "PM_HeaderMargin",
    "PM_HeaderMarkSize",
    "PM_HeaderGripMargin",
    "PM_TabBarTabShiftHorizontal",
    "PM_TabBarTabShiftVertical",
    "PM_TabBarScrollButtonWidth",
    "PM_ToolBarFrameWidth",
    "PM_ToolBarHandleExtent",
    "PM_ToolBarItemSpacing",
    "PM_ToolBarItemMargin",
    "PM_ToolBarSeparatorExtent",
    "PM_ToolBarExtensionExtent",
    "PM_SpinBoxSliderHeight",
    "PM_ToolBarIconSize",
    "PM_ListViewIconSize",
    "PM_IconViewIconSize",
    "PM_SmallIconSize",
    "PM_LargeIconSize",
    "PM_FocusFrameVMargin",
    "PM_FocusFrameHMargin",
    "PM_ToolTipLabelFrameWidth",
    "PM_CheckBoxLabelSpacing",
    "PM_TabBarIconSize",
    "PM_SizeGripSize",
    "PM_DockWidgetTitleMargin",
    "PM_MessageBoxIconSize",
    "PM_ButtonIconSize",
    "PM_DockWidgetTitleBarButtonMargin",
    "PM_RadioButtonLabelSpacing",
    "PM_LayoutLeftMargin",
    "PM_LayoutTopMargin",
    "PM_LayoutRightMargin",
    "PM_LayoutBottomMargin",
    "PM_LayoutHorizontalSpacing",
    "PM_LayoutVerticalSpacing",
    "PM_TabBar_ScrollButtonOverlap",
    "PM_TextCursorWidth",
    "PM_TabCloseIndicatorWidth",
    "PM_TabCloseIndicatorHeight",
    "PM_ScrollView_ScrollBarSpacing",
    "PM_ScrollView_ScrollBarOverlap",
    "PM_SubMenuOverlap",
    "PM_TreeViewIndentation",
    "PM_HeaderDefaultSectionSizeHorizontal",
    "PM_HeaderDefaultSectionSizeVertical",
    "PM_TitleBarButtonIconSize",
    "PM_TitleBarButtonSize",
    "PM_LineEditIconSize",
    "PM_LineEditIconMargin",
    "PM_CustomBase",
    "ContentsType",
    "CT_PushButton",
    "CT_CheckBox",
    "CT_RadioButton",
    "CT_ToolButton",
    "CT_ComboBox",
    "CT_Splitter",
    "CT_ProgressBar",
    "CT_MenuItem",
    "CT_MenuBarItem",
    "CT_MenuBar",
    "CT_Menu",
    "CT_TabBarTab",
    "CT_Slider",
    "CT_ScrollBar",
    "CT_LineEdit",
    "CT_SpinBox",
    "CT_SizeGrip",
    "CT_TabWidget",
    "CT_DialogButtons",
    "CT_HeaderSection",
    "CT_GroupBox",
    "CT_MdiControls",
    "CT_ItemViewItem",
    "CT_CustomBase",
    "RequestSoftwareInputPanel",
    "RSIP_OnMouseClickAndAlreadyFocused",
    "RSIP_OnMouseClick",
    "StyleHint",
    "SH_EtchDisabledText",
    "SH_DitherDisabledText",
    "SH_ScrollBar_MiddleClickAbsolutePosition",
    "SH_ScrollBar_ScrollWhenPointerLeavesControl",
    "SH_TabBar_SelectMouseType",
    "SH_TabBar_Alignment",
    "SH_Header_ArrowAlignment",
    "SH_Slider_SnapToValue",
    "SH_Slider_SloppyKeyEvents",
    "SH_ProgressDialog_CenterCancelButton",
    "SH_ProgressDialog_TextLabelAlignment",
    "SH_PrintDialog_RightAlignButtons",
    "SH_MainWindow_SpaceBelowMenuBar",
    "SH_FontDialog_SelectAssociatedText",
    "SH_Menu_AllowActiveAndDisabled",
    "SH_Menu_SpaceActivatesItem",
    "SH_Menu_SubMenuPopupDelay",
    "SH_ScrollView_FrameOnlyAroundContents",
    "SH_MenuBar_AltKeyNavigation",
    "SH_ComboBox_ListMouseTracking",
    "SH_Menu_MouseTracking",
    "SH_MenuBar_MouseTracking",
    "SH_ItemView_ChangeHighlightOnFocus",
    "SH_Widget_ShareActivation",
    "SH_Workspace_FillSpaceOnMaximize",
    "SH_ComboBox_Popup",
    "SH_TitleBar_NoBorder",
    "SH_Slider_StopMouseOverSlider",
    "SH_BlinkCursorWhenTextSelected",
    "SH_RichText_FullWidthSelection",
    "SH_Menu_Scrollable",
    "SH_GroupBox_TextLabelVerticalAlignment",
    "SH_GroupBox_TextLabelColor",
    "SH_Menu_SloppySubMenus",
    "SH_Table_GridLineColor",
    "SH_LineEdit_PasswordCharacter",
    "SH_DialogButtons_DefaultButton",
    "SH_ToolBox_SelectedPageTitleBold",
    "SH_TabBar_PreferNoArrows",
    "SH_ScrollBar_LeftClickAbsolutePosition",
    "SH_ListViewExpand_SelectMouseType",
    "SH_UnderlineShortcut",
    "SH_SpinBox_AnimateButton",
    "SH_SpinBox_KeyPressAutoRepeatRate",
    "SH_SpinBox_ClickAutoRepeatRate",
    "SH_Menu_FillScreenWithScroll",
    "SH_ToolTipLabel_Opacity",
    "SH_DrawMenuBarSeparator",
    "SH_TitleBar_ModifyNotification",
    "SH_Button_FocusPolicy",
    "SH_MessageBox_UseBorderForButtonSpacing",
    "SH_TitleBar_AutoRaise",
    "SH_ToolButton_PopupDelay",
    "SH_FocusFrame_Mask",
    "SH_RubberBand_Mask",
    "SH_WindowFrame_Mask",
    "SH_SpinControls_DisableOnBounds",
    "SH_Dial_BackgroundRole",
    "SH_ComboBox_LayoutDirection",
    "SH_ItemView_EllipsisLocation",
    "SH_ItemView_ShowDecorationSelected",
    "SH_ItemView_ActivateItemOnSingleClick",
    "SH_ScrollBar_ContextMenu",
    "SH_ScrollBar_RollBetweenButtons",
    "SH_Slider_AbsoluteSetButtons",
    "SH_Slider_PageSetButtons",
    "SH_Menu_KeyboardSearch",
    "SH_TabBar_ElideMode",
    "SH_DialogButtonLayout",
    "SH_ComboBox_PopupFrameStyle",
    "SH_MessageBox_TextInteractionFlags",
    "SH_DialogButtonBox_ButtonsHaveIcons",
    "SH_MessageBox_CenterButtons",
    "SH_Menu_SelectionWrap",
    "SH_ItemView_MovementWithoutUpdatingSelection",
    "SH_ToolTip_Mask",
    "SH_FocusFrame_AboveWidget",
    "SH_TextControl_FocusIndicatorTextCharFormat",
    "SH_WizardStyle",
    "SH_ItemView_ArrowKeysNavigateIntoChildren",
    "SH_Menu_Mask",
    "SH_Menu_FlashTriggeredItem",
    "SH_Menu_FadeOutOnHide",
    "SH_SpinBox_ClickAutoRepeatThreshold",
    "SH_ItemView_PaintAlternatingRowColorsForEmptyArea",
    "SH_FormLayoutWrapPolicy",
    "SH_TabWidget_DefaultTabPosition",
    "SH_ToolBar_Movable",
    "SH_FormLayoutFieldGrowthPolicy",
    "SH_FormLayoutFormAlignment",
    "SH_FormLayoutLabelAlignment",
    "SH_ItemView_DrawDelegateFrame",
    "SH_TabBar_CloseButtonPosition",
    "SH_DockWidget_ButtonsHaveFrame",
    "SH_ToolButtonStyle",
    "SH_RequestSoftwareInputPanel",
    "SH_ScrollBar_Transient",
    "SH_Menu_SupportsSections",
    "SH_ToolTip_WakeUpDelay",
    "SH_ToolTip_FallAsleepDelay",
    "SH_Widget_Animate",
    "SH_Splitter_OpaqueResize",
    "SH_ComboBox_UseNativePopup",
    "SH_LineEdit_PasswordMaskDelay",
    "SH_TabBar_ChangeCurrentDelay",
    "SH_Menu_SubMenuUniDirection",
    "SH_Menu_SubMenuUniDirectionFailCount",
    "SH_Menu_SubMenuSloppySelectOtherActions",
    "SH_Menu_SubMenuSloppyCloseTimeout",
    "SH_Menu_SubMenuResetWhenReenteringParent",
    "SH_Menu_SubMenuDontStartSloppyOnLeave",
    "SH_ItemView_ScrollMode",
    "SH_TitleBar_ShowToolTipsOnButtons",
    "SH_Widget_Animation_Duration",
    "SH_ComboBox_AllowWheelScrolling",
    "SH_SpinBox_ButtonsInsideFrame",
    "SH_SpinBox_StepModifier",
    "SH_TabBar_AllowWheelScrolling",
    "SH_Table_AlwaysDrawLeftTopGridLines",
    "SH_SpinBox_SelectOnStep",
    "SH_CustomBase",
    "StandardPixmap",
    "SP_TitleBarMenuButton",
    "SP_TitleBarMinButton",
    "SP_TitleBarMaxButton",
    "SP_TitleBarCloseButton",
    "SP_TitleBarNormalButton",
    "SP_TitleBarShadeButton",
    "SP_TitleBarUnshadeButton",
    "SP_TitleBarContextHelpButton",
    "SP_DockWidgetCloseButton",
    "SP_MessageBoxInformation",
    "SP_MessageBoxWarning",
    "SP_MessageBoxCritical",
    "SP_MessageBoxQuestion",
    "SP_DesktopIcon",
    "SP_TrashIcon",
    "SP_ComputerIcon",
    "SP_DriveFDIcon",
    "SP_DriveHDIcon",
    "SP_DriveCDIcon",
    "SP_DriveDVDIcon",
    "SP_DriveNetIcon",
    "SP_DirOpenIcon",
    "SP_DirClosedIcon",
    "SP_DirLinkIcon",
    "SP_DirLinkOpenIcon",
    "SP_FileIcon",
    "SP_FileLinkIcon",
    "SP_ToolBarHorizontalExtensionButton",
    "SP_ToolBarVerticalExtensionButton",
    "SP_FileDialogStart",
    "SP_FileDialogEnd",
    "SP_FileDialogToParent",
    "SP_FileDialogNewFolder",
    "SP_FileDialogDetailedView",
    "SP_FileDialogInfoView",
    "SP_FileDialogContentsView",
    "SP_FileDialogListView",
    "SP_FileDialogBack",
    "SP_DirIcon",
    "SP_DialogOkButton",
    "SP_DialogCancelButton",
    "SP_DialogHelpButton",
    "SP_DialogOpenButton",
    "SP_DialogSaveButton",
    "SP_DialogCloseButton",
    "SP_DialogApplyButton",
    "SP_DialogResetButton",
    "SP_DialogDiscardButton",
    "SP_DialogYesButton",
    "SP_DialogNoButton",
    "SP_ArrowUp",
    "SP_ArrowDown",
    "SP_ArrowLeft",
    "SP_ArrowRight",
    "SP_ArrowBack",
    "SP_ArrowForward",
    "SP_DirHomeIcon",
    "SP_CommandLink",
    "SP_VistaShield",
    "SP_BrowserReload",
    "SP_BrowserStop",
    "SP_MediaPlay",
    "SP_MediaStop",
    "SP_MediaPause",
    "SP_MediaSkipForward",
    "SP_MediaSkipBackward",
    "SP_MediaSeekForward",
    "SP_MediaSeekBackward",
    "SP_MediaVolume",
    "SP_MediaVolumeMuted",
    "SP_LineEditClearButton",
    "SP_DialogYesToAllButton",
    "SP_DialogNoToAllButton",
    "SP_DialogSaveAllButton",
    "SP_DialogAbortButton",
    "SP_DialogRetryButton",
    "SP_DialogIgnoreButton",
    "SP_RestoreDefaultsButton",
    "SP_TabCloseButton",
    "NStandardPixmap",
    "SP_CustomBase"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQStyleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
      11,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   28,   69,
      30,   30, 0x0,   52,  125,
      83,   83, 0x0,   48,  229,
     132,  132, 0x0,   59,  325,
     192,  192, 0x0,   10,  443,
     203,  203, 0x0,   43,  463,
     247,  247, 0x0,   96,  549,
     344,  344, 0x0,   24,  741,
     369,  369, 0x0,    2,  789,
     372,  372, 0x0,  121,  793,
     494,  494, 0x0,   81, 1035,

 // enum data: key, value
       2, uint(QStyle::State_None),
       3, uint(QStyle::State_Enabled),
       4, uint(QStyle::State_Raised),
       5, uint(QStyle::State_Sunken),
       6, uint(QStyle::State_Off),
       7, uint(QStyle::State_NoChange),
       8, uint(QStyle::State_On),
       9, uint(QStyle::State_DownArrow),
      10, uint(QStyle::State_Horizontal),
      11, uint(QStyle::State_HasFocus),
      12, uint(QStyle::State_Top),
      13, uint(QStyle::State_Bottom),
      14, uint(QStyle::State_FocusAtBorder),
      15, uint(QStyle::State_AutoRaise),
      16, uint(QStyle::State_MouseOver),
      17, uint(QStyle::State_UpArrow),
      18, uint(QStyle::State_Selected),
      19, uint(QStyle::State_Active),
      20, uint(QStyle::State_Window),
      21, uint(QStyle::State_Open),
      22, uint(QStyle::State_Children),
      23, uint(QStyle::State_Item),
      24, uint(QStyle::State_Sibling),
      25, uint(QStyle::State_Editing),
      26, uint(QStyle::State_KeyboardFocusChange),
      27, uint(QStyle::State_ReadOnly),
      28, uint(QStyle::State_Small),
      29, uint(QStyle::State_Mini),
      31, uint(QStyle::PE_Frame),
      32, uint(QStyle::PE_FrameDefaultButton),
      33, uint(QStyle::PE_FrameDockWidget),
      34, uint(QStyle::PE_FrameFocusRect),
      35, uint(QStyle::PE_FrameGroupBox),
      36, uint(QStyle::PE_FrameLineEdit),
      37, uint(QStyle::PE_FrameMenu),
      38, uint(QStyle::PE_FrameStatusBarItem),
      39, uint(QStyle::PE_FrameTabWidget),
      40, uint(QStyle::PE_FrameWindow),
      41, uint(QStyle::PE_FrameButtonBevel),
      42, uint(QStyle::PE_FrameButtonTool),
      43, uint(QStyle::PE_FrameTabBarBase),
      44, uint(QStyle::PE_PanelButtonCommand),
      45, uint(QStyle::PE_PanelButtonBevel),
      46, uint(QStyle::PE_PanelButtonTool),
      47, uint(QStyle::PE_PanelMenuBar),
      48, uint(QStyle::PE_PanelToolBar),
      49, uint(QStyle::PE_PanelLineEdit),
      50, uint(QStyle::PE_IndicatorArrowDown),
      51, uint(QStyle::PE_IndicatorArrowLeft),
      52, uint(QStyle::PE_IndicatorArrowRight),
      53, uint(QStyle::PE_IndicatorArrowUp),
      54, uint(QStyle::PE_IndicatorBranch),
      55, uint(QStyle::PE_IndicatorButtonDropDown),
      56, uint(QStyle::PE_IndicatorItemViewItemCheck),
      57, uint(QStyle::PE_IndicatorCheckBox),
      58, uint(QStyle::PE_IndicatorDockWidgetResizeHandle),
      59, uint(QStyle::PE_IndicatorHeaderArrow),
      60, uint(QStyle::PE_IndicatorMenuCheckMark),
      61, uint(QStyle::PE_IndicatorProgressChunk),
      62, uint(QStyle::PE_IndicatorRadioButton),
      63, uint(QStyle::PE_IndicatorSpinDown),
      64, uint(QStyle::PE_IndicatorSpinMinus),
      65, uint(QStyle::PE_IndicatorSpinPlus),
      66, uint(QStyle::PE_IndicatorSpinUp),
      67, uint(QStyle::PE_IndicatorToolBarHandle),
      68, uint(QStyle::PE_IndicatorToolBarSeparator),
      69, uint(QStyle::PE_PanelTipLabel),
      70, uint(QStyle::PE_IndicatorTabTear),
      71, uint(QStyle::PE_IndicatorTabTearLeft),
      72, uint(QStyle::PE_PanelScrollAreaCorner),
      73, uint(QStyle::PE_Widget),
      74, uint(QStyle::PE_IndicatorColumnViewArrow),
      75, uint(QStyle::PE_IndicatorItemViewItemDrop),
      76, uint(QStyle::PE_PanelItemViewItem),
      77, uint(QStyle::PE_PanelItemViewRow),
      78, uint(QStyle::PE_PanelStatusBar),
      79, uint(QStyle::PE_IndicatorTabClose),
      80, uint(QStyle::PE_PanelMenu),
      81, uint(QStyle::PE_IndicatorTabTearRight),
      82, uint(QStyle::PE_CustomBase),
      84, uint(QStyle::CE_PushButton),
      85, uint(QStyle::CE_PushButtonBevel),
      86, uint(QStyle::CE_PushButtonLabel),
      87, uint(QStyle::CE_CheckBox),
      88, uint(QStyle::CE_CheckBoxLabel),
      89, uint(QStyle::CE_RadioButton),
      90, uint(QStyle::CE_RadioButtonLabel),
      91, uint(QStyle::CE_TabBarTab),
      92, uint(QStyle::CE_TabBarTabShape),
      93, uint(QStyle::CE_TabBarTabLabel),
      94, uint(QStyle::CE_ProgressBar),
      95, uint(QStyle::CE_ProgressBarGroove),
      96, uint(QStyle::CE_ProgressBarContents),
      97, uint(QStyle::CE_ProgressBarLabel),
      98, uint(QStyle::CE_MenuItem),
      99, uint(QStyle::CE_MenuScroller),
     100, uint(QStyle::CE_MenuVMargin),
     101, uint(QStyle::CE_MenuHMargin),
     102, uint(QStyle::CE_MenuTearoff),
     103, uint(QStyle::CE_MenuEmptyArea),
     104, uint(QStyle::CE_MenuBarItem),
     105, uint(QStyle::CE_MenuBarEmptyArea),
     106, uint(QStyle::CE_ToolButtonLabel),
     107, uint(QStyle::CE_Header),
     108, uint(QStyle::CE_HeaderSection),
     109, uint(QStyle::CE_HeaderLabel),
     110, uint(QStyle::CE_ToolBoxTab),
     111, uint(QStyle::CE_SizeGrip),
     112, uint(QStyle::CE_Splitter),
     113, uint(QStyle::CE_RubberBand),
     114, uint(QStyle::CE_DockWidgetTitle),
     115, uint(QStyle::CE_ScrollBarAddLine),
     116, uint(QStyle::CE_ScrollBarSubLine),
     117, uint(QStyle::CE_ScrollBarAddPage),
     118, uint(QStyle::CE_ScrollBarSubPage),
     119, uint(QStyle::CE_ScrollBarSlider),
     120, uint(QStyle::CE_ScrollBarFirst),
     121, uint(QStyle::CE_ScrollBarLast),
     122, uint(QStyle::CE_FocusFrame),
     123, uint(QStyle::CE_ComboBoxLabel),
     124, uint(QStyle::CE_ToolBar),
     125, uint(QStyle::CE_ToolBoxTabShape),
     126, uint(QStyle::CE_ToolBoxTabLabel),
     127, uint(QStyle::CE_HeaderEmptyArea),
     128, uint(QStyle::CE_ColumnViewGrip),
     129, uint(QStyle::CE_ItemViewItem),
     130, uint(QStyle::CE_ShapedFrame),
     131, uint(QStyle::CE_CustomBase),
     133, uint(QStyle::SE_PushButtonContents),
     134, uint(QStyle::SE_PushButtonFocusRect),
     135, uint(QStyle::SE_CheckBoxIndicator),
     136, uint(QStyle::SE_CheckBoxContents),
     137, uint(QStyle::SE_CheckBoxFocusRect),
     138, uint(QStyle::SE_CheckBoxClickRect),
     139, uint(QStyle::SE_RadioButtonIndicator),
     140, uint(QStyle::SE_RadioButtonContents),
     141, uint(QStyle::SE_RadioButtonFocusRect),
     142, uint(QStyle::SE_RadioButtonClickRect),
     143, uint(QStyle::SE_ComboBoxFocusRect),
     144, uint(QStyle::SE_SliderFocusRect),
     145, uint(QStyle::SE_ProgressBarGroove),
     146, uint(QStyle::SE_ProgressBarContents),
     147, uint(QStyle::SE_ProgressBarLabel),
     148, uint(QStyle::SE_ToolBoxTabContents),
     149, uint(QStyle::SE_HeaderLabel),
     150, uint(QStyle::SE_HeaderArrow),
     151, uint(QStyle::SE_TabWidgetTabBar),
     152, uint(QStyle::SE_TabWidgetTabPane),
     153, uint(QStyle::SE_TabWidgetTabContents),
     154, uint(QStyle::SE_TabWidgetLeftCorner),
     155, uint(QStyle::SE_TabWidgetRightCorner),
     156, uint(QStyle::SE_ItemViewItemCheckIndicator),
     157, uint(QStyle::SE_TabBarTearIndicator),
     158, uint(QStyle::SE_TabBarTearIndicatorLeft),
     159, uint(QStyle::SE_TreeViewDisclosureItem),
     160, uint(QStyle::SE_LineEditContents),
     161, uint(QStyle::SE_FrameContents),
     162, uint(QStyle::SE_DockWidgetCloseButton),
     163, uint(QStyle::SE_DockWidgetFloatButton),
     164, uint(QStyle::SE_DockWidgetTitleBarText),
     165, uint(QStyle::SE_DockWidgetIcon),
     166, uint(QStyle::SE_CheckBoxLayoutItem),
     167, uint(QStyle::SE_ComboBoxLayoutItem),
     168, uint(QStyle::SE_DateTimeEditLayoutItem),
     169, uint(QStyle::SE_LabelLayoutItem),
     170, uint(QStyle::SE_ProgressBarLayoutItem),
     171, uint(QStyle::SE_PushButtonLayoutItem),
     172, uint(QStyle::SE_RadioButtonLayoutItem),
     173, uint(QStyle::SE_SliderLayoutItem),
     174, uint(QStyle::SE_SpinBoxLayoutItem),
     175, uint(QStyle::SE_ToolButtonLayoutItem),
     176, uint(QStyle::SE_FrameLayoutItem),
     177, uint(QStyle::SE_GroupBoxLayoutItem),
     178, uint(QStyle::SE_TabWidgetLayoutItem),
     179, uint(QStyle::SE_ItemViewItemDecoration),
     180, uint(QStyle::SE_ItemViewItemText),
     181, uint(QStyle::SE_ItemViewItemFocusRect),
     182, uint(QStyle::SE_TabBarTabLeftButton),
     183, uint(QStyle::SE_TabBarTabRightButton),
     184, uint(QStyle::SE_TabBarTabText),
     185, uint(QStyle::SE_ShapedFrameContents),
     186, uint(QStyle::SE_ToolBarHandle),
     187, uint(QStyle::SE_TabBarScrollLeftButton),
     188, uint(QStyle::SE_TabBarScrollRightButton),
     189, uint(QStyle::SE_TabBarTearIndicatorRight),
     190, uint(QStyle::SE_PushButtonBevel),
     191, uint(QStyle::SE_CustomBase),
     193, uint(QStyle::CC_SpinBox),
     194, uint(QStyle::CC_ComboBox),
     195, uint(QStyle::CC_ScrollBar),
     196, uint(QStyle::CC_Slider),
     197, uint(QStyle::CC_ToolButton),
     198, uint(QStyle::CC_TitleBar),
     199, uint(QStyle::CC_Dial),
     200, uint(QStyle::CC_GroupBox),
     201, uint(QStyle::CC_MdiControls),
     202, uint(QStyle::CC_CustomBase),
     204, uint(QStyle::SC_None),
     205, uint(QStyle::SC_ScrollBarAddLine),
     206, uint(QStyle::SC_ScrollBarSubLine),
     207, uint(QStyle::SC_ScrollBarAddPage),
     208, uint(QStyle::SC_ScrollBarSubPage),
     209, uint(QStyle::SC_ScrollBarFirst),
     210, uint(QStyle::SC_ScrollBarLast),
     211, uint(QStyle::SC_ScrollBarSlider),
     212, uint(QStyle::SC_ScrollBarGroove),
     213, uint(QStyle::SC_SpinBoxUp),
     214, uint(QStyle::SC_SpinBoxDown),
     215, uint(QStyle::SC_SpinBoxFrame),
     216, uint(QStyle::SC_SpinBoxEditField),
     217, uint(QStyle::SC_ComboBoxFrame),
     218, uint(QStyle::SC_ComboBoxEditField),
     219, uint(QStyle::SC_ComboBoxArrow),
     220, uint(QStyle::SC_ComboBoxListBoxPopup),
     221, uint(QStyle::SC_SliderGroove),
     222, uint(QStyle::SC_SliderHandle),
     223, uint(QStyle::SC_SliderTickmarks),
     224, uint(QStyle::SC_ToolButton),
     225, uint(QStyle::SC_ToolButtonMenu),
     226, uint(QStyle::SC_TitleBarSysMenu),
     227, uint(QStyle::SC_TitleBarMinButton),
     228, uint(QStyle::SC_TitleBarMaxButton),
     229, uint(QStyle::SC_TitleBarCloseButton),
     230, uint(QStyle::SC_TitleBarNormalButton),
     231, uint(QStyle::SC_TitleBarShadeButton),
     232, uint(QStyle::SC_TitleBarUnshadeButton),
     233, uint(QStyle::SC_TitleBarContextHelpButton),
     234, uint(QStyle::SC_TitleBarLabel),
     235, uint(QStyle::SC_DialGroove),
     236, uint(QStyle::SC_DialHandle),
     237, uint(QStyle::SC_DialTickmarks),
     238, uint(QStyle::SC_GroupBoxCheckBox),
     239, uint(QStyle::SC_GroupBoxLabel),
     240, uint(QStyle::SC_GroupBoxContents),
     241, uint(QStyle::SC_GroupBoxFrame),
     242, uint(QStyle::SC_MdiMinButton),
     243, uint(QStyle::SC_MdiNormalButton),
     244, uint(QStyle::SC_MdiCloseButton),
     245, uint(QStyle::SC_CustomBase),
     246, uint(QStyle::SC_All),
     248, uint(QStyle::PM_ButtonMargin),
     249, uint(QStyle::PM_ButtonDefaultIndicator),
     250, uint(QStyle::PM_MenuButtonIndicator),
     251, uint(QStyle::PM_ButtonShiftHorizontal),
     252, uint(QStyle::PM_ButtonShiftVertical),
     253, uint(QStyle::PM_DefaultFrameWidth),
     254, uint(QStyle::PM_SpinBoxFrameWidth),
     255, uint(QStyle::PM_ComboBoxFrameWidth),
     256, uint(QStyle::PM_MaximumDragDistance),
     257, uint(QStyle::PM_ScrollBarExtent),
     258, uint(QStyle::PM_ScrollBarSliderMin),
     259, uint(QStyle::PM_SliderThickness),
     260, uint(QStyle::PM_SliderControlThickness),
     261, uint(QStyle::PM_SliderLength),
     262, uint(QStyle::PM_SliderTickmarkOffset),
     263, uint(QStyle::PM_SliderSpaceAvailable),
     264, uint(QStyle::PM_DockWidgetSeparatorExtent),
     265, uint(QStyle::PM_DockWidgetHandleExtent),
     266, uint(QStyle::PM_DockWidgetFrameWidth),
     267, uint(QStyle::PM_TabBarTabOverlap),
     268, uint(QStyle::PM_TabBarTabHSpace),
     269, uint(QStyle::PM_TabBarTabVSpace),
     270, uint(QStyle::PM_TabBarBaseHeight),
     271, uint(QStyle::PM_TabBarBaseOverlap),
     272, uint(QStyle::PM_ProgressBarChunkWidth),
     273, uint(QStyle::PM_SplitterWidth),
     274, uint(QStyle::PM_TitleBarHeight),
     275, uint(QStyle::PM_MenuScrollerHeight),
     276, uint(QStyle::PM_MenuHMargin),
     277, uint(QStyle::PM_MenuVMargin),
     278, uint(QStyle::PM_MenuPanelWidth),
     279, uint(QStyle::PM_MenuTearoffHeight),
     280, uint(QStyle::PM_MenuDesktopFrameWidth),
     281, uint(QStyle::PM_MenuBarPanelWidth),
     282, uint(QStyle::PM_MenuBarItemSpacing),
     283, uint(QStyle::PM_MenuBarVMargin),
     284, uint(QStyle::PM_MenuBarHMargin),
     285, uint(QStyle::PM_IndicatorWidth),
     286, uint(QStyle::PM_IndicatorHeight),
     287, uint(QStyle::PM_ExclusiveIndicatorWidth),
     288, uint(QStyle::PM_ExclusiveIndicatorHeight),
     289, uint(QStyle::PM_DialogButtonsSeparator),
     290, uint(QStyle::PM_DialogButtonsButtonWidth),
     291, uint(QStyle::PM_DialogButtonsButtonHeight),
     292, uint(QStyle::PM_MdiSubWindowFrameWidth),
     293, uint(QStyle::PM_MdiSubWindowMinimizedWidth),
     294, uint(QStyle::PM_HeaderMargin),
     295, uint(QStyle::PM_HeaderMarkSize),
     296, uint(QStyle::PM_HeaderGripMargin),
     297, uint(QStyle::PM_TabBarTabShiftHorizontal),
     298, uint(QStyle::PM_TabBarTabShiftVertical),
     299, uint(QStyle::PM_TabBarScrollButtonWidth),
     300, uint(QStyle::PM_ToolBarFrameWidth),
     301, uint(QStyle::PM_ToolBarHandleExtent),
     302, uint(QStyle::PM_ToolBarItemSpacing),
     303, uint(QStyle::PM_ToolBarItemMargin),
     304, uint(QStyle::PM_ToolBarSeparatorExtent),
     305, uint(QStyle::PM_ToolBarExtensionExtent),
     306, uint(QStyle::PM_SpinBoxSliderHeight),
     307, uint(QStyle::PM_ToolBarIconSize),
     308, uint(QStyle::PM_ListViewIconSize),
     309, uint(QStyle::PM_IconViewIconSize),
     310, uint(QStyle::PM_SmallIconSize),
     311, uint(QStyle::PM_LargeIconSize),
     312, uint(QStyle::PM_FocusFrameVMargin),
     313, uint(QStyle::PM_FocusFrameHMargin),
     314, uint(QStyle::PM_ToolTipLabelFrameWidth),
     315, uint(QStyle::PM_CheckBoxLabelSpacing),
     316, uint(QStyle::PM_TabBarIconSize),
     317, uint(QStyle::PM_SizeGripSize),
     318, uint(QStyle::PM_DockWidgetTitleMargin),
     319, uint(QStyle::PM_MessageBoxIconSize),
     320, uint(QStyle::PM_ButtonIconSize),
     321, uint(QStyle::PM_DockWidgetTitleBarButtonMargin),
     322, uint(QStyle::PM_RadioButtonLabelSpacing),
     323, uint(QStyle::PM_LayoutLeftMargin),
     324, uint(QStyle::PM_LayoutTopMargin),
     325, uint(QStyle::PM_LayoutRightMargin),
     326, uint(QStyle::PM_LayoutBottomMargin),
     327, uint(QStyle::PM_LayoutHorizontalSpacing),
     328, uint(QStyle::PM_LayoutVerticalSpacing),
     329, uint(QStyle::PM_TabBar_ScrollButtonOverlap),
     330, uint(QStyle::PM_TextCursorWidth),
     331, uint(QStyle::PM_TabCloseIndicatorWidth),
     332, uint(QStyle::PM_TabCloseIndicatorHeight),
     333, uint(QStyle::PM_ScrollView_ScrollBarSpacing),
     334, uint(QStyle::PM_ScrollView_ScrollBarOverlap),
     335, uint(QStyle::PM_SubMenuOverlap),
     336, uint(QStyle::PM_TreeViewIndentation),
     337, uint(QStyle::PM_HeaderDefaultSectionSizeHorizontal),
     338, uint(QStyle::PM_HeaderDefaultSectionSizeVertical),
     339, uint(QStyle::PM_TitleBarButtonIconSize),
     340, uint(QStyle::PM_TitleBarButtonSize),
     341, uint(QStyle::PM_LineEditIconSize),
     342, uint(QStyle::PM_LineEditIconMargin),
     343, uint(QStyle::PM_CustomBase),
     345, uint(QStyle::CT_PushButton),
     346, uint(QStyle::CT_CheckBox),
     347, uint(QStyle::CT_RadioButton),
     348, uint(QStyle::CT_ToolButton),
     349, uint(QStyle::CT_ComboBox),
     350, uint(QStyle::CT_Splitter),
     351, uint(QStyle::CT_ProgressBar),
     352, uint(QStyle::CT_MenuItem),
     353, uint(QStyle::CT_MenuBarItem),
     354, uint(QStyle::CT_MenuBar),
     355, uint(QStyle::CT_Menu),
     356, uint(QStyle::CT_TabBarTab),
     357, uint(QStyle::CT_Slider),
     358, uint(QStyle::CT_ScrollBar),
     359, uint(QStyle::CT_LineEdit),
     360, uint(QStyle::CT_SpinBox),
     361, uint(QStyle::CT_SizeGrip),
     362, uint(QStyle::CT_TabWidget),
     363, uint(QStyle::CT_DialogButtons),
     364, uint(QStyle::CT_HeaderSection),
     365, uint(QStyle::CT_GroupBox),
     366, uint(QStyle::CT_MdiControls),
     367, uint(QStyle::CT_ItemViewItem),
     368, uint(QStyle::CT_CustomBase),
     370, uint(QStyle::RSIP_OnMouseClickAndAlreadyFocused),
     371, uint(QStyle::RSIP_OnMouseClick),
     373, uint(QStyle::SH_EtchDisabledText),
     374, uint(QStyle::SH_DitherDisabledText),
     375, uint(QStyle::SH_ScrollBar_MiddleClickAbsolutePosition),
     376, uint(QStyle::SH_ScrollBar_ScrollWhenPointerLeavesControl),
     377, uint(QStyle::SH_TabBar_SelectMouseType),
     378, uint(QStyle::SH_TabBar_Alignment),
     379, uint(QStyle::SH_Header_ArrowAlignment),
     380, uint(QStyle::SH_Slider_SnapToValue),
     381, uint(QStyle::SH_Slider_SloppyKeyEvents),
     382, uint(QStyle::SH_ProgressDialog_CenterCancelButton),
     383, uint(QStyle::SH_ProgressDialog_TextLabelAlignment),
     384, uint(QStyle::SH_PrintDialog_RightAlignButtons),
     385, uint(QStyle::SH_MainWindow_SpaceBelowMenuBar),
     386, uint(QStyle::SH_FontDialog_SelectAssociatedText),
     387, uint(QStyle::SH_Menu_AllowActiveAndDisabled),
     388, uint(QStyle::SH_Menu_SpaceActivatesItem),
     389, uint(QStyle::SH_Menu_SubMenuPopupDelay),
     390, uint(QStyle::SH_ScrollView_FrameOnlyAroundContents),
     391, uint(QStyle::SH_MenuBar_AltKeyNavigation),
     392, uint(QStyle::SH_ComboBox_ListMouseTracking),
     393, uint(QStyle::SH_Menu_MouseTracking),
     394, uint(QStyle::SH_MenuBar_MouseTracking),
     395, uint(QStyle::SH_ItemView_ChangeHighlightOnFocus),
     396, uint(QStyle::SH_Widget_ShareActivation),
     397, uint(QStyle::SH_Workspace_FillSpaceOnMaximize),
     398, uint(QStyle::SH_ComboBox_Popup),
     399, uint(QStyle::SH_TitleBar_NoBorder),
     400, uint(QStyle::SH_Slider_StopMouseOverSlider),
     401, uint(QStyle::SH_BlinkCursorWhenTextSelected),
     402, uint(QStyle::SH_RichText_FullWidthSelection),
     403, uint(QStyle::SH_Menu_Scrollable),
     404, uint(QStyle::SH_GroupBox_TextLabelVerticalAlignment),
     405, uint(QStyle::SH_GroupBox_TextLabelColor),
     406, uint(QStyle::SH_Menu_SloppySubMenus),
     407, uint(QStyle::SH_Table_GridLineColor),
     408, uint(QStyle::SH_LineEdit_PasswordCharacter),
     409, uint(QStyle::SH_DialogButtons_DefaultButton),
     410, uint(QStyle::SH_ToolBox_SelectedPageTitleBold),
     411, uint(QStyle::SH_TabBar_PreferNoArrows),
     412, uint(QStyle::SH_ScrollBar_LeftClickAbsolutePosition),
     413, uint(QStyle::SH_ListViewExpand_SelectMouseType),
     414, uint(QStyle::SH_UnderlineShortcut),
     415, uint(QStyle::SH_SpinBox_AnimateButton),
     416, uint(QStyle::SH_SpinBox_KeyPressAutoRepeatRate),
     417, uint(QStyle::SH_SpinBox_ClickAutoRepeatRate),
     418, uint(QStyle::SH_Menu_FillScreenWithScroll),
     419, uint(QStyle::SH_ToolTipLabel_Opacity),
     420, uint(QStyle::SH_DrawMenuBarSeparator),
     421, uint(QStyle::SH_TitleBar_ModifyNotification),
     422, uint(QStyle::SH_Button_FocusPolicy),
     423, uint(QStyle::SH_MessageBox_UseBorderForButtonSpacing),
     424, uint(QStyle::SH_TitleBar_AutoRaise),
     425, uint(QStyle::SH_ToolButton_PopupDelay),
     426, uint(QStyle::SH_FocusFrame_Mask),
     427, uint(QStyle::SH_RubberBand_Mask),
     428, uint(QStyle::SH_WindowFrame_Mask),
     429, uint(QStyle::SH_SpinControls_DisableOnBounds),
     430, uint(QStyle::SH_Dial_BackgroundRole),
     431, uint(QStyle::SH_ComboBox_LayoutDirection),
     432, uint(QStyle::SH_ItemView_EllipsisLocation),
     433, uint(QStyle::SH_ItemView_ShowDecorationSelected),
     434, uint(QStyle::SH_ItemView_ActivateItemOnSingleClick),
     435, uint(QStyle::SH_ScrollBar_ContextMenu),
     436, uint(QStyle::SH_ScrollBar_RollBetweenButtons),
     437, uint(QStyle::SH_Slider_AbsoluteSetButtons),
     438, uint(QStyle::SH_Slider_PageSetButtons),
     439, uint(QStyle::SH_Menu_KeyboardSearch),
     440, uint(QStyle::SH_TabBar_ElideMode),
     441, uint(QStyle::SH_DialogButtonLayout),
     442, uint(QStyle::SH_ComboBox_PopupFrameStyle),
     443, uint(QStyle::SH_MessageBox_TextInteractionFlags),
     444, uint(QStyle::SH_DialogButtonBox_ButtonsHaveIcons),
     445, uint(QStyle::SH_MessageBox_CenterButtons),
     446, uint(QStyle::SH_Menu_SelectionWrap),
     447, uint(QStyle::SH_ItemView_MovementWithoutUpdatingSelection),
     448, uint(QStyle::SH_ToolTip_Mask),
     449, uint(QStyle::SH_FocusFrame_AboveWidget),
     450, uint(QStyle::SH_TextControl_FocusIndicatorTextCharFormat),
     451, uint(QStyle::SH_WizardStyle),
     452, uint(QStyle::SH_ItemView_ArrowKeysNavigateIntoChildren),
     453, uint(QStyle::SH_Menu_Mask),
     454, uint(QStyle::SH_Menu_FlashTriggeredItem),
     455, uint(QStyle::SH_Menu_FadeOutOnHide),
     456, uint(QStyle::SH_SpinBox_ClickAutoRepeatThreshold),
     457, uint(QStyle::SH_ItemView_PaintAlternatingRowColorsForEmptyArea),
     458, uint(QStyle::SH_FormLayoutWrapPolicy),
     459, uint(QStyle::SH_TabWidget_DefaultTabPosition),
     460, uint(QStyle::SH_ToolBar_Movable),
     461, uint(QStyle::SH_FormLayoutFieldGrowthPolicy),
     462, uint(QStyle::SH_FormLayoutFormAlignment),
     463, uint(QStyle::SH_FormLayoutLabelAlignment),
     464, uint(QStyle::SH_ItemView_DrawDelegateFrame),
     465, uint(QStyle::SH_TabBar_CloseButtonPosition),
     466, uint(QStyle::SH_DockWidget_ButtonsHaveFrame),
     467, uint(QStyle::SH_ToolButtonStyle),
     468, uint(QStyle::SH_RequestSoftwareInputPanel),
     469, uint(QStyle::SH_ScrollBar_Transient),
     470, uint(QStyle::SH_Menu_SupportsSections),
     471, uint(QStyle::SH_ToolTip_WakeUpDelay),
     472, uint(QStyle::SH_ToolTip_FallAsleepDelay),
     473, uint(QStyle::SH_Widget_Animate),
     474, uint(QStyle::SH_Splitter_OpaqueResize),
     475, uint(QStyle::SH_ComboBox_UseNativePopup),
     476, uint(QStyle::SH_LineEdit_PasswordMaskDelay),
     477, uint(QStyle::SH_TabBar_ChangeCurrentDelay),
     478, uint(QStyle::SH_Menu_SubMenuUniDirection),
     479, uint(QStyle::SH_Menu_SubMenuUniDirectionFailCount),
     480, uint(QStyle::SH_Menu_SubMenuSloppySelectOtherActions),
     481, uint(QStyle::SH_Menu_SubMenuSloppyCloseTimeout),
     482, uint(QStyle::SH_Menu_SubMenuResetWhenReenteringParent),
     483, uint(QStyle::SH_Menu_SubMenuDontStartSloppyOnLeave),
     484, uint(QStyle::SH_ItemView_ScrollMode),
     485, uint(QStyle::SH_TitleBar_ShowToolTipsOnButtons),
     486, uint(QStyle::SH_Widget_Animation_Duration),
     487, uint(QStyle::SH_ComboBox_AllowWheelScrolling),
     488, uint(QStyle::SH_SpinBox_ButtonsInsideFrame),
     489, uint(QStyle::SH_SpinBox_StepModifier),
     490, uint(QStyle::SH_TabBar_AllowWheelScrolling),
     491, uint(QStyle::SH_Table_AlwaysDrawLeftTopGridLines),
     492, uint(QStyle::SH_SpinBox_SelectOnStep),
     493, uint(QStyle::SH_CustomBase),
     495, uint(QStyle::SP_TitleBarMenuButton),
     496, uint(QStyle::SP_TitleBarMinButton),
     497, uint(QStyle::SP_TitleBarMaxButton),
     498, uint(QStyle::SP_TitleBarCloseButton),
     499, uint(QStyle::SP_TitleBarNormalButton),
     500, uint(QStyle::SP_TitleBarShadeButton),
     501, uint(QStyle::SP_TitleBarUnshadeButton),
     502, uint(QStyle::SP_TitleBarContextHelpButton),
     503, uint(QStyle::SP_DockWidgetCloseButton),
     504, uint(QStyle::SP_MessageBoxInformation),
     505, uint(QStyle::SP_MessageBoxWarning),
     506, uint(QStyle::SP_MessageBoxCritical),
     507, uint(QStyle::SP_MessageBoxQuestion),
     508, uint(QStyle::SP_DesktopIcon),
     509, uint(QStyle::SP_TrashIcon),
     510, uint(QStyle::SP_ComputerIcon),
     511, uint(QStyle::SP_DriveFDIcon),
     512, uint(QStyle::SP_DriveHDIcon),
     513, uint(QStyle::SP_DriveCDIcon),
     514, uint(QStyle::SP_DriveDVDIcon),
     515, uint(QStyle::SP_DriveNetIcon),
     516, uint(QStyle::SP_DirOpenIcon),
     517, uint(QStyle::SP_DirClosedIcon),
     518, uint(QStyle::SP_DirLinkIcon),
     519, uint(QStyle::SP_DirLinkOpenIcon),
     520, uint(QStyle::SP_FileIcon),
     521, uint(QStyle::SP_FileLinkIcon),
     522, uint(QStyle::SP_ToolBarHorizontalExtensionButton),
     523, uint(QStyle::SP_ToolBarVerticalExtensionButton),
     524, uint(QStyle::SP_FileDialogStart),
     525, uint(QStyle::SP_FileDialogEnd),
     526, uint(QStyle::SP_FileDialogToParent),
     527, uint(QStyle::SP_FileDialogNewFolder),
     528, uint(QStyle::SP_FileDialogDetailedView),
     529, uint(QStyle::SP_FileDialogInfoView),
     530, uint(QStyle::SP_FileDialogContentsView),
     531, uint(QStyle::SP_FileDialogListView),
     532, uint(QStyle::SP_FileDialogBack),
     533, uint(QStyle::SP_DirIcon),
     534, uint(QStyle::SP_DialogOkButton),
     535, uint(QStyle::SP_DialogCancelButton),
     536, uint(QStyle::SP_DialogHelpButton),
     537, uint(QStyle::SP_DialogOpenButton),
     538, uint(QStyle::SP_DialogSaveButton),
     539, uint(QStyle::SP_DialogCloseButton),
     540, uint(QStyle::SP_DialogApplyButton),
     541, uint(QStyle::SP_DialogResetButton),
     542, uint(QStyle::SP_DialogDiscardButton),
     543, uint(QStyle::SP_DialogYesButton),
     544, uint(QStyle::SP_DialogNoButton),
     545, uint(QStyle::SP_ArrowUp),
     546, uint(QStyle::SP_ArrowDown),
     547, uint(QStyle::SP_ArrowLeft),
     548, uint(QStyle::SP_ArrowRight),
     549, uint(QStyle::SP_ArrowBack),
     550, uint(QStyle::SP_ArrowForward),
     551, uint(QStyle::SP_DirHomeIcon),
     552, uint(QStyle::SP_CommandLink),
     553, uint(QStyle::SP_VistaShield),
     554, uint(QStyle::SP_BrowserReload),
     555, uint(QStyle::SP_BrowserStop),
     556, uint(QStyle::SP_MediaPlay),
     557, uint(QStyle::SP_MediaStop),
     558, uint(QStyle::SP_MediaPause),
     559, uint(QStyle::SP_MediaSkipForward),
     560, uint(QStyle::SP_MediaSkipBackward),
     561, uint(QStyle::SP_MediaSeekForward),
     562, uint(QStyle::SP_MediaSeekBackward),
     563, uint(QStyle::SP_MediaVolume),
     564, uint(QStyle::SP_MediaVolumeMuted),
     565, uint(QStyle::SP_LineEditClearButton),
     566, uint(QStyle::SP_DialogYesToAllButton),
     567, uint(QStyle::SP_DialogNoToAllButton),
     568, uint(QStyle::SP_DialogSaveAllButton),
     569, uint(QStyle::SP_DialogAbortButton),
     570, uint(QStyle::SP_DialogRetryButton),
     571, uint(QStyle::SP_DialogIgnoreButton),
     572, uint(QStyle::SP_RestoreDefaultsButton),
     573, uint(QStyle::SP_TabCloseButton),
     574, uint(QStyle::NStandardPixmap),
     575, uint(QStyle::SP_CustomBase),

       0        // eod
};

Q_CONSTINIT const QMetaObject QStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQStyleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQStyleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQStyleENDCLASS_t,
        // enum 'StateFlag'
        QtPrivate::TypeAndForceComplete<QStyle::StateFlag, std::true_type>,
        // enum 'PrimitiveElement'
        QtPrivate::TypeAndForceComplete<QStyle::PrimitiveElement, std::true_type>,
        // enum 'ControlElement'
        QtPrivate::TypeAndForceComplete<QStyle::ControlElement, std::true_type>,
        // enum 'SubElement'
        QtPrivate::TypeAndForceComplete<QStyle::SubElement, std::true_type>,
        // enum 'ComplexControl'
        QtPrivate::TypeAndForceComplete<QStyle::ComplexControl, std::true_type>,
        // enum 'SubControl'
        QtPrivate::TypeAndForceComplete<QStyle::SubControl, std::true_type>,
        // enum 'PixelMetric'
        QtPrivate::TypeAndForceComplete<QStyle::PixelMetric, std::true_type>,
        // enum 'ContentsType'
        QtPrivate::TypeAndForceComplete<QStyle::ContentsType, std::true_type>,
        // enum 'RequestSoftwareInputPanel'
        QtPrivate::TypeAndForceComplete<QStyle::RequestSoftwareInputPanel, std::true_type>,
        // enum 'StyleHint'
        QtPrivate::TypeAndForceComplete<QStyle::StyleHint, std::true_type>,
        // enum 'StandardPixmap'
        QtPrivate::TypeAndForceComplete<QStyle::StandardPixmap, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QStyle, std::true_type>
    >,
    nullptr
} };

void QStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQStyleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
