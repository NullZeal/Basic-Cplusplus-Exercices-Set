/*36 –	Create four algorithms, each displaying the corresponding one of the following sequences:

a)		5	10	15	20	25	30	35	40
b)		3	5	7	9	11	13	15
c)		80	70	60	50	40	30	20
d)		1	2	6	24	120	720
*/

#include <iostream>

using namespace std;

int main2()
{

	cout << "Here's the result of the first algo. " << endl;
	int val{ 0 };

	while (val < 40)
	{
		val = val + 5;
		cout << val << " ";
	}
	cout << endl << endl;

	cout << "Here's the result of the second algo. " << endl;

	int val2{ 3 };
	while (val2 < 15)
	{
		val2 = val2 + 2;
		cout << val2 << " ";
	}

	cout << endl << endl;

	cout << "Here's the result of the third algo. " << endl;

	int val3{ 80 };
	while (val3 > 20)
	{
		val3 = val3 - 10;
		cout << val3 << " ";

	}

	cout << endl << endl;

	cout << "Here's the result of the fourth algo. " << endl;


	int val4{ 1 };
	int i = 1;
	while (i < 7)
	{
		val4 = val4 * i;
		cout << val4 << " ";
		i++;
	}

	return 0;

}