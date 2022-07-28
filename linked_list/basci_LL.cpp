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

        Node(int val)
        {
            this->data = val;
            this->next = NULL;
        }

};

int main(void)
{
    //create 3 Nodes
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);


    //head: address of first node
    Node *head = node1;

    //first node next--> second node address
    node1->next = node2;

    //second node next--> third node address
    node2->next = node3;

    //third node next--> null

    //print elements
    Node *ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }



  return 0;
}