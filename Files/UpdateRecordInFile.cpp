#include <iostream>
#include <string>
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

void    SaveVectorToFile(string FileName, vector <string> vFileContent)
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

void    LoadDataFromFileVector(string FileName, vector <string> &vFileContenet)
{
    fstream Myfile;
    string  line;

    Myfile.open(FileName, ios::in);

    if (Myfile.is_open())
    {
        while (getline(Myfile, line))
        {
            vFileContenet.push_back(line);
        }
        Myfile.close();
    }

}

void    UpdatRecordInFile(string FileName, string Record, string UpdatTo)
{
    vector <string> vFileContent;

    LoadDataFromFileVector(FileName, vFileContent);

    for (string &line : vFileContent)
    {
        if (line == Record)
            line = UpdatTo;
    }
    SaveVectorToFile(FileName, vFileContent);
}

int main()
{

    cout << "File Content Before Delete.\n";

    PrintFileContent("Myfile.txt");

    UpdatRecordInFile("Myfile.txt", "Ali", "Omar");

    cout << "\n\nFile Content After Delete.\n";

    PrintFileContent("Myfile.txt");
}
