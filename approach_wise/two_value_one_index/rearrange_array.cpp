#include <bits/stdc++.h>
using namespace std;
/*
rearrange Array: Interview Bit Question
https://www.interviewbit.com/problems/rearrange-array/

[1,0] --> [0,1]


*/


void arrange(int *A, int n) {

    // int n = A.size();
    for(int i =0; i<n; i++)
    {
        int x = A[i];
        A[i] = A[i] + (A[x]%n)*n;
    }
    
    for(int i =0; i<n; i++)
    {
        A[i]/=n;
    }


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
        arrange(arr, n);
        cout<<"arter rearrange"<<endl;
        print(arr, n);
          
    }
  return 0;
}