/*35 –	Write an algorithm that calculates the sum of all the integers contained (inclusively)
between two positive integer limits entered by the user. The program reads the smallest limit first.
Example: the sum of the integers between 5 and 10, inclusively.
*/

#include <iostream>

using namespace std;

int main2()
{
	int limit1{ 0 }, limit2{ 0 }, sum{ 0 };

	cout << "Please enter both integer starting with the smallest separated by a space. \n";

	cin >> limit1 >> limit2;

	int i = limit1;

	while (i <= limit2) {
		sum += limit1;
		limit1++;
		i++;
	}

	cout << "The sum of all the integers in the inclusive interval is " << sum << "." << endl;
	return 0;
}