/*
Write a program that reads 3 values, determines the greatest one, and displays it.
*/
#include <iostream>

using namespace std;

int main()
{
	float arr[3] = { 0 };
	cout << "Enter 3 values, separated by spaces or enters.\n\n";
	cin >> arr[0] >> arr[1] >> arr[2];

	float greatestValue = arr[0];
	if (arr[1] > arr[0] && arr[1] > arr[2])
		greatestValue = arr[1];
	else if (arr[2] > arr[0] && arr[2] > arr[1])
		greatestValue = arr[2];
	cout << "\nThe greatest value is : " << greatestValue << " !\n\n";
	return 0;
}