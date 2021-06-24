#include "servicedescription.hpp"

ServiceDescription::ServiceDescription(ServiceDType type)
{
    type_ = type;
    if (type == MovingService){
        price_ = MOVINGPRICE;
        options_ = MOVINGOPTIONS;
    }
}

std::string ServiceDescription::getOptions(){
    return options_;
}

ServiceDType ServiceDescription::getType(){
    return type_;
}