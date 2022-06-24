#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//check if given array is sorted or not

bool isSorted(int *arr, int size)
{
    if((size ==0) || (size ==1))
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool res = isSorted(arr+1, size-1);
        return res;
    }
}
int main(void)
{
    int arr[] ={2,4,2,6,7,8};
    cout<<isSorted(arr, 6);
  return 0;
}