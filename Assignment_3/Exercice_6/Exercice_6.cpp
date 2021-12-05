/*
6 –	An electricity bill is calculated by obtaining the number of days for which electricity is supplied 
and the number of kilowatt hours (kWh) consumed. The client is billed at a rate of $0.50 per day and $0.30 per kWh. 
For a client that has consumed more than 200 kWh, their rate is reduced from $0.30 to $0.20 for additional kWh. 
We want to obtain the total amount for the bill.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	double nDaysOfSuppliedElectricity = 0;
	double totalKwhConsumed = 0;
	cout << "Please enter the number of days for which electricity was supplied : ";
	cin >> nDaysOfSuppliedElectricity;
	cout << "\nPlease enter the number total amount of Kwh consumed : ";
	cin >> totalKwhConsumed;

	const double dollarRatePerKwhConsumed = 0.3;
	const double discountRatePerKwhConsumed = 0.2;
	const double dollarRatePerDayOfElectricitySupplied = 0.5;
	double totalbillAmount = 0;

	if (totalKwhConsumed > 200)
		totalbillAmount = (nDaysOfSuppliedElectricity * 0.5) + (200 * dollarRatePerKwhConsumed) + (totalKwhConsumed - 200) * discountRatePerKwhConsumed;
	else
		totalbillAmount = (nDaysOfSuppliedElectricity * 0.5) + (totalKwhConsumed * dollarRatePerKwhConsumed);
	cout << setprecision(2) << fixed;
	cout << "\nThe total bill is : " << totalbillAmount << "$.\n\n";

	return 0;
}

