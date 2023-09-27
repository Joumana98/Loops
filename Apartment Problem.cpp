// Apartement Problem

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2);

	int allUnits;
	cout << "Enter the number of units: " << endl;
	cin >> allUnits;

	double allRent;
	cout << "Enter the rent to occupy all the units: " << endl;
	cin >> allRent;

	double increase;
	cout << "Enter the increase in rent that results in a vacant unit: " << endl;
	cin >> increase;

	double maintain;
	cout << "Enter the amount to maintain a rented unit: " << endl;
	cin >> maintain;

	//Profit if all units are occupied
	double totalRent = allUnits * (allRent - maintain);

	//Variables for max profit and number of units
	double maxProfit = totalRent;
	double occUnits = allUnits;

	//Loop variables
	double currentRent = totalRent;
	int currentUnits = allUnits;
	double currentIncrease = 0;

	while (currentUnits > 0)
	{
		currentIncrease = currentIncrease + increase;
		currentUnits--;
		currentRent = (allRent - maintain + currentIncrease) * currentUnits;
		if (currentRent > maxProfit)
		{
			maxProfit = currentRent;
			occUnits = currentUnits;

		}

	}

	cout << "The maximum profit that can be made is: " << maxProfit << endl;
	cout << "The number of units that should be occupied is: " << occUnits << endl;



	return 0;
}