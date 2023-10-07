#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Product.h"

void CreateObjects(Product* arr[5]);

float averageProductPrice(Product* arr[5]);

float productTaxamount(Product* arr[5]);

float maximumproductPrice(Product* arr[5]);

void FreeMemory(Product* arr[5]);

#endif // FUNCTIONALITIES_H
