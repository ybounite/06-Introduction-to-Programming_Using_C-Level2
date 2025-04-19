#include <iostream>

using namespace std;

// Memory Management: new and delete

int main()
{
    // declare an int pointer
    int *ptrX;

    // declare a float pointer

    float *ptrY;

    // dynamiclly allocate memory
    ptrX = new int;
    ptrY = new float;

    // assiging value to the memory
    *ptrX = 10;
    *ptrY = 58.35f;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deakkocate the memory

    delete ptrX;
    delete ptrY;
}