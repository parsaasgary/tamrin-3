#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int*m;
	int v=0;
	int x;
	cout << "araye chand ozv dashte bashad?";
    cin >> x;
	m = new int[x];
	cout << "aza araye ra vared konid:\n";
	for (int i = 0; i < x; i++)
		cin >> m[i];
	for (int i = 0; i < x; i++)
	{
		for (int j = i; j < x; j++)
		{
			if (m[j] < m[i])
				v += 1;

		}

	}
	if (v > 0)
		cout << "moratab nist\t";
	else
		cout << "moratab ast\t";






}


