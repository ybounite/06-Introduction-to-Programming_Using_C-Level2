#pragma warning(disable : 4996) // this number of warning ?
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(0); // get time now 

    char *dt = ctime(&t); // convert in string form

    cout << "Local data and time is : " << dt << "\n" ;

    tm *gmtm = gmtime(&t); // convert now to tm strucr for UTC data/time
    dt = asctime(gmtm);

    cout << "UTC data  and time is :" << dt << endl;
}