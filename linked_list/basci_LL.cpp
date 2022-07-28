#include <bits/stdc++.h>
using namespace std;
/*
Creation of Link list

operations:
1. Traverse
2. Inserting node
3. Deleting node

*/

//class Node

class Node
{
    public:
        //data
        int data;
        //address
        Node *next;

    public:
        //constructor
        Node(int val)
        {
            cout<<"Constructor called"<<endl;
            this->data = val;
        }

};

int main(void)
{
    //create 3 Nodes
    Node* L1 = new Node(4);
    Node* L2 = new Node(8);
    Node* L3 = new Node(12);

    //Links
    Node *head = L1;
    L1->next = L2;
    L2->next = L3;
    L3->next = NULL;

    //print
    Node *ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }


  return 0;
}