#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
<<<<<<< HEAD
Pivot Element in sorted and rotated array
_-> arr = [1,2,3,7,9]-> ratate k=2, [7,9, 1,2,3]
-> pivot element: 9 or 1
Pivot emenet: create two monotonic subarrays(sorted)
*/

int findPivotMin(vector<int> &arr)
{
    int s =0;
    int e = arr.size()-1;
    while(s < e)
    {
        int mid = s + (e-s)/2;
=======
Pivot Element:-> 
Sorted and Rotated Array
-1,2,3,7,9  --> [7,9,1,2,3]

*/
int pivotElementMin(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    while(s <e) 
    {
        int mid  = s + (e-s)/2;
>>>>>>> 5462082c3ec03f082528fe74e3af7a1fbd6b8019
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

<<<<<<< HEAD
int findPivotMax(vector<int> &arr)
{
    int s =0;
    int e = arr.size()-1;
    while(s <= e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return s;
}
int main(void)
{
    vector<int> arr = {7,9,10,13,1,2,3,4,5,6};  //pivot= 4
    cout<<"pivot element:-> "<<findPivotMax(arr)<<endl;
=======
int pivotElementMax(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    while(s <e)
    {
        int mid  = s + (e-s)/2;
        if(arr[mid] < arr[0])
        {
            e = mid-1;
        }
        else if (arr[mid] > arr[0] && arr[mid ] > arr[mid+1] )
        {
            return mid;
        }
        else{
            s = mid+1;
        }
    }
    return s;
}


int main(void)
{

    vector<int> arr = {7,9,10,11, 1, 2,3};
    cout<<"Pivot Element Min: "<<pivotElementMin(arr)<<endl;
    cout<<"Pivot Element Max: "<<pivotElementMax(arr)<<endl;
>>>>>>> 5462082c3ec03f082528fe74e3af7a1fbd6b8019
  return 0;
}