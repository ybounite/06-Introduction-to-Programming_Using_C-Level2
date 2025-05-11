#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

void LoadDataFromFileVector(vector <string> &vFileContenet, string FileName)
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

void    SeveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream Myfile;
    Myfile.open(FileName, ios::out);
    if (Myfile.is_open())
    {
        for (string &line : vFileContent)
        {
            if (line != "")
                Myfile << line << endl;

        }
    }
}

void    DeleteRecordFromFile(string FileName, string Record)
{
    vector <string> vFilecontent;

    LoadDataFromFileVector(vFilecontent, FileName);

    for (string &line : vFilecontent)
    {
        if (line == Record)
            line = "";
    }

    SeveVectorToFile(FileName, vFilecontent);
}

int main()
{

    cout << "File Content Before Delete.\n";
    PrintFileContenet("MyFile.txt");
    
    DeleteRecordFromFile("MyFile.txt", "Ali");

    cout << "\n\nFile content After Delete.\n";
    PrintFileContenet("MyFile.txt");

    return (0);
}