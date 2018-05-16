#ifndef DIGITAL_OUTPUT_H
#define DIGITAL_OUTPUT_H

#include "Hardware.h"

namespace MyCompany
{
    class Digital_Output : public Hardware
    {
    public:
        Digital_Output( int id, std::string name );
        virtual ~Digital_Output();

        void Set_Value( int value );
        int Get_Value() const;

    protected:
        int m_value;
    };
}

#endif /* #ifndef DIGITAL_OUTPUT_H */
