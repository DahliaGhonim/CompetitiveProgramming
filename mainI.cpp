// Problem I
#include <iostream>
using namespace std;

int main()
{
	int a, b, n, count1, count2, asum = 0, bsum = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		asum += a;
	}

	for (int i = 0; i < 3; i++)
	{
		cin >> b;
		bsum += b;
	}

	cin >> n;

	count1 = asum / 5;
	if (asum % 5 != 0)
		count1++;

	count2 = bsum / 10;
	if (bsum % 10 != 0)
		count2++;

	if ((count1 + count2) <= n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
