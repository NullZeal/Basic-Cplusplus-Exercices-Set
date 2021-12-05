/*
45 –	Write an algorithm that displays the first 100 numbers of the Fibonacci sequence.
This sequence begins with the numbers 1, 1, 2, 3, 5, 8, …, 
where each new number in the sequence can be found by adding the two previous numbers in the sequence.
*/

// Works up to #93! :)

#include <iostream>
using namespace std;
int main()
{
	unsigned long long int num[102] = { 0 };
	num[0] = 1;
	for (int i = 2; i <= 101; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
		cout << "#" << i - 1 << " ---- " << num[i] << "\n";
	}
	return 0;
}
            




