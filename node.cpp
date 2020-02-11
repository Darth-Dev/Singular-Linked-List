#include "node.h"
#include "iostream"
node::node(int value,node* nodePtr){
    data = value;
    nextNode = nodePtr;
}

void node::setNext(node* nodePtr){
    nextNode = nodePtr;
}

node* node::getNext(){
    return nextNode;
}

void node::setData(int value){
    data = value;
}

int node::getData(){
    return data;
}

void node::printData(){
   std:: cout << data << std::endl;
}