/*
 * @Name: Circular Linked List C++
 * @Author: Max Base
 * @Date: 2022-11-28
 * @Repository: https://github.com/basemax/CircularLinkedListCpp
 */

class Node {
public:
    int data; // Data
    Node* next; // Pointer to next node

    // Node Constructor
    Node(int data);
};

class CircularLinkedList {
private:
    Node* head; // Pointer to head node
    Node* tail; // Pointer to tail node
    int size; // Size of list
public:
    // CircularLinkedList Constructor
    CircularLinkedList();


    // Add a new node at beginning of list
    void addFirst(int data);

    // Add a new node at end of list
    void addLast(int data);

    // Print list
    void print();

    // Print the list in reverse order
    void printReverse();

    // Add a new node after a data
    void addAfter(int data, int newData);

    // Add a new node before a data
    void addBefore(int data, int newData);

    // Add a new node after a index
    void addAfterIndex(int index, int newData);

    // Add a new node before a index
    void addBeforeIndex(int index, int newData);

    // Get the index of a data
    int indexOf(int data);

    // Get the data of a index
    int get(int index);

    // Get the size of list
    int getSize();

    // Check if list is empty
    bool isEmpty();

    // Check if list contains a data
    bool contains(int data);

    // Check if list contains a index
    bool containsIndex(int index);

    // Reverse the linkedlist
    void reverse();

    // Reverse the linkedlist (recursive function)
    void reverseRecursive(Node* current, Node* prev);

    // Copy the linkedlist
    CircularLinkedList* copy();

    // Remove the first node
    void removeFirst();

    // Remove the last node
    void removeLast();

    // Remove a node by data
    void remove(int data);

    // Remove a node by index
    void removeIndex(int index);

    // Remove all nodes
    void clear();
};
