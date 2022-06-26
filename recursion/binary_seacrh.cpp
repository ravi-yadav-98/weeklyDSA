#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//WAP to perform Binary Search using recursion

bool binarySearch(int *arr, int low, int high, int val)
{
    if(low>high)
    {
        return false;
    }
    int mid = (low+high)/2;
    if(arr[mid] == val)
    {
        return true;
    }
    else if(arr[mid] > val)
    {
        return binarySearch(arr, low, mid-1, val );
    }
    else{
        return binarySearch(arr, mid+1, high,  val);
    }
}
int main(void)
{

    
    int arr[] = {1,3,4,6,8,9,11};
    int size = 7;
    int val = 18;
    cout<<binarySearch(arr, 0, size-1,  val);
  return 0;
}