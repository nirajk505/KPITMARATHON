
#include"Product.h"
void CreateObjects(Product* arr[5])
{
    arr[0]=new Product("A101", ProductType::FMCG, 300.0f, "AXE");
    arr[1]=new Product("A102", ProductType::APPLIANCE, 600.0f, "COBRA");
    arr[2]=new Product("A103", ProductType::PERFUME, 300.0f, "ARA");
    arr[3]=new Product("A104", ProductType::FMCG, 300.0f, "AXE");
    arr[4]=new Product("A105", ProductType::PERFUME,500.0f, "BOSCH");
}

//Average product price
float averageProductPrice(Product* arr[5])
{
    int total=0;
    for(int i=0;i<5;i++)
    {
        total+=arr[i]->productPrice();
}
return total/5;
}

//maximum product price
float maximumproductPrice(Product* arr[5])
{
   float max =0;
   for(int i=0;i<5;i++)
   {
    if(arr[i]->productPrice()>max)
    {
        max=arr[i]->productPrice();

    }
   }
   return max;
}
//Tax amount 
float productTaxamount(Product* arr[5])
{
     float min =INT16_MAX;
   for(int i=0;i<5;i++)
   {
    if(arr[i]->productPrice()<min)
    {
        min=arr[i]->productPrice();

    }
   }
   return min*0.1f;
}
//Functionalities for free memory
void FreeMemory(Product* arr[5])
{
    for(int i=0;i<5;i++)
    {
        delete(arr[i]);
    }
    
}
