#ifndef HARDWARE_H
#define HARDWARE_H

#include <string>

namespace MyCompany
{
    class Hardware
    {
    public:
        Hardware();
        virtual ~Hardware();

        void Set_ID( int id );
        int Get_ID() const;
        void Set_Software_Name( std::string name );
        std::string Get_Software_Name() const;

    protected:
        std::string m_software_name;
        int m_id;
    };
}

#endif /* #ifndef HARDWARE_H */
