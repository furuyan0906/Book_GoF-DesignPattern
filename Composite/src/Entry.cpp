#include  <string>
#include  <stdexcept>

#include  "Entry.hpp"

Entry* Entry::add(Entry *entry)
{
	throw std::runtime_error("Cannot add item into file.");
}

std::string Entry::toString(void)
{
	return getName() + " (" + std::to_string(getSize()) + ")";
}

