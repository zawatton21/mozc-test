# Install script for directory: /Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./metatypes" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/meta_types/qt6exampleiconsprivate_release_metatypes.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateConfig.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateConfigVersion.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/libQt6ExampleIcons.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6ExampleIcons.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6ExampleIcons.a")
    execute_process(COMMAND "/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQt6ExampleIcons.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/Export/b717595aedf987fd68cde2898e13111f/Qt6ExampleIconsPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/Export/b717595aedf987fd68cde2898e13111f/Qt6ExampleIconsPrivateTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/Export/b717595aedf987fd68cde2898e13111f/Qt6ExampleIconsPrivateTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateVersionlessTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/Export/b717595aedf987fd68cde2898e13111f/Qt6ExampleIconsPrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/Export/b717595aedf987fd68cde2898e13111f/Qt6ExampleIconsPrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./modules" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/./modules/ExampleIconsPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/objects-Release/ExampleIconsPrivate_resources_1" TYPE FILE FILES ".rcc/qrc_example_icons.cpp.o" FILES_FROM_DIR "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/ExampleIconsPrivate_resources_1.dir/./")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/assets/icons/CMakeFiles/ExampleIconsPrivate_resources_1.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6ExampleIconsPrivate" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6ExampleIconsPrivate/Qt6ExampleIconsPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtExampleIcons" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/include/QtExampleIcons/QtExampleIconsDepends")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/mkspecs/modules/qt_lib_example_icons_private.pri")
endif()

