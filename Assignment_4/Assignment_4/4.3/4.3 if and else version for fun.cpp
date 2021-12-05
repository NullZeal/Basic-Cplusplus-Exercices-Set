/*


TO TEST, PLEASE SWAP MAIN 2 TO MAIN on this file AND MAIN TO MAIN2 for the other 4.3 file BEFORE RUNNING :)

------
Write a program that reads three values and displays them in ascending order.
*/
#include <iostream>

using namespace std;

int main2()
{
	float arr[3] = {};
	float smallestN = 0;
	float middleN = 0;
	float biggestN = 0;

	cout << "Enter 3 numbers separated by comas or enters.\n\n";
	cin >> arr[0] >> arr[1] >> arr[2];
	
	// Checking for all cases where arr[0] is the smallest number
	if (arr[0] <= arr[1] && arr[0] <= arr[2])
	{
		// Equality cases
		if (arr[0] == arr[1])
		{
			biggestN = arr[2];
			middleN = arr[1];
			smallestN = arr[0];
		}
		else if (arr[0] == arr[2])
		{
			biggestN = arr[1];
			middleN = arr[2];
			smallestN = arr[0];
		}
		// Other cases
		if (arr[1] >= arr[2])
		{
			biggestN = arr[1];
			middleN = arr[2];
			smallestN = arr[0];
		}
		else
		{
			biggestN = arr[2];
			middleN = arr[1];
			smallestN = arr[0];
		}
	}
	// Checking for all cases where arr[1] is the smallest number
	else if (arr[1] <= arr[0] && arr[1] <= arr[2])
	{
		// Equality cases
		if (arr[1] == arr[0])
		{
			biggestN = arr[2];
			middleN = arr[0];
			smallestN = arr[1];
		}
		else if (arr[1] == arr[2])
		{
			biggestN = arr[0];
			middleN = arr[2];
			smallestN = arr[1];
		}
		// Other cases
		if (arr[2] >= arr[0])
		{
			biggestN = arr[2];
			middleN = arr[1];
			smallestN = arr[1];
		}
		else
		{
			biggestN = arr[0];
			middleN = arr[2];
			smallestN = arr[1];
		}
	}
	// Checking for all cases where arr[2] is the smallest number
	else if (arr[2] <= arr[0] && arr[2] <= arr[1])
	{
		// Equality cases
		if (arr[2] == arr[0])
		{
			biggestN = arr[1];
			middleN = arr[0];
			smallestN = arr[2];
		}
		else if (arr[1] == arr[2])
		{
			biggestN = arr[0];
			middleN = arr[1];
			smallestN = arr[2];
		}
		// Other cases
		if (arr[1] >= arr[0])
		{
			biggestN = arr[1];
			middleN = arr[0];
			smallestN = arr[2];
		}
		else
		{
			biggestN = arr[0];
			middleN = arr[1];
			smallestN = arr[2];
		}
	}
	cout << "\nThe ascending order for the 3 numbers is the following : " << smallestN << " ---> " << middleN << " ---> " << biggestN << ".\n\n";
	return 0;
}

