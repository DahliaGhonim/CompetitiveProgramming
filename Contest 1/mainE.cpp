// Problem E
#include <iostream>
using namespace std;

int main()
{
	int year, d1, d2, d3, d4;
	cin >> year;

	while (1)
	{
		year++;

		d1 = year % 10;
		d2 = (year / 10) % 10;
		d3 = (year / 100) % 10;
		d4 = year / 1000;

		// check if the four digits are distinct
		if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
			break;
	}

	cout << year << endl;
}
