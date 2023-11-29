#ifndef  H__FILE__H
#define  H__FILE__H


#include  <string>

#include  "Entry.hpp"

class File : public Entry
{
	private:
		std::string m_name;
		int m_size;

	public:
		File(std::string name, int size);
		std::string getName(void);
		int getSize(void);
		// Entry* add(Entry *entry);	
		void printList(std::string prefix);
};


#endif  /* H__FILE__H */
