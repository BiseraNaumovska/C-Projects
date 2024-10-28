cmake_minimum_required(VERSION 3.16)

project(p07_06 LANGUAGES C)

add_executable(p07_06 main.c)

include(GNUInstallDirs)
install(TARGETS p07_06
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
