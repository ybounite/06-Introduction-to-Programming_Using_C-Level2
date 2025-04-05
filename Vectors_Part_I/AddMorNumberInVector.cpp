#include <iostream>
#include <vector>

using namespace std;

void   ReadNumber(vector <int> &vNumber)
{
    int Number;
    cout << "Please enter your number : ";
    cin >> Number;
    vNumber.push_back(Number);
}

void startAddElementVector(vector <int> &vNumber)
{
    char ReadMore = 'y';
    do
    {
        ReadNumber(vNumber);
        cout << "Do you want to add more numbers ?";
        cin >> ReadMore;
    }while (ReadMore == 'y' || ReadMore == 'Y');
}

void PrintVector(vector <int> &vNumber)
{
    cout << "Number Vector :\n" << endl;
    for (int Number : vNumber)
    {
        cout << Number << endl;
    }
    cout << endl;
}

int main()
{
    vector <int> vNumber;

    startAddElementVector(vNumber);
    PrintVector(vNumber);
}
