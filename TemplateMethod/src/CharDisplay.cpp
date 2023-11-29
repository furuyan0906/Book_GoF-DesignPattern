#include <iostream>
#include "CharDisplay.hpp"

CharDisplay::CharDisplay( const char ch )
    : m_ch( ch )
{
}

void CharDisplay::open( void )
{
    std::cout << "<<";
}

void CharDisplay::print( void )
{
    std::cout << m_ch;
}

void CharDisplay::close( void )
{
    std::cout << ">>" << std::endl;
}