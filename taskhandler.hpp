#ifndef TASK_HANDLER_HPP
#define TASK_HANDLER_HPP

#include <vector>
#include "task.hpp"

class TaskTandler
{
private:
    /* data */
    std::vector<Task> tasks_;
public:
    TaskTandler(/* args */);
    void makeNewTask(int taskID);
};

#endif // TASK_HANDLER_HPP