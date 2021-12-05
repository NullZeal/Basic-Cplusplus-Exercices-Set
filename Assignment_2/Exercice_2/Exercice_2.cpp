/*
An aircraft pilot wants to know the atmospheric pressure, expressed in atmosphere units (atm), 
as the weather station only provides pressure data in kilopascal units (kPa).
1 atm is equivalent to 101.325 kPa. Make a program that performs the conversion.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float pressureLevelInKpa = 0;
	float pressureLevelInAtm = 0;
	float const atmToKpaRatio = 101.325;
	cout << "Please input the current atmospheric pressure level in kilopascal units (kPa) : ";
	cin >> pressureLevelInKpa;
	pressureLevelInAtm = pressureLevelInKpa / atmToKpaRatio;
	cout << setprecision(3) << fixed;
	cout << "\nThe conversion of " << pressureLevelInKpa << " Kpa to Atm is : " << pressureLevelInAtm << " Atm.\n\n";
	system("pause");
	return 0;
}