#include "Functionalities.h"
#include "ToursitVehicle.h"

void CreateObject(ToursitVehicle *arr[3])
{
    arr[0] = new ToursitVehicle("A101", Type::CAB, 10, 2000.0f);
    arr[1] = new ToursitVehicle("A102", Type::BUS, 100, 1500.0f);
    arr[2] = new ToursitVehicle("A103", Type::BIKE, 2, 200.0f);
}

float averageBookingCharge(ToursitVehicle* arr[3])
{
    int total=0;
    for(int i=0;i<3;i++)
    {
        total+=arr[i]->bookingCharge();
    }
    return total/3;

}

void seatCount(ToursitVehicle* arr[3], ToursitVehicle* res[3])
{
    int it=0;
     for(int i=0;i<3;i++)
    {
        if(arr[i]->seatCount()>4)
        {
             res[it++] = arr[i];
        }
        }
    }

   
    ToursitVehicle* maxbookingCharge(ToursitVehicle* arr[3])
    {
        float charge=0;
        ToursitVehicle* fres=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]->bookingCharge()>charge)
            {
                charge=arr[i]->bookingCharge();
                 fres=arr[i];

            }
        }
    return fres;
    }


     void FreeMemory(ToursitVehicle* arr[3])
     {
         for(int i=0;i<3;i++)
         {
            delete(arr[i]);
         }
     }



    














/*bool CheckIsNull(TouristVehicle* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }

    return flag;
}

//cretate objects in heap memory
void CreateObjects(TouristVehicle* arr[SIZE]){

    arr[0] = new TouristVehicle("V101", VehicleType::BIKE, 2, 200.0f);
    arr[1] = new TouristVehicle("V102", VehicleType::BUS, 20, 800.0f);
    arr[2] = new TouristVehicle("V103", VehicleType::CAB, 7, 400.0f);

}

//Get 
void FindTouristVehicle(TouristVehicle* arr[SIZE], TouristVehicle* res[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    int it = 0;

    for(int i = 0; i < SIZE; i++){

        if(arr[i] == nullptr){
            continue;
        }

        if(arr[i]->seatCount() >= 4){
            res[it++] = arr[i];
        }
    }
}

float AverageBookingCharge(TouristVehicle* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    float total  = 0.0f;

    for(int i = 0; i < SIZE; i++){
        total += arr[i]->perHourBookingCharge();
    }

    return total/SIZE;

}

TouristVehicle* MaximumChargeTouristVehicle(TouristVehicle* arr[SIZE]){

    if(CheckIsNull(arr)){
        throw std::runtime_error("Container is Empty.");
    }

    TouristVehicle* result = nullptr;
    float charge = 0.0f;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->perHourBookingCharge() > charge){
            charge = arr[i]->perHourBookingCharge();
            result = arr[i];
        }
    }

    return result;

}

void FreeMemory(TouristVehicle* arr[SIZE]){

    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }

}*/
