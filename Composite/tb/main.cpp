#include  <iostream>
#include  <string>
#include  <stdexcept>
#include  <cstdlib>

#include  <Entry.hpp>
#include  <File.hpp>
#include  <Directory.hpp>


int main(void)
{
	try{
		std::cout << "Making root entries..." << std::endl;

		Directory *rootdir = new Directory("root");
		Directory *bindir = new Directory("bin");
		Directory *tmpdir = new Directory("tmp");
		Directory *usrdir = new Directory("usr");
		rootdir->add(static_cast<Entry *>(bindir));
		rootdir->add(static_cast<Entry *>(tmpdir));
		rootdir->add(static_cast<Entry *>(usrdir));

		File *vim = new File("vim", 10000);
		File *latex = new File("latex", 20000);
		bindir->add(static_cast<Entry *>(vim));
		bindir->add(static_cast<Entry *>(latex));
		rootdir->printList();

		std::cout << std::endl;
		std::cout << "Making root entries..." << std::endl;

		Directory *yuki = new Directory("yuki");
		Directory *hanako = new Directory("hanako");
		Directory *tomura = new Directory("tomura");
		usrdir->add(static_cast<Entry *>(yuki));
		usrdir->add(static_cast<Entry *>(hanako));
		usrdir->add(static_cast<Entry *>(tomura));

		File *diary = new File("diary.html", 100);
		File *composite = new File("composite.cpp", 200);
		File *memo = new File("memo.tex", 300);
		File *game = new File("game.docx", 300);
		File *junk = new File("junk.mail", 300);
		yuki->add(static_cast<Entry *>(diary));
		yuki->add(static_cast<Entry *>(composite));
		hanako->add(static_cast<Entry *>(memo));
		tomura->add(static_cast<Entry *>(game));
		tomura->add(static_cast<Entry *>(junk));
		rootdir->printList();
	}
	catch(std::runtime_error &e){
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}

