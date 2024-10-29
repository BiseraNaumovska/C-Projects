cmake_minimum_required(VERSION 3.16)

project(p13_05 LANGUAGES C)

add_executable(p13_05 main.c)

include(GNUInstallDirs)
install(TARGETS p13_05
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
