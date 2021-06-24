#include "dao.hpp"

using namespace std;

DAO::DAO()
{

}

void DAO::write_to_database(Order order){
    ofstream file;
    file.open(FILENAME, std::ios_base::app | std::ios_base::in);
    time_t now = time(0);
    string time = ctime(&now);
    string message = order.getString();
    string logged_message = time + " [info]: " + message;  
    file<<logged_message<<endl;
    file.close();
}