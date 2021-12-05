/*
6 –	Drivers are concerned with the mileage of their automobiles.
A driver decides to :

- record the number of kilometers traveled 
and 
- the number of litres of gasoline used each time they refill their gas tank. 

Develop a program with the goal of being able to :
- enter the number of kilometers traveled 
and 
- the number of litres used upon each gas refill. 

The program should calculate and display 
- the rate of gas consumption (in litres per 100 kilometers) between each gas refill. 

After having processed all of the information entered, 
the program should :

- calculate and display the total rate of gas consumption (in litres per 100 kilometers)
for all of the gas refills.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct trip 
{
	float kilometersTravelled = 0;
	float litresOfGasConsumed = 0;
	float litresPer100Kilometers = 0;
};

int main()
{
	bool stopAskingForOtherTrips = false;
	vector<trip> trips;
	int i = 1;
	do 
	{
		float tempKilometersTravelled = 0;
		float tempLitresOfGasConsumed = 0;
		cout << "\nFor trip #" << i << ", please input the amount of kilometers travelled since it's last fill : ";
		cin >> tempKilometersTravelled;
		cout << "\nFor trip #" << i << ", please input the amount of litres of gas used since it's last trip : ";
		cin >> tempLitresOfGasConsumed;
		float tempLitresPer100Kilometers = (tempLitresOfGasConsumed * 100) / tempKilometersTravelled;
		trips.push_back({tempKilometersTravelled, tempLitresOfGasConsumed, tempLitresPer100Kilometers});
		
		string addingMoreTripsQuestion = "";
		while (addingMoreTripsQuestion != "S" && addingMoreTripsQuestion != "C")
		{
			cout << "\nTo CONTINUE adding new trips, input 'C'. Else, input 'S'.\n";
			cin >> addingMoreTripsQuestion;
		}
		if (addingMoreTripsQuestion == "S")
			stopAskingForOtherTrips = true;
		i += 1;
	} while (stopAskingForOtherTrips == false);

	cout << "\n---------RESULTS---------\n\n";
	float allTripslitresPer100Kilometers = 0;
	for (int i = 0; i < trips.size(); i++)
	{
		cout << "For trip #" << i + 1 << ", the ratio was : " << trips[i].litresPer100Kilometers << " litres per 100 kilometers.\n\n";
		allTripslitresPer100Kilometers += trips[i].litresPer100Kilometers;
	}
	allTripslitresPer100Kilometers = allTripslitresPer100Kilometers / trips.size();
	cout << "For trip all trips combined, the ratio was : " << allTripslitresPer100Kilometers << " litres per 100 kilometers.\n\n";
	return 0;
}