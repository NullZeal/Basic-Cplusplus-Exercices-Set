/*
37 –	Write an algorithm that reads a positive integer ( > 0 ) and 
determines whether it is a prime number. 
(Hint: try dividing the number by the numbers coming before it.) 

Validate the input.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int positiveInteger = 0;
	while (positiveInteger <= 0)
	{
		cout << "Please input a positive integer : \n\n";
		cin >> positiveInteger;
	}
	bool isPrime = true;
	
	for (int i = 2; i <= sqrt(positiveInteger); i++)
	{
		if (positiveInteger % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime == false || positiveInteger == 1)
		cout << "\nNO PRIME NUMBER FOUND. What a boring number is " << positiveInteger << ", heh ? \n\n";
	else
		cout << "\nDING DING DING! PRIME NUMBER FOUND! What a weird number is " << positiveInteger << ", heh?\n\n";
	
	return 0;
}