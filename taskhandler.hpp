#ifndef TASK_HANDLER_HPP
#define TASK_HANDLER_HPP

#include <vector>
#include <string>

#include "task.hpp"

class TaskHandler
{
private:
    /* data */
    std::vector<Task> tasks_;
    int id_counter_=0;
public:
    TaskHandler(/* args */);
    void makeNewTask(std::string description);
};

#endif // TASK_HANDLER_HPP