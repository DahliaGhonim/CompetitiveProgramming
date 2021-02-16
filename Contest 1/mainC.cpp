// Problem C
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, count = 0;
	string stones;
	cin >> n >> stones;

	for (int i = 0; i < n - 1; i++)
		if (stones[i] == stones[i + 1])
			count++;

	cout << count << endl;
}
