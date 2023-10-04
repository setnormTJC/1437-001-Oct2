#include "Vehicle.h"


Vehicle::Vehicle()
{
	cout << "Default constructor of `Vehicle` class called" << endl; 
	topSpeed = -999; 
	terrainType = "land";
}

Vehicle::Vehicle(int tSpeed, string tType)
//	:topSpeed(topSpeed), terrainType(terrainType)
//{};
{
	//tSpeed = topSpeed; //LOGIC ERROR!

	//this->
	topSpeed = tSpeed; 
	terrainType = tType; 
}

void Vehicle::setAllVehicleAttributes(int tSpeed, string tType)
{
	topSpeed = tSpeed; 
	terrainType = tType;
}



Automobile::Automobile(int tSpeed, string tType, int nWheels)
	:Vehicle(tSpeed, tType)
{
	numberOfWheels = nWheels; 
}

Automobile::Automobile(int nWheels)
{
	numberOfWheels = nWheels;
}

void Automobile::setAllAutomobileAttribs(int tSpeed, string tType, int nWheels)
{
	//topSpeed = tSpeed;
	setAllVehicleAttributes(tSpeed, tType);
	numberOfWheels = nWheels;
}

void Automobile::printAutomobileDetails()
{
	printVehicleDetails(); 
	cout << "Number of wheels: " << numberOfWheels << endl;
}
