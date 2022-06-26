#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print function
void print(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
//Bubble Sort using recursion

void bubbleSort(int *arr, int n)
{
    //base case -> sorting done
    // cout<<"iteration: "<<n<<", output:  ";
    // print(arr, n);
    if(n ==1 || n==1)
    {
        return;
    }

    //largest element to end
    for(int i =0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    cout<<"iteration: "<<n<<", output:  ";
    bubbleSort(arr, n-1);


}
int main(void)
{
    int arr[] = {1,5,7,3,2,9,4};
    int n =7;
    // cout<<"before sorting:-> "<<endl;
    // print(arr, n);

    bubbleSort(arr, n);
    cout<<"After sorting:-> "<<endl;
    print(arr, n);

  return 0;
}