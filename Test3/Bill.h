#ifndef BILL_H
#define BILL_H
#include"Invoice.h"


class Bill
{
    private:
        float _billAmount;
        float _billTaxAmount;
        Invoice* _billAssociatedInvoice;

    public:
        Bill(float billAmount,float billTaxAmount, Invoice* billAssociatedInvoice
        );

        ~Bill() {
            std::cout << "Bill Destroyed\n";
        }

        float billAmount() const { return _billAmount; }

        float bellTaxAmount() const { return _billTaxAmount; }

        Invoice* billAssociatedInvoice() const { return _billAssociatedInvoice; }

        friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);

        
};

#endif // BILL_H
