/*37 –	Write an algorithm that reads a positive integer ( > 0 ) and determines whether it is a prime number.
(Hint: try dividing the number by the numbers coming before it.) Validate the input.*/

//using namespace std;
//
//int main()
//{
//	int number{ 0 };
//
//	cout << "Please enter a positive integer. " << endl;
//
//	cin >> number;
//	
//
//	
//	bool notPrime= false;
//
//	int i{ 2 };
//	
//	while ((i < number) && (notPrime==false))
//	{
//		if (number % i == 0)
//		{
//			notPrime = true;
//			
//		}
//		else
//				i++;
//		
//	}
//	
//	if (notPrime==true)
//
//			cout << number << " is not a prime. " << endl;
//
//	else
//
//			cout <<  number << " is a prime. " << endl;
//
//return 0;
//}

#include <iostream>
#include <cmath>

using namespace std;

int main2()
{
	int number{ 0 };

	do
	{
		cout << "Please enter a positive integer. " << endl;
		cin >> number;
	} while (number <= 0);



	bool notPrime = false;
	int i{ 2 };

	if (number == 1)

		notPrime = true;

	while ((i <= sqrt(number)) && (notPrime == false)) // Don't have to search higher than the square of an integer to find if its a prime.
	{
		if (number % i == 0)
		{
			notPrime = true;
		}
		else
			i++;
	}

	if (notPrime == true)

		cout << number << " is not a prime. " << endl;

	else

		cout << number << " is a prime. " << endl;

	return 0;
}