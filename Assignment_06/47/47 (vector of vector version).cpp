///*
//47 –	
//Write a program that reads the grades for the exams and assignments in a course including 2 exams and 2 assignments. 
//
//The program should be able to adapt to the conditions of the course. More precisely:
//•	The program should read the number of students in the course. DONE
//•	For each of the four grades, ask the user what the weight of the grade is. DONE
//
//In other words, how much is the grade worth as a percentage of the final grade for the course?
//•	The program should validate that the total of the four weights given is indeed equal to 100. DONE
//•	Then, for each student, the program should read the student’s four grades (each out of 100). DONE
//•	Verify that the values entered are between 0 and 100. DONE
//
//Then calculate the final course grade for each student.
//•	The program should display whether the student passes or fails the course. A student passes if they achieve 60 or greater. DONE
//•	Finally, the program should display the average of all the students’ final course grades. DONE   */ 
//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	int gradeAmount = 4;
//	
//	int studentAmount = 0;
//	cout << "Please input the amount of students in the course : \n";
//	cin >> studentAmount;
//
//	float gradeWeight[4] = { 0,0,0,0 };
//	do
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			cout << "\nPlease input the weight for grade " << i +1 << " in % (10 % will be 10), and then press enter.\n";
//			cin >> gradeWeight[i];
//		}
//	} 
//	while ((gradeWeight[0] + gradeWeight[1] + gradeWeight[2] + gradeWeight[3]) != 100);
//	
//	vector<vector<float>> students;
//	for (int i = 0; i < studentAmount; i++)
//	{
//		float finalGrade = 0;
//		vector<float> gradeN;
//		for (int j = 0; j < gradeAmount; j++)
//		{
//			float tempGrade = -1;
//				while (tempGrade < 0 || tempGrade > 100)
//				{
//					cout << "\nFor student #" << i + 1 << ", please input grade #" << j + 1 << "\n";
//					cin >> tempGrade;
//				}
//				gradeN.push_back(tempGrade);
//				finalGrade += (tempGrade * gradeWeight[j]) / 100;
//		}
//		gradeN.push_back(finalGrade);
//		students.push_back(gradeN);
//	}
//	cout << "\n-------------RESULTS---------------\n\n";
//	for (int i = 0; i < students.size(); i++)
//	{
//		if (students[i][4] < 60)
//			cout << setprecision(2) << fixed << "\nStudent #" << i + 1 << " FAILS the class with a final score of : " << students[i][4] << "%. WHAT A SLACKER!\n";
//		else
//			cout << setprecision(2) << fixed << "\nStudent #" << i + 1 << " PASSES the class with a final score of : " << students[i][4] << "%. WELL PLAYED, SON!\n";
//	}
//	float averageOfAllStudents = 0;
//	for (int i = 0; i < students.size(); i++)
//		averageOfAllStudents += students[i][gradeAmount];
//	averageOfAllStudents = averageOfAllStudents / students.size();
//	cout << setprecision(2) << fixed << "\nThe average of all students is equal to : " << averageOfAllStudents << "%.\n\n";
//	return 0;
//}
//
