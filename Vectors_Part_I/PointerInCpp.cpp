#include <iostream>

using namespace std;


int main()
{
    int a = 10;


    cout << "a value  : " << a << endl;
    cout << "a address: " << &a << endl;

    int *p = &a;

    cout << "Pointer Value to print adress : " << p << endl;
    cout << "print Value of Pointer : " << *p;
    cout << endl;
}