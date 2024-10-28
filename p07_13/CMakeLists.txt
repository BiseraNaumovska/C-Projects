cmake_minimum_required(VERSION 3.16)

project(p07_13 LANGUAGES C)

add_executable(p07_13 main.c)

include(GNUInstallDirs)
install(TARGETS p07_13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
