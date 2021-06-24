#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task
{
private:
    /* data */
    int taskID_;
    std::string description_;
public:
    Task(int taskID, std::string description);
};

#endif // TASK_HPP