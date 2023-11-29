#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include "Product.hpp"
#include "MessageBox.hpp"


MessageBox::MessageBox(char decochar)
	: m_decochar(decochar)
{
}

void MessageBox::use(std::string str)
{
	int length = str.length();  // strのバイト数を取得

	for(int i = 0; i < length + 4; ++i )
		std::cout << m_decochar;
	std::cout << std::endl;

	std::cout << m_decochar << " " << str << " " << m_decochar << std::endl;


	for(int i = 0; i < length + 4; ++i )
		std::cout << m_decochar;
	std::cout << std::endl;
}

Product* MessageBox::createClone(void)
{
	Product *p = nullptr;

	try{
		p = static_cast<Product *>(this);

		if(p == nullptr)
			throw std::runtime_error("MessageBox : nullptr err.");
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return p;
}

