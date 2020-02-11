class node{
    private:
        int data;
        node *nextNode;
    public:
        node(int value);
        void setNext(node*);
        node* getNext();
        void setData(int);
        int getData();
        void printData();

};