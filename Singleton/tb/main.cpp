#include <iostream>
#include <cstdlib>
#include "Singleton.hpp"

int main()
{
    std::cout << "--- start ---" << std::endl;

    const Singleton &obj1 = Singleton::getInstance();
    const Singleton &obj2 = Singleton::getInstance();

    if( &obj1 == &obj2 ){
        std::cout << "same instance adrs." << std::endl;
    }
    else{
        std::cout << "difference instance adrs." << std::endl;
    }

    std::cout << "--- end ---" << std::endl;

    return EXIT_SUCCESS;
}
