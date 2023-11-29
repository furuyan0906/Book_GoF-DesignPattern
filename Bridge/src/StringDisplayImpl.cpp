#include  <iostream>
#include  <string>

#include  "DisplayImpl.hpp"
#include  "StringDisplayImpl.hpp"


StringDisplayImpl::StringDisplayImpl(std::string str)
	: m_str(str)
{
	// size()メソッドは文字列のByte数を返す
	m_width = str.size();
}

void StringDisplayImpl::rawOpen(void)
{
	printLine();
}

void StringDisplayImpl::rawPrint(void)
{
	std::cout << "|" + m_str + "|" << std::endl;
}

void StringDisplayImpl::rawClose(void)
{
	printLine();
}

/* ===== Private ========== */
void StringDisplayImpl::printLine(void)
{
	std::cout << "+";
	for(auto i = 0; i < m_width; i++)
		std::cout << "+";
	std::cout << "+" << std::endl;
}
