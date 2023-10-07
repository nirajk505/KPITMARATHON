#include "Functionalities.h"
#include "Bill.h"
#include "Invoice.h"
#define SIZE 5

bool ifNull(Bill *arr[4])
{
bool flag = true;
    for (int i = 0; i < 4; i++)
    {
    if (arr[i] != nullptr)
        {
         flag = false;
        }
    }
 return flag;
}

//creating objects 
void CreateObjects(Bill *arr[4])
{

    arr[0] = new Bill(4000.0f, 1000.0f, new Invoice("A501", InvoiceType::PAPER_SLIP, 4));
    arr[1] = new Bill(5000.0f, 2000.0f, new Invoice("A502", InvoiceType::PAPER_SLIP, 5));
    arr[2] = new Bill(30000.0f, 3000.0f, new Invoice("A503", InvoiceType::E_BILL,6));
    arr[3] = new Bill(40000.0f, 4000.0f, new Invoice("A504", InvoiceType::SMS_GENERATED,7));
}

std::string highestAmount(Bill *arr[4])
{
 if (ifNull(arr))
    {
        throw std::runtime_error("Empty Container");
    }
std::string str = "";

    for (int i = 0; i <4; i++)
    {
     if (arr[i] == nullptr)
        {
            continue;
        }
     float max = 0.0f;
     if (arr[i]->billAmount() > max)
        {
            str = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }
    }
   return str;
}

float billAmountfromInstance(Bill *arr[4], std::string invoiceNum)
{
    if (ifNull(arr))
    {
        throw std::runtime_error("Empty Container");
    }

    float billAmt = 0.0f;

    for (int i = 0; i <4; i++)
    {
        if (arr[i]->billAssociatedInvoice()->invoiceNumber() == invoiceNum)
        {
            billAmt = arr[i]->billAmount();
        }
    }

    return billAmt;
}
void maxMinbillAmount(Bill *arr[4])
{
    if (ifNull(arr))
    {
        throw std::runtime_error("Empty Container");
    }

    float max = arr[0]->billAmount();
    float min = arr[0]->billAmount();

    std::string max_invoice = arr[0]->billAssociatedInvoice()->invoiceNumber();
    std::string min_invoice = arr[0]->billAssociatedInvoice()->invoiceNumber();
     for (int i = 0; i <4; i++)
    {
        if (arr[i]->billAmount() > max)
        {
            max = arr[i]->billAmount();
            max_invoice = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }

        if (arr[i]->billAmount() < min)
        {
            min = arr[i]->billAmount();
            min_invoice = arr[i]->billAssociatedInvoice()->invoiceNumber();
        }
    }

    std::cout << "Instances having maximum bill amount :" << max_invoice << "\n";
    std::cout << "Instances having minimum bill amount:" << min_invoice << "\n";
}

void billAssociatedInvoice(Bill *arr[4], Invoice *res[4], float value)
{
    if (ifNull(arr))
    {
        throw std::runtime_error("Container is empty");
    }
     for (int i = 0; i <4; i++)
    {
     if (arr[i] == nullptr)
        {
            continue;
        }
        int it = 0;
        if (arr[i]->billAmount() > value)
        {
            res[it++] == arr[i]->billAssociatedInvoice();
        }
    }
}


//to free the memory
void FreeMemory(Bill *arr[4])
{
    for (int i = 0; i <4; i++)
    {
        delete arr[i];
    }
}