#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//find sum of 1D array using recursion

int arrSum(int *arr, int size)
{
    if(size ==0)
    {
        return 0;
    }
    else
    {
        int sum = arr[size-1]+ arrSum(arr, size-1);
        return sum;
    }

}
int main(void)
{
    int arr[] ={2,4,2,6,7,8};
    cout<<"array sum is: "<<arrSum(arr, 6);
  return 0;
}