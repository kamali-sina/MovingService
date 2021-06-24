#ifndef SERVICE_DESCRIPTION
#define SERVICE_DESCRIPTION

#include <string>

#define MOVINGPRICE 200.00
#define MOVINGOPTIONS "Inspector | Vehicle | MovingTeam | Packing | Warehouse"

enum ServiceDType {MovingService, StoringService, PackagingService};

class ServiceDescription
{
private:
    /* data */
    ServiceDType type_;
    double price_;
    std::string options_;
public:
    ServiceDescription(ServiceDType type);
    std::string getOptions();
    ServiceDType getType();
};


#endif // SERVICE_DESCRIPTION