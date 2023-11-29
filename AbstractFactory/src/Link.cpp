#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>


Link::Link(std::string caption, std::string url)
	: m_url(url), Item(caption)
{
}

