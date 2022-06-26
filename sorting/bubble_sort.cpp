#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Selection Sort: select minimum and replace with first 
*/

//print function
void print(string msg, int *arr, int n)
{   
    cout<<msg<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//selction sort

void bubbleSort(int *arr, int n)
{   
    for(int i=0; i<n-1; i++)
    {
        for(int j =0; j<n-i-1; j++)
        {
            if(arr[j] >arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(void)
{

    int n; 

    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    print("Before Sorting", arr, n);
    bubbleSort(arr,n);
    print("After Sorting", arr, n);
  return 0;
}