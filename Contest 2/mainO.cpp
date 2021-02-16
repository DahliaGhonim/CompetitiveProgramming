// Problem O
#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	bool found = false;
	cin >> n;

	// input the values until 1 is found
	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		if (temp == 1)
		{
			found = true;
			break;
		}
	}

	if (found)
		cout << -1 << endl;
	else 
		cout << 1 << endl;
}
