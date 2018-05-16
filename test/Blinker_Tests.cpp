
#include <MyCompany/Global_Hardware.h>
#include <MyCompany/tasks/Blinker_Task.h>

#include "catch.hpp"

using namespace MyCompany;

SCENARIO( "LED blinks at 1 Hz" )
{
    IO::Initialize();

    GIVEN( "I have an LED Blinker system" )
    {
        Digital_Output *led = static_cast< Digital_Output* >( IO::Get( IO_LED ) );
        Blinker_Task task;
        int accumulated_run_time_in_ms = 0;
        int RUN_STEP_SIZE_IN_MS = 10;

        WHEN( "the toggle time is set to 1 second" )
        {
            task.Set_Toggle_Time( 1000 );

            WHEN( "1010 milliseconds elapse" )
            {
                int run_period_in_ms = 1010;

                do
                {
                    task.Run();
                    run_period_in_ms -= RUN_STEP_SIZE_IN_MS;
                    accumulated_run_time_in_ms += RUN_STEP_SIZE_IN_MS;
                } while ( run_period_in_ms > 0 );

                THEN( "the LED will be on" )
                {
                    REQUIRE( led->Get_Value() == 1 );
                }

                WHEN( "1010 milliseconds elapse" )
                {
                    do
                    {
                        task.Run();
                        run_period_in_ms -= RUN_STEP_SIZE_IN_MS;
                        accumulated_run_time_in_ms += RUN_STEP_SIZE_IN_MS;
                    } while ( run_period_in_ms > 0 );

                    THEN( "the LED will be off" )
                    {
                        REQUIRE( led->Get_Value() == 0 );
                    }
                }
            }
        }
    }

    IO::Clean();
}