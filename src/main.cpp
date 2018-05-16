#include <iostream>
// #include <unistd.h>
#include <chrono>
#include <thread>

#include <MyCompany/tasks/Blinker_Task.h>

using namespace MyCompany;

int main(int argc, char **argv)
{
    Blinker_Task task;
    int loop_time_in_ms = 10;
    // int loop_time_in_us = 10 * 1000;
    task.Set_Loop_Time( loop_time_in_ms );

    do
    {
        task.Run();
        // usleep( loop_time_in_us );
        std::this_thread::sleep_for( std::chrono::milliseconds( loop_time_in_ms ) );
    } while ( true );

    return 0;
}

