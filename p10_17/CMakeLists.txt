cmake_minimum_required(VERSION 3.16)

project(p10_17 LANGUAGES C)

add_executable(p10_17 main.c)

include(GNUInstallDirs)
install(TARGETS p10_17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
