#include  <string>
#include  "Builder.hpp"
#include  "Director.hpp"


Director::Director(Builder *builder)
	: m_builder(builder)
{
}

void Director::constructor(void)
{
	std::string str11("おはようございます。");
	std::string str12("こんにちは。");
	std::string str21("こんばんは。");
	std::string str22("おやすみなさい。");
	std::string str23("さようなら。");

	std::vector<std::string> items1;
	items1.push_back(str11);
	items1.push_back(str12);
	

	std::vector<std::string> items2;
	items2.push_back(str21);
	items2.push_back(str22);
	items2.push_back(str23);

	m_builder->makeTitle("Greeting");
	m_builder->makeString("朝から昼にかけて");
	m_builder->makeItems(items1);
	m_builder->makeString("夜に");
	m_builder->makeItems(items2);
	m_builder->close();
}
