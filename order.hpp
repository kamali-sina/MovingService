#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>

#include "date.hpp"
#include "orderlineservice.hpp"
#include "payment.hpp"

// enum Status {NotCompleted, Completed};

class Order
{
private:
    int orderID_;
    Date order_date_;
    Status order_status_;
    OrderLineService line_;
public:
    Order(int orderID, Date order_date, OrderLineService line);
    double getTotal();
    std::string getString();
};

#endif // ORDER_HPP