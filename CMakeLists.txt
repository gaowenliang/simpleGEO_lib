# cmake needs this line
cmake_minimum_required(VERSION 2.8)

# Define project name
project(opencv_example_project)

find_package(Eigen3  REQUIRED)

message(STATUS "Eigen library path: ${EIGEN3_INCLUDE_DIR}")

include_directories(
    ${EIGEN3_INCLUDE_DIR}
    )

set(WGS_SRC
    ${PROJECT_SOURCE_DIR}/sampleGEO_lib/geobase.cpp
    ${PROJECT_SOURCE_DIR}/sampleGEO_lib/wgs84.cpp
    )

# Declare the executable target built from your sources
add_executable(run_test run_test.cpp ${WGS_SRC})

# Link your application with OpenCV libraries
#target_link_libraries(run_test ${CERES_LIBRARIES}  ${OpenCV_LIBS})
