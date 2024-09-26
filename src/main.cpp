#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main()
{
    // Test LinkedList
    LinkedList<int> list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.printList();
    list.deleteByValue(20);
    list.printList();

    // Test Stack
    Stack<int> stack;
    stack.push(100);
    stack.push(200);
    stack.push(300);
    std::cout << "Top of the stack: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top of the stack after pop: " << stack.top() << std::endl;

    // Test Queue
    Queue<int> queue;
    queue.enqueue(1000);
    queue.enqueue(2000);
    queue.enqueue(3000);
    std::cout << "Front of the queue: " << queue.front() << std::endl;
    queue.dequeue();
    std::cout << "Front of the queue after dequeue: " << queue.front() << std::endl;

    return 0;
}
