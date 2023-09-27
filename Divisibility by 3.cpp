#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the number for which divisibility by 3 and  should be checked: " << endl;
	cin >> n;

	int s = 0;
	int tempn = n;

	//while (tempn != 0)
	//{
		//s = s + tempn % 10;
		//tempn = tempn / 10;

	//}

	do
	{
		s = s + tempn % 10;
		tempn = tempn / 10;

	} while (tempn != 0);

	cout << "The sum of digits is: " << s << endl;

	if (s % 3 == 0)
		cout << "The number is divisible by 3." << endl;
	else
		cout << "The number is not divisible by 3." << endl;

	if (s % 9 == 0)
		cout << "The number is divisible by 9." << endl;
	else
		cout << "The number is not divisible by 9." << endl;

	return 0;

}
