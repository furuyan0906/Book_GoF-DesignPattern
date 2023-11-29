#include "Barner.hpp"
#include <string>
#include <iostream>

Barner::Barner( const std::string str )
    : m_str( str )
{
}

void Barner::showWithParen( void )
{
    std::cout << "(" << m_str << ")" << std::endl;
}

void Barner::showWithAster( void )
{
    std::cout << "*" << m_str << "*" << std::endl;
}