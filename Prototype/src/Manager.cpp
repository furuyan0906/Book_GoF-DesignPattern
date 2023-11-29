#include <string>
#include "Product.hpp"
#include "Manager.hpp"


void Manager::regist(std::string name, Product *proto)
{
	m_showcase[name] = proto;
}

Product* Manager::create(std::string name)
{
	Product *p = m_showcase[name];

	return p->createClone();
}


