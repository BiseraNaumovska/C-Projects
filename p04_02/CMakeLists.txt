cmake_minimum_required(VERSION 3.16)

project(p04_02 LANGUAGES C)

add_executable(p04_02 main.c)

include(GNUInstallDirs)
install(TARGETS p04_02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
