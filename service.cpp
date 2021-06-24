#include "service.hpp"
#include <string>

using namespace std;

Service::Service(std::string options, Date date, TaskHandler &taskHandler) : date_(date)
{
    serviceID_ = 0;
    type_ = Moving; 
    description_ = options; 
    price_ = 200.00; 
    status_ = NotCompleted;
    taskHandler.makeNewTask(description_);
}

double Service::getPrice()
{
    return price_;
}

std::string Service::getString(){
    string output = "";
    output += "MovingService " + description_ + " " + to_string(price_);
    return output;
}