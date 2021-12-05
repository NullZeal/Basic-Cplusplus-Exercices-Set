/*
47 –
Write a program that reads the grades for the exams and assignments in a course including 2 exams and 2 assignments.

The program should be able to adapt to the conditions of the course. More precisely:
•	The program should read the number of students in the course. DONE
•	For each of the four grades, ask the user what the weight of the grade is. DONE

In other words, how much is the grade worth as a percentage of the final grade for the course?
•	The program should validate that the total of the four weights given is indeed equal to 100. DONE
•	Then, for each student, the program should read the student’s four grades (each out of 100). DONE
•	Verify that the values entered are between 0 and 100. DONE

Then calculate the final course grade for each student.
•	The program should display whether the student passes or fails the course. A student passes if they achieve 60 or greater. DONE
•	Finally, the program should display the average of all the students’ final course grades. DONE   */

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
private:
	
	float _grade1;
	float _grade2;
	float _grade3;
	float _grade4;
	float _finalGrade;
	
public:

	Student()
	{
		_grade1 = 0;
		_grade2 = 0;
		_grade3 = 0;
		_grade4 = 0;
		_finalGrade = 0;
	}

	Student(float newGrade1, float newGrade2, float newGrade3, float newGrade4, float newFinalGrade)
	{
		_grade1 = newGrade1;
		_grade2 = newGrade2;
		_grade3 = newGrade3;
		_grade4 = newGrade4;
		_finalGrade = newFinalGrade;
	}
	float getFinalGrade()
	{
		return _finalGrade;
	}
};

class Course
{
private:

	int _studentN;
	float _gradeWeight1;
	float _gradeWeight2;
	float _gradeWeight3;
	float _gradeWeight4;

public:

	Course()
	{
		_studentN = 0;
		_gradeWeight1 = 0;
		_gradeWeight2 = 0;
		_gradeWeight3 = 0;
		_gradeWeight4 = 0;
	}

	Course(int newStudentN, float newGradeWeight1, float newGradeWeight2, float newGradeWeight3, float newGradeWeight4)
	{
		_studentN = newStudentN;
		_gradeWeight1 = newGradeWeight1;
		_gradeWeight2 = newGradeWeight2;
		_gradeWeight3 = newGradeWeight3;
		_gradeWeight4 = newGradeWeight4;
	}
	int getStudentAmount()
	{
		return _studentN;
	}
};

int main()
{
	int studentAmount = 0;
	cout << "Please enter the amount of students in the course : \n";
	cin >> studentAmount;
	
	float gradeWeight[4] = { 0,0,0,0 };
	do
	{
		for (int i = 0; i < 4; i++)
		{
			cout << "\nPlease input the weight for grade " << i + 1 << " in % (10 % will be 10), and then press enter.\n";
			cin >> gradeWeight[i];
		}
	} while ((gradeWeight[0] + gradeWeight[1] + gradeWeight[2] + gradeWeight[3]) != 100);

	Course course1(studentAmount, gradeWeight[0], gradeWeight[1], gradeWeight[2], gradeWeight[3]);

	vector<Student> studentList;
	for (int i = 0; i < course1.getStudentAmount(); i++)
	{
		float gradeTemp1 = -1;
		float gradeTemp2 = -1;
		float gradeTemp3 = -1;
		float gradeTemp4 = -1;
		while (gradeTemp1 < 0 || gradeTemp1 > 100 || gradeTemp2 < 0 || gradeTemp2 > 100 || gradeTemp3 < 0 || gradeTemp3 > 100 || gradeTemp4 < 0 || gradeTemp4 > 100)
		{
			cout << "\nFor student #" << i + 1 << ", please input the grades according to the order of the weight inputs.\n";
			cin >> gradeTemp1 >> gradeTemp2 >> gradeTemp3 >> gradeTemp4;
		}
		float finalGrade = (gradeTemp1 * (gradeWeight[0] * .01)) + (gradeTemp2 * (gradeWeight[1] * .01)) + (gradeTemp3 * (gradeWeight[2] * .01)) + (gradeTemp4 * (gradeWeight[3] * .01));
		Student tempStudent(gradeTemp1, gradeTemp2, gradeTemp3, gradeTemp4, finalGrade);
		studentList.push_back(tempStudent);
	}
	for (int i = 0; i < course1.getStudentAmount(); i++)
	{
		if(studentList.at(i).getFinalGrade() < 60)
			cout << setprecision(2) << fixed << "\nStudent #" << i + 1 << " FAILS the class with a final score of : " << studentList.at(i).getFinalGrade() << "%. WHAT A SLACKER!\n";
		else
			cout << setprecision(2) << fixed << "\nStudent #" << i + 1 << " PASSES the class with a final score of : " << studentList.at(i).getFinalGrade() << "%. WELL PLAYED, SON!\n";
	}
	float averageOfAllStudents = 0;
	for (int i = 0; i < course1.getStudentAmount(); i++)
		averageOfAllStudents += studentList.at(i).getFinalGrade();
	averageOfAllStudents = averageOfAllStudents / course1.getStudentAmount();
	cout << setprecision(2) << fixed << "\nThe average of all students is equal to : " << averageOfAllStudents << "%.\n\n";
	return 0;
}




