/*
24 –	We want to create a program that displays the letter grade for a student,
given their grade in percentage, according to the following table:

Grade	Letter
90% – 100%	A
80% – 89% 	B
70% – 79%	C
60% – 69%	D
	< 60% 	F
*/
#include <iostream>

using namespace std;

int main() 
{
	float gradeInPercent = 0;
	cout << "Please input the grade in % : ";
	cin >> gradeInPercent;

	if (gradeInPercent >= 90)
		cout << "\nThe grade is 'A'.\n\n";
	else if (gradeInPercent >= 80)
		cout << "\nThe grade is 'B'.\n\n";
	else if (gradeInPercent >= 70)
		cout << "\nThe grade is 'C'.\n\n";
	else if (gradeInPercent >= 60)
		cout << "\nThe grade is 'D'.\n\n";
	else
		cout << "\nThe grade is 'F'.\n\n";
	return 0;
}