cmake_minimum_required(VERSION 3.16)

project(p12_04 LANGUAGES C)

add_executable(p12_04 main.c)

include(GNUInstallDirs)
install(TARGETS p12_04
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
