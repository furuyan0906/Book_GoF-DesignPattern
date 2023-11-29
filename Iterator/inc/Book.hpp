#ifndef H__BOOK__H
#define H__BOOK__H


#include <string>

class Book
{
	private:
		std::string m_name;

	public:
	    Book();
		Book( const char *name );
		~Book();
		std::string getName( void );
};


#endif /* H__BOOK__H */
