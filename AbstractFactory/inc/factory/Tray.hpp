#ifndef  H__TRAY__H
#define  H__TRAY__H


#include  <vector>
#include  <string>
#include  <factory/Item.hpp>

class Tray : public Item
{
	protected:
		std::vector<Item *> m_tray;

	public:
		Tray(std::string caption);
		~Tray(){}
		void add(Item *item);
		virtual std::string makeHTML(void) = 0;
};


#endif  /* H__TRAY__H */
