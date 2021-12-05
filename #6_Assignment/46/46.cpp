/*
46 –	Write a program that displays all the prime numbers from 1 to 50,000.
*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	vector<int> position;
	for (int i = 2; i <= 50000; i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i) && isPrime == true; j++)
		{
			if (i % j == 0)
				isPrime = false;
		}
		if (isPrime == true)
		{
			position.push_back(i);
		}
	}
	for (int i = 0; i < position.size(); i++)
		cout << "Prime #" << i + 1 << " is = " << position[i] << "\n";
	return 0;
}
