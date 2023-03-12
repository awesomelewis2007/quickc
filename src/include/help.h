// Quick C (help.h)
// A quick C and C++ runner
// Github: https://www.github.com/awesomelewis2007/quickc
//
// Help function

#include <iostream>
#include <string>

void help(){
    std::cout << "Usage: quickc <File> <Flags file> <args>" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  -quickv  Verbose" << std::endl;
    std::cout << "  -quickl  Log to file" << std::endl;
    std::cout << "  -quickh  Show this help" << std::endl;
    std::cout << "Other flags:" << std::endl;
    std::cout << "  Any other flags will be sent to gcc or g++" << std::endl;
}