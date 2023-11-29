#ifndef H__MANAGER__H
#define H__MANAGER__H


#include <string>
#include <unordered_map>
#include "Product.hpp"

class Manager
{
	private:
		std::unordered_map<std::string, Product*> m_showcase;
	
	public:
		void regist(std::string, Product*);
		Product* create(std::string);
};


#endif /* H__MANAGER__H */
