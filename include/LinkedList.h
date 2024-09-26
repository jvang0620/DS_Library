#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// Node structure for the linked list
template <typename T>
struct Node {
    T data;
    Node* next;

    // Constructor to initialize a new node
    Node(T data) : data(data), next(nullptr) {}
};

// LinkedList class
template <typename T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insertAtEnd(T data);  // Insert a new node at the end
    void deleteByValue(T data);  // Delete a node by value
    void printList();  // Print the contents of the list

private:
    Node<T>* head;
};

#endif
