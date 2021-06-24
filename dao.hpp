#ifndef DAO_HPP
#define DAO_HPP

#include <iostream>
#include <string>
#include <fstream>

#include "order.hpp"

#define FILENAME "database.txt"

class DAO
{
private:
    /* data */
public:
    DAO();
    void write_to_database(Order order);
};

#endif // PAYMENT_HPP