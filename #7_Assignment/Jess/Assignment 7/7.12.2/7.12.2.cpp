/*decrypting the encrypted integer in order to find the original number.*/



#include<iostream>

using namespace std;

int main()
{
	int digit[4]{ 0 };

	cout << "Please enter the 4 digit integer to decrypt seperated by a space." << endl;

	for (int i{ 0 }; i < 4; i++)// read digit

		cin >> digit[i];

	for (int i{ 0 }; i < 4; i++)// encrypt 1
		if (digit[i] - 7 >= 0)
			digit[i] = digit[i] - 7;
			
		else
			 digit[i] = (10+digit[i] -7);

	int temp{ 0 };
	temp = digit[0];
	digit[0] = digit[2];
	digit[2] = temp;// swap 1

	temp = digit[1];
	digit[1] = digit[3];
	digit[3] = temp;// swap 2


	cout << "The decrypted integer is ";
	for (int i{ 0 }; i < 4; i++)
		cout << digit[i];



	return 0;
}