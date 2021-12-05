/*
5 –	Write a program that reads the radius of a circle, 
and that displays the 

diameter, 
the circumference, 
and the area of the circle. 

Use the constant value 3.14159 for π.
*/

#include <iostream>
using namespace std;

int main()
{
	const float  pi = 3.14159;
	float radius = 0;
	cout << "Please input the radius in centimeters : ";
	cin >> radius;
	cout << "\n-------RESULTS-------\n\nThe Diameter is : " << 2 * radius << " cms.\n\nThe Circumference is : " << 2 * pi * radius << " cms.\n\nThe Area is : " << pi * radius * radius << " cm squared.\n\n";

	return 0;
}