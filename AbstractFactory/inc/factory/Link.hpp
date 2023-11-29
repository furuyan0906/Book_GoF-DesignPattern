#ifndef  H__LINK__H
#define  H__LINK__H


#include  <string>
#include  <factory/Item.hpp>

class Link : public Item
{
	protected:
		std::string m_url;

	public:
		Link(std::string caption, std::string url);
		~Link(){}
		virtual std::string makeHTML(void) = 0;
};


#endif  /* H__LINK__H */
