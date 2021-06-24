#include "servicecatalog.hpp"

ServiceCatalog::ServiceCatalog(/* args */)
{
    ServiceDescription temp(MovingService);
    services_.push_back(temp);
}

std::string ServiceCatalog::getMovingOptions(){
    std::string options = "";
    for (ServiceDescription service : services_){
        if (service.getType() == MovingService)
            options += service.getOptions() + "\n";
    }
    return options;
}
