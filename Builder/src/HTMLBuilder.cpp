#include  <iostream>
#include  <vector>
#include  <string>
#include  <stdexcept>
#include  "HTMLBuilder.hpp"

void HTMLBuilder::makeTitle(std::string title)
{
	m_filename = title + ".html";

	try{
		m_writer.open(m_filename, std::ios::out);

		if(m_writer.fail())
			throw std::runtime_error("cannot open file.");
	}
	catch(std::exception &e){
		std::cout << "Exception:" << std::endl;
		std::cout << e.what() << std::endl;
	}

	m_writer << "<html><head><title>" + title + "</title></head><body>" << std::endl;
	m_writer << "<h1>" + title + "</h1>" << std::endl;
}

void HTMLBuilder::makeString(std::string str)
{
	m_writer << "<p>" + str + "</p>" << std::endl;
}

void HTMLBuilder::makeItems(std::vector<std::string> items)
{
	m_writer << "<ul>" << std::endl;
	for(auto it : items)
		m_writer << "<li>" + it + "</li>" << std::endl;
	m_writer << "</li>" << std::endl;
}

void HTMLBuilder::close(void)
{
	m_writer << "</body></html>" << std::endl;
	m_writer.close();
}

std::string HTMLBuilder::getResult(void)
{
	return m_filename;
}
