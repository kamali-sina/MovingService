#include "order.hpp"
#include <string>

using namespace std;

Order::Order(int orderID, Date order_date, OrderLineService line) : order_date_(order_date), line_(line)
{
    orderID_ = orderID;
}

double Order::getTotal()
{
    return line_.getSubtotal();
}

std::string Order::getString(){
    string output = "";
    output += to_string(orderID_) + " | " + order_date_.getString() + line_.getString();
    return output;
}