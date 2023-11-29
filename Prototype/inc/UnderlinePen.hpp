
#ifndef H__UNDERLINE_PEN__H
#define H__UNDERLINE_PEN__H


#include <string>
#include "Product.hpp"

class UnderlinePen : public Product
{
	private:
		char m_ulchar;

	public:
		UnderlinePen(char ulchar);
		void use(std::string);
		Product* createClone(void);
};


#endif /* H__UNDERLINE_PEN__H */
