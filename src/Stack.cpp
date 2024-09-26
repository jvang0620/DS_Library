#include "Stack.h"

// Constructor
template <typename T>
Stack<T>::Stack() {}

// Push an element onto the stack
template <typename T>
void Stack<T>::push(T data)
{
    elements.push_back(data);
}

// Pop an element off the stack
template <typename T>
void Stack<T>::pop()
{
    if (!elements.empty())
    {
        elements.pop_back();
    }
}

// Return the top element
template <typename T>
T Stack<T>::top()
{
    if (!elements.empty())
    {
        return elements.back();
    }
    throw std::out_of_range("Stack is empty!");
}

// Check if the stack is empty
template <typename T>
bool Stack<T>::isEmpty()
{
    return elements.empty();
}

// Explicit template instantiation for int type
template class Stack<int>;
