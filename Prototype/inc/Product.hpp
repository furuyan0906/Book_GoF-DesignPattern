#ifndef H__PRODUCT__H
#define H__PRODUCT__H


#include  <string>

class Product
{
	public:
		virtual ~Product(){
		}
		virtual void use( std::string ) = 0;
		virtual Product* createClone( void ) = 0;
};


#endif /* H__PRODUCT__H */
