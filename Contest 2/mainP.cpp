// Problem P
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	if (a == b)
		cout << -1 << endl;
	else 
		cout << fmax(a.length(), b.length()) << endl;
}
