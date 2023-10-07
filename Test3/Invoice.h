#ifndef INVOICE_H
#define INVOICE_H
#include"InvoiceType.h"
#include<iostream>
class Invoice
{
private:
    std::string _invoiceNumber;
    InvoiceType _type;
    int _invoiceItems;

public:
    Invoice(Invoice& obj)=delete;
    Invoice(std::string invoiceNumber,InvoiceType type, int invoiceItems);

    ~Invoice() {
        std::cout<<"Invoice with invoice number"<<_invoiceNumber<<"is deleted";
    }

    std::string invoiceNumber() const { return _invoiceNumber; }

    InvoiceType type() const { return _type; }

    int invoiceItems() const { return _invoiceItems; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

    
    
};
std::string DisplayEnum(const InvoiceType value);
#endif // INVOICE_
