#include "taskhandler.hpp"

TaskTandler::TaskTandler(/* args */)
{
}

void TaskTandler::makeNewTask(int TaskID)
{
    tasks_.push_back(Task(TaskID));
}