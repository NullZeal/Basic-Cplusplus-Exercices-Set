/*
5 –	Write an algorithm that simulates the withdrawal of an amount of money from an ATM. 
The algorithm should ask for the amount of the current balance and the amount of the withdrawal.
If the amount of the withdrawal is greater than the balance, display an error message; otherwise, display the new balance.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float currentBalance = 0;
	float withdrawalAmount = 0;
	bool mustLoop = true;
	while (mustLoop == true)
	{
		cout << "Please enter the current balance in CA$ : ";
		cin >> currentBalance;
		cout << "\nPlease enter the withdrawal amount in CA$ : ";
		cin >> withdrawalAmount;
		cout << setprecision(2) << fixed;

		if (currentBalance < withdrawalAmount)
			cout << "\n --- ERROR --- The withdrawal amount cannot be superior to your current balance.\n\n--------------------------------------------------------------------------------\n\n";
		else
		{
			cout << "\nYour new balance is : " << currentBalance - withdrawalAmount << " CA$.\n\nEnjoy your " << withdrawalAmount << " CA$!\n\n";
			mustLoop = false;
		}
	}
	return 0;
}