#ifndef H__BOOK_SHELF_ITERATOR__H
#define H__BOOK_SHELF_ITERATOR__H


#include "Iterator.hpp"
#include "Book.hpp"
#include "Bookshelf.hpp"

class BookshelfIterator : public Iterator<Book>
{
	private:
		Bookshelf m_bookshelf;
		int m_bookshelfptr;

	public:
		BookshelfIterator( Bookshelf bookshelf );
		bool hasNext( void );
		Book is( void );
		void next( void );
};


#endif /* H__BOOK_SHELF_ITERATOR__H */
