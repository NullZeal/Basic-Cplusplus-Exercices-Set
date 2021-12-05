/*
44 –	You just won a million dollars! You decide to invest $500,000 in a term deposit for a period of 5 years. 
The annual interest rate is 10%, and the interest is added to the principal sum each year (compound interest).
How much will your savings be worth in 5 years?
a)	Make the algorithm with specified number (internal data).
b)	Generalize for any amount, any duration, and any interest rate.
*/
#include <iostream>
using namespace std;

struct interestCalculatorTemplate 
{
	float amount = 0;
	float durationInYears = 0;
	float annualInterestRate = 0;
};

  //SPECIFIC DATA
  //int main()
  //{
  //	const int limit = 1;
  //	interestCalculatorTemplate specifiedData[limit];
  //	specifiedData[0].amount = 500000;
  //	specifiedData[0].durationInYears = 5;
  //	specifiedData[0].annualInterestRate = 0.1 + 1;
  //	for (int i = 0; i < specifiedData[0].durationInYears; i++)
  //	{
  //		specifiedData[0].amount = specifiedData[0].amount * specifiedData[0].annualInterestRate;
  //		cout << "For year " << i + 1 << " the amount with interest is : " << specifiedData[0].amount << " CA$." << endl;
  //	}
  //	cout << "\nAt the end of your specified investment period, the total amount will be : " << specifiedData[0].amount << " CA$." << "\n\n";
  //	return 0;
  //}

int main()
{
	const int limit = 1;
	interestCalculatorTemplate specifiedData[limit];
	cout << "Please enter the initial amount of the investment in CA$ : \n";
	cin >> specifiedData->amount;
	cout << "\nPlease enter the duration in years : \n";
	cin >> specifiedData->durationInYears;
	cout << "\nPlease enter the annual interest rate in % (10% would be 10) : \n";
	cin >> specifiedData->annualInterestRate;
	cout << "\n---------------------------------------------\n";
	for (int i = 0; i < specifiedData[0].durationInYears; i++)
	{
		specifiedData[0].amount = (specifiedData[0].amount * (specifiedData[0].annualInterestRate / 100 + 1));
		cout << "\nFor year " << i + 1 << " the amount with interest is : " << round(specifiedData[0].amount * 100) / 100 << " CA$." << endl;
	}
	cout << "\nAt the end of your specified investment period, the total amount will be : " << round(specifiedData[0].amount * 100) / 100 << " CA$." << "\n\n";
	return 0;
}












