#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("Myfile.txt", ios::out); // write Mode
    // this is append Mode  ios_base::epp

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is the firt line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";


        MyFile.close();
    }

    return 0;
}