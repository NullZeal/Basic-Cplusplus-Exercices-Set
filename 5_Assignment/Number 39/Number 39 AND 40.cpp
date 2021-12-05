/*
39 - Write a program that calculates the average of 1000 grades. The program asks the user for each of the grades.

40 – Write a program that reads 1000 numbers and determines the largest and the smallest.

I figured I could do both in one CPP -
*/

#include <iostream>
using namespace std;

int main()
{
	float grades[10] = { 0 };
	float smallest = 101;
	float largest = 0;
	float sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "\nPlease input grade number " << i + 1 << ".\n\n";
		cin >> grades[i];
		sum += grades[i];
		if (grades[i] < smallest)
			smallest = grades[i];
		if (grades[i] > largest)
			largest = grades[i];
	}
	float average = sum / 10;
	cout << "\nThe smallest grade is : " << smallest << ".\n\n"; 
	cout << "\nThe largest grade is : " << largest << ".\n\n"; 
	cout << "\nThe average is : " << average << ".\n\n";
	return 0;
}