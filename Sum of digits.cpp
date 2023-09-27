#include <iostream>
#include <cmath>

using namespace std;

int degree(int n);

int main()
{
	int n;
	cout << "Enter an integer: " << endl;
	cin >> n;
	if (n < 0)
		n = -n;


	int d = degree(n);

	int count = d;
	int temp = n;

	int sum = 0;

	while (count >= 0)
	{
		cout << temp / static_cast <int> (pow(10, count)) << " ";
		sum = sum + temp / static_cast <int> (pow(10, count));
		temp = n % static_cast <int> (pow(10, count));
		count--;

	}
	cout << endl;
	cout << "The sum of the digits is: " << sum << endl;


	return 0;
}

int degree(int n)
{
	int d = 0;
	int temp = n;
	while (temp > 0)
	{
		temp = n / pow(10, d + 1);
		d++;
	}

	return d - 1;
}