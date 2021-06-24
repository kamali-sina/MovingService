#include "orderlineservice.hpp"

OrderLineService::OrderLineService(/* args */)
{
    quantity_ = 0;
}

double OrderLineService::getSubtotal()
{
    double subtotal = 0;
    for (Service service : services_)
    {
        subtotal += service.getPrice();
    }
    return subtotal;
}