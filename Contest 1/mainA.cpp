// Problem A
#include <iostream>
using namespace std;

int main()
{
	int noOfProblems, num, sum, count = 0;
	cin >> noOfProblems;

	// for each problem, check the number of participants who are sure about the solution
	for (int i = 0; i < noOfProblems; i++)
	{
		sum = 0;

		for (int j = 0; j < 3; j++)
		{
			cin >> num;
			sum += num;
		}

		// if at least two of them are sure about the solution, increment the count of the problems
		if (sum > 1)
			count++;
	}

	cout << count << endl;
}
