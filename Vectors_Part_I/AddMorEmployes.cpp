#include <iostream>
#include <vector>
#include "../MyInputLib.h"
using namespace std;

struct stEmployee
{
    string  FirstName;
    string  LastName;
    float   Salary;
};

stEmployee  ReadEmployees()
{
    stEmployee tmpEmployees;
    cout << "first Name : ";
    cin >> tmpEmployees.FirstName;
    cout << "last Name  : ";
    cin >> tmpEmployees.LastName;
    cout << "Salary     : ";
    cin >> tmpEmployees.Salary;
    return (tmpEmployees);
}

void startAddElementVector(vector <stEmployee> &vEmploye)
{
    char ReadMore = 'y';
    do
    {
        vEmploye.push_back(ReadEmployees());
        cout << "\n\nDo you want to add more numbers Y/N?";
        cin >> ReadMore;
    }while (ReadMore == 'y' || ReadMore == 'Y');
}

void    PrintEmployess(vector <stEmployee> vEmployees)
{
    cout << "Element of vector\n\n";
    for (stEmployee &Employe : vEmployees)
    {
        cout << "First Name : " << Employe.FirstName << endl;
        cout << "Last Name  : " << Employe.LastName << endl;
        cout << "Salary     : " << Employe.Salary << endl;
        cout << endl;
    }
}

int main()
{
    vector <stEmployee> vEmploye;
    // int HowManYEmployee;
    // HowManYEmployee = MyInputLib::ReadNumber("How many Employees : ");
    // for (int i = 1; i <= HowManYEmployee; i++)
    // {
    //     cout << "Employe [" << i << "/" << HowManYEmployee << "]\n" << endl;
    //     vEmploye.push_back(ReadEmployees());
    // }
    startAddElementVector(vEmploye);
    cout << "Element Vector : \n\n";
    PrintEmployess(vEmploye);
}
