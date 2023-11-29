#include  <iostream>
#include  <string>

#include  "Entry.hpp"
#include  "File.hpp"

File::File(std::string name, int size)
	: m_name(name), m_size(size)
{
}

std::string File::getName(void)
{
	return m_name;
}

int File::getSize(void)
{
	return m_size;
}

void File::printList(std::string prefix)
{
	std::cout << prefix + "/" + this->toString() << std::endl;
}

