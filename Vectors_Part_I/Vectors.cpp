#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector is a dynamic
    // std::vector <Type> vector_Name
    vector <int> vNumber = { 3, 5, 9, 10, 18, 19};

    cout << "Number Vector : ";
    // ranged loop
    for (int &Number : vNumber)
    {
        cout << Number << " ";
    }
    cout << endl;
}
