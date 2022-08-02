#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//circular Linked List

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

    ~Node()
    {
        int val = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data: "<<val<<endl;
    }
};

//insert in circular LL
void insertNode(Node* &tail, int element, int d)
{

    //assuming element ios present in the list
    //if list is empty
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        //if list is not empty
        Node* curr = tail;
        while(curr-> data != element)
        {
            curr = curr->next;
        }

        //update
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr-> next = temp;

    }
}


//print
void print(Node* tail)
{
    if(tail == NULL)
    {
        cout<<" List is empty !!"<<endl;
    }
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp);

    cout<<endl;
}


//delete node
void deleteNode(Node* &tail, int val)
{
    if(tail == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    //non-empty
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }
    //single node LL
    if(prev == curr)
    {
        tail = NULL;
    }
    //update links
    //2-Node LL
    prev->next = curr -> next;
    if(tail ==  curr)
    {
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;




}

int main(void)
{

    Node* tail = NULL;
    insertNode(tail, 5,3);
    // print(tail);
    insertNode(tail, 3,5);
    print(tail);
    // insertNode(tail, 5,6);
    // print(tail);
    // insertNode(tail, 5,8);
    // print(tail);

    //delete
    deleteNode(tail, 5);
    // deleteNode(tail, 5);
    print(tail);
  return 0;
}