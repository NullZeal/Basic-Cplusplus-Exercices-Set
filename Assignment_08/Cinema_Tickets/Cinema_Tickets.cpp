///*
//Write a program that displays the price of a cinema ticket according to the age of the client and the day of the week.
//
//It should display :
//- the price of the ticket,
//- the amount (in $) of discount applied, 
//- the age of the client, 
//- and the day of the week (in letters).
//
//The base price of a ticket is $9.
//
//The day of the week is to be encoded as an integer: 1 for Monday, …, 7 for Sunday.
//
//Table of discounts
//
//													Day of the week
//Age of client
//													Monday	Tuesday		Wednesday	Thursday	Friday /Saturday /Sunday
//Younger than 16 years, or	
//65 years and older								10%		30%			30%			30%			     10%
//
//16 years and older, and Younger than 65 years		20%								20%

#include <iostream>
#include <iomanip>
using namespace std;

float calculateDiscountApplied(float price, float discount) {
	return price - (price * discount);
}
float calculateTicketPrice(float price, float discount) {
	return price * discount;
}

struct dayDiscount {
	int dayNumber{ 0 };
	string dayName{ "" };
	float discountForAgeUnder16AndOver64{ 1 };
	float discountForAgeOver15AndUnder65{ 1 };
};

struct ticket {
	float price{ 0 };
	float discountApplied{ 0 };
	int age{ 0 };
};

int main()
{
	const dayDiscount cinema[7] = { { 1,"Monday",0.9,0.8},{2,"Tuesday", 0.7,1},{3,"Wednesday", 0.7,1},{4,"Thursday",.7,.8},{5,"Friday",.9,1},{6,"Saturday",0.9,1},{5,"Sunday",0.9,1} };
	const float baseTicketPrice{ 9 };
	float finalTicketPrice{ 0 };
	
	ticket cinemaTicket;
	do
	{
		cout << "\nPlease input your age in years. For example, input '55' if you are 55 years old.\n\n";
		cin >> cinemaTicket.age;
	} while (cinemaTicket.age < 0 || cinemaTicket.age > 150);

	int dayPosition{ 0 };
	do
	{
		cout << "\nInput the number associated with the day according to the following format :\n\nMonday = 1\nTuesday = 2\nWednesday = 3\nThursday = 4\nFriday = 5\nSaturday = 6\nSunday = 7\n" << endl;
		cin >> dayPosition;
	} while (dayPosition < 1 || dayPosition > 7);
		
	if (cinemaTicket.age < 16 || cinemaTicket.age >= 65)
		cout << setprecision(2) << fixed << "\n----RESULTS----\n\nTicket Price : " << calculateTicketPrice(baseTicketPrice, cinema[dayPosition - 1].discountForAgeUnder16AndOver64) << " $" << endl << "Discount Applied : " << calculateDiscountApplied(baseTicketPrice, cinema[dayPosition - 1].discountForAgeUnder16AndOver64) << " $" << endl << "Age: " << cinemaTicket.age << endl << "Day: " << cinema[dayPosition - 1].dayName << "\n\n";
	else
		cout << setprecision(2) << fixed << "\n----RESULTS----\n\nTicket Price : " << calculateTicketPrice(baseTicketPrice, cinema[dayPosition - 1].discountForAgeOver15AndUnder65) << " $" << endl << "Discount Applied : " << calculateDiscountApplied(baseTicketPrice, cinema[dayPosition - 1].discountForAgeOver15AndUnder65) << " $" << endl << "Age: " << cinemaTicket.age << endl << "Day: " << cinema[dayPosition - 1].dayName << "\n\n";
	
	return 0;
}