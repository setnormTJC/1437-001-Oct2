#include <iostream>

#include<vector>

#include "Vehicle.h"

using namespace std;

//Darcula

int main()
{
    ////__debug_break;
    //
                        //topSpeed      //terrain type
    Vehicle someVehicle{ 421,           "Air" };
    someVehicle.print(); 

    Automobile ptCruiser{ 110, "land", 5 };
    ptCruiser.print(); 


    ////someVehicle.printVehicleDetails(); 
    ////someVehicle.topSpeed = 21; 

    ////Automobile bigRig{ 90, "Land", 18 };
    //Automobile ptCruiser{ 4 };

    //cout << "Before calling setAll..." << endl; 
    //ptCruiser.printAutomobileDetails();

    //ptCruiser.setAllAutomobileAttribs(100, "the road", 3);
    //cout << "\n\n\nAFTER calling setAll..." << endl;
    //ptCruiser.printAutomobileDetails();



    //rickshaw.s

    
    return 0;
}