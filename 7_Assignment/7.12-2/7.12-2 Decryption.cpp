/*decrypting the encrypted integer in order to find the original number.*/

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

	for (int i{ 0 }; i < 4; i++)// decrypt 1
	{
		if (digit[i] - 7 >= 0)
			digit[i] = digit[i] - 7;
		else
			digit[i] = (digit[i] + 3);
	}
	
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
	cout << "\n\n";
	return 0;
}