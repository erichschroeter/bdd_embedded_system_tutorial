cmake_minimum_required(VERSION 3.0.0)
project(LED_Blinker VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(LED_Blinker src/main.cpp)

set(CPACK_PROJECT_NAME )
set(CPACK_PROJECT_VERSION )
include(CPack)


