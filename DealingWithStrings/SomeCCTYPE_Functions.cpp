#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    char x;
    char y;


    x = toupper('a');
    y = tolower('A');

    cout << "converting a to A : " << x << endl;
    cout << "converting A to a : " << y << endl;

    // upper case  (A to Z)
    // return zero if not , and non zero of yes
    cout << "isupper('A') : " << isupper('A') << endl;

    // lower case (a to z)
    // return zero if not , and non zero of yes
    cout << "islower('a') : " << islower('a') << endl;

    // Digit (0 to 9)
    // returns zero if not , and non zero of yes

    cout << "isdigit('0') : " << isdigit('0') << endl;

    // punctuation character !#$%^&*()+_-:;<=>?[\]{|}/`~
    // returns zero if not, and non zero of yes
    cout << "ispunct('|') : " << ispunct('|');

    return 0;

}