cmake_minimum_required(VERSION 3.16)

project(p05_06 LANGUAGES C)

add_executable(p05_06 main.c)

include(GNUInstallDirs)
install(TARGETS p05_06
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
