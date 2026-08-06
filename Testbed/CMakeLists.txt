
cmake_minimum_required(VERSION 4.2)

add_executable(Testbed)

target_include_directories(Testbed PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_sources(Testbed PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Testbed/Testbed.hpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/source/Testbed.cpp"
)

target_link_libraries(Testbed PRIVATE
    Sketch::Core
)