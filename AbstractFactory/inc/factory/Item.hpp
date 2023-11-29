#ifndef  H__ITEM__H
#define  H__ITEM__H


#include  <string>

class Item
{
	protected:
		std::string m_caption;

	public:
		Item(std::string caption);
		~Item(){}
		virtual std::string makeHTML(void) = 0;
};


#endif  /* H__ITEM__H */
