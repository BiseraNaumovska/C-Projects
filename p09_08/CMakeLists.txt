cmake_minimum_required(VERSION 3.16)

project(p09_08 LANGUAGES C)

add_executable(p09_08 main.c)

include(GNUInstallDirs)
install(TARGETS p09_08
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
