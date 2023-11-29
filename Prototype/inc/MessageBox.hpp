
#ifndef H__MESSAGE_BOX__H
#define H__MESSAGE_BOX__H


#include <string>
#include "Product.hpp"

class MessageBox : public Product
{
	private:
		char m_decochar;

	public:
		MessageBox(char);
		void use(std::string);
		Product* createClone(void);
};


#endif /* H__MESSAGE_BOX__H */
