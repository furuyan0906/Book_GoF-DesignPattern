#ifndef  H__LIST_PAGE__H
#define  H__LIST_PAGE__H

#include  <vector>
#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Page.hpp>

class ListPage : public Page
{
	public:
	    ListPage(std::string title, std::string author);
	    std::string makeHTML(void);
};


#endif  /* H__LIST_PAGE__H */
