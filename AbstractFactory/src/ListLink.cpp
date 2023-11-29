#include  <string>

#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <listfactory/ListLink.hpp>

ListLink::ListLink(std::string caption, std::string url)
	: Link(caption, url)
{
}

std::string ListLink::makeHTML(void)
{
	std::string str = "  <li><a href=\"" + m_url + "\">" + m_caption + "</a></li>\n";
	return str;
}

