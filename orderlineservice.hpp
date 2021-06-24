#ifndef ORDER_LINE_SERVICE_HPP
#define ORDER_LINE_SERVICE_HPP

#include <vector>
#include <string>

#include "service.hpp"
#include "date.hpp"

class OrderLineService
{
private:
    int quantity_;
    std::vector<Service> services_;
public:
    OrderLineService();
    void addService(std::string options, Date date, TaskHandler &taskHandler);
    double getSubtotal();
    std::string getString();
};



#endif // ORDER_LINE_SERVICE_HPP