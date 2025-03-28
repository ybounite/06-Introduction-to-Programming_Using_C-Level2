#include <iostream>
#include "MyInputLib.h"
using namespace std;

int main()
{
    int number = MyInputLib::ReadNumber("Please Enter you number");
    string Result = (number > 0) ? "Positive" : "Negative";
    cout << Result << endl;
}