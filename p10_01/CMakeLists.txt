cmake_minimum_required(VERSION 3.16)

project(p10_01 LANGUAGES C)

add_executable(p10_01 main.c)

include(GNUInstallDirs)
install(TARGETS p10_01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
