#ifndef  H__PAGE__H
#define  H__PAGE__H


#include  <vector>
#include  <string>
#include  <factory/Item.hpp>

class Page
{
	protected:
		std::string m_title;
		std::string m_author;
		std::vector<Item *> m_contents;

	public:
		Page(std::string title, std::string author);
		~Page(){}
		void add(Item *item);
		void output(void);
		virtual std::string makeHTML(void) = 0;
};


#endif  /* H__PAGE__H */
