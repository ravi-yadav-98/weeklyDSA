#include <bits/stdc++.h>
using namespace std;
/*
Merge Sort: Devide and Conquer

*/
void printArray(string msg, vector<int> arr)
{
    cout<<msg<<endl;
    for(int a: arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}

//code for merging two sorted arrays
void merge(vector<int> &A, vector<int> left, vector<int> right, int l, int r)
{
    int i =0, j=0, k=0;
    while(i<l && j<r)
    {
        if(left[i]<=right[j])
        {
            A[k++] = left[i++];
        }
        else{
            A[k++] = right[j++];
        }
    }

    while(i<l)
    {
        A[k++] = left[i++];
    }

    while(j<r)
    {
        A[k++] = right[j++];
    }
}

//merge sort
void mergeSortAlgo(vector<int> &A, int size)
{
    if(size<2) return;

    //find mid position and create left and right partition
    int mid = size/2;
    //left
    vector<int> left(mid,0);
    //right
    vector<int> right(size-mid,0);

    // fill the left partitions
    for(int i =0; i<mid; i++)
    {
        left[i] = A[i];
    }
    // fill the right partitions
    for(int i= mid; i<size; i++)
    {
        right[i-mid] = A[i];
    }

    //apply merge sort on left part
    mergeSortAlgo(left, mid);

    //apply mergeSort on right part
    mergeSortAlgo(right, size-mid);

    //merge all
    merge(A, left, right, mid, size-mid);

}

//driver code
int main(void)
{
    vector<int> nums = {7,3,9,5,4,8,0,1,0,0,0};
    int size = nums.size();
    printArray("Before Merge Sorting: ", nums);
    mergeSortAlgo(nums, size);
    printArray("After Merge Sorting: ", nums);

    

  return 0;
}