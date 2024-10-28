cmake_minimum_required(VERSION 3.16)

project(p03_11 LANGUAGES C)

add_executable(p03_11 main.c)

include(GNUInstallDirs)
install(TARGETS p03_11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
