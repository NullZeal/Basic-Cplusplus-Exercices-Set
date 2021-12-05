#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int convertAccountNumberToAccountPosition(int accountNumber)
{
	return accountNumber % 10000;
}

int inputValidMainMenuOption()
{
	int mainMenuInput;
	cout << "\n\n--------------------------------------------------------------------\n\nPlease input a valid main menu option (1-10) : ";
	cout << "\n\nMenu\n\n1 - Create a bank account.\n2 - Close a bank account.\n3 - Display a bank account.\n4 - Deposit\n5 - Withraw\n6 - Sort all accounts and display them by balance, given name or family name.\n7 - Display average of balances\n8 - Display total of balances\n9 - Display median of balances\n10 - Exit\n\n";
	cin >> mainMenuInput;
	while (cin.fail() || cin.peek() != '\n' || mainMenuInput < 1 || mainMenuInput > 10)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nMain menu option input must be in range (1-10), you baboon! " << endl << endl;
		cin >> mainMenuInput;
	}
	return mainMenuInput;
}

int inputValidSubMenuForTypeOption()
{
	int subMenuInput;
	cout << "\n\nPlease input a valid Sub-Menu option (1-3) : ";
	cin >> subMenuInput;
	while (cin.fail() || cin.peek() != '\n' || subMenuInput < 1 || subMenuInput > 3)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nSub-Menu option input must be in range (1-3), you baboon! " << endl << endl;
		cin >> subMenuInput;
	}
	return subMenuInput;
}

int inputValidSubMenuAscendingOrDescendingOption()
{
	int subMenuInput;
	cout << "\n\nPlease input a valid Sub-Menu option. Input 1 for Ascending or 2 for Descending.\n\n";
	cin >> subMenuInput;
	while (cin.fail() || cin.peek() != '\n' || subMenuInput < 1 || subMenuInput > 3)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nSub-Menu option for ascending or descending sorting type must be in range (1-2), you donkey! " << endl << endl;
		cin >> subMenuInput;
	}
	return subMenuInput;
}

double inputValidCashAmount()
{
	double finalMoneyAmount;
	double moneyAmount = 0.0;

	cout << "\nPlease input a $ amount : \n";
	cin >> moneyAmount;
	while (cin.fail() || cin.peek() != '\n' || moneyAmount > 9999999)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nInput a numerical $ amount under 9999999, you weasel!" << endl << endl;
		cin >> moneyAmount;
	}
	finalMoneyAmount = floor(moneyAmount * 100) / 100;
	return finalMoneyAmount;
}

string inputValidString()
{
	bool incorrectCharFound = false;
	string tempGivenName;
	bool stopLoop = false;
	while (!stopLoop)
	{
		incorrectCharFound = false;
		cin >> tempGivenName;

		for (const char c : tempGivenName)
		{
			if (!isalpha(c) && !isspace(c))
			{
				incorrectCharFound = true;
				cout << "\nFound an invalid character. Input only letters and spaces, you baboon!\n";
				break;
			}
		}
		if (!incorrectCharFound)
			stopLoop = true;
	}
	return tempGivenName;
}

int inputValidAccountNumber()
{
	int accountNumber;
	cout << "\nPlease input a valid account number (10000-10099) : \n\n";
	cin >> accountNumber;
	while (cin.fail() || cin.peek() != '\n' || accountNumber < 10000 || accountNumber > 10099)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nAccount number must be in range (10000-10099), you baboon! " << endl << endl;
		cin >> accountNumber;
	}
	return accountNumber;
}

void exitApplication()
{
	cout << "\nThank you for using the ShinyBridge Banking System.\n\n                   Bye bye Dara.";
	cout << R"(
         _._._                       _._._
        _|   |_                     _|   |_
        | ... |_._._._._._._._._._._| ... |
        | ||| | o SHINYBRIDGE BANK o  | ||| |
        | """ |  """    """    """  | """ |
   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())
  (())) |     |---------------------|     | (()))
 (())())| """ |  """    """    """  | """ |(())())
 (()))()|[-|-]|  :::   .-"-.   :::  |[-|-]|(()))()
 ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()
    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||
 ~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@ ^^~ ~
      ^~^~                                ~^~^
)" << '\n';
}

struct bankAccount
{
	int accountNumber = 0;
	string givenName = "";
	string familyName = "";
	double currentBalance = 0;

	void deposit()
	{
		double depositAmount = inputValidCashAmount();
		currentBalance += depositAmount;
		cout << "\nDeposit successful!\nNew balance is : " << currentBalance << " $.";
	}

	void withdraw()
	{
		double withdrawAmount = inputValidCashAmount();
		if (currentBalance >= withdrawAmount)
		{
			currentBalance -= withdrawAmount;
			cout << "\nWithdraw successful!\nNew balance is : " << currentBalance << " $.";
		}
		else
		{
			cout << "\nYou cannot withdraw more than you have, you donkey!";
		}
	}
};

struct bankSystem
{
	vector<bankAccount> shinyVector;

	int findAccountPosition(int accountNumber)
	{
		int accountPosition = -1;
		for (int i = 0; i < shinyVector.size(); i++)
		{
			if (shinyVector.at(i).accountNumber == accountNumber)
			{
				accountPosition = i;
			}
		}
		return accountPosition;
	}

	bool isAccountPresent(int accountNumber)
	{
		if (findAccountPosition(accountNumber) == -1)
			return false;
		else
			return true;
	}

	void addUserBankAccount()
	{
		bankAccount tempBankAccount;

		if (shinyVector.size() == 100)
		{
			cout << "\nCannot add another account. ShinyBridge banking system reached maximum active account capacity. Returning to main menu\n";
		}
		else
		{
			tempBankAccount.givenName = inputValidGivenName();
			tempBankAccount.familyName = inputValidFamilyName();
			tempBankAccount.currentBalance = inputValidCashAmount();
			
			if (shinyVector.empty())
			{
				tempBankAccount.accountNumber = 10000;
			}
			else
			{
				bool foundFreeSpot = false;
				int smallestAccountFreeNumber = 0;
				int i = 0;
				while (!foundFreeSpot && i < 100)
				{
					if (!isAccountPresent(10000 + i))
					{
						smallestAccountFreeNumber = 10000 + i;
						foundFreeSpot = true;
					}
					i++;
				}
				tempBankAccount.accountNumber = smallestAccountFreeNumber;
			}
			shinyVector.push_back(tempBankAccount);
			cout << "\nBank account created successfully. Returning to main menu.";
		}
	}

	void removeAccount()
	{
		int accountNumber = inputValidAccountNumber();
		int accountPosition = findAccountPosition(accountNumber);
		if (accountPosition != -1)
		{
			shinyVector.erase(shinyVector.begin() + findAccountPosition(accountNumber));
			cout << "\nAccount # " << accountNumber << " has been closed.";
		}
		else
		{
			cout << "\nBank system is empty or account is not active. Returning to main menu.\n";
		}
	}

	string inputValidGivenName() // inputs a validated Given name
	{
		string tempGivenNameAfterLoop;
		bool duplicateFound = false;
		bool stopLoop = false;
		while (!stopLoop)
		{
			duplicateFound = false;
			cout << "\nPlease input the GIVEN NAME of the account holder: \n";
			string tempGivenName = inputValidString();
			if (tempGivenName.size() > 30)
			{
				cout << "\nSize of GIVEN NAME too long. Maximum GIVEN NAME size is 30.\n\n";
				continue;
			}
			for (int i = 0; i < shinyVector.size(); i++)
			{
				if (shinyVector.at(i).givenName == tempGivenName)
				{
					duplicateFound = true;
					cout << "\nDuplicate of GIVEN NAME found in the bank system. Please input a unique GIVEN NAME.\n";
					break;
				}
			}
			if (!duplicateFound)
			{
				stopLoop = true;
				tempGivenNameAfterLoop = tempGivenName;
			}
		}
		return tempGivenNameAfterLoop;
	}

	string inputValidFamilyName() // inputs a validated Given name
	{
		string tempFamilyNameAfterLoop;
		bool duplicateFound = false;
		bool stopLoop = false;
		while (!stopLoop)
		{
			duplicateFound = false;
			cout << "\nPlease input the FAMILY NAME of the account holder: \n";
			string tempFamilyName = inputValidString();
			if (tempFamilyName.size() > 30)
			{
				cout << "\nSize of FAMILY NAME too long. Maximum FAMILY NAME size is 30.\n\n";
				continue;
			}
			for (int i = 0; i < shinyVector.size(); i++)
			{
				if (shinyVector.at(i).familyName == tempFamilyName)
				{
					duplicateFound = true;
					cout << "\nDuplicate of FAMILY NAME found in the bank system. Please input a UNIQUE FAMILY NAME.\n";
					break;
				}
			}
			if (!duplicateFound)
			{
				stopLoop = true;
				tempFamilyNameAfterLoop = tempFamilyName;
			}
		}
		return tempFamilyNameAfterLoop;
	}

	void displaySpecificAccount()
	{
		int requestedAccountNumber = inputValidAccountNumber();
		if (isAccountPresent(requestedAccountNumber))
		{
			int accountPosition = findAccountPosition(requestedAccountNumber);
			cout << "\n\n---------------------\n\nAccount number : " << shinyVector.at(accountPosition).accountNumber << "\nGiven name : " << shinyVector.at(accountPosition).givenName << "\nFamily name : " << shinyVector.at(accountPosition).familyName << "\nCurrent balance : " << shinyVector.at(accountPosition).currentBalance << "$\n\nReturning to main menu.";
		}
		else
		{
			cout << "\nThe account # you entered is not active. Returning to main menu.";
		}
	}

	void displayAllAccounts()
	{
		for (int i{ 0 }; i < shinyVector.size(); i++)
		{
			cout << "\n---------------------\n\nAccount number : " << shinyVector.at(i).accountNumber << "\nGiven name : " << shinyVector.at(i).givenName << "\nFamily name : " << shinyVector.at(i).familyName << "\nCurrent balance : " << shinyVector.at(i).currentBalance << endl;
		}
	}

	void displayAccountsByCurrentBalanceAscending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else 
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.currentBalance < b.currentBalance;
				});

			displayAllAccounts();
		}
	}

	void displayAccountsByCurrentBalanceDescending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.currentBalance > b.currentBalance;
				}
			);
			displayAllAccounts();
		}
	}

	void displayAccountsByGivenNameAscending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.givenName < b.givenName;
				}
			);
			displayAllAccounts();
		}
	}

	void displayAccountsByGivenNameDescending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.givenName > b.givenName;
				}
			);
		}
		displayAllAccounts();
	}

	void displayAccountsByFamilyNameAscending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.familyName < b.familyName;
				}
			);
			displayAllAccounts();
		}
	}

	void displayAccountsByFamilyNameDescending()
	{
		if (shinyVector.empty())
			cout << "\nNo active account to reorder.";
		else
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.familyName > b.familyName;
				}
			);
			displayAllAccounts();
		}
	}

	void displayAverageBalanceForAllAccounts()
	{
		if (!shinyVector.empty())
		{
			double sumOfBalanceforAllAccounts{ 0 };
			for (int i{ 0 }; i < shinyVector.size(); i++)
			{
				sumOfBalanceforAllAccounts += shinyVector.at(i).currentBalance;
			}
			double averageBalanceForAllAccounts = sumOfBalanceforAllAccounts / shinyVector.size();
			cout << "\nThe average account balance is : " << (round((100 * averageBalanceForAllAccounts)) / 100) << " $.\n";
		}
		else
			cout << "\nNo active account to diplay the average for. Returning to main menu.";
	}

	void displayTotalBalanceForAllAccounts()
	{
		if ((!shinyVector.empty()))
		{
			double sumOfBalanceforAllAccounts{ 0 };
			for (int i{ 0 }; i < shinyVector.size(); i++)
				sumOfBalanceforAllAccounts += shinyVector.at(i).currentBalance;
			cout << "\n The sum of the balance of all accounts is : " << sumOfBalanceforAllAccounts << " $.\n";
		}
		else 
			cout << "\nNo active account to diplay the total balance for. Returning to main menu.";
	}

	void displayMedianBalanceForAllAccounts()
	{
		if ((!shinyVector.empty()))
		{
			sort(shinyVector.begin(), shinyVector.end(), [](bankAccount a, bankAccount b)
				{
					return a.currentBalance < b.currentBalance;
				}
			);
			if (shinyVector.size() == 1)
				cout << "\n The median balance for all accounts is : " << shinyVector.at(0).currentBalance;
			else if (shinyVector.size() % 2 != 0)
				cout << "\n The median balance for all accounts is : " << shinyVector.at(((shinyVector.size() - 1) / 2)).currentBalance << " $.\n";
			else
			{
				double preMedian = ((shinyVector.at((shinyVector.size() / 2) - 1).currentBalance + shinyVector.at((shinyVector.size() / 2)).currentBalance) / 2);
				double median = floor(preMedian * 100) / 100;
				cout << "\n The median balance for all accounts is : " << median << " $.\n";
			}
		}
		else 
			cout << "\nNo active account to diplay the median balance for. Returning to main menu.";
	}
};

int main()
{
	bankSystem superShinyBridgeSystem;

	cout << "\n\n      *** WELCOME TO THE SUPER SHINYBRIDGE BANKING SYSTEM ***\n\n";
	
	bool mustStop = false;
	while (!mustStop)
	{
		switch (inputValidMainMenuOption())
		{
		case 1:
			superShinyBridgeSystem.addUserBankAccount();
			break;

		case 2:
			superShinyBridgeSystem.removeAccount();
			break;
		case 3:
			superShinyBridgeSystem.displaySpecificAccount();
			break;
		case 4:
		{
			int x = inputValidAccountNumber();
			if (superShinyBridgeSystem.isAccountPresent((x)))
			{
				superShinyBridgeSystem.shinyVector.at(convertAccountNumberToAccountPosition(x)).deposit();
			}
			else
			{
				cout << "\nRequested deposit account is inactive. Returning to main menu.";
			}
		}
			break;
		case 5:
		{
			int accountNumber = inputValidAccountNumber();
			if (superShinyBridgeSystem.isAccountPresent((accountNumber)))
			{
				superShinyBridgeSystem.shinyVector.at(convertAccountNumberToAccountPosition(accountNumber)).withdraw();
			}
			else
			{
				cout << "\nRequested withdrawal account is inactive. Returning to main menu.";
			}
		}
			break;
		case 6:		//Display lists of accounts // int inputValidMainMenuOption()
			cout << "\nSelect how you wish the accounts to be sorted and displayed\n\n1 - Display by balances.\n2 - Display by family name.\n3 - Display by given name.";

			switch (inputValidSubMenuForTypeOption())
			{
			case 1:	//Display by Balance
				cout << "\nSelect an option.\n\n1 - Display in ascending order.\n2 - Display in descending order.";
				switch (inputValidSubMenuAscendingOrDescendingOption())
				{
				case 1:
					superShinyBridgeSystem.displayAccountsByCurrentBalanceAscending();	//Ascending
					break;
				case 2:
					superShinyBridgeSystem.displayAccountsByCurrentBalanceDescending();	//Descending
					break;
				}
				break;
			case 2: //Display by Family Name
				cout << "\nSelect an option.\n\n1 - Display in ascending order.\n2 - Display in descending order.";
				switch (inputValidSubMenuAscendingOrDescendingOption())
				{
				case 1:
					superShinyBridgeSystem.displayAccountsByFamilyNameAscending();   //Ascending
					break;
				case 2:
					superShinyBridgeSystem.displayAccountsByFamilyNameDescending();   //Descending
					break;
				}
				break;
			case 3:	//Display by given name;
				cout << "Select an option.\n\n1-Display in ascending order.\n2-Display in descending order.";
				switch (inputValidSubMenuAscendingOrDescendingOption())
				{
				case 1:
					superShinyBridgeSystem.displayAccountsByGivenNameAscending();   //Ascending
					break;
				case 2:
					superShinyBridgeSystem.displayAccountsByGivenNameDescending();   //Descending
					break;
				}
				break;
			};
			break;
		case 7:
			superShinyBridgeSystem.displayAverageBalanceForAllAccounts();	// Average
			break;
		case 8:
			superShinyBridgeSystem.displayTotalBalanceForAllAccounts();	//Total Balance
			break;
		case 9:
			superShinyBridgeSystem.displayMedianBalanceForAllAccounts();
			break;
		case 10:
			exitApplication();
			mustStop = true;
			break;

		default:
			cout << "Invalid choice.\n";
			break;
		}
	}
	return 0;
}