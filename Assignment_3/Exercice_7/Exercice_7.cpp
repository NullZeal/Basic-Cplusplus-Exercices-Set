/*
7 –	Write an algorithm that reads an integer and determines whether it is even or odd.
*/

#include <iostream>

using namespace std;

int main()
{
	int integerInput = 0;
	cout << "Please enter an integer : ";
	cin >> integerInput;
	if (integerInput % 2 == 0)
		cout << "\nYour integer is even.\n\n";
	else 
		cout << "\nYour integer is odd.\n\n";
	return 0;
}
