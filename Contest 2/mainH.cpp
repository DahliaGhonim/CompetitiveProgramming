// Problem H
#include <iostream>
using namespace std;

int main()
{
	int n, a, count = 0;
	cin >> n >> a;

	int* arr = new int[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
		if (arr[i])
		{
			if (i == a)
				count++;
			else if ((i < a) && (((2 * a - i <= n) && arr[2 * a - i]) || (2 * a - i > n)))
				count++;
			else if ((i > a) && (((2 * a - i > 0) && arr[2 * a - i]) || (2 * a - i <= 0)))
				count++;
		}
			

	cout << count << endl;

	delete[]arr;
}
