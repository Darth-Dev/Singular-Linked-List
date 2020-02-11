#include "iostream"
#include "node.h"

void prepend(node** head, int value){
    node* newNode = new node(value);
    node* current = *head;
    std::cout << "1\n";
    newNode->setNext(current);
    std::cout << "2\n";
    head = &newNode;
    std::cout << "3\n";
}

void printList(node* node){
    while(node != nullptr){
        std::cout << node->getData() << " \n";
        node = node->getNext();
    }
}

