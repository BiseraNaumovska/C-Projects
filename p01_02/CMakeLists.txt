cmake_minimum_required(VERSION 3.16)

project(p01_02 LANGUAGES C)

add_executable(p01_02 main.c)

include(GNUInstallDirs)
install(TARGETS p01_02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
