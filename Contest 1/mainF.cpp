// Problem F
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t, n, m;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;

		int** mtrx = new int* [n];
		for (int i = 0; i < n; ++i)
			mtrx[i] = new int[m];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> mtrx[i][j];

		int Rows = 0, Columns = 0, sum;

		// count the number of all-zeros rows
		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < m; j++)
				sum += mtrx[i][j];

			if (!sum)
				Rows++;
		}

		// count the number of all-zeros columns
		for (int j = 0; j < m; j++)
		{
			sum = 0;
			for (int i = 0; i < n; i++)
				sum += mtrx[i][j];

			if (!sum)
				Columns++;
		}

		if ((int)(fmin(Rows, Columns)) % 2 == 0)
			cout << "Vivek" << endl;
		else
			cout << "Ashish" << endl;

		for (int i = 0; i < n; ++i)
			delete[] mtrx[i];
		delete[] mtrx;
	}
}
