#ifndef  H__LIST_FACTORY__H
#define  H__LIST_FACTORY__H

#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>
#include  <factory/Factory.hpp>

class ListFactory : public Factory
{
	Link* createLink(std::string caption, std::string url);
	Tray* createTray(std::string caption);
	Page* createPage(std::string titile, std::string author);
};


#endif  /* H__LIST_FACTORY__H */
