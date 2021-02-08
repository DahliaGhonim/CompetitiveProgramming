// Problem L
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int* arr = new int [n * 2];
	for (int i = 0; i < n * 2; i++)
		cin >> arr[i];

	int a = 0, b = 0, indx, max;
	bool flag;

	for (int i = 0; i < n * 2; i += 2)
	{
		max = b;
		flag = false;

		for (int j = i; j < n * 2; j += 2)
			if (arr[j] >= a && arr[j] <= b && arr[j + 1] > max)
			{
				indx = j;
				max = arr[j + 1];
				flag = true;
			}

		if (flag)
		{
			a = arr[indx];
			b = arr[indx + 1];
			i = indx;
		}
		else
			break;
	}

	if (b == m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	delete[] arr;
}
