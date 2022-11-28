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
    cout << "List: ";
    Node* current = list->head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != list->head);
    cout << endl;

    return 0;
}
