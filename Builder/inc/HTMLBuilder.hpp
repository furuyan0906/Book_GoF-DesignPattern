#ifndef  H__HTML_BUILDER__H
#define  H__HTML_BUILDER__H

#include  <fstream>
#include  <string>
#include  "Builder.hpp"

class HTMLBuilder : public Builder
{
	private:
		std::string m_filename;
		std::ofstream m_writer;
	
	public:
		void makeTitle(std::string);
		void makeString(std::string);
		void makeItems(std::vector<std::string>);
		void close(void);
		std::string getResult(void);
};

#endif  /* H__HTML_BUILDER__H */
