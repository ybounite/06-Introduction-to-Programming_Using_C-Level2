#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



/*Exceptions provide a way to react to exceptional circumstances (like runtime errors)
 in programs by transferring control to special functions called handlers.*/

int main()
{
    vector <int> num{1, 2, 3, 4, 5};

    try
    {
        cout << num.at(5);
    }
    catch (...)
    {
        cout << "out of bound\n" << endl;
    }
}