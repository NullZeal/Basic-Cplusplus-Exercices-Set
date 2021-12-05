/*
In the old system of calculating sales tax in Québec, the taxes on a product were 7% for the GST, and 7.5% for the QST
(applied after calculating the GST).

Make a program that reads the unit price of a product and the quantity purchased, and
that displays the amounts for the GST, the QST, and the total price after taxes.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float gstRate = 0.07;
	float qstRate = 0.075;
	float price;
	float quantity;
	float priceBeforeTax, total;

	cout << "Enter the unit price in CA$:" << endl;
	cin >> price;
	cout << endl;
	cout << "Enter the quantity:" << endl;
	cin >> quantity;
	cout << endl;

	priceBeforeTax = price * quantity;
	cout << "Subtotal is " << setprecision(2) << fixed << priceBeforeTax << " CA$" << endl;
	cout << endl;

	float gstAmount = priceBeforeTax * gstRate;
	cout << "With a GST rate of " << (gstRate * 100) << "%, the GST amount is : " << setprecision(2) << fixed << gstAmount << " CA$" << endl;
	cout << endl;

	float qstAmount = (priceBeforeTax + gstAmount) * qstRate;
	cout << "With a QST rate of " << (qstRate * 100) << "%, the QST amount is : " << setprecision(2) << fixed << qstAmount << " CA$" << endl;
	cout << endl;

	total = priceBeforeTax + gstAmount + qstAmount;
	cout << "The total price with taxes is : " << setprecision(2) << fixed << total << " CA$. " << endl;
	cout << endl;

	system("PAUSE");
	return { 0 };
}