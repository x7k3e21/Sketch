
cmake_minimum_required(VERSION 4.2)

add_library(Sketch.Core)
add_library(Sketch::Core ALIAS Sketch.Core)

target_include_directories(Sketch.Core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_sources(Sketch.Core PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Log/Log.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Log/Logger.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Log/Sink.hpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Log/Sinks/ConsoleSink.hpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Application.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Sketch/Core/Entry.hpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/source/Log/Logger.cpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/source/Log/Sinks/ConsoleSink.cpp"

    "${CMAKE_CURRENT_SOURCE_DIR}/source/Application.cpp"
)