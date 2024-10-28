cmake_minimum_required(VERSION 3.16)

project(p06_15 LANGUAGES C)

add_executable(p06_15 main.c)

include(GNUInstallDirs)
install(TARGETS p06_15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
