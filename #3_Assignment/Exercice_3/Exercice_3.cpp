/*
3 - A computer store sells diskettes at a price of $1 each for small orders. 
The store sells them at a price of 70 cents each for orders of 25+ units. 
Furthermore, if you are a member of Club Z, the store will give you an extra discount of 2%. 
Write an algorithm that determines the total price for a purchase. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float nDiskette = 0;
	const int initialDiskettePrice = 1;
	const float discountDiskettePrice = 0.7;
	int memberIdentificationInt = 0;
	
	cout << "Please input the amount of diskettes to be purchased : ";
	cin >> nDiskette;
	
	while (memberIdentificationInt == 0)
	{
		cout << "\nIf you ARE member of Club Z, enter and integer OVER 0.\n\nIf you are NOT a member of Club Z, enter an integer UNDER 0.\n\n";
		cin >> memberIdentificationInt;
		if (memberIdentificationInt == 0)
			cout << "\nThe instructions were quite clear... Read them again please.\n\n";
	}
	float totalPrice = 0;
	cout << setprecision(2) << fixed;
	if (nDiskette < 25)
		totalPrice = nDiskette * initialDiskettePrice;
	else if (nDiskette >= 25)
		totalPrice = nDiskette * discountDiskettePrice;

	if (memberIdentificationInt > 0)
		totalPrice = totalPrice * 0.98;

	cout << "\nThe total price is : " << totalPrice << " CA$\n\n";

	return 0;
}
