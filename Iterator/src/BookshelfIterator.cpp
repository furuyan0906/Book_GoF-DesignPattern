#include "BookshelfIterator.hpp"

BookshelfIterator::BookshelfIterator( Bookshelf bookshelf )
	: m_bookshelf( bookshelf ), m_bookshelfptr( 0 )
{
}

bool BookshelfIterator::hasNext( void )
{
	return ( m_bookshelfptr < m_bookshelf.getShelfLength() );
}

Book BookshelfIterator::is( void )
{
	return m_bookshelf.getBookAt( m_bookshelfptr );
}

void BookshelfIterator::next( void )
{
	m_bookshelfptr++;
}
