#include  <vector>
#include  <string>

#include  <factory/Item.hpp>
#include  <factory/Page.hpp>
#include  <listfactory/ListPage.hpp>

ListPage::ListPage(std::string title, std::string author)
	: Page(title, author)
{
}

std::string ListPage::makeHTML(void)
{
	std::string str;

	str.append("<html><head><title>" + m_title + "</title></head>\n");
	str.append("<body>\n");
	str.append("<h1>" + m_title + "</h1>\n");
	str.append("<ul>\n");

	for(auto it = m_contents.begin(); it != m_contents.end(); ++it)
		str.append((*it)->makeHTML());

	str.append("</ul>\n");
	str.append("<hr><address>" + m_author + "</address>");
	str.append("</body></html>\n");

	return str;
}


