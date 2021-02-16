// Problem B 
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;


int main()
{
	int n;
	string pangram;
	cin >> n >> pangram;

	if (n < 26)
	{
		cout << "NO" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
		pangram[i] = tolower(pangram[i]);

	int count = n;

	// count the number of distinct characters
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (pangram[i] == pangram[j])
			{
				count--;
				break;
			}

	if (count == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
