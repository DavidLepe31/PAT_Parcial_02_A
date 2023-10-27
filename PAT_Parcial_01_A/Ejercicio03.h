
#pragma once
#include "Node.h"

class MinStack
{
public:
    MinStack();

    void push(int value);
    void pop();
    int top();
    int getMin();

};

