#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TRIES = 5;

int main()
{
	int num = 15;
	//num = (rand() + time(0)) % 100;


	int guess;
	cout << "Guess a Number between 0 and 100" << endl;
	cin >> guess;

	int guesses = 1;

	while (guesses < TRIES)
	{
		if (guess == num)
			break;
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

		guesses++;
	}

	if (guess == num)
		cout << "Your guess is correct!! You win!!" << endl;
	else if (guesses == TRIES)
		cout << "You lose!!" << endl;


	return 0;

}