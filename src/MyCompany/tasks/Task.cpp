
#include "Task.h"

using namespace MyCompany;

Task::Task( std::string task_name )
    :
    m_loop_time_in_ms( 1000 ),
    m_run_time_in_ms( 0 ),
    m_is_running( false ),
    m_name( task_name )
{
}

Task::~Task()
{
}

void Task::Set_Loop_Time( int ms )
{
    if ( !m_is_running )
    {
        m_loop_time_in_ms = ms;
    }
}

int Task::Get_Loop_Time() const
{
    return m_loop_time_in_ms;
}

void Task::Stop()
{
    m_is_running = false;
}
