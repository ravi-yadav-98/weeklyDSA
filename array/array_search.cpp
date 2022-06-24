#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//linear search 
int linearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;

}

//Binary Search: ascending sorted array
int binarySearch(int arr[], int n, int key)
{
    int li=0;
    int hi=n;
    while(li<=hi)
    {
        int mid = (li+hi)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            hi = mid-1;
        }
        else
        {
            li = mid+1;
        }

    }
    return -1;
}

int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, n, key);
    return 0;
}
