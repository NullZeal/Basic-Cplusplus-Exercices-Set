/*
9 –	19 –	Give an algorithm that reads three numbers (a, b, c) and determines whether any one of the numbers is equal to the sum of the other two.
If such a number exists, display it; otherwise, display the message “No solution”.
*/

#include <iostream>
using namespace std;

int main()
{
	float integerA = 0;
	float integerB = 0;
	float integerC = 0;
	cout << "Please enter an integer A: ";
	cin >> integerA;
	cout << "Please enter an integer B: ";
	cin >> integerB;
	cout << "Please enter an integer C: ";
	cin >> integerC;
	if (integerA == integerB + integerC)
		cout << "The sum of Integer B and Integer C is : " << integerB + integerC << endl;
	else if (integerB == integerA + integerC)
		cout << "The sum of Integer A and Integer C is : " << integerA + integerC << endl;
	else if (integerC == integerA + integerB)
		cout << "The sum of Integer A and Integer B is : " << integerA + integerB << endl;
	else 
		cout << "No solution." << endl;
	return 0;
}