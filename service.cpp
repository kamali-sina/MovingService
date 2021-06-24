#include "service.hpp"

Service::Service(int serviceID, ServiceType type, std::string description, double price, Status status)
{
    serviceID_ = serviceID;
    type_ = type; 
    description_ = description; 
    price_ = price; 
    status_ = status; 
}

double Service::getPrice()
{
    return price_;
}