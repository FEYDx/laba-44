// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 11
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;	
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = -x - 1 - R;
		else
			if (-1 - R < x && x <= -1)
				y = sqrt((R * R) * (x * x + 2 * x + 1));
			else
				if (-1 < x && x <= 1)
					y = R;
				else
					if (1 < x && x <= 2)
						y = R - 1 - R * (x - 1);
					else
						y = -1;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}