// Lockers puzzle

#include <iostream>

using namespace std;

int divisors(int nb);

int main()
{

	int lockers;
	cout << "Enter the number of lockers in the school: " << endl;
	cin >> lockers;

	int opened = 0;
	int closed = 0;

	for (int i = 1; i <= lockers; i++)
	{
		if (divisors(i) % 2 == 0)
			closed++;
		else
			opened++;

	}

	cout << "The number of opened lockers is: " << opened << endl;


	return 0;
}

int divisors(int nb)
{
	int d = 0;
	for (int i = 1; i <= nb; i++)
	{
		if (nb % i == 0)
			d++;
	}
	//cout << "The number os divisors is: " << d << endl;
	return d;
}