/*
A dealership selling new vehicles asks you to construct a program that calculates the compensation paid to their salespeople. 
The base salary for all the salespeople is $400. For each vehicle sold, the salesperson receives a commission of $200. 
Also, the salesperson receives a bonus of 5% of the total amount of all their sales.
Make the program for a salesperson.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const float baseSalary = 400;
	const float percentageBonusOfTotalSales = 0.05;

	float nVehicle = 0;
	cout << "Please enter amount of vehicles sold" << endl;
	cin >> nVehicle;

	float priceOfVehicleSold = 0;
	float totalPriceOfVehiclesSold = 0;
	int i = 1;
	while (i <= nVehicle)
	{
		cout << "Please enter the $ amount in CAD for vehicle number " << i << " : " << endl;
		cin >> priceOfVehicleSold;
		totalPriceOfVehiclesSold += priceOfVehicleSold;
		i++;
	}
	float totalCompensation = baseSalary + (200 * nVehicle) + (totalPriceOfVehiclesSold * percentageBonusOfTotalSales);
	cout << "The total compensation for the salesman is : " << setprecision(2) << fixed << totalCompensation << "$.\nPretty good deals my friend! " << endl;
	
	system("pause");
	return 0;
}
