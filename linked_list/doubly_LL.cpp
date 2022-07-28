#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Doubly Linked List
//class

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //destructor
    ~Node()
    {
        int val = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;

        }
        cout<<"Memor free for node with data: "<< val <<endl;
    }

};


//print
void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//length
int getLength(Node* head)
{
    Node *temp = head;
    int len =0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;

}

//insert
void  insertAtHead(Node* &head, Node* &tail,  int d)
{
    //empty list
    if(head ==  NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else
    {
    //create node
        Node* temp = new Node(d);
        //links
        temp->next = head;
        head->prev = temp;
        head  = temp;
    }


}

//insert at tail

void insertAtTail(Node* &head, Node* &tail, int d)
{
    //empty
    if(tail ==  NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else
    {
        Node* temp = new Node(d);
        //links
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }


}

//insert at a pos

void insertAtPos(Node* &head, Node* &tail, int pos, int d)
{
    if(pos == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    //create a pointer
    Node* temp = head;
    int cnt=1;
    while(cnt < pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    //inserting at last
    if(temp->next == NULL)
    {
        insertAtTail(head, tail, d);
    }


    //create  new node

    Node* insertNode = new Node(d);
    //links
    insertNode -> next =  temp->next;
    temp->next->prev = insertNode;
    temp->next = insertNode;
    insertNode ->prev = temp;
}

//deletion at position

void deleteNode(Node* &head, int pos)
{
    if(pos ==1 )
    {
        //delete first node
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

    }
    else
    {
        //delete middle or last Node
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr-> prev = NULL;
        prev->next = curr->next;
        curr-> next = NULL;
        delete curr;
    }
}
int main(void)
{
    //create node

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    // cout<<getLength(head);

    insertAtHead(head,tail, 125);
    insertAtHead(head,tail, 12);
    insertAtHead(head,tail, 127);
    // insertAtHead(head,tail, 1);
    // insertAtHead(head,tail, 2);

    // //tail
    insertAtTail(head, tail, 27);

    // //pos
    insertAtPos(head, tail, 3, 100001);
    insertAtPos(head, tail, 5, 777);
    insertAtPos(head, tail, 1, 999);
    print(head);
    cout<<getLength(head)<<endl;;

    deleteNode(head, 1);
    print(head);
    cout<<getLength(head)<<endl;
    deleteNode(head, 6);
    print(head);
    cout<<getLength(head)<<endl;;
    deleteNode(head, 3);
    print(head);
    cout<<getLength(head)<<endl;;



  return 0;
}