#include  <vector>
#include  <string>

#include  <factory/Item.hpp>
#include  <factory/Tray.hpp>
#include  <listfactory/ListTray.hpp>


ListTray::ListTray(std::string caption)
	: Tray(caption)
{
}

std::string ListTray::makeHTML(void)
{
	std::string str;

	str.append("<li>\n");
	str.append(m_caption + "\n");
	str.append("<ul>\n");

	for(auto it = m_tray.begin(); it != m_tray.end(); ++it )
		str.append((*it)->makeHTML());

	str.append("</ul>\n");
	str.append("</li>\n");

	return str;
}

