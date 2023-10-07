#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"ToursitVehicle.h"


void CreateObject(ToursitVehicle* arr[3]);

void  seatCount(ToursitVehicle* arr[3], ToursitVehicle* res[3]);

float averageBookingCharge(ToursitVehicle* arr[3]);

ToursitVehicle* maxbookingCharge(ToursitVehicle* arr[3]);

void FreeMemory(ToursitVehicle* arr[3]);













#endif // FUNCTIONALITIES_H









/*functionalities
1-a func to create 3 ToursitVehicle instances
2-a fun to find and return pointers to all instances of TouristVehicle
in an array that satisfy both the foll conditions
A._seat_count  of the Touristvehicle instance is atleast 4
B.


bool CheckIsNull(TouristVehicle* arr[SIZE]);

// function for create objects
void CreateObjects(TouristVehicle* arr[SIZE]);

//find all tourist vehicle shose seat >= 4
void FindTouristVehicle(TouristVehicle* arr[SIZE], TouristVehicle* res[SIZE]);

//find average of booking charge
float AverageBookingCharge(TouristVehicle* arr[SIZE]);

//find pointer of vehicle whose charge is maximum
TouristVehicle* MaximumChargeTouristVehicle(TouristVehicle* arr[SIZE]);

//function to free memory
void FreeMemory(TouristVehicle* arr[SIZE]);


#endif // FUNCTIONALITIES_H
*/




















