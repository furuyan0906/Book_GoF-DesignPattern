#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>
#include  <factory/Factory.hpp>
#include  <listfactory/ListLink.hpp>
#include  <listfactory/ListTray.hpp>
#include  <listfactory/ListPage.hpp>
#include  <listfactory/ListFactory.hpp>

Link* ListFactory::createLink(std::string caption, std::string url)
{
	Link *link = static_cast<Link *>( new ListLink(caption, url) );
	return link;
}

Tray* ListFactory::createTray(std::string caption)
{
	Tray *tray = static_cast<Tray *>( new ListTray(caption) );
	return tray;
}

Page* ListFactory::createPage(std::string title, std::string author)
{
	Page *page = static_cast<Page *>( new ListPage(title, author) );
	return page;
}

