/*

36 –	Create four algorithms, each displaying the corresponding one of the following sequences:

a)		5	10	15	20	25	30	35	40
b)		3	5	7	9	11	13	15
c)		80	70	60	50	40	30	20
d)		1	2	6	24	120	720


*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 5; i <= 40; i += 5)
		cout << i << " ";

	cout << "\n\n";

	for (int i = 3; i <= 15; i += 2)
		cout << i << " ";

	cout << "\n\n";
	
	for (int i = 80; i >= 20; i -= 10)
		cout << i << " ";

	cout << "\n\n";

	int j = 1;

	for (int i = 1; i < 7; i++)
	{
		j = j * i;
		cout << j << " ";
	}

	cout << "\n\n";

	return 0;
}