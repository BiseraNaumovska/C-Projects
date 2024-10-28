cmake_minimum_required(VERSION 3.16)

project(p06_08 LANGUAGES C)

add_executable(p06_08 main.c)

include(GNUInstallDirs)
install(TARGETS p06_08
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
