#include "initializer.hpp"

Initializer::Initializer()
{
    User user(0, "John", "Doe");
    OrderHandler orderhandler();
    TaskHandler taskhandler();
}

int main()
{
    Initializer initializer;
}