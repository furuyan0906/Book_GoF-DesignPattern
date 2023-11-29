#include <iostream>
#include <string>
#include "StringDisplay.hpp"

StringDisplay::StringDisplay( const std::string str )
    : m_str( str )
{
}

void StringDisplay::println( void )
{
    std::cout << "+";

    int length = m_str.length();
    for( int i = 0; i < length; i++ ){
        std::cout << "-";
    }

    std::cout << "+" << std::endl;
}

void StringDisplay::open( void )
{
    this->println();
}

void StringDisplay::print( void )
{
    std::cout << "|" << m_str << "|" << std::endl;
}

void StringDisplay::close( void )
{
    this->println();
}