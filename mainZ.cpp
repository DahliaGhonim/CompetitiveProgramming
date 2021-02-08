// Problem Z
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, ta, b, tb, h, m;
	cin >> a >> ta >> b >> tb;

	cin >> setw(2) >> h;
	cin.ignore();
	cin >> setw(2) >> m;

	int start = (h - 5) * 60 + m;	// the number of minutes passed since 5:00 AM when the driver Simon starts
	int end = start + ta;		// the number of minutes passed since 5:00 AM when the driver Simon ends
	int count = 0;

	for (int bstart = 0; bstart < 1140; bstart += b)
		if ((bstart < end) && (bstart + tb > start))
			count++;

	cout << count << endl;
}
