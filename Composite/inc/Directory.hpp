#ifndef  H__DIRECTORY__H
#define  H__DIRECTORY__H


#include  <vector>
#include  <string>

#include  "Entry.hpp"

class Directory : public Entry
{
	private:
		std::string m_name;
		std::vector<Entry *> m_directory;

	public:
		Directory(std::string name);
		std::string getName(void);
		int getSize(void);
		Entry* add(Entry *entry);
		// @note  外部非公開(本当はprotectedにしたい)
		void printList(std::string prefix);
		// @note  外部公開
		void printList(void);
};


#endif  /* H__DIRECTORY__H */
