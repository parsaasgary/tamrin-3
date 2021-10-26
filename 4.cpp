#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int n;
	cout << "enter a number:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			cout << "#";
		if (i % 2 != 0)
			cout << "*";
			

	}


}