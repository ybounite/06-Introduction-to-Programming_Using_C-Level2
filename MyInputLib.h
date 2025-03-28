#pragma once 

#include <iostream>
using namespace std;

namespace MyInputLib
{
	int ReadNumber(string Message)
	{
		int Number;

        cout << Message << endl;
        cin >> Number;
		return Number;
	}
}
