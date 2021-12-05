/*
9 –	Write a program that converts the input of positive integer greater than 0 that is composed only of the digits 0 and 1 
(that is, a “binary” integer) in order to display its decimal equivalent. 

(Hint: use the modulus and division operators to process the digits of the “binary” number one at a time, from right to left.)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int multiplier = 0;
	int counter = 0;
	int decimal = 0;
	long long int positiveInteger = 0;
	cout << "Input a positive binary number.\n";
	cin >> positiveInteger;
	
	long long int newPositiveInteger = positiveInteger;
	while (newPositiveInteger > 0)
	{
		if ((newPositiveInteger % 2) == 0)
		{
			multiplier = 0;
		}           
		else
		{
			multiplier = 1;
		}
		decimal += multiplier * pow(2.0, counter);
		newPositiveInteger = floor(newPositiveInteger / 10);
		counter++;
	}  
	cout << "\n---RESULTS---\n\nThe binary number : " << positiveInteger << " converted in decimal is : " << decimal << "\n\n";
	return 0;
}
