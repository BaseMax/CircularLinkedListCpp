/*
 * @Name: Circular Linked List C++
 * @Author: Max Base
 * @Date: 2022-11-28
 * @Repository: https://github.com/basemax/CircularLinkedListCpp
 */

#include <cstddef>
#include <iostream>
#include "CircularLinkedList.h"

// Node Constructor
Node::Node(int data) {
    this->data = data;
    this->next = NULL;
}

// CircularLinkedList Constructor
CircularLinkedList::CircularLinkedList() {
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

// Add a new node at beginning of list
void CircularLinkedList::addFirst(int data) {
    Node* newNode = new Node(data);
    if (this->head == NULL) {
        this->head = newNode;
        this->tail = newNode;
        newNode->next = this->head;
    } else {
        newNode->next = this->head;
        this->head = newNode;
        this->tail->next = this->head;
    }
    this->size++;
}

// Add a new node at end of list
void CircularLinkedList::addLast(int data) {
    Node* newNode = new Node(data);
    if (this->head == NULL) {
        this->head = newNode;
        this->tail = newNode;
        newNode->next = this->head;
    } else {
        this->tail->next = newNode;
        this->tail = newNode;
        this->tail->next = this->head;
    }
    this->size++;
}
