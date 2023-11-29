#include  <vector>
#include  <string>

#include  <factory/Item.hpp>
#include  <factory/Tray.hpp>


Tray::Tray(std::string caption)
	: Item(caption)
{
}

void Tray::add(Item *item)
{
	m_tray.push_back(item);
}

