#include"Functionalities.h"
#include"ToursitVehicle.h"
int main()
{
    ToursitVehicle* arr[3];
    CreateObject(arr);

        for(int i=0;i<3;i++)
        {
            std::cout<<"Details is :"<<*arr[i]<<std::endl;
        }
        // TouristVehicle* res[SIZE] = {};
        // FindTouristVehicle(arr, res);

        ToursitVehicle* res[3]={};

       

    std::cout<<"Average booking charge is :"<<averageBookingCharge(arr);
     

    seatCount(arr,res);
     std::cout<<"kdhfkahd";

    for(int i=0;i<3;i++)
    {
        std::cout<<*res[i];
    }

    std::cout<<"max booking charge is:"<<*(maxbookingCharge(arr));

    FreeMemory(arr);
    

}







    /*
     TouristVehicle* arr[SIZE] = {};
    
    try{
        CreateObjects(arr);

        TouristVehicle* res[SIZE] = {};
        FindTouristVehicle(arr, res);

         std::cout << "Result : \n";
        for(int i = 0; i < SIZE; i++){

            if(res[i] == nullptr){
                break;
            }
            std::cout << *res[i] <<"\n";

        }

        for(int i = 0; i < SIZE; i++){
            delete res[i];
        }

        std::cout << "Average Booking Charge : " << AverageBookingCharge(arr) << "\n";

        std::cout << "Maximum Charge Tourist Vehicle : " << 
            *(MaximumChargeTouristVehicle(arr)) << "\n";

    }catch(std::runtime_error& ex){
        std::cout<< ex.what() << "\n";
    }

    


    FreeMemory(arr);
}
    */

    