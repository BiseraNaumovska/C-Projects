cmake_minimum_required(VERSION 3.16)

project(p13_03 LANGUAGES C)

add_executable(p13_03 main.c)

include(GNUInstallDirs)
install(TARGETS p13_03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
