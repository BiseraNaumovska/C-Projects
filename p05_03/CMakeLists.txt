cmake_minimum_required(VERSION 3.16)

project(p05_03 LANGUAGES C)

add_executable(p05_03 main.c)

include(GNUInstallDirs)
install(TARGETS p05_03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
