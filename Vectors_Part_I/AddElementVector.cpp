#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumber;

    vNumber.push_back(10);
    vNumber.push_back(20);
    vNumber.push_back(30);
    vNumber.push_back(40); 
    vNumber.push_back(50);

    cout << "Number Vector : \n";
    for (int &Number : vNumber)
    {
        cout << Number << " ";
    }
}
