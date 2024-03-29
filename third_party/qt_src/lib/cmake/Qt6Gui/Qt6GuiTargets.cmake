# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "2.8.3")
   message(FATAL_ERROR "CMake >= 2.8.3 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.8.3...3.26)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS Qt6::Gui Qt6::GuiPrivate)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Create imported target Qt6::Gui
add_library(Qt6::Gui SHARED IMPORTED)
set_property(TARGET Qt6::Gui PROPERTY FRAMEWORK 1)

set_target_properties(Qt6::Gui PROPERTIES
  COMPATIBLE_INTERFACE_STRING "QT_MAJOR_VERSION"
  INTERFACE_COMPILE_DEFINITIONS "QT_GUI_LIB"
  INTERFACE_INCLUDE_DIRECTORIES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/include;/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtGui;/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/QtGui.framework/Headers"
  INTERFACE_LINK_LIBRARIES "Qt6::Core;-framework AppKit;-framework ImageIO;-framework Metal"
  INTERFACE_QT_MAJOR_VERSION "6"
  INTERFACE_SOURCES "\$<\$<BOOL:\$<TARGET_PROPERTY:QT_CONSUMES_METATYPES>>:/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/gui/meta_types/qt6gui_release_metatypes.json>"
  MODULE_PLUGIN_TYPES "accessiblebridge;platforms;platforms_darwin;xcbglintegrations;platformthemes;platforminputcontexts;generic;iconengines;imageformats;egldeviceintegrations"
  QT_DISABLED_PRIVATE_FEATURES "accessibility_atspi_bridge;directfb;directwrite;directwrite3;direct2d;direct2d1_1;evdev;system_freetype;fontconfig;system_harfbuzz;qqnx_imf;integrityfb;kms;drm_atomic;libinput;integrityhid;libinput_axis_api;libinput_hires_wheel_support;linuxfb;vsp2;vnc;mtdev;vkkhrdisplay;egl_x11;eglfs;eglfs_brcm;eglfs_egldevice;eglfs_gbm;eglfs_vsp2;eglfs_mali;eglfs_viv;eglfs_rcar;eglfs_viv_wl;eglfs_openwfd;eglfs_x11;gif;ico;jpeg;system_jpeg;system_png;tslib;tuiotouch;xcb_glx;xcb_egl_plugin;xcb_native_painting;xrender;xcb_xlib;xcb_sm;system_xcb_xinput;xkbcommon;xkbcommon_x11;xlib"
  QT_DISABLED_PUBLIC_FEATURES "accessibility_atspi_bridge;fontconfig;opengles2;opengles3;opengles31;opengles32;dynamicgl;opengl;vulkan;openvg;egl;ico;xcb;xcb_glx_plugin;textmarkdownreader;system_textmarkdownreader;textmarkdownwriter;textodfwriter;tabletevent;imageformatplugin;movie;image_heuristic_mask;whatsthis"
  QT_ENABLED_PRIVATE_FEATURES "freetype;harfbuzz;vkgen;png;imageio_text_loading;multiprocess;raster_64bit;raster_fp"
  QT_ENABLED_PUBLIC_FEATURES "freetype;harfbuzz;sessionmanager;texthtmlparser;cssparser;draganddrop;action;cursor;clipboard;wheelevent;im;highdpiscaling;validator;standarditemmodel;filesystemmodel;imageformat_bmp;imageformat_ppm;imageformat_xbm;imageformat_xpm;imageformat_png;imageformat_jpeg;image_text;picture;colornames;pdf;desktopservices;systemtrayicon;accessibility;undocommand;undostack;undogroup"
  QT_QMAKE_PRIVATE_CONFIG ""
  QT_QMAKE_PUBLIC_CONFIG ""
  QT_QMAKE_PUBLIC_QT_CONFIG ""
  _qt_config_module_name "gui"
  _qt_is_public_module "TRUE"
  _qt_module_has_headers "ON"
  _qt_module_has_private_headers "TRUE"
  _qt_module_has_public_headers "TRUE"
  _qt_module_has_qpa_headers "TRUE"
  _qt_module_has_rhi_headers "TRUE"
  _qt_module_include_name "QtGui"
  _qt_module_interface_name "Gui"
  _qt_package_name "Qt6Gui"
  _qt_package_version "6.6.1"
  _qt_private_module_target_name "GuiPrivate"
)

# Create imported target Qt6::GuiPrivate
add_library(Qt6::GuiPrivate INTERFACE IMPORTED)

set_target_properties(Qt6::GuiPrivate PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/gui;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::Gui,_qt_module_has_private_headers>>:/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtGui/6.6.1>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::Gui,_qt_module_has_private_headers>>:/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtGui/6.6.1/QtGui>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::Gui,_qt_module_has_private_headers>>:>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::Gui,_qt_module_has_private_headers>>:>"
  INTERFACE_LINK_LIBRARIES "Qt6::CorePrivate;Qt6::Gui"
  _qt_config_module_name "gui_private"
  _qt_is_private_module "TRUE"
  _qt_package_name "Qt6Gui"
  _qt_package_version "6.6.1"
  _qt_public_module_target_name "Gui"
)

# Import target "Qt6::Gui" for configuration "Release"
set_property(TARGET Qt6::Gui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::Gui PROPERTIES
  IMPORTED_LOCATION_RELEASE "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/QtGui.framework/Versions/A/QtGui"
  IMPORTED_SONAME_RELEASE "@rpath/QtGui.framework/Versions/A/QtGui"
  )

# Make sure the targets which have been exported in some other
# export set exist.
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
foreach(_target "Qt6::Core" "Qt6::CorePrivate" )
  if(NOT TARGET "${_target}" )
    set(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets "${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets} ${_target}")
  endif()
endforeach()

if(DEFINED ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
  if(CMAKE_FIND_PACKAGE_NAME)
    set( ${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
    set( ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  else()
    message(FATAL_ERROR "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  endif()
endif()
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
