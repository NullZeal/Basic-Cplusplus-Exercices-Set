//#include <cmath>
//#include <vector>
//#include <string>
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//struct bankSystem
//{
//	struct bankAccount
//	{
//		int accountNumber = 0;
//		string givenName = "";
//		string familyName = "";
//		double currentBalance = 0;
//		bool isActivated = false;
//	};
//
//	vector<bankAccount> shinyVector;
//
//	void fillVectorWithEmptyAccounts()
//	{
//		bankAccount defaultAccount;
//		for (int i = 0; i < 100; i++)
//		{
//			shinyVector.push_back(defaultAccount);
//		}
//	}
//
//	void addUserBankAccount()
//	{
//		bankAccount tempBankAccount;
//		bool maximumBankAccountcapacityReached = false;
//		bool mustStop = false;
//		while (!mustStop)
//		{
//			for (unsigned int i = 0; i <= shinyVector.size() && i < 100; i++)
//			{
//				if (shinyVector.empty())
//				{
//					tempBankAccount.accountNumber = i;
//					mustStop = true;
//					break;
//				}
//				else if (!shinyVector.at(i).isActivated)
//				{
//					tempBankAccount.accountNumber = i;
//					mustStop = true;
//					break;
//				}
//			}
//			if (!mustStop)
//			{
//				cout << "\nCannot add another account. ShinyBridge banking system reached maximum active account capacity.\n";
//				maximumBankAccountcapacityReached = true;
//				break;
//			}
//		}
//		if (!maximumBankAccountcapacityReached)
//		{
//			tempBankAccount.givenName = inputValidGivenName();
//			tempBankAccount.familyName = inputValidFamilyName();
//			tempBankAccount.currentBalance = inputValidCashAmount();
//			tempBankAccount.isActivated = true;
//			shinyVector[tempBankAccount.accountNumber].accountNumber = tempBankAccount.accountNumber + 10000;
//			shinyVector[tempBankAccount.accountNumber].currentBalance = tempBankAccount.currentBalance;
//			shinyVector[tempBankAccount.accountNumber].givenName = tempBankAccount.givenName;
//			shinyVector[tempBankAccount.accountNumber].familyName = tempBankAccount.familyName;
//			shinyVector[tempBankAccount.accountNumber].currentBalance = tempBankAccount.currentBalance;
//			shinyVector[tempBankAccount.accountNumber].isActivated = tempBankAccount.isActivated;
//			cout << "\nBank account created successfully. Returning to main menu.";
//		}
//	}
//
//	void removeAccount()
//	{
//		int tempAccountNumber = 0;
//		int tempAccountPosition = 0;
//		bool done = false;
//		cout << "\nFollow the instructions below to close an account :\n";
//		tempAccountNumber = inputValidAccountNumber();
//		tempAccountPosition = tempAccountNumber % 10000;
//
//		while (!done)
//		{
//			if (tempAccountNumber == shinyVector.at(tempAccountPosition).accountNumber && shinyVector.at(tempAccountPosition).isActivated)
//			{
//				shinyVector.at(tempAccountPosition).givenName = " ";
//				shinyVector.at(tempAccountPosition).familyName = " ";
//				shinyVector.at(tempAccountPosition).currentBalance = 0;
//				shinyVector.at(tempAccountPosition).isActivated = false;
//				done = true;
//				cout << "\nAccount # " << shinyVector.at(tempAccountPosition).accountNumber << " has been closed.";
//			}
//			else
//			{
//				cout << "\nChosen account number is already inactive.\n";
//				done = true;
//			}
//		}
//	}
//
//	void deposit()
//	{
//		int accountNumber = inputValidAccountNumber();
//		if (shinyVector.at(accountNumber % 10000).isActivated)
//		{
//			double depositAmount = inputValidCashAmount();
//			shinyVector.at(accountNumber % 10000).currentBalance += depositAmount;
//			cout << "\n\nDeposit successful!\nNew balance is : " << shinyVector.at(accountNumber % 10000).currentBalance << " $.\n\n";
//		}
//		else
//			cout << "\nBank account for the requested deposit is inactive. Returning to main menu.";
//	}
//
//	void withdraw()
//	{
//		int accountNumber = inputValidAccountNumber();
//		if (shinyVector.at(accountNumber % 10000).isActivated)
//		{
//			double withdrawAmount = inputValidCashAmount();
//			shinyVector.at(accountNumber % 10000).currentBalance -= withdrawAmount;
//			cout << "\n\nWithdraw successful!\nNew balance is : " << shinyVector.at(accountNumber % 10000).currentBalance << " $.\n\n";
//		}
//		else 
//			cout << "\nBank account for the requested withdrawal is inactive. Returning to main menu.";
//	}
//
//	string inputValidString()
//	{
//		bool incorrectCharFound = false;
//		string tempGivenName;
//		bool stopLoop = false;
//		while (!stopLoop)
//		{
//			incorrectCharFound = false;
//			cin >> tempGivenName;
//
//			for (const char c : tempGivenName)
//			{
//				if (!isalpha(c) && !isspace(c))
//				{
//					incorrectCharFound = true;
//					cout << "\nFound an invalid character. Input only letters and spaces, you baboon!\n";
//					break;
//				}
//			}
//			if (!incorrectCharFound)
//				stopLoop = true;
//		}
//		return tempGivenName;
//	}
//
//	string inputValidGivenName() // inputs a validated Given name
//	{
//		string tempGivenNameAfterLoop;
//		bool duplicateFound = false;
//		bool stopLoop = false;
//		while (!stopLoop)
//		{
//			duplicateFound = false;
//			cout << "\nPlease input the GIVEN NAME of the account holder: \n";
//			string tempGivenName = inputValidString();
//			if (tempGivenName.size() > 30)
//			{
//				cout << "\nSize of GIVEN NAME too long. Maximum given name size is 30.\n\n";
//				continue;
//			}
//			vector<bankAccount> tempVector = activeAccountsVectorCreator();
//			for (int i = 0; i < tempVector.size(); i++)
//			{
//				if (tempVector.at(i).givenName == tempGivenName)
//				{
//					duplicateFound = true;
//					cout << "\nDuplicate of GIVEN NAME found in the bank system. Please input a unique GIVEN NAME.\n";
//					break;
//				}
//			}
//			if (!duplicateFound)
//			{
//				stopLoop = true;
//				tempGivenNameAfterLoop = tempGivenName;
//			}
//		}
//		return tempGivenNameAfterLoop;
//	}
//
//	string inputValidFamilyName() // inputs a validated Given name
//	{
//		string tempFamilyNameAfterLoop;
//		bool duplicateFound = false;
//		bool stopLoop = false;
//		while (!stopLoop)
//		{
//			duplicateFound = false;
//			cout << "\nPlease input the FAMILY NAME of the account holder: \n";
//			string tempFamilyName = inputValidString();
//			if (tempFamilyName.size() > 30)
//			{
//				cout << "\nSize of FAMILY NAME too long. Maximum given name size is 30.\n\n";
//				continue;
//			}
//			vector<bankAccount> tempVector = activeAccountsVectorCreator();
//			for (int i = 0; i < tempVector.size(); i++)
//			{
//				if (tempVector.at(i).familyName == tempFamilyName)
//				{
//					duplicateFound = true;
//					cout << "\nDuplicate of FAMILY NAME found in the bank system. Please input a unique given name.\n";
//					break;
//				}
//			}
//			if (!duplicateFound)
//			{
//				stopLoop = true;
//				tempFamilyNameAfterLoop = tempFamilyName;
//			}
//		}
//		return tempFamilyNameAfterLoop;
//	}
//
//	double inputValidCashAmount()
//	{
//		double finalMoneyAmount;
//		double moneyAmount = 0.0;
//
//		cout << "\nPlease input a $ amount : \n";
//		cin >> moneyAmount;
//		while (cin.fail() || cin.peek() != '\n'  || moneyAmount > 9999999)
//		{
//			cin.clear();
//			cin.ignore(512, '\n');
//			cout << "\nInput a numerical $ amount (maximum 2 digits), you baboon! " << endl << endl;
//			cin >> moneyAmount;
//		}
//		finalMoneyAmount = floor(moneyAmount * 100) / 100;
//		return finalMoneyAmount;
//	}
//
//	int inputValidAccountNumber()
//	{
//		int accountNumber;
//		cout << "\nPlease input a valid account number (10000-10099) : \n\n";
//		cin >> accountNumber;
//		while (cin.fail() || cin.peek() != '\n' || accountNumber < 10000 || accountNumber > 10099)
//		{
//			cin.clear();
//			cin.ignore(512, '\n');
//			cout << "\nAccount number must be in range (10000-10099), you baboon! " << endl << endl;
//			cin >> accountNumber;
//		}
//		return accountNumber;
//	}
//
//	int inputValidMainMenuOption()
//	{
//		int mainMenuInput;
//		cout << "\n\n--------------------------------------------------------------------\n\nPlease input a valid main menu option (1-10) : ";
//		cout << "\n\nMenu\n\n1 - Create a bank account.\n2 - Close a bank account.\n3 - Display a bank account.\n4 - Deposit\n5 - Withraw\n6 - Sort all accounts and display them by balance, given name or family name.\n7 - Display average of balances\n8 - Display total of balances\n9 - Display median of balances\n10 - Exit\n\n";
//		cin >> mainMenuInput;
//		while (cin.fail() || cin.peek() != '\n' || mainMenuInput < 1 || mainMenuInput > 10)
//		{
//			cin.clear();
//			cin.ignore(512, '\n');
//			cout << "\nMain menu option input must be in range (1-10), you baboon! " << endl << endl;
//			cin >> mainMenuInput;
//		}
//		return mainMenuInput;
//	}
//
//	int inputValidSubMenuForTypeOption()
//	{
//		int subMenuInput;
//		cout << "\n\nPlease input a valid Sub-Menu option (1-3) : ";
//		cin >> subMenuInput;
//		while (cin.fail() || cin.peek() != '\n' || subMenuInput < 1 || subMenuInput > 3)
//		{
//			cin.clear();
//			cin.ignore(512, '\n');
//			cout << "\nSub-Menu option input must be in range (1-3), you baboon! " << endl << endl;
//			cin >> subMenuInput;
//		}
//		return subMenuInput;
//	}
//
//	int inputValidSubMenuAscendingOrDescendingOption()
//	{
//		int subMenuInput;
//		cout << "\n\nPlease input a valid Sub-Menu option. Input 1 for Ascending or 2 for Descending.\n\n";
//		cin >> subMenuInput;
//		while (cin.fail() || cin.peek() != '\n' || subMenuInput < 1 || subMenuInput > 3)
//		{
//			cin.clear();
//			cin.ignore(512, '\n');
//			cout << "\nSub-Menu option for ascending or descending sorting type must be in range (1-2), you baboon! " << endl << endl;
//			cin >> subMenuInput;
//		}
//		return subMenuInput;
//	}
//
//	void displaySpecificAccount()
//	{
//		int requestedAccountNumber = inputValidAccountNumber();
//		requestedAccountNumber = requestedAccountNumber % 10000;
//		bool mustStop = false;
//		while (!mustStop)
//		{
//			mustStop = false;
//			if (shinyVector.at(requestedAccountNumber).isActivated)
//			{
//				cout << "\n\n---------------------\n\nAccount number : " << shinyVector.at(requestedAccountNumber).accountNumber << "\nGiven name : " << shinyVector.at(requestedAccountNumber).givenName << "\nFamily name : " << shinyVector.at(requestedAccountNumber).familyName << "\nCurrent balance : " << shinyVector.at(requestedAccountNumber).currentBalance << "$\n\nReturning to main menu.";
//				mustStop = true;
//			}
//			else
//			{
//				cout << "\nThe account # you entered is not active. Returning to main menu.";
//				mustStop = true;
//			}
//		}
//	}
//
//	vector<bankAccount> activeAccountsVectorCreator()
//	{
//		vector<bankAccount> tempActiveAccountsVector;
//		for (int i = 0; i < shinyVector.size(); i++)
//		{
//			if (shinyVector.at(i).isActivated)
//				tempActiveAccountsVector.push_back(shinyVector.at(i));
//		}
//		return tempActiveAccountsVector;
//	}
//
//	void displayAccountsByCurrentBalanceAscending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.currentBalance < b.currentBalance;
//			}
//		);
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAccountsByCurrentBalanceDescending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.currentBalance > b.currentBalance;
//			}
//		);
//
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAccountsByGivenNameAscending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.givenName < b.givenName;
//			}
//		);
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAccountsByGivenNameDescending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.givenName > b.givenName;
//			}
//		);
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAccountsByFamilyNameAscending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.familyName < b.familyName;
//			}
//		);
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAccountsByFamilyNameDescending()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//			{
//				return a.familyName > b.familyName;
//			}
//		);
//		if (tempActiveAccountsVector.empty())
//			cout << "\nNo active account to reorder.\n\n";
//		else
//		{
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				cout << "\n---------------------\n\nAccount number : " << tempActiveAccountsVector.at(i).accountNumber << "\nGiven name : " << tempActiveAccountsVector.at(i).givenName << "\nFamily name : " << tempActiveAccountsVector.at(i).familyName << "\nCurrent balance : " << tempActiveAccountsVector.at(i).currentBalance << endl;
//			}
//		}
//	}
//
//	void displayAverageBalanceForAllAccounts()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		if (!tempActiveAccountsVector.empty())
//		{
//			double sumOfBalanceforAllAccounts{ 0 };
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//			{
//				sumOfBalanceforAllAccounts += tempActiveAccountsVector.at(i).currentBalance;
//			}
//			double averageBalanceForAllAccounts = sumOfBalanceforAllAccounts / tempActiveAccountsVector.size();
//			cout << "\nThe average account balance is : " << (round((100 * averageBalanceForAllAccounts)) / 100) << " $.\n";
//		}
//		else
//			cout << "\nNo active account to diplay the average for. Returning to main menu.";
//	}
//
//	void displayTotalBalanceForAllAccounts()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		if ((!tempActiveAccountsVector.empty()))
//		{
//			double sumOfBalanceforAllAccounts{ 0 };
//			for (int i{ 0 }; i < tempActiveAccountsVector.size(); i++)
//				sumOfBalanceforAllAccounts += tempActiveAccountsVector.at(i).currentBalance;
//			cout << "\n The sum of the balance of all accounts is : " << sumOfBalanceforAllAccounts << " $.\n";
//		}
//		else 
//			cout << "\nNo active account to diplay the total balance for. Returning to main menu.";
//	}
//
//	void displayMedianBalanceForAllAccounts()
//	{
//		vector<bankAccount> tempActiveAccountsVector = activeAccountsVectorCreator();
//		if ((!tempActiveAccountsVector.empty()))
//		{
//			sort(tempActiveAccountsVector.begin(), tempActiveAccountsVector.end(), [](bankAccount a, bankAccount b)
//				{
//					return a.currentBalance < b.currentBalance;
//				}
//			);
//			if (tempActiveAccountsVector.size() == 1)
//				cout << "\n The median balance for all accounts is : " << tempActiveAccountsVector.at(0).currentBalance;
//			else if (tempActiveAccountsVector.size() % 2 != 0)
//				cout << "\n The median balance for all accounts is : " << tempActiveAccountsVector.at(((tempActiveAccountsVector.size() - 1) / 2)).currentBalance << " $.\n";
//			else
//			{
//				double preMedian = ((tempActiveAccountsVector.at((tempActiveAccountsVector.size() / 2) - 1).currentBalance + tempActiveAccountsVector.at((tempActiveAccountsVector.size() / 2)).currentBalance) / 2);
//				double median = floor(preMedian * 100) / 100;
//				cout << "\n The median balance for all accounts is : " << median << " $.\n";
//			}
//		}
//		else 
//			cout << "\nNo active account to diplay the median balance for. Returning to main menu.";
//	}
//	void exitApplication()
//	{
//		cout << "\nThank you for using the ShinyBridge Banking System.\n\n                   Bye bye Dara.";
//		cout << R"(
//         _._._                       _._._
//        _|   |_                     _|   |_
//        | ... |_._._._._._._._._._._| ... |
//        | ||| | o SHINYBRIDGE BANK o  | ||| |
//        | """ |  """    """    """  | """ |
//   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())
//  (())) |     |---------------------|     | (()))
// (())())| """ |  """    """    """  | """ |(())())
// (()))()|[-|-]|  :::   .-"-.   :::  |[-|-]|(()))()
// ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()
//    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||
// ~ ~^^ @@@@@@@@@@@@@@/=======\@@@@@@@@@@@@@@ ^^~ ~
//      ^~^~                                ~^~^
//)" << '\n';
//	}
//};
//
//int main()
//{
//	bankSystem superShinyBridgeSystem;
//	superShinyBridgeSystem.fillVectorWithEmptyAccounts();
//
//	cout << "\n\n      *** WELCOME TO THE SUPER SHINYBRIDGE BANKING SYSTEM ***\n\n";
//	
//	bool mustStop = false;
//	while (!mustStop)
//	{
//		switch (superShinyBridgeSystem.inputValidMainMenuOption())
//		{
//		case 1:
//			superShinyBridgeSystem.addUserBankAccount();
//			break;
//
//		case 2:
//			superShinyBridgeSystem.removeAccount();
//			break;
//		case 3:
//			superShinyBridgeSystem.displaySpecificAccount();
//			break;
//		case 4:
//			superShinyBridgeSystem.deposit();
//			break;
//		case 5:
//			superShinyBridgeSystem.withdraw();
//			break;
//		case 6:		//Display lists of accounts // int inputValidMainMenuOption()
//			cout << "\nSelect how you wish the accounts to be sorted and displayed\n\n1 - Display by balances.\n2 - Display by family name.\n3 - Display by given name.";
//
//			switch (superShinyBridgeSystem.inputValidSubMenuForTypeOption())
//			{
//			case 1:	//Display by Balance
//				cout << "\nSelect an option.\n\n1 - Display in ascending order.\n2 - Display in descending order.";
//				switch (superShinyBridgeSystem.inputValidSubMenuAscendingOrDescendingOption())
//				{
//				case 1:
//					superShinyBridgeSystem.displayAccountsByCurrentBalanceAscending();	//Ascending
//					break;
//				case 2:
//					superShinyBridgeSystem.displayAccountsByCurrentBalanceDescending();	//Descending
//					break;
//				}
//				break;
//			case 2: //Display by Family Name
//				cout << "\nSelect an option.\n\n1 - Display in ascending order.\n2 - Display in descending order.";
//				switch (superShinyBridgeSystem.inputValidSubMenuAscendingOrDescendingOption())
//				{
//				case 1:
//					superShinyBridgeSystem.displayAccountsByFamilyNameAscending();   //Ascending
//					break;
//				case 2:
//					superShinyBridgeSystem.displayAccountsByFamilyNameDescending();   //Descending
//					break;
//				}
//				break;
//			case 3:	//Display by given name;
//				cout << "Select an option.\n\n1-Display in ascending order.\n2-Display in descending order.";
//				switch (superShinyBridgeSystem.inputValidSubMenuAscendingOrDescendingOption())
//				{
//				case 1:
//					superShinyBridgeSystem.displayAccountsByGivenNameAscending();   //Ascending
//					break;
//				case 2:
//					superShinyBridgeSystem.displayAccountsByGivenNameDescending();   //Descending
//					break;
//				}
//				break;
//			};
//			break;
//		case 7:
//			superShinyBridgeSystem.displayAverageBalanceForAllAccounts();	// Average
//			break;
//		case 8:
//			superShinyBridgeSystem.displayTotalBalanceForAllAccounts();	//Total Balance
//			break;
//		case 9:
//			superShinyBridgeSystem.displayMedianBalanceForAllAccounts();
//			break;
//		case 10:
//			superShinyBridgeSystem.exitApplication();
//			mustStop = true;
//			break;
//
//		default:
//			cout << "Invalid choice.\n";
//			break;
//		}
//	}
//	return 0;
//}