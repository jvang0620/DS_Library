# Data Structures and Algorithms Library in C++

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

This project is a C++ implementation of fundamental data structures and algorithms. It includes a Linked List, Stack, and Queue, providing the basic operations necessary to manipulate and utilize these structures effectively. This library serves as a foundational tool for developers and students who want to understand and apply data structures in their projects.

## Features

- **Linked List**: Supports insertion at the end, deletion by value, and printing of the entire list.
- **Stack**: Provides push, pop, top (peek), and empty check operations.
- **Queue**: Offers enqueue, dequeue, front (peek), and empty check operations.
- Implemented using templates, enabling usage with any data type.
- Explicit template instantiation for integer data types.
- Exception handling for accessing elements in empty Stacks and Queues.

## Getting Started

### Prerequisites

To run this project, you will need:

- C++ Compiler (e.g., `g++`)
- Standard Library support (e.g., `iostream`, `deque`, `vector`)

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/YourUsername/DataStructuresLibrary.git
   ```

2. Navigate to the project directory:

   ```bash
   cd DataStructuresLibrary
   ```

3. Compile the code using a C++ compiler:

   ```bash
   g++ -o DataStructuresLibrary main.cpp LinkedList.cpp Stack.cpp Queue.cpp
   ```

4. Run the executable:

   ```bash
   ./DataStructuresLibrary
   ```

## Usage

The `main.cpp` file demonstrates how to use each data structure:

- **Linked List**:

  ```cpp
  LinkedList<int> list;
  list.insertAtEnd(10);
  list.insertAtEnd(20);
  list.printList();  // Output: 10 -> 20 -> null
  list.deleteByValue(20);
  list.printList();  // Output: 10 -> null
  ```

- **Stack**:

  ```cpp
  Stack<int> stack;
  stack.push(100);
  stack.push(200);
  std::cout << "Top of the stack: " << stack.top() << std::endl;  // Output: 200
  stack.pop();
  std::cout << "Top of the stack after pop: " << stack.top() << std::endl;  // Output: 100
  ```

- **Queue**:
  ```cpp
  Queue<int> queue;
  queue.enqueue(1000);
  queue.enqueue(2000);
  std::cout << "Front of the queue: " << queue.front() << std::endl;  // Output: 1000
  queue.dequeue();
  std::cout << "Front of the queue after dequeue: " << queue.front() << std::endl;  // Output: 2000
  ```

## Code Structure

- `LinkedList.h` and `LinkedList.cpp`: Contains the `LinkedList` class with methods to manipulate a singly linked list.
- `Queue.h` and `Queue.cpp`: Defines the `Queue` class implemented using `std::deque`.
- `Stack.h` and `Stack.cpp`: Defines the `Stack` class implemented using `std::vector`.
- `main.cpp`: Demonstrates the usage of the above data structures.
# DS_Library
