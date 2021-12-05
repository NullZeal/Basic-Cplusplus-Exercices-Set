/*
4 –	Make a program that reads a temperature in degrees Fahrenheit and converts it into degrees Celsius. The conversion formula is:
c = ((F-32)/9)*5
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	string unit;
	bool keepGoing = true;

	while (keepGoing)
	{ 
		cout << "Hello! Welcome to the converter Celcius / Fahrenheit.\nWhich temperature type do you want to convert?\nFor Fahrenheit type 'F'. For Celcius type 'C'." << endl;
		cin >> unit;

		float fahrenheit;
		float celcius;

		if ((unit != "F") && (unit != "f") && (unit != "C") && (unit != "c"))
		{
			cout << "Sorry, the unit you enter is not recognized." << endl;
			continue;
		}

		else if (unit == "F" || unit == "f")
		{
			cout << "Please, enter the temperature in Fahrenheit :" << endl;
			cin >> fahrenheit;
			celcius = (fahrenheit - 32) / 9 * 5;
			cout << " The temperature in Celcius is " << setprecision(1) << fixed << celcius << " degrees.\n------------" << endl;
			cout << "To exit, type 0. To continue, type anything but 0." << endl;
			int wantToExit;
			cin >> wantToExit;
			if (wantToExit != 0)
				continue;
			else 
				return 0;
		}
		else if (unit == "C" || unit == "c")
		{
			cout << "Please, enter the temperature in Celcius :" << endl;
			cin >> celcius;
			fahrenheit = (celcius * 9/5) + 32;
			cout << "The temperature in Fahrenheit is " << setprecision(1) << fixed << fahrenheit << " degrees.\n------------" << endl;
			cout << "To exit, type 0. To continue, type another number." << endl;
			int wantToExit;
			cin >> wantToExit;
			if (wantToExit != 0)
				continue;
			else
				return 0;
		}
	}
	system("pause");
	return 0;
}