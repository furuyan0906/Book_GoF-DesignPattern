#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include "Product.hpp"
#include "UnderlinePen.hpp"

UnderlinePen::UnderlinePen(char ulchar)
	: m_ulchar(ulchar)
{
}

void UnderlinePen::use(std::string str)
{
	int length = str.length();

	std::cout << "\" " << str << " \"" << std::endl;

	std::cout << "  ";
	for(int i = 0; i < length; ++i)
		std::cout <<  m_ulchar;
	std::cout << "  " << std::endl;
}

Product* UnderlinePen::createClone(void)
{
	Product *p = nullptr;

	try{
		p = static_cast<Product *>(this);

		if(p == nullptr)
			throw std::runtime_error("UnderlinePen : nullptr err.");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return p;
}
