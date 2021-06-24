#ifndef SERVICE_CATALOG_HPP
#define SERVICE_CATALOG_HPP

#include <vector>
#include <string>

#include "servicedescription.hpp"

class ServiceCatalog
{
private:
    std::vector<ServiceDescription> services_;
public:
    ServiceCatalog();
    std::string getMovingOptions();
};


#endif // SERVICE_CATALOG_HPP