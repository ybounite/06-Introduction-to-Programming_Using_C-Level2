#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    fstream MyFile;

    MyFile.open("Myfile_append.txt", ios::out | ios::app); // append Mode

    if (MyFile.is_open())
    {

        MyFile << "Hi, this a new line \n";
        MyFile << "Hi, this is anther new line\n";
        MyFile.close();

    }
    
    return 0;
}