#include <string>
#include "Book.hpp"

Book::Book()
    : m_name( std::string(nullptr) )
{
}

Book::Book( const char *name )
    : m_name( std::string(name) )
{
}

Book::~Book()
{
}

std::string Book::getName( void )
{
	return m_name;
}
