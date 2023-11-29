#include  "DisplayImpl.hpp"
#include  "Display.hpp"


Display::Display(DisplayImpl *impl)
	: m_impl(impl)
{
}

void Display::open(void)
{
	m_impl->rawOpen();
}

void Display::print(void)
{
	m_impl->rawPrint();
}

void Display::close(void)
{
	m_impl->rawClose();
}

void Display::display(void)
{
	open();
	print();
	close();
}
