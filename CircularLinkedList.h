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
};
