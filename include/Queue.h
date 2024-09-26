#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <deque>

template <typename T>
class Queue
{
public:
    Queue();
    void enqueue(T data); // Enqueue an element
    void dequeue();       // Dequeue an element
    T front();            // Return the front element
    bool isEmpty();       // Check if the queue is empty

private:
    std::deque<T> elements;
};

#endif
