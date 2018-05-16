
#include <MyCompany/hardware/Digital_Output.h>

#include "Global_Hardware.h"

using namespace MyCompany;

Hardware* MyCompany::IO::m_hardware[ IO_COUNT ];

IO::IO()
{
    for ( int i = 0; i < (int)IO_COUNT; i++ )
    {
        m_hardware[ i ] = NULL;
    }
}

void IO::Initialize()
{
    m_hardware[ IO_LED ] = new Digital_Output( IO_LED, "IO_LED" );
}

void IO::Clean()
{
    for ( int i = 0; i < (int)IO_COUNT; i++ )
    {
        delete m_hardware[ i ];
    }
}

Hardware* IO::Get( IO_ID id )
{
    return m_hardware[ id ];
}
