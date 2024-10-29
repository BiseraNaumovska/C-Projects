cmake_minimum_required(VERSION 3.16)

project(p13_07 LANGUAGES C)

add_executable(p13_07 main.c)

include(GNUInstallDirs)
install(TARGETS p13_07
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
