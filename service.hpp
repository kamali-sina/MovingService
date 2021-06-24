#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <string>

enum ServiceType {Moving, Storing, Packaging};
enum Status {NotCompleted, Completed};

class Service
{
private:
    /* data */
    int serviceID_;
    ServiceType type_;
    std::string description_;
    double price_;
    Status status_;
    
public:
    Service(int serviceID, ServiceType type, std::string description, double price, Status status);
    void setNewTask(/* TODO */);
    double getPrice();
};


#endif // SERVICE_HPP