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

//insert at head

void insertAtHead(Node* &head, int d)
{
    //create a node with data d
    Node *temp = new Node(d);

    //update pointers
    //1. temp is now first node so that will point to prev node(address as head)
    temp->next = head;

    //update head
    head = temp;
}

//insert at tail
void insertAtTail(Node* &tail, int d)
{
    //new node
    Node* temp = new Node(d);

    //link with prev node
    tail->next = temp;

    //update tails
    tail = tail->next;

}


//insert at any position
void insertAtPosition(Node* &head, Node* &tail, int pos, int d)
{

    //check if position is 1
    if(pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    //create a pointer to travers till pos-1 node
    Node* ptr = head;

    //traverse
    int cnt = 1;
    while(cnt < pos-1)
    {
        ptr = ptr->next;
        cnt++;
    }


    // insert at last
    if(ptr->next == NULL)
    {
        insertAtTail(tail, d);
        return;

    }

    // create node to insert
    Node* nodeToInsert = new Node(d);

    //update links
    nodeToInsert-> next = ptr->next;

    ptr->next = nodeToInsert;


}

//traverse a liked list (print)
void print(Node* &head)
{
    Node* ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr  = ptr->next;
    }
    cout<<endl;
}

// int main(void)
// {

//     //create a node
//     Node* node1 = new Node(10);

//     //head
//     Node* head = node1;

//     //tail (same as head when on first  node)
//     Node* tail = node1;
//     //print
//     print(head);

//     ///insert nodes at beginining

//     // insertAtHead(head, 5);
//     // insertAtHead(head, 5);
//     // insertAtHead(head, 3);
//     // insertAtHead(head, 2);
//     // insertAtHead(head, 16);


//     ///insert nodes at end

//     insertAtTail(tail,20);
//     insertAtTail(tail,30);


//     //insert at a position
//     insertAtPosition(head,tail, 3, 100);
//     insertAtPosition(head,tail, 1, -19);
//     insertAtPosition(head, tail,6, 9);
//     print(head);


//     //verify

//     cout<<"head data: "<<head->data<<endl;
//     cout<<"Tail data: "<<tail->data<<endl;


//     return 0;
// }