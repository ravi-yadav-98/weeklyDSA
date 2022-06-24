#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Array Insert-->
1. last O(1)
2. anywhere --> O(n-i)
3. beginning --O(n)

*/

void print(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//insert at start

void addStart (int arr[], int n, int val)
{
    //insert val at position 1 and remove last element
    for(int i=n-1; i>=0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = val;
}

//insert at a position
void addAtPos(int arr[], int n, int pos, int val)
{
    for(int i =n-1; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;
}

//swap consecutive elements
void swapConsecutive(int arr[], int n)
{
    for(int i =0;i<n-1; i++)
    {
        swap(arr[i], arr[i+1]);
        i++;
    }

}

int main(void)
{
    int n=9;
    int arr[n] = {1,2,3,4,5,6,7,8, 9};
    // int arr[n] = {1,2,3,4,5,6};


    /*
    cout<<"Before insert"<<endl;
    print(arr, n);
    // addAtPos(arr, n, 6, 2000);
    addStart(arr,9, 1000);
    cout<<"Before insert"<<endl;
    print(arr, n);

    */
    cout<<"Before Swap"<<endl;
    print(arr, n);
    swapConsecutive(arr, n);
    cout<<"Before Swap"<<endl;
    print(arr, n);

  return 0;
}