/*
4 –	A print shop charges 5 cents per copy for the first 100 copies. 
For any subsequent copies, they charge 3 cents each. 
Write an algorithm that determines the price associated with a given number of copies.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float initialPricePerCopy = 0.05;
	const float discountPricePerCopy = 0.03;
	
	int nCopy = 0;
	while (nCopy <= 0)
	{
		cout << "Please enter the amount of copies : ";
		cin >> nCopy;
		if (nCopy <= 0)
			cout << "\nPlease input a positive amount of copies.\n\n";
	}
	
	float totalPrice = 0;
	if (nCopy <= 100)
		totalPrice = nCopy * initialPricePerCopy;
	else
		totalPrice = 100 * initialPricePerCopy + (nCopy - 100) * discountPricePerCopy;

	cout << setprecision(2) << fixed;
	cout << "\nThe total Price is : " << totalPrice << " CA$.\n\n";
	return 0;
}