#include <iostream>
#include "MyInputLib.h"

using namespace std;

string CheckIfThisNumberIsPositiveOrNegative(int Number)
{
    string Result;
    Result = (Number > 0) ? "Positive" : "Negative";
    return  Result;
}

int main()
{
    int Number = MyInputLib::ReadNumber("Please Enter Your Number ?");
    string Result = (Number == 0) ? "Zero" : CheckIfThisNumberIsPositiveOrNegative(Number);
    cout << Result << endl;
}
