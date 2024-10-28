cmake_minimum_required(VERSION 3.16)

project(p07_10 LANGUAGES C)

add_executable(p07_10 main.c)

include(GNUInstallDirs)
install(TARGETS p07_10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
