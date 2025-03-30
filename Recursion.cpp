#include <iostream>

using namespace std;

void PrintNumber(int N, int M)
{
	if (N <= M)
	{
		cout << M << endl;
		PrintNumber(N, M - 1);
	}
}

int PowerNumber(int Base, int Power)
{
	if (Power == 0)
		return 1;
	else
		return (Base * PowerNumber(Base , Power - 1));
}

int main()
{
	//PrintNumber(1, 4);
	cout << PowerNumber(2, 3);
}
