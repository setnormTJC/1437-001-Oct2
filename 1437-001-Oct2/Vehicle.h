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
	Vehicle(); 
	Vehicle(int, string); 

	void printVehicleDetails()
	{
		cout << "Top speed: " << topSpeed << "\t" << "Terrain type: "
			<< terrainType << endl; 
	}

	void setAllVehicleAttributes(int tSpeed, string tType);

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
	/// <summary>
	/// This is a contructor for the `Automobile` class.
	/// It calls the constructor with params of the parent class (Vehicle)
	/// </summary>
	/// <param name="tSpeed"></param>
	/// <param name="tType"></param>
	/// <param name="nWheels"></param>
	Automobile(int tSpeed, string tType, int nWheels); 
	//move constructor (&&)

	Automobile(int nWheels);

	void setAllAutomobileAttribs(int tSpeed, string tType, int nWheels);

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