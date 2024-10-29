cmake_minimum_required(VERSION 3.16)

project(p11_21 LANGUAGES C)

add_executable(p11_21 main.c)

include(GNUInstallDirs)
install(TARGETS p11_21
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
