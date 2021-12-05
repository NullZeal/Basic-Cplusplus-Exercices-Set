/*
25 –	Write an algorithm that reads two triplets day1, month1, year1, and day2, month2, year2, 
representing two dates, and that determines whether the first date comes before the second.

*/

#include <iostream>
using namespace std;

int main() 
{
	int date1[3] = { 0 };
	int date2[3] = { 0 };

	cout << "Please enter the numbers associated with the 1st date (day month year).\n\nFor example, the 1st of february 2000 would be : 1 2 2000\n";
	cin >> date1[0] >> date1[1] >> date1[2];
	cout << "\nPlease enter the numbers associated with the 2nd date (day month year).\n\nFor example, the 1st of february 2000 would be : 1 2 2000\n";
	cin >> date2[0] >> date2[1] >> date2[2];

	if (date1[2] < date2[2] || ( (date1[2] == date2[2]) && (date1[1] < date2[1]) ) || ( (date1[2] == date2[2]) && (date1[1] == date2[1]) && (date1[0] < date2[0])))
		cout << "\nThe 1st date comes before the 2nd one.\n\n";
	else if (date1[2] > date2[2] || ((date1[2] == date2[2]) && (date1[1] > date2[1])) || ((date1[2] == date2[2]) && (date1[1] == date2[1]) && (date1[0] > date2[0])))
		cout << "\nThe 2nd date comes before the 1st one.\n\n";
	else
		cout << "\nIt is the same date.\n\n";
	return 0;
}