#include <iostream>

using namespace std;

int main()
{

	int n;
	cout << "Enter a positive integer: " << endl;
	cin >> n;

	if (n % 2 == 0 and n != 2)
		cout << "This is not a prime number!" << endl;
	else if (n == 1 || n == 2)
		cout << "This is a prime number!" << endl;
	else
	{
		bool prime = true;
		int i = 1;
		while (i <= sqrt(n))
		{
			if (n % i == 0)
			{
				cout << "This is not a prime number!" << endl;
				prime = false;
				break;
			}
			i = i + 2;
		}
		if (prime == true)
			cout << "This is a prime number!" << endl;

	}

	return 0;
}
