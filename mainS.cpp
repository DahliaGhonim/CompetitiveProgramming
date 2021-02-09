// Problem S
#include <iostream>
using namespace std;

int main()
{
	int light[4][4];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> light[i][j];

	for (int i = 0; i < 4; i++)
		if (light[i][3] && (light[i][0] || light[i][1] || light[i][2] || light[(i + 1) % 4][0] || light[(i + 2) % 4][1] || light[(i + 3) % 4][2]))
		{
			cout << "YES" << endl;
			return 0;
		}

	cout << "NO" << endl;
}
