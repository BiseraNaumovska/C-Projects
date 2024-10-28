cmake_minimum_required(VERSION 3.16)

project(p09_03 LANGUAGES C)

add_executable(p09_03 main.c)

include(GNUInstallDirs)
install(TARGETS p09_03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
