/*
35 –	Write an algorithm that calculates the sum of all the integers contained (inclusively) 
between two positive integer limits entered by the user. 

The program reads the smallest limit first.

Example: the sum of the integers between 5 and 10, inclusively.

*/
#include <iostream>
using namespace std;
int main()
{
	int limitLow = 0;
	int limitHigh = 0;
	int sum = 0;
	cout << "Please enter the lowest limit followed by the highest limit\n\n";
	cin >> limitLow >> limitHigh;
	
	for (int i = limitLow; i <= limitHigh; i++)
		sum += i;
	
	cout << "\nThe sum of all the numbers is between "<< limitLow << " and " << limitHigh << " is inclusively : " << sum << "\n\n";

	return 0;
}
