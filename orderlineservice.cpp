#include "orderlineservice.hpp"

using namespace std;

OrderLineService::OrderLineService()
{
    quantity_ = 0;
}

void OrderLineService::addService(std::string options, Date date, TaskHandler &taskHandler){
    Service service(options, date, taskHandler);
    services_.push_back(service);
    quantity_ += 1;
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

std::string OrderLineService::getString(){
    string output = "";
    for (Service service : services_){
        output += service.getString() + "\n";
    }
    return output;
}
