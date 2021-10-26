#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
	int* m;
	int x;
		cout << "chand ozv?";
		cin >> x;
		m = new int[x];
		srand(time(0));
		int a;
		for (int i = 0; i < x; i++)
		{
			m[i] = a = rand() % 100 + 1;
		}

		for (int i = 0; i < x; i++)
			cout << m[i]<<"\t\t";



  
}

