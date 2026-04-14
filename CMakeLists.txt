cmake_minimum_required(VERSION 3.31)

project(CPP_HW_1)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        main.cpp
        Tech/Modelation.cpp
        Tech/Solver.cpp
        Teacher.cpp
        Containers/Equation.cpp
        Students/AvgStudent.cpp
)

set(HEADERS
        Tech/Modelation.hpp
        Tech/Solver.hpp
        Teacher.hpp
        Containers/Equation.hpp
        Containers/Letter.hpp
        Containers/Solution.hpp
        Students/Student.hpp
        Students/GoodStudent.hpp
        Students/BadStudent.hpp
        Students/AvgStudent.hpp
)

add_executable(CPP_HW_1 ${SOURCES} ${HEADERS})


target_include_directories(CPP_HW_1 PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Containers
        ${CMAKE_CURRENT_SOURCE_DIR}/Students
)