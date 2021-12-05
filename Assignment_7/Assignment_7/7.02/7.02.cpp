/*
2 –	Write a program that asks the user to enter two numbers, and that displays the sum, the product, the difference, and the quotient of these two numbers.
*/

#include <iostream>
using namespace std;

int main()
{
	float num1 = 0;
	float num2 = 0;
	cout << "Please input 2 numbers, separated by enters.\n";
	cin >> num1 >> num2;
	float sum = num1 + num2;
	float product = num1 * num2;
	float difference1 = num1 - num2;
	float difference2 = num2 - num1;
	float quotient1 = num1 / num2;
	float quotient2 = num2 / num1;
	cout << "\n--------RESULTS----------\n\n";
	cout << "Sum : " << sum;
	cout << "\nProduct : " << product;
	cout << "\nDifference1 (num1 - num2) : " << difference1;
	cout << "\nDifference2 (num2 - num1) : " << difference2;
	cout << "\nQuotient1 (num1 / num2) : " << quotient1;
	cout << "\nQuotient2 (num2 / num1) : " << quotient2;
	cout << "\n\n";

	return 0;
}