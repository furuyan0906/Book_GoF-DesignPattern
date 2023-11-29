#include  <iostream>
#include  <fstream>
#include  <vector>
#include  <string>
#include  <exception>
#include  <stdexcept>

#include  <factory/Item.hpp>
#include  <factory/Page.hpp>

Page::Page(std::string title, std::string author)
	: m_title(title), m_author(author)
{
}

void Page::add(Item *item)
{
	m_contents.push_back(item);
}

void Page::output(void)
{
	try{
		std::string filename = m_title + ".html";
		std::ofstream writer;

		writer.open(filename, std::ios::out);
		if(writer.fail())
			throw std::runtime_error("cannot open" + filename);

		writer << this->makeHTML() << std::endl;
		writer.close();

		std::cout << filename + "を作成しました." << std::endl;
	}
	catch(const std::exception &e){
		std::cout << "Exception:" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

