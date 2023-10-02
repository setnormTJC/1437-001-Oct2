#include <iostream>

#include<vector>

#include "Vehicle.h"

using namespace std;

//Darcula

int main()
{
    Vehicle someVehicle{ 421, "Air" };

    someVehicle.printVehicleDetails(); 
    //someVehicle.topSpeed = 21; 

    Automobile bigRig{ 90, "Land", 18 };

    bigRig.printAutomobileDetails();

    return 0;
}