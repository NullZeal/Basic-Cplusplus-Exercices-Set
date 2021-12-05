/*
26 –	Write an algorithm that reads three numbers and determines whether these numbers, 
        considered as the lengths of the three sides of a triangle, would correspond to:

•	An equilateral triangle (three equal sides)
•	An isosceles triangle (two equal sides)
•	A scalene triangle (three different sides)
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter the width, the height and length of the triangle in centimeters.\n\nFor example, a 12cm wide, 52cm tall and 15cm long triangle would require you to input : 12 52 14 \n\n";
    float side1 = 0;
    float side2 = 0;
    float side3 = 0;
    cin >> side1 >> side2 >> side3;
    
    if (side1 == side2 && side1 == side3)
        cout << "The triangle is equilateral.";
    else if (side1 != side2 && side1 != side3 && side2 != side3)
        cout << "The triangle is scalene.";
    else 
        cout << "The triangle is isosceles.";
    return 0;
}