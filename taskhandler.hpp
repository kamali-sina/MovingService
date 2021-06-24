#ifndef TASK_HANDLER_HPP
#define TASK_HANDLER_HPP

#include <vector>
#include "task.hpp"

class TaskHandler
{
private:
    /* data */
    std::vector<Task> tasks_;
public:
    TaskHandler(/* args */);
    void makeNewTask(int taskID);
};

#endif // TASK_HANDLER_HPP