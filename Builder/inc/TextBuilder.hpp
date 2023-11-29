#ifndef  H__TEXT_BUILDER__H
#define  H__TEXT_BUILDER__H

#include  <vector>
#include  <string>
#include  "Builder.hpp"

class TextBuilder : public Builder
{
	private:
		std::string m_buffer;
	
	public:
		void makeTitle(std::string);
		void makeString(std::string);
		void makeItems(std::vector<std::string>);
		void close(void);
		std::string getResult(void);
};


#endif  /* H__TEXT_BUILDER__H */
