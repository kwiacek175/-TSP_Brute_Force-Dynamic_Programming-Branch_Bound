cmake_minimum_required(VERSION 3.30)
project(TSP_Brute_Force&Dynamic_Programming&Branch_Bound)

set(CMAKE_CXX_STANDARD 20)

add_executable(TSP_Solvers src/app/main.cpp
        inc/structures/MyStack.h
        src/structures/MyStack.cpp
        src/ui/Menu.cpp
        src/structures/Graph.cpp
        inc/algorithms/TSP_Branch_Bound.h
        inc/algorithms/TSP_Brute_Force.h
        inc/algorithms/TSP_Dynamic_Programming.h
        src/algorithms/TSP_Branch_Bound.cpp
        src/algorithms/TSP_Brute_Force.cpp
        src/algorithms/TSP_Dynamic_Programming.cpp
        inc/structures/Graph.h
        inc/ui/Menu.h
)

target_include_directories(TSP_Solvers PRIVATE inc)
