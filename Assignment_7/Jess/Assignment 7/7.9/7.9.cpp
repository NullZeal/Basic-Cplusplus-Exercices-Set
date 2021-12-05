//9 –	Write a program that converts the input of positive integer greater than 0 that is composed only of the digits 0 and 1 
//(that is, a “binary” integer) in order to display its decimal equivalent.
//(Hint: use the modulus and division operators to process the digits of the “binary” number one at a time, from right to left.)

#include<iostream>
#include< vector>
#include <cmath>

using namespace std;

int main()
{
	vector<int>binary{ 0 };
	int decimal{ 0 };
	int input{ 0 };
	int i{ 0 };
		while ((input == 0) || (input == 1))//creating the binary number.
		{
			cout << "Enter the numbers composing the binary from right to left. To end, enter a non-binary number. " << endl;
			cin >> input;
			if ((input == 0) || (input == 1))
				binary.at(i) = input;
		}
		int power{ 0 };
		for (int i{ 0 }; i < binary.size(); i++)// calculating the powers of 2
		{
			if (i == 0)
			{
				power = 1;
				decimal += (binary.at(i) * power);
			}
			else if (i == 1)
			{
				power = 2;
				decimal += (binary.at(i) * power);
			}
			else
			{
				for (int j{ 0 }; j < i; j++)
				{
					power = power * 2;

				}
				decimal += (binary.at(i) * power);
			}
			
				
				
		}

		cout << "The binary number : " ;

		for (int i{ binary.size() }; i > 0; i--)
			cout << binary.at(i) << " ";

		cout <<endl <<  "Is equivalent to " << decimal;

	return 0;
}