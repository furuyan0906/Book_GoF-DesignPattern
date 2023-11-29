#ifndef  H__LIST_TRAY__H
#define  H__LIST_TRAY__H

#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Tray.hpp>

class ListTray : public Tray
{
	public:
	    ListTray(std::string caption);
	    std::string makeHTML(void);
};


#endif  /* H__LIST_TRAY__H */
