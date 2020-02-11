#include "iostream"
#include "node.h"

void prepend(node** head, int value){
    node* newNode = new node(value, *head);
    head = &newNode;
}

void printList(node** head){
    node* current = *head;
    while(current != nullptr){
        std::cout << current->getData() << " \n";
        current = current->getNext();
    }
}

