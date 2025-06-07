#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void    SaveVectorToFile(vector <string> vFileContent, string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (string &Data : vFileContent){
            if (Data != "")
                MyFile << Data << endl;
        }
    }
    MyFile.close();
}

int main()
{
    vector <string> vFileContenet{"Ali", "youssef", "" ,"yassin", "Shadi", "Lama"};
    SaveVectorToFile(vFileContenet, "MyFile.txt");

    return 0;
}
