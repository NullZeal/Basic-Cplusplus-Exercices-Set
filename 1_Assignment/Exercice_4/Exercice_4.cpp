/*
Make a program that displays the volume of a rectangular prism after reading the dimensions of the prism.
*/

#include <iostream>

using namespace std;

int main()
{
	double length, width, height;
	cout << "Please input the length of the prism in centimeters : " << endl;
	cin >> length;
	cout << "Please input the width of the prism in centimeters : " << endl;
	cin >> width;
	cout << "Please input the height of the prism in centimeters : " << endl;
	cin >> height;

	double volume = length * width * height;
	cout << "The volume of the prism is : " << volume << " cubic centimeters. " << endl;
	system("pause");
	return 0;
}