cmake_minimum_required(VERSION 3.16)

project(p08_14 LANGUAGES C)

add_executable(p08_14 main.c)

include(GNUInstallDirs)
install(TARGETS p08_14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
