#include "orderhandler.hpp"

using namespace std;

OrderHandler::OrderHandler(/* args */)
{
}

void OrderHandler::requestMovingService(std::string username, ServiceCatalog &catalog, TaskHandler &taskHandler)
{
    string options = catalog.getMovingOptions();
    string userOptions = displayMovingOptions(options);
    Date userDate = displayDates();
    makeNewOrder(username, userOptions, userDate, taskHandler);
}

std::string OrderHandler::displayMovingOptions(std::string options)
{
    string userOptions;
    cout<<"options are:"<<endl<<options<<endl;
    cout<<"input your options: ";
    getline(cin, userOptions);
    return userOptions;
}
 
Date OrderHandler::displayDates()
{
    cout<<"All dates are available!"<<endl<<"input year month day: ";
    int year, month, day;
    cin>>year>>month>>day;
    Date userDate(year, month, day);
    return userDate;
}

void OrderHandler::makeNewOrder(std::string username, std::string options, Date date, TaskHandler &taskHandler)
{
    OrderLineService orderLineService;
    orderLineService.addService(options, date, taskHandler);
    Order order(id_counter_, date, orderLineService);
    id_counter_ += 1;
    orders_.push_back(order);
    dao_.write_to_database(order);
    payment_.startTransaction(order.getTotal());
}