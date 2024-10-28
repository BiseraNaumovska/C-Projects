cmake_minimum_required(VERSION 3.16)

project(p06_07 LANGUAGES C)

add_executable(p06_07 main.c)

include(GNUInstallDirs)
install(TARGETS p06_07
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
