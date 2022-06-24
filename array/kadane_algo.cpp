#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Maximum Sum Subarray-> given an array, find subarray with maximum sub
-  kandane's algorithm
-  print maximum sum and subarray
*/

//print array
void printArray(int arr[], int start, int end)
{
    for(int i = start; i<=end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void maxSubArray(int arr[], int n)
{
    int maxsum = INT_MIN;
    int currentsum =0;
    int leftidx =0, rightidx =0, temp =0;
    cout<<"left "<<"right"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<leftidx<<"    "<<rightidx<<endl;
        currentsum += arr[i];
        if(currentsum > maxsum)
        {
            maxsum = currentsum;
            rightidx =i;
            leftidx = temp;

        }
        if(currentsum <= 0)
        {
            currentsum =0;
            temp =i+1;
        }

    }

    cout<<"Maximum sum: "<<maxsum<<endl;
    cout<<"Subarray: "<<endl;
    printArray(arr, leftidx, rightidx);
}




int main(void)
{   int n = n;
    // int arr[] = {-3, 2, -1, 1,-2,-3,4,5,-2,-1};     //out [1,2,3,4,5] sum = 15

    cin>>n;
    int *arr = new int[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxSubArray(arr, n);

    delete []arr;
  return 0;
}