#include <iostream>
#include <fstream>

#include "findmotive.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cout << "Error in number of arguments" << std::endl;
        return 1;
    }

    std::string path = argv[1];
    std::string pattern = argv[2];

    std::ifstream file (path);

    if (!file.is_open())
    {
        std::cout<<"The file " << path << " could not be opened." << std::endl;
        return 1;
    }

    std::string str;
    str = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    int count = find_motive(str, pattern);

    std::cout<<"The file " << path << " contains "<< count << " words containing the motive " << pattern << std::endl;

    return 0;
}
