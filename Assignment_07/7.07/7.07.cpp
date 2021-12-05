/*
A large chemical products company compensates its commercial representatives by commission. 
The representatives receive $200 per week plus 9% of their gross sales per week. 

For example, a representative who sells $5000 of chemical products in one week receives a salary of $200 plus 9% of $5000,
for a total of $650.

Develop a program that asks for the gross weekly sales of each representative and that calculates 
and displays their salary. 

Process the information of one representative at a time.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct commercialRepresentative {

	vector<float> grossSalaryWeek;
	int totalWeeksWorked = 0;
	int baseSalary = 0;
	float totalRepresentativeCommission = 0;
	float totalCompensation = 0;
	
	void addGrossSalaries()
	{
		bool mustStop = false;
		int i = 0;
		while (mustStop == false)
		{
			float tempGrossSalaryWeek = 0;
			cout << "Input the salary in CA$ for a representative for week #" << i + 1 << " :\n";
			cin >> tempGrossSalaryWeek;
			grossSalaryWeek.push_back(tempGrossSalaryWeek);

			string addOneWeek = "";
			while (addOneWeek != "S" && addOneWeek != "C")
			{
				cout << "\nTo CONTINUE adding new work weeks for this representative, input 'C'. Else, input 'S'.\n";
				cin >> addOneWeek;
			}
			if (addOneWeek == "S")
				mustStop = true;
			i += 1;
		}
	}
	void totalCommission()
	{
		float totalCommission = 0;
		for (int i = 0; i < grossSalaryWeek.size(); i++)
		{
			totalCommission += grossSalaryWeek[i];
		}
		totalRepresentativeCommission = (totalCommission / 100) * 9;
	};
	void getBaseSalary()
	{
		baseSalary = grossSalaryWeek.size() * 200;
	}
	void getTotalCompensation()
	{
		totalCompensation = baseSalary + totalRepresentativeCommission;
	}
};

int main()
{
	vector<commercialRepresentative> chemicalFactory;

	bool mustStop = false;
	int i = 0;
	while (mustStop == false)
	{
		commercialRepresentative tempCommercialRepresentative;
		tempCommercialRepresentative.addGrossSalaries();
		tempCommercialRepresentative.totalCommission();
		tempCommercialRepresentative.getBaseSalary();
		tempCommercialRepresentative.getTotalCompensation();
		chemicalFactory.push_back(tempCommercialRepresentative);

		string addOneCommercialRepresentative = "";
		while (addOneCommercialRepresentative != "S" && addOneCommercialRepresentative != "C")
		{
			cout << "\nTo CONTINUE adding new commercial representative employees, input 'C'. Else, input 'S'.\n";
			cin >> addOneCommercialRepresentative;
		}
		if (addOneCommercialRepresentative == "S")
			mustStop = true;
		i += 1;
	}
	cout << "\n\n-------RESULTS-------\n\n";
	for (int i = 0; i < chemicalFactory.size(); i++)
	{
		cout << setprecision(2) << fixed << "The total salary for the commercial representative #" << i + 1 << " is : " << chemicalFactory[i].totalCompensation << " CA$.\n\n";
	}
	return 0;
}



