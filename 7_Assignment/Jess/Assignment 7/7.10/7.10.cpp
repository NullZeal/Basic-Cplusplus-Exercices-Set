//10 –	Write a program that calculate the square and the cube of the numbers from 0 to 10.


#include<iostream>
# include<cmath>

using namespace std;


struct powers {
	int number{ 0 }, square{ 0 }, cube{ 0 };
};
int main()
{
	powers calc[11];

	for (int i{ 0 }; i < 11; i++) // calculates square and roots of numbers form 0 to 10
	{
		calc[i].number = i;
		calc[i].square = pow(i, 2);
		calc[i].cube = pow(i, 3);
	}

	for (int i{ 0 }; i < 11; i++)
	{
		cout << "For the base " << calc[i].number << endl;
		cout << "The square is " << calc[i].square << endl;
		cout << "The cube is " << calc[i].cube << endl;
	}

	return 0;
}