#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"ToursitVehicle.h"

//functionalities for creating object
void CreateObject(ToursitVehicle* arr[3]);

int TouristWithCAB(ToursitVehicle* arr[3],Type type);

//functionalities for average booking charge
float averageBookingCharge(ToursitVehicle* arr[3]);

//functionalities for max bookin
ToursitVehicle* maxbookingCharge(ToursitVehicle* arr[3]);

//for seatcountpemit
void  seatCount(ToursitVehicle* arr[3], ToursitVehicle* res[3]);

//for freememory
void FreeMemory(ToursitVehicle* arr[3]);

#endif // FUNCTIONALITIES_H

