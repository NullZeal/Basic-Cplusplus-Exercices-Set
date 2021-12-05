//11 –	Write a program that reads three non - zero integers and that determines and displays whether these integers could form the sides of a right - angled triangle.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int sides[3]{ 0 };

	for (int i{ 0 }; i < 3; i++)// getting the side values
		while (sides[i] == 0)
		{
			cout << "Enter a non-zero integer for side " << i + 1 << " of the triangle. \n";
			cin >> sides[i];
		}
	int temp{ 0 };
	for (int i{ 0 }; i < 2; i++)// ordering the absolute values
		for (int j{ 0 }; j < 2; j++)
			if (abs(sides[i]) > abs(sides[i + 1]))
			{
				temp = sides[i];
				sides[i] = sides[i + 1];
				sides[i + 1] = temp;
			}
	if ((pow(sides[0], 2)) + (pow(sides[1], 2)) == (pow(sides[2], 2))) //using pythagorian theorem to check if it is a right triangle
		cout << "These integers could form the sides of a right triangle." << endl;
	else
		cout << "These integers could not form a right triangle.\n";
	return 0;
}