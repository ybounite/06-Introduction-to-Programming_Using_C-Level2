#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintFileContenet(string FileNAme)
{
    fstream MyFile;
    string  Line;
    MyFile.open(FileNAme , ios::in); // read Mode

    if (MyFile.is_open())
    {
        
        while (getline(MyFile, Line))
        {

            cout << Line << endl;

        }

        MyFile.close();
    }
}

int main()
{
    PrintFileContenet("Myfile_append.txt");

    return 0;
}
