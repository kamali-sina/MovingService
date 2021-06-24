#include "initializer.hpp"

Initializer::Initializer()
{
    User user(0, "John", "Doe");
    OrderHandler orderhandler;
    TaskHandler taskHandler;
    ServiceCatalog catalog;

    orderhandler.requestMovingService(user.getUsername(), catalog, taskHandler);
}

int main()
{
    Initializer initializer;
}