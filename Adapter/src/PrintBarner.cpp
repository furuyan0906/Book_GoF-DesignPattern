#include "Barner.hpp"
#include "PrintBarner.hpp"
#include <string>

PrintBarner::PrintBarner( const std::string str )
    : m_barner( str )
{
}

void PrintBarner::printWeak( void )
{
    m_barner.showWithParen();
}

void PrintBarner::printStrong( void )
{
    m_barner.showWithAster();
}