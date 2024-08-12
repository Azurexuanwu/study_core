cmake_minimum_required(VERSION 3.16)
project(MyProject)

################ select system #########################
execute_process(COMMAND lsb_release -rs
                TIMEOUT 3
                OUTPUT_VARIABLE ubuntu_version
                OUTPUT_STRIP_TRAILING_WHITESPACE)

message(STATUS "Ubuntu version: ${ubuntu_version}")

if(ubuntu_version STREQUAL "18.04")
    message(STATUS "Detected Ubuntu 18.04")
    # 在这里可以执行与Ubuntu 18.04相关的操作
elseif(ubuntu_version STREQUAL "20.04")
    message(STATUS "Detected Ubuntu 20.04")
    # 在这里可以执行与Ubuntu 20.04相关的操作
else()
    message(STATUS "Unsupported Ubuntu version")
    # 在这里可以处理不支持的Ubuntu版本
endif()

message(STATUS "-------------start--------------")

message(STATUS ${ubuntu_version})

message(STATUS "-------------end--------------")


set(CMAKE_CXX_STANDARD 11)

set(ROS_INCLUDE_DIRS "/opt/ros/noetic/include")
set(ROS_LINK_DIRS "/opt/ros/noetic/lib")

include_directories(${ROS_INCLUDE_DIRS})
link_directories(${ROS_LINK_DIRS})

add_executable(main main.cpp)
target_link_libraries(main pthread)

target_include_directories(main PRIVATE ${ROS_INCLUDE_DIRS})
target_link_directories(main PRIVATE ${ROS_LINK_DIRS})
