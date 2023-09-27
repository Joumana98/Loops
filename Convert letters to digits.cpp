#include <iostream>

using namespace std;

int main()
{

	cout << "Program to convert uppercase letters to the corresponding telephone digits." << endl;

	char letter;

	cout << " to stop the program enter # (sentinel)." << endl;

	cout << "Enter a letter: " << endl;
	cin >> letter;

	while (letter != '#')
	{
		switch (letter)
		{
		case 'A':
		case 'B':
		case 'C':
			cout << "2" << endl;
			break;
		case 'D':
		case 'E':
		case 'F':
			cout << "3" << endl;
			break;
		case 'G':
		case 'H':
		case 'I':
			cout << "4" << endl;
			break;
		case 'J':
		case 'K':
		case 'L':
			cout << "5" << endl;
			break;
		case 'M':
		case 'N':
		case 'O':
			cout << "6" << endl;
			break;
		case 'P':
		case 'Q':
		case 'R':
			cout << "7" << endl;
			break;
		case 'S':
		case 'T':
		case 'U':
			cout << "8" << endl;
			break;
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cout << "9" << endl;
			break;

		default:
			cout << "Invalid input!!" << endl;

		}

		cout << "Enter another character:" << endl;
		cin >> letter;
	}
	return 0;
}
