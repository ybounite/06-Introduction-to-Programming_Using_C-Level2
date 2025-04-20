#include <iostream>

using namespace std;

int main()
{
    float *ptr;
    int length;

    cout << "Enter total number of students.\n";
    cin >> length;

    // memeory allocation of length of floats
    ptr = new float[length];

    cout << "Enter grades of students." << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Student [ " << i + 1 << " ] : " << endl;
        cin >> ptr[i];
    }
    cout << "\n Displaying grades of students." << endl;
    for (int i = 0; i < length; i++){
        cout << "Student [ " << i + 1 << " ] : " << ptr[i] << endl;
    }
    // ptr memory is released 
    delete[] ptr;
}
