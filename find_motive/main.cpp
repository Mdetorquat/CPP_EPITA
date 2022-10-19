#include <iostream>
#include <fstream>
#include <iosfwd>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream file(argv[1]);
    if (file.fail())
    {
        cout << "The file " << argv[1] << " could not be opened." << endl;
        return 1;
    }

    string pattern;
    int count = 0;

    while(file >> pattern)
    {
       if (pattern.find(argv[2]) != string::npos)
            count++;
    }
    cout << "The file " << argv[1] << " contains "<< count << " words containing the motive " << argv[2] << endl;
    return 0;
}
