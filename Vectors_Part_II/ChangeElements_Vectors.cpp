#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num {1, 2, 3, 4, 5};

    cout << "Initial Vectir : ";
    for (const int &i : num)
        cout << i << " ";

    cout << "\n\nUpdat Vector : ";
    
    for (int &i : num){
        i = 20;
        cout << i << "  ";
    }

    num[1] = 40;
    num.at(2) = 60;
    num.at(4) = 80;

    cout << "\n\nUpdat Vector : ";
    for (const int &i : num)
        cout << i << "  ";
    
    return 0;
}