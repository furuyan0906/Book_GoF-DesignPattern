#ifndef  H__LIST_LINK__H
#define  H__LIST_LINK__H

#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>

class ListLink : public Link
{
	public:
		ListLink(std::string caption, std::string url);
		std::string makeHTML(void);
};


#endif  /* H__LIST_LINK__H */
