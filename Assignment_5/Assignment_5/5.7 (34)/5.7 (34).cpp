/*
Create an algorithm that determines whether a year provided by the user is a leap year.

To be a leap year, a year must be divisible by 4 but not divisible by 100; 

despite this, if it is divisible by 400, it is a leap year after all.

Example: 2000 is a leap year, but 1700, 1800, and 1900 are not.

*/

#include <iostream>
using namespace std;

int main()
{
	int year = 0;

	cout << "Please input the integers associated with the year\n\n";
	cin >> year;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << "\nDING DING DING - LEAP YEAR !!!\n\n";
	else 
		cout << "\nNOPE. NORMAL YEAR !!!\n\n";

	return 0;
}


