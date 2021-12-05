/*
Write a program that reads three values and displays them in ascending order.
*/
#include <iostream>

using namespace std;

int main()
{
	float arr[3] = {0};
	
//only for 3 values atm
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter value # " << i + 1 << " and then press 'ENTER' on your keyboard : ";
		cin >> arr[i];
	}

	int tempVal = 0; 
	int i = 0;
	int j = 0;
	
	while (i <= 1)
	{
		while (j < 2)
		{
			if (arr[j] > arr[j + 1])
			{
				tempVal = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tempVal;
			}
			j++;
		}
		j = 0;
		i++;
	}
	cout << "\nThe new ascending order is : " << arr[0] << " ---> " << arr[1] << " ---> " << arr[2] << "\n\n";
	return 0;
}


