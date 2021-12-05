/*
8 –	A palindrome is a number, a word, or a sentence that remains identical whether read from left to right or from right to left. 

For example, each of the following five-digit numbers is a palindrome: 12321, 55555, 45554, 11611. 

Write a program capable of : 

reading a positive integer (greater than 0) with five digits, 
determining whether this integer is a palindrome. 

(Hint: use the modulus and division operators to separate the different digits composing the numbers.)
*/

#include <iostream>
using namespace std;

int main()
{
	int positiveInteger = 0;
	do 
	{
		cout << "Please input a positive integer.\n";
		cin >> positiveInteger;
	} while (positiveInteger < 10000 && positiveInteger > 99999);

	int dizaineDeMilliers = floor(positiveInteger / 10000);
	int milliers = floor((positiveInteger - (dizaineDeMilliers * 10000)) / 1000);
	int centaine = floor((positiveInteger - (dizaineDeMilliers * 10000) - (milliers * 1000)) / 100);
	int dizaine = floor((positiveInteger - (dizaineDeMilliers * 10000) - (milliers * 1000) - (centaine * 100)) / 10);
	int units = positiveInteger - (dizaine * 10) - (centaine * 100) - (milliers * 1000) - (dizaineDeMilliers * 10000);
	
	if (units == dizaineDeMilliers && dizaine == milliers)
		cout << "\nDING DING DING! WE'VE GOT A PALIN-LIN, PALINDROME!\n\n";
	else
		cout << "\nNO PALINDROME!\n";
	
	return 0;
}