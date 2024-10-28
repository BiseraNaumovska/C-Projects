cmake_minimum_required(VERSION 3.16)

project(p11_04 LANGUAGES C)

add_executable(p11_04 main.c)

include(GNUInstallDirs)
install(TARGETS p11_04
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
