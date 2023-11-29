#include "Iterator.hpp"
#include "Aggregate.hpp"
#include "Bookshelf.hpp"
#include "Book.hpp"
#include "BookshelfIterator.hpp"
#include <iostream>

Bookshelf::Bookshelf( int maxsize )
    : m_lastptr( 0 )
{
}

Bookshelf::~Bookshelf()
{
}

Book Bookshelf::getBookAt( int ptr )
{
	return m_books[ptr];
}

void Bookshelf::appendBook( Book book )
{
	m_books.push_back( book );
	++m_lastptr;
}

int Bookshelf::getShelfLength( void )
{
	return m_lastptr;
}

Iterator<Book> *Bookshelf::iterator( void )
{
	return new BookshelfIterator( *this );
}
