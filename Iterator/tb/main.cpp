#include <iostream>
#include <cstdlib>

#include "Book.hpp"
#include "Bookshelf.hpp"
#include "Iterator.hpp"

int main( void )
{
	Bookshelf bookshelf(5);

	Book book1( "book1" );
	bookshelf.appendBook( book1 );

	Book book2( "book2" );
	bookshelf.appendBook( book2 );

	Book book3( "book3" );
	bookshelf.appendBook( book3 );

	Iterator<Book> *it = bookshelf.iterator();
	while( it->hasNext() ){
		Book book = it->is();
		std::cout << book.getName() << std::endl;
		it->next();
	}

	return EXIT_SUCCESS;
}
