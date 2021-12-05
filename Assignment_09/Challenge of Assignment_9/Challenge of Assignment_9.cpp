#include <iostream>
#include <algorithm> 
#include <string>
#include <vector>

using namespace std;

int readInt()
{
	bool done = false;
	int result = 0;
	int counter = 0;
	cout << "\nPlease input an integer to add to the list : ";
	while (!done)
	{
		try
		{
			string tempInt = "";
			cin >> tempInt;
			result = stoi(tempInt);
			done = true;
		}
		catch (exception ex)
		{
			counter++;
			cout << "\nYou have been a fool " << counter << " times!\n";
			cout << "\nBad input, please try again." << "\n\n";
		}
	}
	return result;
}

void pOption(vector<int> &x)
{
	if (x.empty() == true)
		cout << "[] - the list is empty";
	else
	{
		cout << "[ ";
		for (auto i : x)
		{
			cout << i << " ";
		}
	}	cout << "]\n\n";
}

void aOption(vector<int> &x)
{
	int tempInt = 0;
	tempInt = readInt();
	x.push_back(tempInt);
	cout << endl << tempInt << " added\n\n";
}

void mOption(vector<int> x)
{
	if (x.empty() == true)
		cout << "\nUnable to calculate the mean - no data\n\n";
	else
	{
		float averageOfAllIntegers = 0;
		for (auto i : x)
		{
			averageOfAllIntegers += i;
		}
		cout << "\nThe mean is : " << averageOfAllIntegers / x.size() << "\n\n";
	}
}

void sOption(vector<int> &x)
{
	if (x.empty() == true)
		cout << "\nUnable to determine the smallest number - list is empty\n\n";
	else
	{
		int smallestNumber = x[0];
		for (auto i : x)
			if (i < smallestNumber)
				smallestNumber = i;
		cout << "\nThe smallest number is : " << smallestNumber << "\n\n";
	}
}

void lOption(vector<int>& x)
{
	if (x.empty() == true)
		cout << "\nUnable to determine the smallest number - list is empty\n\n";
	else
	{
		int largestNumber = x[0];
		for (auto i : x)
			if (i > largestNumber)
				largestNumber = i;
		cout << "\nThe largest number is : " << largestNumber << "\n\n";
	}
}

void fOption(vector<int> &x)
{
	if (x.empty() == true)
		cout << "\nUnable to find number - list is empty\n\n";
	else
	{
		int tempInt = readInt();
		int counter = 0;
		for (auto i : x)
		{
			if (i == tempInt)
				counter++;
		}
		cout << "\n" << tempInt << " is present " << counter << " times in the list\n\n";
	}
}

void rAscendingOption(vector<int>& x)
{
	if (x.empty() == true)
		cout << "\nUnable to find number - list is empty\n\n";
	else
	{
		for (unsigned __int64 i = 0; i < x.size() -1; i++)
		{
			for (unsigned __int64 j = 0; j < x.size() -1; j++)
			{
				int temp = 0;
				if (x.at(j) > x.at(j + 1))
					swap(x.at(j), x.at(j + 1));
			}
		}
	}
	cout << "\nAscending order : Succesful!" << endl << endl;
}
void rDescendingOption(vector<int>& x)
{
	if (x.empty() == true)
		cout << "\nUnable to find number - list is empty\n\n";
	else
	{
		for (unsigned __int64 i = 0; i < x.size() -1; i++)
		{
			for (unsigned __int64 j = 0; j < x.size() -1; j++)
			{
				int temp = 0;
				if (x.at(j) < x.at(j + 1))
					swap(x.at(j), x.at(j + 1));
			}
		}
	}
	cout << "\nDescending order : Succesful!" << endl << endl;
}

void eOption(vector<int> &x)
{
	x.clear();
	cout << "\nThe list has been cleared!\n\n";
}

void qOption()
{
	cout << "\nGoodbye!\n\n";
}

int main()
{
	vector<int> listOfInt;
	char userOptionChoice(' ');
	bool quit = false;

	cout << "Welcome to the list of integer manipulator. \n\nHere is the Menu : \n\n";

	while (!quit)
	{
		cout << "A - Add a number\nR - Reorder ascendingly\nD - Reorder descendingly\nE - Erase the numbers in the current list\nF - Search and display the amount of times a number is present in the list\nL - Display the largest number\nS - Display the smallest number\nM - Display mean of the numbers\nP - Print numbers\nQ - Quit\n\nEnter your choice: ";
		cin >> userOptionChoice;
		switch (userOptionChoice)
		{
			case 'p':
			case 'P':
				pOption(listOfInt);
				break;
			case 'd':
			case 'D':
				rDescendingOption(listOfInt);
				break;
			case 'F':
			case 'f':
				fOption(listOfInt);
				break;
			case 'e':
			case 'E':
				eOption(listOfInt);
				break;
			case 'a':
			case 'A': 
				aOption(listOfInt);
				break;
			case 'm':
			case 'M': 
				mOption(listOfInt);
				break;
			case 's':
			case 'S':
				sOption(listOfInt);
				break;
			case'r':
			case'R':
				rAscendingOption(listOfInt);
				break;
			case'l':
			case'L':
				lOption(listOfInt);
				break;
			case 'q':
			case 'Q':
				qOption();
				quit = true;
				break;
			
			default: cout << "Unknown selection, please try again" << endl << endl;
		}
	}
	return 0;
}