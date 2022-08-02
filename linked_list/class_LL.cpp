#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Singly Linked List class


//Node class
class Node
{
    public:
    int data;
    Node* next;
    //constructor
    Node(int val)
    {
        // cout<<"Constructor Called !!!"<<endl;
        this->data = val;
        this->next = NULL;
    }
};

//print
void print(Node* &head)
{
    Node* p = head;
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

//add node
void addNode( Node* &head, Node* &tail,int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}