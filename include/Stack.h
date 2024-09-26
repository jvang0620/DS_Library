#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack {
public:
    Stack();
    void push(T data);  // Push an element onto the stack
    void pop();         // Pop an element off the stack
    T top();            // Return the top element
    bool isEmpty();     // Check if the stack is empty

private:
    std::vector<T> elements;
};

#endif
