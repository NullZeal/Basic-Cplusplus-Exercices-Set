/*
1 –	Develop an algorithm that determines the greater value out of two numbers provided by the user. Display this value.
*/

#include <iostream>

using namespace std;

int main()
{
	int integerA = 0;
	int integerB = 0;
	cout << "Please enter an integer A : ";
	cin >> integerA;
	cout << "\nPlease enter an integer B : ";
	cin >> integerB;
	if (integerA > integerB)
		cout << "\nThe greater value is integer A with a value of : " << integerA << "\n\n";
	else if (integerB > integerA)
		cout << "\nThe greater value is integer B with a value of : " << integerB << "\n\n";
	else
		cout << "\nThe provided integers have the same value.\n\n";
	return 0;
}