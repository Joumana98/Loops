// Conical paper cup Problem

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14;

int main()
{
	cout << fixed << showpoint << setprecision(2);
	// need to increment the angle by 0.01

	double R;
	cout << "Enter the radius of the circle: " << endl;
	cin >> R;

	double O = 0.01;
	double V;
	double length;

	double r = 0;
	double h = 0;

	length = 2 * PI * R * O / 360;

	r = R - (length / (2 * PI));
	h = sqrt(pow(R, 2) - pow(r, 2));
	V = PI * (1 / 3) * pow(r, 2) * h;

	double currentV = 0;
	double x = 0;

	while (O <= 360)
	{
		O = O + 0.01;

		x = 2 * PI * R * O / 360;

		r = R - (x / (2 * PI));
		h = sqrt(pow(R, 2) - pow(r, 2));
		currentV = PI * (1.00 / 3.00) * pow(r, 2) * h;

		if (currentV > V)
		{
			V = currentV;
			length = x;
		}


	}

	cout << "The length of the removed sector should be: " << length << endl;
	cout << "Te maximum volume of the cup will be: " << V << endl;

	return 0;
}