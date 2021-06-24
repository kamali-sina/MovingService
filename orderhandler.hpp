#ifndef ORDER_HANDLER_HPP
#define ORDER_HANDLER_HPP

#include <vector>
#include "order.hpp"
#include "date.hpp"

class OrderHandler
{
private:
    std::vector<Order> orders_;
public:
    OrderHandler(/* args */);
    void makeNewOrder(int userID, Date date);
};

#endif // ORDER_HANDLER_HPP