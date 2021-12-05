/*
4 –	Write a program that receives three integers entered via the keyboard, and that displays 

the sum, 
the average, 
the product, 
the smallest, 
and the largest of these numbers.*/

#include<iostream>
using namespace std;

int main()
{
	float nums[3] = { 0,0,0 };
	cout << "Please input 3 numbers, separated by enters or spaces.\n";
	cin >> nums[0] >> nums[1] >> nums[2];
	float sum = nums[0] + nums[1] + nums[2];
	float average = (nums[0] + nums[1] + nums[2]) / 3;
	float product = nums[0] * nums[1] * nums[2];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			float temp = 0;
			if (nums[0] > nums[1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	float smallest = nums[0];
	float largest = nums[2];

	cout << "\n--------RESULTS----------\n\n";
	cout << "Sum : " << sum;
	cout << "\nProduct : " << product;
	cout << "\nAverage : " << average;
	cout << "\nSmallest number : " << smallest;
	cout << "\nLargest number : " << largest;
	cout << "\n\n";

	return 0;
}