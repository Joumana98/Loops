// Perfect integer

#include <iostream>

using namespace std;

int main()
{
	// print the first four perfect integers
	int count = 0;
	int sum;

	int n = 1;
	while (count < 4)
	{
		sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum = sum + i;

		}
		if (sum == n)
		{
			cout << n << " is a pefect integer." << endl;
			count++;

		}

		n++;
	}

	// Check in a number is perfect or not
	int m;
	cout << endl;
	cout << "Enter a number: " << endl;
	cin >> m;
	int sum2 = 0;
	for (int i = 1; i < m; i++)
	{
		if (m % i == 0)
			sum2 = sum2 + i;

	}
	if (sum2 == m)
		cout << m << " is a pefect integer." << endl;
	else
		cout << m << " is not a perfect integer." << endl;

	return 0;
}

