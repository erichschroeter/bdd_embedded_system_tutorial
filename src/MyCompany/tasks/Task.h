#ifndef TASK_H
#define TASK_H

#include <string>

namespace MyCompany
{
    class Task
    {
    public:
        Task( std::string task_name );
        virtual ~Task();

        virtual void Run() = 0;
        virtual void Stop();
        void Set_Loop_Time( int ms );
        int Get_Loop_Time() const;

    protected:
        int m_loop_time_in_ms;
        int m_run_time_in_ms;
        bool m_is_running;
        std::string m_name;
    };
}

#endif /* #ifndef TASK_H */
