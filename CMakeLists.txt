cmake_minimum_required(VERSION 3.0.0)
project(LED_Blinker VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(mycompany
    src/MyCompany/tasks/Blinker_Task.h
    src/MyCompany/tasks/Blinker_Task.cpp
    src/MyCompany/tasks/Task.h
    src/MyCompany/tasks/Task.cpp
    src/MyCompany/hardware/Digital_Output.h
    src/MyCompany/hardware/Digital_Output.cpp
    src/MyCompany/hardware/Hardware.h
    src/MyCompany/hardware/Hardware.cpp
    )
target_include_directories(mycompany
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
    )

add_executable(LED_Blinker src/main.cpp)
target_link_libraries(LED_Blinker mycompany)

set(CPACK_PROJECT_NAME )
set(CPACK_PROJECT_VERSION )
include(CPack)


