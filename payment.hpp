#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include <iostream>
#include <string>

class Payment
{
private:
    /* data */
    double amount_;
    bool is_transaction_completed = false;
public:
    Payment();
    void startTransaction(double total);
    void requestInformation();
    void verifyInformation();
    void endTransaction(double total);
};

#endif // PAYMENT_HPP