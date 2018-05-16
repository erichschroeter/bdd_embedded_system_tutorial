#ifndef BLINKER_TASK_H
#define BLINKER_TASK_H

#include <MyCompany/hardware/Digital_Output.h>

#include "Task.h"

namespace MyCompany
{
    class Blinker_Task : public Task
    {
    public:
        static const int DEFAULT_TOGGLE_TIME_IN_MS = 1000;

        Blinker_Task();
        virtual ~Blinker_Task();

        void Run();
        void Set_Toggle_Time( int ms );
        int Get_Toggle_Time() const;

    protected:
        Digital_Output *m_led;
        int m_toggle_time_in_ms;
        int m_toggle_timer_in_ms;
    };
}

#endif /* #ifndef BLINKER_TASK_H */
