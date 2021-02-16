// Problem D
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username;
	cin >> username;

	int ln = username.length();
	int count = ln;

	// count the number of distinct characters
	for (int i = 0; i < ln - 1; i++)
		for (int j = i + 1; j < ln; j++)
			if (username[i] == username[j])
			{
				count--;
				break;
			}

	if (count % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}
