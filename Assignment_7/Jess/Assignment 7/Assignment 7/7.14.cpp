//14 –	Write a program that calculates and displays the product of all the odd numbers between 1 to 15, inclusively.

#include<iostream>

using namespace std;

int main()
{
	int product{ 0 };

	for (int i{ 1 }; i < 16; i ++ )
	{
		if (((i % 2) != 0) && product == 0)
			product = i;
		else if ((i % 2) != 0)
			product = product * i;
		
	}

	cout << "The product of all the odd numbers from 1 to 15 is " << product << endl;
	return 0;
}