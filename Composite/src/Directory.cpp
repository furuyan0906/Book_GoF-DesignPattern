#include  <iostream>
#include  <vector>
#include  <string>

#include  "Entry.hpp"
#include  "Directory.hpp"


Directory::Directory(std::string name)
	: m_name(name)
{
}

std::string Directory::getName(void)
{
	return m_name;
}

int Directory::getSize(void)
{
	int size = 0;

	for(auto it = m_directory.begin(); it != m_directory.end(); ++it)
		// itがDirectoryを参照している場合は参照先にFileに到達するまで走査する
		//   (Directoryが空の場合はgetSize()は0を返す)
		// itがFileを参照している場合はFileのsizeを変えす
		// オブジェクト明確に属性を持たせていないが, Entry*で統一的に扱うことでこのような実装手段を実現している
		size += (*it)->getSize();

	return size;
}

Entry* Directory::add(Entry *entry)
{
	m_directory.push_back(entry);
	return static_cast<Entry *>(this);
}

void Directory::printList(void)
{
	printList("");
}

void Directory::printList(std::string prefix)
{
	// 自分を表示
	std::cout << prefix + "/" + this->toString() << std::endl;

	// 自分以下の階層を表示
	for(auto it = m_directory.begin(); it != m_directory.end(); ++it)
		// itがDirectoryを参照している場合は参照先にFileに到達するまで走査する
		//   (Directoryが空の場合はその階層以下の走査は行われない)
		// itがFileを参照している場合はFileのnameを変えす
		// オブジェクト明確に属性を持たせていないが, Entry*で統一的に扱うことでこのような実装手段を実現している
		(*it)->printList(prefix + "/" + getName());
}

