/*38 –	Write an algorithm that displays a table for converting Celsius units into Fahrenheit units.
The table should display all of the values from –40 to 40 degrees Celsius, at increments of 5 degrees.
The conversion formula is: F= 9/5 *C +32 */

#include <iostream>

using namespace std;

int main2()
{
	float Celsius[17] = { -40,-35,-30,-25,-20,-15,-10,-5,0,5,10,15,20,25,30,35,40 };
	float Farhenheit[17] = { 0 };

	cout << "  C" << "  " << "F" << endl;
	int i{ 0 };


	while (i < 17)
	{
		Farhenheit[i] = (9 * Celsius[i] / 5) + 32;

		cout << Celsius[i] << "  ";
		cout << Farhenheit[i] << endl;
		i++;

	}




	return 0;
}