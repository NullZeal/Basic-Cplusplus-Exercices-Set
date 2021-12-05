/*
27 –	An automobile insurance company wants to computerize 
the calculation of renewals for the premiums
of its clients. The increase of a client’s premium 
is a function of the number of accidents, 
according to the table below:

Number of accidents	Increase
0			2%
1 or 2		5%
3			10%
4 and more	30%

	You are asked to create a program that 
	calculates the new value of a premium, 
	according to the old premium and the number of accidents.

*/

#include <iostream>
using namespace std;

int main()
{
	float oldPremium = 0;
	float newPremium = 0;

	cout << "Please input the old Premium of the client : \n\n";
	cin >> oldPremium;
		
	int nAccident = 0;
	cout << "\nPlease enter the amount of accidents that occured this year: \n\n";
	cin >> nAccident;
	
	float nAccidentRateAugmentationTable[4] = { 1.02,1.05,1.1,1.3 };
	
	if (nAccident == 0)
		newPremium = oldPremium * nAccidentRateAugmentationTable[0];
	else if (nAccident <= 2)
		newPremium = oldPremium * nAccidentRateAugmentationTable[1];
	else if (nAccident == 3)
		newPremium = oldPremium * nAccidentRateAugmentationTable[2];
	else 
		newPremium = oldPremium * nAccidentRateAugmentationTable[3];

	cout << "\nThe new premium will be : " << newPremium << " CA$.\n\n";

	return 0;
}