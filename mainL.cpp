// Problem L
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, m, a, b, d = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (a <= d)
			d = fmax(d, b);
	}

	if (d == m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
