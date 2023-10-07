

#include "Functionalities.h"
#include "Bill.h"
#define SIZE 5

int main()
{
    Bill *arr[SIZE] = {};
    try
    {    //creating object
        CreateObjects(arr);
        for(int i=0;i<4;i++)
        {
            std::cout<<*arr[i]<<"\n";
        }
        std::cout << "Maximum bill amount:" << highestAmount(arr) << "\n";
        Invoice *res[4] = {};
        billAssociatedInvoice(arr, res, 5000.0f);

        maxMinbillAmount(arr);
    }
    catch (std::runtime_error &ex)
    {
        std::cout << ex.what() << "\n";
    }
   std::cout << "Bill amount of A502: " << billAmountfromInstance(arr, "A502") << "\n";
    FreeMemory(arr);
}