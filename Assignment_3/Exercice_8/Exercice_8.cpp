/*
8 –	Write an algorithm that reads two integers m and n and determines whether m is a multiple of n.
*/

#include <iostream>

using namespace std;

int main()
{
	int integerM = 0;
	int integerN = 0;
	cout << "Please enter an integer M: ";
	cin >> integerM;
	cout << "Please enter an integer N: ";
	cin >> integerN;
	if (integerM % integerN == 0)
		cout << "\nInteger M is a multiple of integer N.\n\n";
	else
		cout << "\nInteger M is NOT a multiple of integer N.\n\n";
	return 0;
}