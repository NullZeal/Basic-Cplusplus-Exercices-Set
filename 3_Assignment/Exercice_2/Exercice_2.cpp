/*
2 - Write an algorithm that determines the amount to pay as a tip to a server in a restaurant. 

The tip should be 15% when the bill is at least $1.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float billAmount = 0;
	cout << "Please enter the bill amount in CA$ : ";
	cin >> billAmount;
	float tipAmount = 0;
	if (billAmount >= 1)
		tipAmount = billAmount * 0.15;
	cout << setprecision(2) << fixed;
	cout << "\nThe tip amount is : " << tipAmount << " CA$.\n\n";
	return 0;
}