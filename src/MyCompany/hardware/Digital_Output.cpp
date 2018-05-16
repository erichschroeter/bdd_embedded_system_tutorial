
#include "Digital_Output.h"

using namespace MyCompany;

Digital_Output::Digital_Output( int id, std::string name )
    :
    m_value( 0 )
{
    Set_ID( id );
    Set_Software_Name( name );
}

Digital_Output::~Digital_Output()
{
}

void Digital_Output::Set_Value( int value )
{
    m_value = value;
}

int Digital_Output::Get_Value() const
{
    return m_value;
}
