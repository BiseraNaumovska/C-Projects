cmake_minimum_required(VERSION 3.16)

project(p11_28 LANGUAGES C)

add_executable(p11_28 main.c)

include(GNUInstallDirs)
install(TARGETS p11_28
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
