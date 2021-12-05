
/*12 –	A company desires to transmit data by telephone,
but is concerned about the fact that their telephone lines can be secretly listened in on.

All of this data is transmitted in the form of four - digit integers.
You are asked to write a program able to encrypt this data,
in order to ensure a more secure transmission.Your program should read a four - digit integer and execute the encryption in the following way :

replace each of the digits in the integer by((this digit + 7) modulo 10).
Then, exchange the first digit with the third digit, 
and exchange the second digit with the fourth,
and display the encrypted integer.
Write a separate program for encrypting the four - digit integer entered,
and for decrypting the encrypted integer in order to find the original number.*/

#include<iostream>

using namespace std;

int main()
{
	int positiveInteger = 0;
	do
	{
		cout << "Please input a positive 4 digit integer.\n";
		cin >> positiveInteger;
	} while (positiveInteger < 1000 && positiveInteger > 9999);

	int milliers = floor(positiveInteger / 1000);
	int centaine = floor((positiveInteger - (milliers * 1000)) / 100);
	int dizaine = floor((positiveInteger - (milliers * 1000) - (centaine * 100)) / 10);
	int units = positiveInteger - (dizaine * 10) - (centaine * 100) - (milliers * 1000);

	int digit[4] = { milliers, centaine, dizaine, units };

	for (int i{ 0 }; i < 4; i++)// encrypt 1
		digit[i] = (digit[i] + 7) % 10;

	int temp{ 0 };
	temp = digit[0];
	digit[0] = digit[2];
	digit[2] = temp;// swap 1

	temp = digit[1];
	digit[1] = digit[3];
	digit[3] = temp;// swap 2

	cout << "\nThe encrypted integer is : ";
	for (int i{ 0 }; i < 4; i++)
		cout << digit[i];
	cout << "\n\n";
	return 0;
}