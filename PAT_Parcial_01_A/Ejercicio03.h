
#pragma once
#include "Node.h"

class MinStack
{
public:
    Node<int>* headmin = nullptr;
    Node<int>* headatos = nullptr;
    
   
    MinStack();
    void push(int value);
    void pop();
    int top();
    int getMin();

};

