/*24 –	In a game, the player tosses two coins. 
Let’s suppose that, if the first and second coin land on heads, the player wins $10; 
if the first lands on heads and the second on tails,the player wins $5; 
otherwise, the player loses. 

We want a program that reads the value of the two coins (heads or tails) 
and determines whether the player has won. 

If yes, it should display the amount won.*/

#include <iostream>

using namespace std;

int main()
{
	bool firstThrow = true;
	bool secondThrow = true;
	
	int amountWon = 0;

	cout << "Please let us know the results of the 2 throws by entering 2 values separated by a space or enter.\n\nThese values must be either '1' for a heads or '0' for a tails.\n\n";
	cin >> firstThrow >> secondThrow;
	
	//true == heads and false == tails

	
	if (firstThrow == false)
		cout << "\nYou lost the game. No monies for you!\n\n";

	else if (firstThrow && secondThrow == true)
		cout << "\nDING DING DING! You won the game with 10 CA$! Well played! \n\n";

	else 
		cout << "\nYou won the game with 5 CA$! Better than nothing!\n\n";

	return 0;
}