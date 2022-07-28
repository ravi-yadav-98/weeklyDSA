#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
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
  return 0;
}