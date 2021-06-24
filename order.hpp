#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>

#include "date.hpp"
#include "orderlineservice.hpp"
#include "payment.hpp"

enum Status {NotCompleted, Completed};

class Order
{
private:
    int orderID_;
    Date order_date_;
    Status order_status_;
    std::vector<OrderLineService> lines_;
public:
    Order(int orderID, Date order_date);
    double getTotal();
    void startTransaction();
};

#endif // ORDER_HPP