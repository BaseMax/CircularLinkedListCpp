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
};
