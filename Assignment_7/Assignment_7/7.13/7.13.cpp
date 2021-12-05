//13 –	The factorial of a non - negative integer is written with the expression n!(pronounced “n factorial”), and is defined in the following way :
//
//n!= n * (n – 1) * (n – 2) * … * 1		(for n ≥ 1)
//and
//n!= 1						(for n = 0)
//
//For example, 5!= 5 * 4 * 3 * 2 * 1 = 120.
//
//Write a program that reads a non - negative integer, and then calculates and displays its factorial.

#include<iostream>

using namespace std;

int main()
{
	long long int posInteger{ 0 };

	do
	{
		cout << " Please enter a positive integer. " << endl;
		cin >> posInteger;
	} while (posInteger < 0); 
	cout << "\nThe factorial of " << posInteger << " is : ";
	long long int calcFactorial{ posInteger };

	for (posInteger; posInteger > 1; posInteger--)
		calcFactorial = calcFactorial * (posInteger - 1);

	cout << calcFactorial << "\n\n";
	return 0;
}