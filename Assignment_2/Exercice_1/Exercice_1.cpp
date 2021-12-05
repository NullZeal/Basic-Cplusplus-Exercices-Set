//	We want to determine the height of a building of n floors, knowing that the ground floor has a height of 6 meters and that 
//  the other floors each have a height of 4 meters.

#include <iostream>

using namespace std;

int main()
{
	int nFloors = 0;
	cout << "Please input the total amount of floors this building has : ";
	cin >> nFloors;
	const int groundFloorHeight = 6;
	const int aboveGroundFloorHeight = 4;
	int totalFloorsHeight = (nFloors-1) * aboveGroundFloorHeight + groundFloorHeight;
	cout << "\nThe height of the building is " << totalFloorsHeight << " meters high.\n" << endl;
	system("pause");
	return 0;
}