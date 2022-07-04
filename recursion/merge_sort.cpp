#include <iostream>
#include <bits/stdc++.h>


//Helper function: merge two sorted array
void merge(int *arr, int s, int e)
{
    int mid = (s + e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int k =s;
    for(int i =0; i<len1; i++)
    {
        first[i] = arr[k++];
    }

    int k = mid+1;
    for(int i =0; i<len2; i++)
    {
        second[i] = arr[k++];
    }

    //merge

    int index1 =0;
    int index = 0;
    int mainArrayIndex =s;
    while(index1<len1 && )




}
//merge sort using recursion
void mergeSort(int *arr, int s, int e)
{
    if(s>e)
    {
        return;
    }

    int mid = (s + e)/2;
    //left part sort

    mergeSort(arr, s, mid);

    //left part sort
    mergeSort(arr, mid+1, e);

    //merge both sorted array
    merge(arr, s, e);


}
using namespace std;
int main(void)
{
  return 0;
}