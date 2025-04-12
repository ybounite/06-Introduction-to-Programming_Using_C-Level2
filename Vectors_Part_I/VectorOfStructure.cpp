#include <iostream>
#include <vector>

using namespace std;
struct stElemployee
{
    string FirstName;
    string LastName;
    float salary;
};

int main()
{
    vector <stElemployee> vEmployee;

    stElemployee tempEmployee;

    tempEmployee.FirstName = "youssef";
    tempEmployee.LastName = "bounite";
    tempEmployee.salary = 10000.4;
    vEmployee.push_back(tempEmployee);
    
    tempEmployee.FirstName = "Ali";
    tempEmployee.LastName = "Omran";
    tempEmployee.salary = 10434.43;
    vEmployee.push_back(tempEmployee);

    tempEmployee.FirstName = "Aya";
    tempEmployee.LastName = "Maher";
    tempEmployee.salary = 123342.34;
    vEmployee.push_back(tempEmployee);
    
    cout << "Element Vector : \n\n";
    for (stElemployee &Employee : vEmployee)
    {
        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name  : " << Employee.LastName << endl;
        cout << "Salary     : " << Employee.salary << endl;
        cout << endl;
    }
    
}
