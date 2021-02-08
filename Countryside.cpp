// Problem N
#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n;

	for (int i = 1; i < n; i++)
		cin >> b;	// the number before last one
	cin >> a;		// the last number
	
	if (a == 0)
		cout << "UP" << endl;
	else if (a == 15)
		cout << "DOWN" << endl;
	else if (n == 1)
		cout << -1 << endl;
	else if (a < b)
		cout << "DOWN" << endl;	
	else if (a > b)
		cout << "UP" << endl;
}
