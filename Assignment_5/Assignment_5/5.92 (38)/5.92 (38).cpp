/*
	Write an algorithm that displays a table for converting Celsius units into Fahrenheit units.
	The table should display all of the values from –40 to 40 degrees Celsius, 
	at increments of 5 degrees.  
	
	The conversion formula is:                                                                   F = 9/5  ×  C+32
 
*/
#include <iostream>
using namespace std;

int main() 
{
	float celciusTable[81] = { 0 };
	for (int i = 0; i <= 80; i += 5)
	{
		celciusTable[i] = -40 + i;
		cout << celciusTable[i] <<"' Celcius units into Fahrenheit is = " << (9 * celciusTable[i]) /5 + 32 << " Fahrenheit units.\n\n";
	}
	return 0;
}