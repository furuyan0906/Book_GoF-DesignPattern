#include  <iostream>
#include  <vector>
#include  <string>
#include  "TextBuilder.hpp"

void TextBuilder::makeTitle(std::string title)
{
	m_buffer.append("===========================\n");
	m_buffer.append("[" + title + "]\n");
	m_buffer.append("\n");
}

void TextBuilder::makeString(std::string str)
{
	m_buffer.append("■" + str + "\n");
	m_buffer.append("\n");
}

void TextBuilder::makeItems(std::vector<std::string> items)
{
	for(auto it : items)
		m_buffer.append("  \'" +it + "\n");
	m_buffer.append("\n");
}

void TextBuilder::close(void)
{
	m_buffer.append("===========================\n");
}

std::string TextBuilder::getResult(void)
{
	return m_buffer;
}
