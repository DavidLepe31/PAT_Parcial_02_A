
#pragma once
#include <stack>

class MinStack
{
public:
    MinStack();

    void push(int value);
    void pop();
    int top();
    int getMin();

private:
    std::stack<int> dataStack;    // Pila para los elementos
    std::stack<int> minStack;     // Pila para el seguimiento de los valores mínimos

};

