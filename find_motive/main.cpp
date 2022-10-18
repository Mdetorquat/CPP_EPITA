#include <iostream>
#include <fstream>
#include <iosfwd>



int main(int argc, char *argv[])
{
    ifstream file(argv[1]);
    if (file.fail())
    {
        std::cout << "The file " << argv[1] << " could not be opened." << std::endl;
        return 1;
    }

    string pattern;
    int count = 0;

    while(file >> pattern)
    {
       if (pattern.find(argv[2]) != string::npos)
            count++;
    }
    std::cout << "The file " << argv[1] << " contains "<< count << " words containing the motive " << argv[2] << std::endl;
    return 0;
}
