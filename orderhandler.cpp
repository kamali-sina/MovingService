#include "orderhandler.hpp"

OrderHandler::OrderHandler(/* args */)
{
}

void OrderHandler::makeNewOrder(int userID, Date date)
{
    int orderID = orders_.size();
    orders_.push_back(Order(orderID, date));
}