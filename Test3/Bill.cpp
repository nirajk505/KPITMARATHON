#include"Bill.h"
#include<iostream>

Bill:: Bill(float billAmount, float billTaxAmount, Invoice* billAssociatedInvoice)
: _billAmount(billAmount), _billAssociatedInvoice(billAssociatedInvoice)
{
    if(billTaxAmount > billAmount){
        std::runtime_error("BillTaxAmount is greater than BillAmount");
    }else{
        _billTaxAmount = billTaxAmount;
    }
}

std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billAmount: " << rhs._billAmount
       << " _bellTaxAmount: " << rhs._billTaxAmount
       << " _billAssociatedInvoice: " << *(rhs._billAssociatedInvoice);
    return os;
}