# Install script for directory: /Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./metatypes" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/meta_types/qt6printsupport_release_metatypes.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6PrintSupport/Qt6PrintSupportConfig.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6PrintSupport/Qt6PrintSupportConfigVersion.cmake"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6PrintSupport/Qt6PrintSupportConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/QtPrintSupport.framework" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib"
      -add_rpath "@loader_path/../../../"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/CMakeFiles/Export/893f683a1d7948d2e0ede002b596fc68/Qt6PrintSupportTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/CMakeFiles/Export/893f683a1d7948d2e0ede002b596fc68/Qt6PrintSupportTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/CMakeFiles/Export/893f683a1d7948d2e0ede002b596fc68/Qt6PrintSupportTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportVersionlessTargets.cmake"
         "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/CMakeFiles/Export/893f683a1d7948d2e0ede002b596fc68/Qt6PrintSupportVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport/Qt6PrintSupportVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/src/printsupport/CMakeFiles/Export/893f683a1d7948d2e0ede002b596fc68/Qt6PrintSupportVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./modules" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/./modules/PrintSupport.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_html_docs_PrintSupport")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./doc/qtprintsupport" TYPE DIRECTORY FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/./doc/qtprintsupport/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_qch_docs_PrintSupport")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./doc" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/./doc/qtprintsupport.qch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PrintSupport" TYPE FILE FILES "/Users/madblack-21/Github/mozc/src/third_party/qt_src/lib/cmake/Qt6PrintSupport/Qt6PrintSupportAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/mkspecs/modules/qt_lib_printsupport.pri"
    "/Users/madblack-21/Github/mozc/src/third_party/qt_src/mkspecs/modules/qt_lib_printsupport_private.pri"
    )
endif()

