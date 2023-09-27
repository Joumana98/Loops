#include <iostream>
#include <iomanip>

using namespace std;

const double INTEREST = 0.1;

int main()
{
	cout << fixed << showpoint << setprecision(2);

	int initialAmount;
	cout << "Enter the initial amount: " << endl;
	cin >> initialAmount;
	cout << "The inital investment was $" << initialAmount << " . " << endl;

	double currentAmount = initialAmount;

	int initialAge = 16;
	int age = initialAge;
	while (age < 60)
	{
		currentAmount = currentAmount * (1 + INTEREST);
		age++;
	}

	cout << "The total amount accumulated after : " << age - initialAge << " years, if $"
		<< initialAmount << " is allowed to compound with an interest of "
		<< INTEREST * 100 << " %, comes to $" << currentAmount << " ." << endl;

	double amountAfterYear = currentAmount * (1 + INTEREST);

	cout << "The total amount accumulated after " << age + 1 << " years, if $" << currentAmount
		<< " is allowed to compound with an interest of " << INTEREST * 100 << "%, comes to $" << amountAfterYear
		<< " ." << endl;

	cout << "The interest earned during this year is $" << amountAfterYear - currentAmount << " ."
		<< " If interest is withdrawn each year thereafter, my income is $ " << amountAfterYear * INTEREST
		<< " per month." << endl;

	return 0;
}