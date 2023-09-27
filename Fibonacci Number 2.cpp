// Complete Fibonacci Number

#include <iostream>

using namespace std;

int main()
{
	int f1, f2;
	int n;
	int count = 0;
	int fibNb = 0;

	cout << "Enter the first two Fibonacci Numbers in increasing order: " << endl;
	cin >> f1 >> f2;
	while (cin)
	{
		if (f1 > f2)
		{
			cout << "The first number should be less than or equal the second number!!" << endl;
			cout << "Enter numbers again: " << endl;
			cin >> f1 >> f2;
		}
		if (f1 < 0 or f2 < 0)
		{
			cout << "Both numbers should be non negative!!" << endl;
			cout << "Enter numbers again: " << endl;
			cin >> f1 >> f2;

		}
		if (f1 <= f2 && f1 >= 0 && f2 >= 0)
			break;
	}

	cout << "The firt two Fibonacci Numbers are: " << f1 << " and " << f2 << " ." << endl;
	cout << "Enter the position of desired Fibnacci Number: " << endl;
	cin >> n;
	while (cin)
	{
		if (n <= 0)
		{
			cout << "The position should be positive! Enter the position again: " << endl;
			cin >> n;
		}
		else
			break;
	}

	int pre_prev = f1;
	int prev = f2;

	if (n == 1 || n == 2)
		cout << "The Fibonaccci Number at the position " << n << " is: " << n << endl;
	else
	{
		while (count < n - 2)
		{
			fibNb = pre_prev + prev;
			pre_prev = prev;
			prev = fibNb;
			count++;

		}
		cout << "The Fibonacci Number at the position " << n << " is: " << fibNb << endl;

	}


	return 0;
}