# LinkedList Implementation in C++

This repository contains a simple implementation of a singly linked list in C++. The code demonstrates how to create a linked list, insert elements at the beginning and the end, traverse the list, and remove elements. The implementation uses modern C++ features like initializer lists for easy list initialization.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Code Walkthrough](#code-walkthrough)
- [How to Run](#how-to-run)
- [Contributing](#contributing)


## Introduction

The linked list is a fundamental data structure in computer science. It consists of nodes where each node contains a data part and a pointer to the next node in the sequence. This implementation provides a basic understanding of how a singly linked list can be constructed and manipulated in C++.

## Features

- **Insert at Beginning:** Add elements at the start of the linked list.
- **Insert at Last:** Add elements at the end of the linked list.
- **Remove Element:** Remove an element from the linked list by value.
- **Traverse:** Print the elements of the linked list in sequence.
- **Initializer List:** Easily initialize the linked list with a list of values.

## Usage

To use this linked list implementation, you can include the provided `LinkedList` class in your C++ projects. The class provides methods to manipulate the linked list as needed.

### Example

```cpp
#include "LinkedList.h"

int main() {
    // Initializing the list with some values using initializer list
    LinkedList list = {45, 56, 575, 84595, 958585, 44, 444, 44, 234, 24};
    
    // Insert elements at the beginning
    list.insertAtBeg(45);
    list.insertAtBeg(6);
    list.insertAtBeg(4784);
    list.insertAtBeg(450);
    list.insertAtBeg(555);
    
    // Insert elements at the end
    list.insertAtLast(485);
    list.insertAtLast(755);
    
    // Remove an element from the list
    list.remove(450);
    
    // Traverse and print the list
    list.traverse();

    return 0;
}
```

## Code Walkthrough

### Node Structure

The `Node` structure represents a single element in the linked list. It contains two members:
- `int data`: Stores the value of the node.
- `Node* next`: A pointer to the next node in the list.

### LinkedList Class

The `LinkedList` class manages the list of nodes. It includes the following methods:

- **Constructor (`LinkedList(initializer_list<int> init)`):** Initializes the list with the values provided in the initializer list.
- **`insertAtBeg(int data)`**: Inserts a new node at the beginning of the list.
- **`insertAtLast(int data)`**: Inserts a new node at the end of the list.
- **`traverse()`**: Prints all elements in the list.
- **`remove(int data)`**: Removes the node containing the specified data.

### Example Output

```
5->45->555->4784->6->45->56->575->84595->958585->44->444->44->234->24->485->755
```

## How to Run

To compile and run the code, follow these steps:

1. Save the code in a file named `main.cpp`.
2. Use a C++ compiler to compile the code:
   ```bash
   g++ -o linkedlist main.cpp
   ```
3. Run the compiled program:
   ```bash
   ./linkedlist
   ```

## Contributing

Contributions are welcome! If you have any improvements or suggestions, feel free to submit a pull request.

