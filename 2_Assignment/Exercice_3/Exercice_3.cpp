/*
4 –	In a computer technology course, the following evaluation weights are used:

•	Laboratory work counts for 40% of the grade
•	The midterm exam counts for 25%
•	The final exam counts for 35%

Make a program that calculates the final grade of a student, assuming that each 
of the three grades the user inputs is out of 100.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const float weightLaboratory = 0.4;
	const float weightMidtermExam = 0.25;
	const float weightFinalExam = 0.35;

	float resultLaboratory = 0;
	float resultMidtermExam = 0;
	float resultFinalExam = 0;

	cout << "Please enter your grade for the laboratory work : ";
	cin >> resultLaboratory;
	cout << "\nPlease enter your grade for the midterm exam : ";
	cin >> resultMidtermExam;
	cout << "\nPlease enter your grade for the final exam : ";
	cin >> resultFinalExam;
	
	float finalGrade = resultLaboratory * weightLaboratory + resultMidtermExam * weightMidtermExam + resultFinalExam * weightFinalExam;
	cout << setprecision(1) << fixed;
	if (finalGrade >= 60)
	{
		cout << "\nYour final grade is " << finalGrade << "%. You passed!\n" << endl;
	}
	else
	{
		cout << "\nYour final grade is " << finalGrade << "%. You failed.\n" << endl;
	}
	system("pause");
	return 0;
}
