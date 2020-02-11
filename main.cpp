#include <iostream>
#include <string>
#include "listFunctions.h"
using namespace std;

int main(){

      int number;
      node* head = NULL;
      cout << "Enter integers followed by a space for each node, enter -1 when finished: \n";

      while(cin >> number && number != -1){

            node* newNode = new node(number, head);
            head = newNode;
      }
      printList(&head);
      return 0;
}