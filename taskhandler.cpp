#include "taskhandler.hpp"

TaskHandler::TaskHandler(/* args */)
{
}

void TaskHandler::makeNewTask(int TaskID)
{
    tasks_.push_back(Task(TaskID));
}