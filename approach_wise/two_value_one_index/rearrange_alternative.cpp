#include <bits/stdc++.h>
using namespace std;
/*
Given sorted array , rearrange in such that max element comes alternatively in O(1) space
Ex:
input> [1,2,3,4,5,6]
output>[6,1,5,2,4,3]

Approach:
Two value at one index of array

divened = quotient*Divisor + remainder

quotient = new value
remainder = old value

//
for i =even (max valu)

A[i] = A[i]+(A[max_idx]%mx)*mx

when(i = odd)
A[i] = A[i] + (A[min_idx]%mx)*mx

*/


void rearrange(int A[], int N)
{
 
    int max_idx = N - 1, min_idx = 0;
 
    int mx = A[N - 1] + 1;
 
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A[i] += (A[max_idx] % mx) * mx;
            max_idx--;
        }
        else {
            A[i] += (A[min_idx] % mx) * mx;
            min_idx++;
        }
    }
 
    for (int i = 0; i < N; i++)
        A[i] = A[i] / mx;
}

void print(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(void)
{


    //test
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<"before rearrange"<<endl;
        print(arr, n);
        rearrange(arr, n);
        cout<<"arter rearrange"<<endl;
        print(arr, n);
          
    }
  return 0;
}