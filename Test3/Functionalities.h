#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Bill.h"
#include "Invoice.h"

//Function to check if function is null
bool ifNull(Bill* arr[4]);

//function for creating the objects
void CreateObjects(Bill* arr[4]);

//this function will show highest amount from bill instances
std::string highestAmount(Bill* arr[4]);

//bill amoount from given bill instances
float billAmountfromInstance(Bill* arr[4], std::string invoiceNum);

//bill associated voice from taken threshhold
void billAssociatedInvoice(Bill* arr[4], Invoice* res[4], float value);

//maximum and minimum bill amount from instances
void maxMinbillAmount(Bill* arr[4]);

//to free the memory
void FreeMemory(Bill* arr[4]);


#endif // FUNCTIONALITIES_H
