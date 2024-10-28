cmake_minimum_required(VERSION 3.16)

project(p06_05 LANGUAGES C)

add_executable(p06_05 main.c)

include(GNUInstallDirs)
install(TARGETS p06_05
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
