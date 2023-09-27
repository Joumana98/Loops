#include <iostream>
#include <string>

using namespace std;

int letterToDigit(char c);

int main()
{

	cout << "Program to convert uppercase letters to the corresponding telephone digits." << endl;
	cout << "To stop the program enter # (sentinel)." << endl;

	string shortcut;

	cout << "Enter telephone number expressed in letters: " << endl;
	getline(cin, shortcut);


	while (shortcut != "#")
	{
		int count = 0;
		int i = 0;
		while (count < 7)
		{
			if (shortcut[i] != ' ' && shortcut[i] != '\n')
			{
				cout << letterToDigit(shortcut[i]);
				count++;
			}
			if (i == 2)
				cout << "-";
			if (shortcut[i] == ' ' || shortcut[i] == '\n')
				cout << "";
			i++;
		}

		cout << endl;
		cout << "Enter another number expressed in letters:" << endl;
		getline(cin, shortcut);
	}
	return 0;
}

int letterToDigit(char c)
{
	switch (c)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'C':
	case 'c':
		return 2;
	case 'D':
	case 'd':
	case 'E':
	case 'e':
	case 'F':
	case 'f':
		return 3;
	case 'G':
	case 'g':
	case 'H':
	case 'h':
	case 'I':
	case 'i':
		return 4;
	case 'J':
	case 'j':
	case 'K':
	case 'k':
	case 'L':
	case 'l':
		return 5;
	case 'M':
	case 'm':
	case 'N':
	case 'n':
	case 'O':
	case 'o':
		return 6;
	case 'P':
	case 'p':
	case 'Q':
	case 'q':
	case 'R':
	case 'r':
		return 7;
	case 'S':
	case 's':
	case 'T':
	case 't':
	case 'U':
	case 'u':
		return 8;
	case 'V':
	case 'v':
	case 'W':
	case 'w':
	case 'X':
	case 'x':
	case 'Y':
	case 'y':
	case 'Z':
	case 'z':
		return 9;

	default:
		cout << "Invalid input!!" << endl;
		return 0;

	}

}