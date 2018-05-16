#ifndef GLOBAL_HARDWARE_H
#define GLOBAL_HARDWARE_H

#include <MyCompany/hardware/Hardware.h>

namespace MyCompany
{
    enum IO_ID
    {
        IO_LED,

        IO_COUNT
    };

    class IO
    {
    public:
        static void Initialize();
        static void Clean();
        static Hardware* Get( IO_ID id );

    private:
        IO();

        static Hardware *m_hardware[];
    };
}

#endif /* #ifndef GLOBAL_HARDWARE_H */
