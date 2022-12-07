# Circular Linked-List C++

This is a simple implementation of a circular linked-list in **C++**.

## Features

- Add a new node at beginning of list.
- Add a new node at end of list.
- Add a new node after a data.
- Add a new node before a data.
- Add a new node after a index.
- Add a new node before a index.
- Get the index of a data.
- Get the data of a index.
- Check if list is empty.
- Check if list contains a data.
- Check if list contains a index.
- Get the size of list.
- Print the list.
- Print the list in reverse order.
- Reverse the linkedlist (iterative function)
- Recursive function to reverse the linkedlist.
- Delete a node at beginning of list.
- Delete a node at end of list.
- Delete a node after a data.
- Delete a node before a data.
- Delete a node after a index.
- Delete a node before a index.
- Delete a node by data.
- Delete a node by index.
- Delete all nodes by data.
- Delete all nodes by index.
- Delete all nodes.
- Delete the list.
- Clear the list.
- Copy the list.

## Functions

- `Node::Node(int data)`: Constructor for the node class.

- `CircularLinkedList::CircularLinkedList()`: Constructor for the CircularLinkedList class.
- `void CircularLinkedList::addFirst(int data)`: Add a new node at beginning of list.
- `void CircularLinkedList::addLast(int data)`: Add a new node at end of list.
- `void CircularLinkedList::addAfter(int data, int newData)`: Add a new node after a data.
- `void CircularLinkedList::addBefore(int data, int newData)`: Add a new node before a data.
- `void CircularLinkedList::addAfterIndex(int index, int newData)`: Add a new node after a index.
- `void CircularLinkedList::addBeforeIndex(int index, int newData)`: Add a new node before a index.
- `int CircularLinkedList::indexOf(int data)`: Get the index of a data.
- `int CircularLinkedList::get(int index)`: Get the data of a index.
- `bool CircularLinkedList::isEmpty()`: Check if list is empty.
- `bool CircularLinkedList::contains(int data)`: Check if list contains a data.
- `bool CircularLinkedList::containsIndex(int index)`: Check if list contains a index.
- `int CircularLinkedList::getSize()`: Get the size of list.
- `void CircularLinkedList::print()`: Print the list.
- `void CircularLinkedList::printReverse()`: Print the list in reverse order.
- `void CircularLinkedList::reverse()`: Reverse the linkedlist (iterative function)
- `void CircularLinkedList::reverseRecursive(Node* current, Node* prev)`: Recursive function to reverse the linkedlist.
- `CircularLinkedList* CircularLinkedList::copy()`: Copy the list.
- `void removeFirst()`: Delete a node at beginning of list.
- `void removeLast()`: Delete a node at end of list.
- `void remove(int data)`: Delete a node by data.
- `void removeIndex(int index)`: Delete a node by index.
- `void CircularLinkedList::clear()`: Clear the list.

© Copyright Max Base, 2022
