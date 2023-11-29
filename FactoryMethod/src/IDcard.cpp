#include <iostream>
#include <string>
#include "IDcard.hpp"
using namespace idcard;

IDcard::IDcard( std::string owner )
    : m_owner( owner )
{
    std::cout << "We make the card, " << m_owner << std::endl;
}

void IDcard::use( void )
{
    std::cout << "We use the card, " << m_owner << std::endl;
}

std::string IDcard::getOwner( void )
{
    return m_owner;
}