#include <conio.h>
#include <iostream>

using namespace std;
int chap(string a[100])
{
	string words[3] = { "apple","car","bear" };
	int randome;
	string word;
	srand(time(0));
	randome = rand() % 3;
	word = words[randome];
	for (int i = 0; i < words[randome].size(); i++)
	{
		cout << a[i] << "\t";

	}

}



int main()
{
	string words[3] = { "apple","car","bear" };
	int randome, k = 10;
	int g;
	string word;
	string answer[100];
	char letter;
	srand(time(0));
	randome = rand() % 3;
	word = words[randome];
	for (int i = 0; i < words[randome].size(); i++)
	{

		cout << "_ ";

	}
	for (int i = 0; i < words[randome].size(); i++)
	{
		answer[i] = '-';
	}
	while (k > 0)
	{
		cout << "\nyou have " << k << " more shots";
		cout << "\nplease enter your letter";
		cin >> letter;
		for (int i = 0; i < words[randome].size(); i++)
		{
			for (int j = 0; j < words[randome].size(); j++)
			{

				if (letter == word[j] || letter == word[j] - 32)
				{
					answer[j] = letter;
					
					g += 1;
				}
			
			}
			for (int i = 0; i < words[randome].size(); i++)
			{
				cout << answer[i] << "\t";

			}
		}
		k -= 1;

		if (words[randome].size() == g)
			cout << "bordi";


	}
}