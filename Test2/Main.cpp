#include"Functionalities.h"
#include"ToursitVehicle.h"
int main()
{
    ToursitVehicle* arr[3];
    //Creating object
    CreateObject(arr);

        for(int i=0;i<3;i++)
        {
            std::cout<<"Details is :"<<*arr[i]<<std::endl;
        }
    //Average booking charge cost

    int result=TouristWithCAB(arr,Type::CAB);
     std::cout<<result<<"endl";

    int avg=averageBookingCharge(arr);
    std::cout<<avg/result;
     
   ToursitVehicle* res[3]={};
    seatCount(arr,res);

    for(int i=0;i<3;i++)
    {
        std::cout<<*res[i];
    }
    
    //max booking charge
    std::cout<<"max booking charge is:"<<*(maxbookingCharge(arr));
    //Function to free the memory
    FreeMemory(arr);
    

}
