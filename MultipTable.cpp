// Problem E
#include <iostream>
using namespace std;


int main()
{
	int n, x, count = 0;
	cin >> n >> x;

	for (int i = 1; i <= n && i <= x; i++)
		if (x % i == 0 && x / i <= n)
			count++;

	cout << count << endl;
}
