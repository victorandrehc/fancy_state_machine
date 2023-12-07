cmake_minimum_required(VERSION 3.25)
project(fancy_state_machine)

set(CMAKE_CXX_STANDARD 20)

set(EXECUTABLE ${PROJECT_NAME})
set(SOURCE_FILES
        ${CMAKE_SOURCE_DIR}/source/StateMachineProcesser.cpp
        ${CMAKE_SOURCE_DIR}/source/StateA.cpp
        ${CMAKE_SOURCE_DIR}/source/StateB.cpp
        main.cpp)

add_executable(${EXECUTABLE} ${SOURCE_FILES})
target_include_directories(${EXECUTABLE} PUBLIC
        ${CMAKE_SOURCE_DIR}/include)