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

// Add a new node after a data
void CircularLinkedList::addAfter(int data, int newData) {
    Node* newNode = new Node(newData);
    Node* temp = this->head;
    while (temp != NULL) {
        if (temp->data == data) {
            newNode->next = temp->next;
            temp->next = newNode;
            if (temp == this->tail) {
                this->tail = newNode;
            }
            this->size++;
            break;
        }
        temp = temp->next;
    }
}

// Add a new node before a data
void CircularLinkedList::addBefore(int data, int newData) {
    Node* newNode = new Node(newData);
    Node* temp = this->head;
    while (temp != NULL) {
        if (temp->next->data == data) {
            newNode->next = temp->next;
            temp->next = newNode;
            if (temp == this->tail) {
                this->tail = newNode;
            }
            this->size++;
            break;
        }
        temp = temp->next;
    }
}

// Add a new node after a index
void CircularLinkedList::addAfterIndex(int index, int newData) {
    Node* newNode = new Node(newData);
    Node* temp = this->head;
    int i = 0;
    while (temp != NULL) {
        if (i == index) {
            newNode->next = temp->next;
            temp->next = newNode;
            if (temp == this->tail) {
                this->tail = newNode;
            }
            this->size++;
            break;
        }
        temp = temp->next;
        i++;
    }
}

// Add a new node before a index
void CircularLinkedList::addBeforeIndex(int index, int newData) {
    Node* newNode = new Node(newData);
    Node* temp = this->head;
    int i = 0;
    while (temp != NULL) {
        if (i == index - 1) {
            newNode->next = temp->next;
            temp->next = newNode;
            if (temp == this->tail) {
                this->tail = newNode;
            }
            this->size++;
            break;
        }
        temp = temp->next;
        i++;
    }
}

// Get the index of a data
int CircularLinkedList::indexOf(int data) {
    Node* temp = this->head;
    int i = 0;
    while (temp != NULL) {
        if (temp->data == data) {
            return i;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}

// Get the data of a index
int CircularLinkedList::get(int index) {
    Node* temp = this->head;
    int i = 0;
    while (temp != NULL) {
        if (i == index) {
            return temp->data;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}

// Get the size of list
int CircularLinkedList::getSize() {
    return this->size;
}

// Print list
void CircularLinkedList::print() {
    Node* current = this->head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != this->head);
    std::cout << std::endl;
}

// Print the list in reverse order
void CircularLinkedList::printReverse() {
    Node* current = this->tail;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != this->tail);
    std::cout << std::endl;
}
