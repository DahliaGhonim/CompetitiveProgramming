// Problem C
#include <iostream>
using namespace std;


int main()
{
	int n, num, min = INT_MAX;
	long long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sum += num;

		if (num % 2 != 0 && num < min)
			min = num;
	}		

	// if sum is odd, subtract the smallest odd number
	if (sum % 2 != 0)
		sum -= min;

	cout << sum << endl;
}
