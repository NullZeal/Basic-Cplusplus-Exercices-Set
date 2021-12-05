/*
4 –	Make a program that reads a temperature in degrees Fahrenheit and converts it into degrees Celsius. The conversion formula is:
c = ((F-32)/9)*5
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main2()
{
	double fahrenheitTemp;
	cout << "Please input a temperature in degrees Fahrenheit : " << endl;
	cin >> fahrenheitTemp;

	double celciusTemp = ((fahrenheitTemp - 32) / 9) * 5;
	cout << setprecision(1) << fixed << "Your temperature in celcius is " << celciusTemp << " degrees." << endl;
	system("pause");
	return 0;
}

