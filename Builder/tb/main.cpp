#include  <iostream>
#include  <string>
#include  <cstdlib>
#include  "Builder.hpp"
#include  "Director.hpp"
#include  "TextBuilder.hpp"
#include  "HTMLBuilder.hpp"


static void usage(void);


int main(int argc, char **argv)
{
	if(argc == 1){
		usage();
		return EXIT_FAILURE;
	}

	if(!strcmp(argv[1], "plain")) {
		TextBuilder *textbuilder = new TextBuilder();
		Director *director = new Director(textbuilder);
		director->constructor();
		std::string result = textbuilder->getResult();
		std::cout << result << std::endl;

		delete director;
		delete textbuilder;
	}
	else if(!strcmp(argv[1], "html")) {
		HTMLBuilder *htmlbuilder = new HTMLBuilder();
		Director *director = new Director(htmlbuilder);
		director->constructor();
		std::string filename = htmlbuilder->getResult();
		std::cout << filename << std::endl;

		delete director;
		delete htmlbuilder;
	}
	else{
		usage();
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}


static void usage(void)
{
	std::cout << "Usage:  Main plain    プレーンテキストで文書作成\n" << std::endl;
	std::cout << "Usage:  Main html     HTMLファイルで文書作成\n" << std::endl;
}
