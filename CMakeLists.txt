cmake_minimum_required(VERSION 3.26)
project(Da)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Da
        src/BasicServiceMetrics.cpp
        src/BasicServiceMetrics.h
        src/City.cpp
        src/City.h
        src/DataParsing.cpp
        src/DataParsing.h
        src/Graph.h
        src/Node.cpp
        src/Node.h
        src/Reservoir.cpp
        src/Reservoir.h
        src/Station.cpp
        src/Station.h)
