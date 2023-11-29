#ifndef  H__BUILDER__H
#define  H__BUILDER__H

#include <vector>
#include <string>

class Builder
{
	public:
		virtual ~Builder(){
		}
		virtual void makeTitle(std::string) = 0;
		virtual void makeString(std::string) = 0;
		virtual void makeItems(std::vector<std::string>) = 0;
		virtual void close(void) = 0;
};


#endif  /* H__BUILDER__H */
