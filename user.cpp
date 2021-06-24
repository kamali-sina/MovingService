#include "user.hpp"

using namespace std;

User::User(int userID, std::string username, std::string password) 
{
    userID_ = userID;
    username_ = username;
    password_ = password;
}

string User::getUsername()
{
    return username_;
}

