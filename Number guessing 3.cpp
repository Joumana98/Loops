#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int TRIES = 5;

int main()
{
	int num;
	num = (rand() + time(0)) % 100;

	int guess;
	cout << "Guess the number: " << endl;
	cin >> guess;

	int  guesses = 1;

	int diff = abs(num - guess);

	while (guesses < TRIES)
	{

		if (diff == 0)
			break;
		else if (diff >= 50)
		{
			if (guess > num)
				cout << "The guess is very high!!Guess again." << endl;

			else
				cout << "The guess is very low!!Guess again." << endl;
		}
		else if (diff >= 30 && diff < 50)
		{
			if (guess > num)
				cout << "The guess is high!!Guess again." << endl;
			else
				cout << "The guess is low!!Guess again." << endl;
		}
		else if (diff >= 15 && diff < 30)
		{
			if (guess > num)
				cout << "The guess is moderately high!!Guess again." << endl;
			else
				cout << "The guess is moderately low!!Guess again." << endl;

		}
		else if (diff > 0 && diff < 15)
		{
			if (guess > num)
				cout << "The guess is somewhat high!!Guess again" << endl;
			else
				cout << "The guess is somewhat low!!Guess again" << endl;
		}

		cin >> guess;
		diff = abs(guess - num);
		guesses++;
	}

	if (guess == num)
		cout << "Your guess is correct!!" << endl;
	else if (guesses == TRIES)
		cout << "You lose!!" << endl;



	return 0;

}