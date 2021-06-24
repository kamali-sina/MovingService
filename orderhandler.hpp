#ifndef ORDER_HANDLER_HPP
#define ORDER_HANDLER_HPP

#include <vector>
#include <string>
#include "date.hpp"

#include "order.hpp"
#include "servicecatalog.hpp"
#include "payment.hpp"
#include "dao.hpp"

class OrderHandler
{
private:
    std::vector<Order> orders_;
    int id_counter_=0;
    Payment payment_;
    DAO dao_;
public:
    OrderHandler();
    void requestMovingService(std::string username, ServiceCatalog &catalog, TaskHandler &taskHandler);
    std::string displayMovingOptions(std::string options);
    Date displayDates();
    void makeNewOrder(std::string username, std::string options, Date date, TaskHandler &taskHandler);
};

#endif // ORDER_HANDLER_HPP