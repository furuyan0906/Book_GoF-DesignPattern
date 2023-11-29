#ifndef H__BOOK_SHELF__H
#define H__BOOK_SHELF__H


#include <vector>
#include "Aggregate.hpp"
#include "Book.hpp"

class Bookshelf : public Aggregate<Book>
{
	private:
		std::vector<Book> m_books;
		int  m_lastptr;

	public:
		Bookshelf( int maxsize );
		~Bookshelf();
		Book getBookAt( int ptr );
		void appendBook( Book book );
		int getShelfLength( void );
		Iterator<Book> *iterator( void );
};


#endif /* H__BOOK_SHELF__H */
