#include "Vehicle.h"

Vehicle::Vehicle(int tSpeed, string tType)
//	:topSpeed(topSpeed), terrainType(terrainType)
//{};
{
	//tSpeed = topSpeed; //LOGIC ERROR!

	//this->
	topSpeed = tSpeed; 
	terrainType = tType; 
}

Automobile::Automobile(int tSpeed, string tType, int nWheels)
	:Vehicle(tSpeed, tType)
{
	numberOfWheels = nWheels; 
}

void Automobile::printAutomobileDetails()
{
	printVehicleDetails(); 
	cout << "Number of wheels: " << numberOfWheels << endl;
}
