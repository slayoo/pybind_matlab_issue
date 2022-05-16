cmake_minimum_required(VERSION 3.4...3.18)
project(pybind_matlab_issue LANGUAGES CXX)
add_subdirectory(pybind11)
pybind11_add_module(pybind_matlab_issue pybind_matlab_issue.cpp)
target_compile_definitions(pybind_matlab_issue PRIVATE VERSION_INFO=${VERSION_INFO})

