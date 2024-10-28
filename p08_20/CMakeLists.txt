cmake_minimum_required(VERSION 3.16)

project(p08_20 LANGUAGES C)

add_executable(p08_20 main.c)

include(GNUInstallDirs)
install(TARGETS p08_20
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
