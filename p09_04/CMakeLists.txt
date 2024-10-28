cmake_minimum_required(VERSION 3.16)

project(p09_04 LANGUAGES C)

add_executable(p09_04 main.c)

include(GNUInstallDirs)
install(TARGETS p09_04
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
