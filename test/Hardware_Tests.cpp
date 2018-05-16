
#include <MyCompany/Global_Hardware.h>

#include "catch.hpp"

using namespace MyCompany;

TEST_CASE( "Verify hardware initialization sets every ID", "[hardware]" )
{
    IO::Initialize();

    Hardware *previous_hw = NULL;
    for ( int i = 0; i < (int)IO_COUNT; i++ )
    {
        Hardware *hw = IO::Get( (IO_ID)i );
        if ( hw == 0 )
        {
            // call INFO after the REQUIRE otherwise program will segfault if the pointer is NULL.
            INFO( "Last Hardware instantiated was (" << previous_hw->Get_ID() << ") " << previous_hw->Get_Software_Name() );
            REQUIRE( hw != 0 );
        }
        REQUIRE( hw != 0 );
        previous_hw = hw;
    }

    IO::Clean();
}
