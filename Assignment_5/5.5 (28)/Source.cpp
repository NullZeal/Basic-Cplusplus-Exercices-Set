/*
28 –	In a competition where scores are given by 
6 judges,
a competitor’s final score is calculated as follows: 

first the highest and the lowest of the initial scores are eliminated, 
and then one takes the average of the other 4 scores. 

You are asked to create a program that 
reads 6 scores and determines the final score according to this method.
*/

#include <iostream>
using namespace std;

int main()
{
	float judgeScores[6] = { 0 };
	cout << "Please enter the scores of the 6 judges, separated by spaces or enters.\n\n";
	cin >> judgeScores[0] >> judgeScores[1] >> judgeScores[2] >> judgeScores[3] >> judgeScores[4] >> judgeScores[5];
		
	for (int i = 0; i < 5; i++);
	{
		for (int j = 0; j < 5; j++)
		{
			if (judgeScores[j] > judgeScores[j + 1])
			{
				float temp = 0;
				temp = judgeScores[j + 1];
				judgeScores[j + 1] = judgeScores[j];
				judgeScores[j] = temp;
			}
		}
	}	
	float finalScore = (judgeScores[1] + judgeScores[2] + judgeScores[3] + judgeScores[4]) / (4);
	cout << "\nThe final Score is : " << finalScore << " points. Not bad!\n\n";

	return 0;
}