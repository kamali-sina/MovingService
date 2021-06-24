#include "order.hpp"

Order::Order(int orderID, Date order_date)
{
    orderID_ = orderID;
    order_date_ = order_date;
}

double Order::getTotal()
{
    double total = 0;
    for (OrderLineService line : lines_)
    {
        total += line.getSubtotal();
    }
    return total;
}

void Order::startTransaction()
{
    Payment payment;
    payment.requestInformation();
}