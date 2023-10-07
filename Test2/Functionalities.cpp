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

void seatCountP(ToursitVehicle* arr[3], ToursitVehicle* res[3])
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

   //function for maxbookingcharge
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
    
    //Function to free memory
     void FreeMemory(ToursitVehicle* arr[3])
     {
         for(int i=0;i<3;i++)
         {
            delete(arr[i]);
         }
     }


int TouristWithCAB(ToursitVehicle* arr[3],Type type)
{
    int count=0;
    for(int i=0;i<3;i++){
        if(arr[i]->type()==type)
        {
          count++;
        }
    }
    return count;
}

    
