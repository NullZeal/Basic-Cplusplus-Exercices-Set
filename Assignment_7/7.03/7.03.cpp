/*
3 –	Write a program that asks the user to enter two integers, 
and that displays the larger number, followed by the words “ is greater than ”, 

followed by the smaller number. 

However, if the numbers are equal, the program should display “These numbers are equal.”
*/
#include<iostream>
using namespace std;

int main()

{
	int num1 = 0;
	int num2 = 0;
	
	cout << "Please input 2 integers, separated by a enter or a space.\n";
	cin >> num1 >> num2;
	if (num1 > num2)
		cout << "\n" << num1 << " is greater than " << num2 << ".\n\n";
	else if (num2 > num1)
		cout << "\n" << num2 << " is greater than " << num1 << ".\n\n";
	else
		cout << "\nThe numbers are equal.\n\n";

	return 0;
}