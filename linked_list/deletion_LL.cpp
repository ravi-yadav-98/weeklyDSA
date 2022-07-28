#include <bits/stdc++.h>
// #include "insertion_LL.cpp"
using namespace std;
/*
Creation of Link list

operations:
Delete:
1. A node by position
2. By data

Other:
- delete from end
-  delete from start
-  delete from any pos

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

        //destructor
        ~Node()
        {
            int val = this->data;
            //memory free
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
            cout<<"Memory freed with data: " <<val<< endl;
        }

};

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

//deleteNod

void deleteNode(int pos, Node* &head)
{
    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    else
    {
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;

        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;


    }
}
int main(void)
{
    Node* node1 = new Node(10);

    //head
    Node* head = node1;

    //tail


    //create list
    Node* node2 = new Node(11);
    Node* node3 = new Node(12);
    Node* node4 = new Node(13);

    //linjks
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    Node* tail = node4;

    // before deleting
    print(head);

    //after deleting
    deleteNode(3, head);
    print(head);

    cout<<"head position: "<<head->data<<endl;
    cout<<"Tail Position: "<<tail->data<<endl;




    return 0;
}