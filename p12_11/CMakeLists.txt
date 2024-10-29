cmake_minimum_required(VERSION 3.16)

project(p12_11 LANGUAGES C)

add_executable(p12_11 main.c)

include(GNUInstallDirs)
install(TARGETS p12_11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
