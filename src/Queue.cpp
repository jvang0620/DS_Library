#include "Queue.h"

// Constructor
template <typename T>
Queue<T>::Queue() {}

// Enqueue an element
template <typename T>
void Queue<T>::enqueue(T data)
{
    elements.push_back(data);
}

// Dequeue an element
template <typename T>
void Queue<T>::dequeue()
{
    if (!elements.empty())
    {
        elements.pop_front();
    }
}

// Return the front element
template <typename T>
T Queue<T>::front()
{
    if (!elements.empty())
    {
        return elements.front();
    }
    throw std::out_of_range("Queue is empty!");
}

// Check if the queue is empty
template <typename T>
bool Queue<T>::isEmpty()
{
    return elements.empty();
}

// Explicit template instantiation for int type
template class Queue<int>;
