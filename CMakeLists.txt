cmake_minimum_required(VERSION 3.23)
project(ejercicios_cplusplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(ejercicios_cplusplus main.cpp src/service/impl/Sphere.cpp src/service/Sphere.h src/service/impl/BasicOperationsPrinter.cpp src/service/BasicOperationsPrinter.h src/service/impl/Rectangle.cpp src/service/Rectangle.h src/service/impl/BasicCalculator.cpp src/service/BasicCalculator.h src/utils/impl/TimeUtils.cpp src/utils/TimeUtils.h src/service/impl/Factorial.cpp src/service/Factorial.h src/utils/impl/ArrayUtils.cpp src/utils/ArrayUtils.h)
