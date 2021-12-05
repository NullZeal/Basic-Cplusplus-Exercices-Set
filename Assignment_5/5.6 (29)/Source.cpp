/*
29 –	Write the algorithm of a program that reads a date (3 integers: day, month, year) 
and that displays the date of the next day (in numbers). Suppose that the year is not a leap year.


Month Number 	Month Name 	Month Days
1 				January 		31
3 				March 			31
5 				May 			31
7 				July 			31
8 				August 			31
10 				October 		31
12 				December 		31

4 				April 			30
6 				June 			30
9 				September 		30
11 				November 		30

2 				February 		28
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int date[3] = { 0 };

	cout << "Please input 3 integers associated with the day - month - year\n\n --- For example, 18 1 2000 would be 18th of january 2000. ---\n\n";
	       //day	 //month	//year
	cin >> date[0] >> date[1] >> date[2];

	//case of last day in 31 days in months, except for december
	if (date[0] == 31 && (date[1] == 1 || date[1] == 3 || date[1] == 5 || date[1] == 7 || date[1] == 8 || date[1] == 10))
	{
		date[1]++;
		date[0] = 1;
	}
	//case of last day in 30 days months 
	else if (date[0] == 30 && (date[1] == 4 || date[1] == 6 || date[1] == 9 || date[1] == 11))
	{
		date[1]++;
		date[0] = 1;
	}
	// case of last day in february
	else if (date[0] == 28 && date[1] == 2)
	{
		date[1]++;
		date[0] = 1;
	}
	// case of last day in december
	else if (date[0] == 31 && date[1] == 12)
	{
		date[0] = 1;
		date[1] = 1;
		date[2]++;
	}
	// case of regular days
	else
		date[0]++;

	string monthName = "";

	if (date[1] == 1)
		monthName = "January";
	else if (date[1] == 2)
		monthName = "February";
	else if (date[1] == 3)
		monthName = "March";
	else if (date[1] == 4)
		monthName = "April";
	else if (date[1] == 5)
		monthName = "Mai";
	else if (date[1] == 6)
		monthName = "June";
	else if (date[1] == 7)
		monthName = "July";
	else if (date[1] == 8)
		monthName = "August";
	else if (date[1] == 9)
		monthName = "September";
	else if (date[1] == 10)
		monthName = "October";
	else if (date[1] == 11)
		monthName = "November";
	else if (date[1] == 12)
		monthName = "December";
	
	string numberPosition = "";
	if (date[0] == 1)
		numberPosition = "st";
	else if (date[0] == 2)
		numberPosition = "nd";
	else
		numberPosition = "th";

	cout << "\nThe new date would be : " << date[0] << numberPosition << " of " << monthName << " in the year " << date[2] << "\n\n";
		
	return 0;
}