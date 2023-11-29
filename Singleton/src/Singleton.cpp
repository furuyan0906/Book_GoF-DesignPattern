#include <iostream>
#include "Singleton.hpp"

Singleton::Singleton()
{
    std::cout << "new instance has been generated." << std::endl;
}

Singleton::~Singleton()
{
    std::cout << "instance has been deleted." << std::endl;
}

const Singleton& Singleton::getInstance(void)
{
	static Singleton m_singleton; 
    return m_singleton;
}
