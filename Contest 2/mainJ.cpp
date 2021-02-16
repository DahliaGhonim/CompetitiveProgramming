// Problem J
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	getline(cin, text);

	int len = text.length();

	for (int i = 0; i < len - 1; i++)
	{
		if (text[i] == ' ' && (text[i + 1] == ' ' || text[i + 1] == '.' || text[i + 1] == ',' || text[i + 1] == '!' || text[i + 1] == '?'))
		{
			text.erase(i, 1);
			len--;
			i--;
		}
		else if ((text[i] == '.' || text[i] == ',' || text[i] == '!' || text[i] == '?') && text[i + 1] != ' ')
		{
			text.insert(i + 1, 1, ' ');
			len++;
			i--;
		}
	}

	cout << text << endl;
}
