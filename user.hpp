#ifndef USER_HPP
#define USER_HPP

#include <string>

class User
{
private:
    /* data */
    int userID_;
    std::string password_;

public:
    std::string username_;
    User(int userID, std::string username, std::string password);
    std::string getUsername();

};


#endif // USER_HPP