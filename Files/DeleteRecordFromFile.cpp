#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void    PrintFileContent(string FileName)
{
    fstream MyFile;
    string  Line;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        while (getline(MyFile, Line))
        {
           cout << Line << endl;
        }
        MyFile.close();
    }
}

void    LoadingDataFromVector(string FileName, vector <string> &vFileContent)
{
    fstream MyFile;
    string  Line;

    MyFile.open(FileName, ios::in);// read input

    if (MyFile.is_open())
    {
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void    SeveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out); // write in this file
    if (MyFile.is_open())
    {
        for (string &line : vFileContent)
        {
            if (line != "")
                MyFile << line << endl;
        }
        MyFile.close();
    }
}

void    DeletRecordFromFile(string FileName, string Record)
{
    vector <string> vFileContent;

    LoadingDataFromVector(FileName, vFileContent);
    for (string &line : vFileContent)
    {
        if (line == Record)
            line = "";
    }
    SeveVectorToFile(FileName, vFileContent);
}

int main()
{

    cout << "File Content Befor Delete.\n";

    PrintFileContent("Myfile.txt");

    DeletRecordFromFile("Myfile.txt", "Ali");

    cout << "\n\nFile content After Delet.\n";
    PrintFileContent("Myfile.txt");

    return 0;
}
