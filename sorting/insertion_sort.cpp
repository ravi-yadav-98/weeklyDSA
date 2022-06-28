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

void insertionSort(int *arr, int n)
{   
    
    for(int i=0; i<n; i++)
    {
        int temp =  arr[i];
        int j =i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    print("After Sorting", arr, n);
  return 0;
}