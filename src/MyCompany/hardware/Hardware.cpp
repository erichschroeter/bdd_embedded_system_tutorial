
#include "Hardware.h"

using namespace MyCompany;

Hardware::Hardware()
    :
    m_software_name( "" ),
    m_id( -1 )
{
}

Hardware::~Hardware()
{
}

void Hardware::Set_ID( int id )
{
    m_id = id;
}

int Hardware::Get_ID() const
{
    return m_id;
}

void Hardware::Set_Software_Name( std::string name )
{
    m_software_name = name;
}

std::string Hardware::Get_Software_Name() const
{
    return m_software_name;
}
