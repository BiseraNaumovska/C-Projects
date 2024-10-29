cmake_minimum_required(VERSION 3.16)

project(p11_24 LANGUAGES C)

add_executable(p11_24 main.c)

include(GNUInstallDirs)
install(TARGETS p11_24
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
