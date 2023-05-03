cmake_minimum_required(VERSION 3.0.0)
project(web_project VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)
set(WT_CONNECTOR "wtfcgi" CACHE STRING "Connector used (wthttp or wtfcgi)")

add_subdirectory(lib/utils)

add_executable(web_project src/main.cpp)
target_link_libraries(web_project utils)
