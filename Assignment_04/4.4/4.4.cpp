/*
27 –	The Ministère des Finances of Québec is adopting a project aiming to reduce taxes. 
Develop an algorithm that calculates taxes according to the table provided below. 

Salary						Tax rate
$0.00 to $18,000.00 			10%
$18,000.01 to $32,000.00 		20%
$32,000.01 to $60,000.00 		30%
$60,000.01 and more				40%

In addition, a 2% reduction of the tax rate is granted if the person is married. 

Furthermore, a 0.5% reduction is granted for each child. 

Finally, 8% is subtracted from the tax rate for those who have newly arrived in the province. 

Determine the amount of tax to be paid as a function of the information provided by the user.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float taxBracket1 = 0.1;
	float taxBracket2 = 0.2;
	float taxBracket3 = 0.3;
	float taxBracket4 = 0.4;
	float annualSalary = 0;
	cout << "Please input your annual salary in CA$ : ";
	cin >> annualSalary;
	
	// Marital status exemption ---------------------------------------------------------------------
	string isMarried = "";
	while (isMarried != "YES" && isMarried != "NO")
	{
		cout << "\nAre you married? Enter 'YES' if you are or 'NO' if you are not.\n";
		cin >> isMarried;
	}
	if (isMarried == "YES")
	{
		taxBracket1 = taxBracket1 - 0.02;
		taxBracket2 = taxBracket2 - 0.02;
		taxBracket3 = taxBracket3 - 0.02;
		taxBracket4 = taxBracket4 - 0.02;
	}
	// Children exemption ---------------------------------------------------------------------
	string haveChildren = "";
	while (haveChildren != "YES" && haveChildren != "NO")
	{
		cout << "\nDo you have at least 1 child? Enter 'YES' if you have at least 1 child or 'NO' if you do not have any.\n";
		cin >> haveChildren;
	}
	int nChild = 0;
	if (haveChildren == "YES")
	{
		cout << "\nPlease enter the number of child that you have.\n";
		cin >> nChild;
		taxBracket1 = taxBracket1 - 0.005 * nChild;
		taxBracket2 = taxBracket2 - 0.005 * nChild;
		taxBracket3 = taxBracket3 - 0.005 * nChild;
		taxBracket4 = taxBracket4 - 0.005 * nChild;
	}
	// Province newcomer exemption ---------------------------------------------------------------------
	string isNewcomer = "";
	while (isNewcomer != "YES" && isNewcomer != "NO")
	{
		cout << "\nAre you a newcomer to the Province? Enter 'YES' if you are or 'NO' if you are not.\n";
		cin >> isNewcomer;
	}
	if (isMarried == "YES")
	{
		taxBracket1 = taxBracket1 - 0.08;
		taxBracket2 = taxBracket2 - 0.08;
		taxBracket3 = taxBracket3 - 0.08;
		taxBracket4 = taxBracket4 - 0.08;
	}
	// Tax calculation ---------------------------------------------------------------------
	float totalTaxAmount = 0;
	//tax bracket 1
	if (annualSalary <= 18000 && annualSalary >= 0)
		totalTaxAmount = annualSalary * taxBracket1;
	//tax bracket 2
	else if (annualSalary <= 32000 && annualSalary >= 0)
		totalTaxAmount = 18000 * taxBracket1 + (annualSalary - 18000) * taxBracket2;
	//tax bracket 3
	else if (annualSalary <= 60000 && annualSalary >= 0)
		totalTaxAmount = 18000 * taxBracket1 + 14000 * taxBracket2 + (annualSalary - 32000) * taxBracket3;
	//tax bracket 4
	else if (annualSalary > 60000 && annualSalary >= 0)
		totalTaxAmount = 18000 * taxBracket1 + 14000 * taxBracket2 + 28000 * taxBracket3 + (annualSalary - 60000) * taxBracket4;

	cout << "\nThe total tax amount that you must pay this year is : " << totalTaxAmount << " CA$.\n\n";

	return 0;
}

