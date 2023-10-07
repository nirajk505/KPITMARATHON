#include"Functionalities.h"
#include<iostream>
#include"Product.h"

int main()
{
    Product* arr[5];
    CreateObjects(arr);
    for(int i=0;i<5;i++)
    {
        std::cout<<"Product data is"<<*arr[i]<<std::endl;
    }
    //to find the average 
    float avg=averageProductPrice(arr);
    std::cout<<"Average price is:"<<avg<<std::endl;

    //function to calculate the tax
    float tax=productTaxamount(arr);
    std::cout<<"tax for min product is : "<<tax<<std::endl;


     //function for max price
    float maxprice=maximumproductPrice(arr);
    std::cout<<"max price is: "<<maxprice<<std::endl;

    //Function to free the memory

    FreeMemory(arr);
    
}