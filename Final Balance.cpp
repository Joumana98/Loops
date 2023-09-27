#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

double const SERVICE_FEE = 25;
double const MIN = 1000;

int main()
{

	int accNb;
	double beg_balance;

	ifstream inFile;
	ofstream outFile;

	inFile.open("C:\\inData.txt");
	if (!inFile)
	{
		cout << "The file does not exist!!" << endl;
		cout << "Program terminates!!" << endl;
		return 1;
	}

	outFile.open("C:\\outData.txt");
	outFile << fixed << showpoint << setprecision(2);

	inFile >> accNb >> beg_balance;
	outFile << "Account Number: " << accNb << endl;
	outFile << "Beginning Balance: $" << beg_balance << endl;


	double totalInterest = 0;

	double totalDeposits = 0;
	int DNb = 0;

	double totalaWithdraw = 0;
	int WNb = 0;

	double final_balance = beg_balance;

	bool servFee = false;

	char op;
	double amount;

	inFile >> op >> amount;

	while (inFile) // while input is successful, should do the first reading outside the loop
	{
		switch (op)
		{
		case 'W':
		case 'w':
			WNb++;
			totalaWithdraw = totalaWithdraw + amount;
			final_balance = final_balance - amount;
			break;

		case 'D':
		case 'd':
			DNb++;
			totalDeposits = totalDeposits + amount;
			final_balance = final_balance + amount;
			break;


		case 'I':
		case 'i':
			totalInterest = totalInterest + amount;
			final_balance = final_balance + amount;
			break;

		default:
			cout << "Invalid transaction code." << endl;

		}


		if (final_balance < MIN)
			servFee = true;

		inFile >> op >> amount;

	}

	if (servFee == true)
		final_balance = final_balance - SERVICE_FEE;

	outFile << "Ending Balance: $" << final_balance << endl;
	outFile << endl;
	outFile << "Interest Paid : $" << totalInterest << endl;
	outFile << endl;
	outFile << "Amount Deposited: $" << totalDeposits << endl;
	outFile << "Number of Deposits: " << DNb << endl;
	outFile << endl;
	outFile << "Amount Withdrawn: $" << totalaWithdraw << endl;
	outFile << "Number of Withdrawals: " << WNb << endl;
	if (servFee == true)
		outFile << "Service Charge: $" << SERVICE_FEE << endl;

	inFile.close();
	outFile.close();

	cout << "End of execution." << endl;

	return 0;


}
