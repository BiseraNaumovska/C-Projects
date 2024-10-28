cmake_minimum_required(VERSION 3.16)

project(p01_08 LANGUAGES C)

add_executable(p01_08 main.c)

include(GNUInstallDirs)
install(TARGETS p01_08
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
