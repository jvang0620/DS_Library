#include "LinkedList.h"

// Constructor to initialize an empty list
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

// Destructor to free memory
template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *current = head;
    while (current != nullptr)
    {
        Node<T> *next = current->next;
        delete current;
        current = next;
    }
}

// Insert a new node at the end of the list
template <typename T>
void LinkedList<T>::insertAtEnd(T data)
{
    Node<T> *newNode = new Node<T>(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node<T> *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Delete a node by its value
template <typename T>
void LinkedList<T>::deleteByValue(T data)
{
    if (head == nullptr)
        return;

    // If the head node itself holds the value to be deleted
    if (head->data == data)
    {
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the node to be deleted
    Node<T> *temp = head;
    while (temp->next != nullptr && temp->next->data != data)
    {
        temp = temp->next;
    }

    // If the value is found
    if (temp->next != nullptr)
    {
        Node<T> *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}

// Print the list
template <typename T>
void LinkedList<T>::printList()
{
    Node<T> *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "null" << std::endl;
}

// Explicit template instantiation for int type
template class LinkedList<int>;
