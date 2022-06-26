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

void selectionSort(int *arr, int n)
{   
    int minIdx;
    for(int i=0; i<n; i++)
    {
        minIdx = i;
        for(int j =i+1; j<n; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
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
    selectionSort(arr,n);
    print("After Sorting", arr, n);
  return 0;
}