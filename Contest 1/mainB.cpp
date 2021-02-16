// Problem B
#include <iostream>
using namespace std;

int main()
{
	int num, i, row, column;

	// input the elements of the matrix until 1 is found
	for (i = 0; i < 25; i++)
	{
		cin >> num;

		if (num)
			break;
	}

	row = (i / 5) % 5;
	column = i % 5;
	
	cout << abs(row - 2) + abs(column - 2) << endl;
}
