#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

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

void    PrintVector(vector <string> data)
{
    for (string &line : data)
        cout << line << endl;
}

int main()
{
    vector <string> vFileContenet;

    LoadDataFromFileVector(vFileContenet, "Myfile.txt");

    PrintVector(vFileContenet);

    return 0;
}
