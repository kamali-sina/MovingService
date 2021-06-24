#ifndef ORDER_LINE_SERVICE_HPP
#define ORDER_LINE_SERVICE_HPP

#include <vector>

#include "service.hpp"

class OrderLineService
{
private:
    int quantity_;
    std::vector<Service> services_;
public:
    OrderLineService();
    void addService(Service service); //TODO
    double getSubtotal();

};



#endif // ORDER_LINE_SERVICE_HPP