#include <iostream>
#include <bits/stdc++.h>
#include "class_LL.cpp"
using namespace std;

//Revere Singly Linked List

Node* revereLinkedList(Node* &head)
{
    //edge case (list is empty or single element)
    if(head == NULL || head->next == NULL)
    {
        return head;

    }
    //prev pointer
    Node* prev = NULL;

    Node* curr = head;

    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;



}

//resursive wasy

void reverse(Node* &head, Node* curr, Node* prev)
{
    //base
    if(head == NULL)
    {
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;

}

Node* reverseLL_recursive(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

int main(void)
{

    //create data
    Node* head = NULL;
    Node* tail = NULL;
    addNode(head, tail, 10);
    addNode(head, tail, 12);
    addNode(head, tail, 14);
    addNode(head, tail, 16);
    addNode(head, tail, 18);
    // head = revereLinkedList(head);
    head = reverseLL_recursive(head);
    print(head);

    return 0;
}