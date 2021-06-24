#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <string>

#include "date.hpp"
#include "taskhandler.hpp"

enum ServiceType {Moving, Storing, Packaging};
enum Status {NotCompleted, Completed};

class Service
{
private:
    /* data */
    int serviceID_;
    Date date_;
    ServiceType type_;
    std::string description_;
    double price_;
    Status status_;
    
public:
    Service(std::string options, Date date, TaskHandler &taskHandler);
    std::string getString();
    double getPrice();
};


#endif // SERVICE_HPP