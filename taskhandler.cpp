#include "taskhandler.hpp"

TaskHandler::TaskHandler(/* args */)
{
}

void TaskHandler::makeNewTask(std::string description)
{
    tasks_.push_back(Task(id_counter_, description));
    id_counter_ += 1;
}