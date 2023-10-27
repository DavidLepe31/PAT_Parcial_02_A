
#pragma once
#include "Node.h"

class MinStack
{
public:
    Node<int>* headmin = nullptr;
    Node<int>* minstack = headmin;
    Node<int>* headstack = nullptr;
    Node<int>* datastack = headstack;
    Node<int>* datastackpre = nullptr;
    Node<int>* minstackprev = nullptr;

    void push(int value);
    void pop();
    int top();
    int getMin();
    MinStack() {
       
    }

};

