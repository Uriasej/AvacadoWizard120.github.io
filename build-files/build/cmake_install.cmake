# Install script for directory: /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/install")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE PROGRAM FILES "/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/src/application/package/linux/MultiMC")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/libnbtplusplus/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/ganalytics/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/systeminfo/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/hoedown/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/launcher/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/javacheck/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/xz-embedded/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/quazip/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/rainbow/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/iconfix/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/LocalPeer/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/classparser/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/optional-bare/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/buildconfig/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/api/logic/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/api/gui/cmake_install.cmake")
  include("/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/application/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
