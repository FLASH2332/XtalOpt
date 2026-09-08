# Install script for directory: /mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/src/xtalopt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt"
         RPATH "\$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/bin/xtalopt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt"
         OLD_RPATH "::::::::::::::"
         NEW_RPATH "\$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xtalopt")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES
    "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/README.md"
    "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/LICENSE"
    "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/ChangeLog"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/schemes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libQt5Core.so.5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libQt5Core.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libQt5DBus.so.5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libQt5DBus.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libQt5Gui.so.5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libQt5Gui.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libQt5XcbQpa.so.5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libQt5XcbQpa.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5XcbQpa.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libicudata.so.74")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libicudata.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicudata.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libicui18n.so.74")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libicui18n.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicui18n.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libicuuc.so.74")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libicuuc.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicuuc.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib/libpng16.so.16")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/lib" TYPE FILE RENAME "libpng16.so.16" FILES "/usr/lib/x86_64-linux-gnu/libpng16.so.16.43.0")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/bin/platforms/libqxcb.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/xtalopt_linux/bin/platforms" TYPE FILE FILES "/usr/lib/x86_64-linux-gnu/qt5/plugins/platforms/libqxcb.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Concurrent.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Core.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5DBus.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Gui.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Network.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5OpenGL.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Svg.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Svg.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5Widgets.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libQt5XcbQpa.so.5" FILES "/usr/lib/x86_64-linux-gnu/libQt5XcbQpa.so.5.15.13")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libicudata.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicudata.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libicui18n.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicui18n.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libicuuc.so.74" FILES "/usr/lib/x86_64-linux-gnu/libicuuc.so.74.2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libpng16.so.16" FILES "/usr/lib/x86_64-linux-gnu/libpng16.so.16.43.0")
endif()

