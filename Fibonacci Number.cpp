#include <iostream>

using namespace std;

int main()
{
	int f1, f2;
	int n;
	int count = 0;
	int fibNb = 0;

	cout << "Enter the first two Fibonacci Numbers: " << endl;
	cin >> f1 >> f2;
	cout << "The firt two Fibonacci Numbers are: " << f1 << " and " << f2 << " ." << endl;
	cout << "Enter the position of desired Fibnacci Number: " << endl;
	cin >> n;

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
		cout << "the Fibonacci Number at the position " << n << " is: " << fibNb << endl;

	}


	return 0;
}