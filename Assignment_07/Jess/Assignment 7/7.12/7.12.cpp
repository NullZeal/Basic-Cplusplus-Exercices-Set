
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
	int digit[4]{ 0 };

	cout << "Please enter the 4 digit integer to encrypt seperated by a space." << endl;

	for (int i{ 0 }; i < 4; i++)// read digit

		cin >> digit[i];

	for (int i{ 0 }; i < 4; i++)// encrypt 1
		digit[i] = (digit[i] + 7) % 10;

	int temp{ 0 };
	temp = digit[0];
	digit[0] = digit[2];
	digit[2] = temp;// swap 1

	temp = digit[1];
	digit[1] = digit[3];
	digit[3] = temp;// swap 2


	cout << "The encrypted integer is ";
	for (int i{ 0 }; i < 4; i++)
		cout << digit[i];



	return 0;
}