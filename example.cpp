#include <iostream>
#include "CircularLinkedList.h"

using namespace std;

int main(int argc, char** argv) {
    // Create new list
    CircularLinkedList* list = new CircularLinkedList();

    // Add some nodes
    list->addFirst(1);
    list->addFirst(2);
    list->addFirst(3);

    list->addLast(4);
    list->addLast(5);
    list->addLast(6);
    list->addFirst(0);
    list->addLast(10);

    // Print list
    list->print();

    // Print list in reverse order
    list->printReverse();

    return 0;
}
