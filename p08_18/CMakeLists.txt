cmake_minimum_required(VERSION 3.16)

project(p08_18 LANGUAGES C)

add_executable(p08_18 main.c)

include(GNUInstallDirs)
install(TARGETS p08_18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
