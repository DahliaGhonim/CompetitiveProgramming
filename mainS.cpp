// Problem S
#include <iostream>
using namespace std;

int main()
{
	int light[4][4];
	bool flag = false;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> light[i][j];

	for (int i = 0; i < 4; i++)
		if (light[i][3] && (light[i][0] || light[i][1] || light[i][2]))
		{
			cout << "YES" << endl;
			flag = true;
			break;
		}
		else if (light[i][3] && (light[(i + 1) % 4][0] || light[(i + 2) % 4][1] || light[(i + 3) % 4][2]))
		{
			cout << "YES" << endl;
			flag = true;
			break;
		}

	if (!flag)
		cout << "NO" << endl;
}
