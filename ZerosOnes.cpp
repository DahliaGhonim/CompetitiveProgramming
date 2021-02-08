// Problem U
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	char temp;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		if (str.empty() || str.back() == temp)
			str.push_back(temp);
		else
			str.pop_back();
	}

	cout << str.length() << endl;
}
