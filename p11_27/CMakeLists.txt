cmake_minimum_required(VERSION 3.16)

project(p11_27 LANGUAGES C)

add_executable(p11_27 main.c)

include(GNUInstallDirs)
install(TARGETS p11_27
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
