#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Optimized bubble sort
//if inner loop does not make any swap: stop
//print function
void print(string msg, int *arr, int n)
{   
    cout<<msg<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//swap function
void swapNum(int& a, int& b)
{
    int temp = a;
    a        =b;
    b        = temp;
}


void optimized_bubbleSort(int *arr, int n)
{
    bool isSwap ;

    for(int i=0; i<n-1; i++)
    {
        // cout<<"iterations: "<<i<<endl;
        isSwap = false;
        for(int j =0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapNum(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false)
        {
            break;
        }
    }
}

//driver function
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
    optimized_bubbleSort(arr,n);
    print("After Sorting", arr, n);

 
  return 0;
}