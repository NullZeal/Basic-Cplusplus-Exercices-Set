/*
1 –	Determine what will be displayed when each of the following lines is executed. Suppose that x = 2 and y = 3.

a)	Write x
b)	Write x + x
c)	Write “x =” 
d)	Write “x * x”
e)	Write “x * y”, y + x
f)	Write x * y + y + x
g)	Write “x * y + y + x”

*/

#include <iostream>
using namespace std; 

void mathStuffA(int x) 
{
	cout << x;
}
void mathStuffB(int x)
{
	cout << x + x;
}
void mathStuffC()
{
	cout << "x =";
}
void mathStuffD()
{
	cout << "x * x";
}
void mathStuffE(int x, int y)
{
	cout << "x * y " << y + x;
}
void mathStuffF(int x, int y)
{
	cout << (x * y) + y + x;
}
void mathStuffG()
{
	cout << "x * y + y + x";
}

int main()
{
	cout << "A = ";
	mathStuffA(2);
	cout << "\nB = ";
	mathStuffB(2);
	cout << "\nC = ";
	mathStuffC();
	cout << "\nD = ";
	mathStuffD();
	cout << "\nE = ";
	mathStuffE(2, 3);
	cout << "\nF = ";
	mathStuffF(2, 3);
	cout << "\nG = ";
	mathStuffG();
	cout << "\n\n";

	return 0;
}