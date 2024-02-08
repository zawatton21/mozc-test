# Install script for directory: /Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/madblack-21/Github/mozc/src/third_party/qt")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./metatypes" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/meta_types/qt6devicediscoverysupportprivate_release_metatypes.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateConfig.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateConfigVersion.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/libQt6DeviceDiscoverySupport.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6DeviceDiscoverySupport.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6DeviceDiscoverySupport.a")
    execute_process(COMMAND "/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6DeviceDiscoverySupport.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/CMakeFiles/Export/15cbf712069904172ecb390f49f68fd8/Qt6DeviceDiscoverySupportPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/CMakeFiles/Export/15cbf712069904172ecb390f49f68fd8/Qt6DeviceDiscoverySupportPrivateTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/CMakeFiles/Export/15cbf712069904172ecb390f49f68fd8/Qt6DeviceDiscoverySupportPrivateTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateVersionlessTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/CMakeFiles/Export/15cbf712069904172ecb390f49f68fd8/Qt6DeviceDiscoverySupportPrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/CMakeFiles/Export/15cbf712069904172ecb390f49f68fd8/Qt6DeviceDiscoverySupportPrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./modules" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/./modules/DeviceDiscoverySupportPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6DeviceDiscoverySupportPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6DeviceDiscoverySupportPrivate/Qt6DeviceDiscoverySupportPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtDeviceDiscoverySupport" TYPE DIRECTORY FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtDeviceDiscoverySupport/.syncqt_staging/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtDeviceDiscoverySupport" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtDeviceDiscoverySupport/QtDeviceDiscoverySupportDepends")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtDeviceDiscoverySupport/6.6.1/QtDeviceDiscoverySupport/private" TYPE FILE FILES
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/qdevicediscovery_p.h"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/platformsupport/devicediscovery/qdevicediscovery_dummy_p.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/mkspecs/modules/qt_lib_devicediscovery_support_private.pri")
endif()

