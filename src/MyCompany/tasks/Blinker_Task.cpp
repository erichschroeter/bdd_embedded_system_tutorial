
#include <MyCompany/Global_Hardware.h>

#include "Blinker_Task.h"

using namespace MyCompany;

Blinker_Task::Blinker_Task()
    :
    m_toggle_time_in_ms( DEFAULT_TOGGLE_TIME_IN_MS ),
    m_toggle_timer_in_ms( DEFAULT_TOGGLE_TIME_IN_MS ),
    Task( "Blinker_Task" )
{
    m_led = static_cast< Digital_Output* >( IO::Get( IO_LED ) );
}

Blinker_Task::~Blinker_Task()
{
}

void Blinker_Task::Set_Toggle_Time( int ms )
{
    m_toggle_time_in_ms = ms;
}

int Blinker_Task::Get_Toggle_Time() const
{
    return m_toggle_time_in_ms;
}

void Blinker_Task::Run()
{
    m_run_time_in_ms += m_loop_time_in_ms;
    m_toggle_timer_in_ms -= m_loop_time_in_ms;

    if ( m_toggle_timer_in_ms <= 0 )
    {
        m_toggle_timer_in_ms = m_toggle_time_in_ms;
        m_led->Set_Value( !m_led->Get_Value() );
    }
}