#pragma once

#include<string> 

#include<iostream> 

using std::string;

using std::cout; 

using std::endl; 

class Vehicle
{
	//private
	int topSpeed; 

	string terrainType; 

public: 
	Vehicle(int, string); 

	void printVehicleDetails()
	{
		cout << "Top speed: " << topSpeed << "\t" << "Terrain type: "
			<< terrainType << endl; 
	}

};


class Airplane : public Vehicle
{
	int wingSpan; 

	int maxAltitude; 

};

class Automobile : public Vehicle
{
	int numberOfWheels;

	//Automobile(int);

public: 
	Automobile(int, string, int); 

	void printAutomobileDetails();
};

class Truck : public Automobile
{
	bool hasBed = true; 
};

class Car : public Automobile
{
	bool hasBed = false; 

};