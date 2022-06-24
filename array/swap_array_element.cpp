#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print function
void printArray(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
// Swap alternate elements of an Array:
//Ex: [1,2,4,7,8] --> [2,1,7,4,8]
void swapAlternateElement(int arr[], int size)
{
  for(int i=0;i<size;i+=2)
  {
    if(i+1<size)
    {
      swap(arr[i], arr[i+1]);
    }
  }cout<<endl;
}
//driver function
int main(void)
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  swapAlternateElement(arr, n);
  printArray(arr, n);
  return 0;
}
