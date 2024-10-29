cmake_minimum_required(VERSION 3.16)

project(p12_09 LANGUAGES C)

add_executable(p12_09 main.c)

include(GNUInstallDirs)
install(TARGETS p12_09
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
