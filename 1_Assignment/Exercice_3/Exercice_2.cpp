/*
Make a program that calculates an employee’s gross salary for a week, given their hourly rate and the number of hours worked.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float hours_worked;
    float hourly_rate, gross_salary;
    cout << "WELCOME TO THE WEEKLY GROSS SALARY CALCULATOR! \n\nPlease input the right amount to answer each question individually displayed below, then hit Enter. \n\nHow many hours have you worked this week? ";
    cin >> hours_worked;
    cout << "\nHow much do you get paid per hour worked in CA$? ";
    cin >> hourly_rate;
    gross_salary = hours_worked * hourly_rate;
    cout << "\nYour weekly gross salary is " << fixed << setprecision(2) << gross_salary << " CA$. \n\nThank you for using the Weekly Gross Salary Calculator. \n\nHave a good day!\n\n";
    system("pause");
    return 0;
}