# Install script for directory: /Users/Sean/Desktop/cs_project/vxl-tsai/config/cmake/export

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vxl/cmake" TYPE FILE FILES
    "/Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/config/cmake/export/VXLConfig.cmake"
    "/Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/VXLBuildSettings.cmake"
    "/Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/VXLLibraryDepends.cmake"
    "/Users/Sean/Desktop/cs_project/vxl-tsai/config/cmake/Modules/VXLStandardOptions.cmake"
    "/Users/Sean/Desktop/cs_project/vxl-tsai/config/cmake/Modules/UseVXL.cmake"
    "/Users/Sean/Desktop/cs_project/vxl-tsai/config/cmake/Modules/UseVGUI.cmake"
    )
endif()

