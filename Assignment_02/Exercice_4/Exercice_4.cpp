/*
Monique want to have a little program that allows her to evaluate the total amount of her expenses for a month, as well as the amount of money she can allocate
for her leisure activities and non-essential spending. 

The program should read her projections for expenses in the following categories:

Weekly expenses (one time per week; assuming that 1 month = 4 weeks)
•	Food expenses and household expenses
•	Common expenses

Monthly expenses (one time per month)
•	Public transit pass
•	Rent
•	Total of monthly bills

The program should also read the amount of her paycheques. Monique receives two paycheques per month.

The program should then display her total expenses, her total income, and the difference.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float expenseWeeklyFoodandHousehold;
	float expenseWeeklyCommon;
	float expenseMonthlyPublicTransitPass;
	float expenseMonthlyRent;
	float expenseMonthlyTotalBills;
	float incomeFirstPaycheque;
	float incomeSecondPaycheque;

	cout << "Hello Monique,\n\nPlease enter your weekly projected food and household expenses in CA$ : ";
	cin >> expenseWeeklyFoodandHousehold;
	cout << "\nPlease enter your weekly projected common expenses in CA$ : ";
	cin >> expenseWeeklyCommon;

	cout << "\nPlease enter your monthly projected public transit pass expenses in CA$ : ";
	cin >> expenseMonthlyPublicTransitPass;
	cout << "\nPlease enter your monthly projected rent expenses in CA$ : ";
	cin >> expenseMonthlyRent;
	cout << "\nPlease enter your monthly projected for all bills expenses in CA$ : ";
	cin >> expenseMonthlyTotalBills;

	cout << "\nPlease enter the CA$ amount for the 1st paycheque to be received this month : ";
	cin >> incomeFirstPaycheque;
	cout << "\nPlease enter the CA$ amount for the 2nd paycheque to be received this month : ";
	cin >> incomeSecondPaycheque;

	float expenseMonthlyTotal = (expenseWeeklyFoodandHousehold + expenseWeeklyCommon)*4 + expenseMonthlyPublicTransitPass + expenseMonthlyRent + expenseMonthlyTotalBills;
	float incomeMonthlyTotal = incomeFirstPaycheque + incomeSecondPaycheque;
	float monthlyProjectedBalance = incomeMonthlyTotal - expenseMonthlyTotal;

	cout << "\nThe projected monthly expenses amount is " << expenseMonthlyTotal << " CA$." << endl;
	cout << "The projected monthly income amount is " << incomeMonthlyTotal << " CA$." << endl;
	cout << "The projected monthly balance amount is " << monthlyProjectedBalance << " CA$." << endl;
	cout << "\nHave a good day Monique!\n\n";
	system("pause");
	return 0;
}


