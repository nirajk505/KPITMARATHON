#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumber, InvoiceType type, int invoiceItems)
:_invoiceNumber(invoiceNumber),_type(type), _invoiceItems(invoiceItems)
{
}

std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumber: " << rhs._invoiceNumber
       << " _type: " <<DisplayEnum(rhs._type)
       << " _invoiceItems: " << rhs._invoiceItems;
    return os;
}

std::string DisplayEnum(const InvoiceType value)
{
    if(value==InvoiceType::E_BILL)
    {
        return "E_BILL";
    }
    else if(value==InvoiceType::PAPER_SLIP)
    {
        return "PAPER_SLIP";
    }
    else{
        return "SMS_GENERATED";
    }
}

