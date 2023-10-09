cmake_minimum_required(VERSION 3.12)

project(homework_5)

set (CMAKE_CXX_STANDARD 17)

add_executable(homework_5
    src/main.cpp
	src/MainWindow.cpp
	src/ishape.h
	src/circle.h
	src/square.h
	src/controller.cpp
	src/model.cpp
	src/observer.h
	src/stdafx.h
)

target_include_directories(homework_5
    PRIVATE "${CMAKE_BINARY_DIR}"
)

install(TARGETS homework_5 RUNTIME DESTINATION bin)
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_FILE_NAME "homework_5")
set(CPACK_PACKAGE_CONTACT art.shestakov@icloud.com)
include(CPack)
