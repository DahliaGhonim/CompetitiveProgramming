// Problem D
#include <iostream>
using namespace std;

int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	int count1, count2;

	count1 = n / a;
	if (n % a != 0)
		count1++;

	count2 = m / a;
	if (m % a != 0)
		count2++;

	cout << (long long)count1 * count2 << endl;
}
