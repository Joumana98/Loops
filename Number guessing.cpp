#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num;
	int guess;
	bool done = false;

	num = (rand() + time(0)) % 100;

	cout << "Guess a Number between 0 and 100" << endl;
	cin >> guess;

	while (!done)
	{
		if (guess == num)
		{
			cout << "Your guess is correct!!" << endl;
			done = true;
		}
		else if (guess > num)
		{
			cout << "Your guess is higher than the number. Guess again!" << endl;
			cin >> guess;
		}
		else
		{
			cout << "You guess is lower than the number. Guess again!" << endl;
			cin >> guess;
		}
	}


	return 0;

}