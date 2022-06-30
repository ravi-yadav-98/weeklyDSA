#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Qucik Sort:
- partition: Select an element ans place at a place such that all left elementa are smaller and all right elements are greater.
- Pivot: selected element
- Count all elements < Pivot
- position = s + count
-  check elements from start and end if they are less or greater
- swap accordingly
-
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

//partition

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt =0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIdx = s + cnt;
    swap(arr[pivotIdx], arr[s]);
    //left and right
    int i =s,j =e;
    while(i<pivotIdx && j>pivotIdx)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIdx && j> pivot)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIdx;

}
void quickSort(int arr[], int s, int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    int p = partition(arr, s,e);

    // recursiveb call
    //sort left part
    quickSort(arr, s, p-1);

    //sort right part
    quickSort(arr, p+1,e);

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
    quickSort(arr,0, n-1);
    print("After Sorting", arr, n);
  return 0;
}