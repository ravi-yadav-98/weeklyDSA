#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Search Element in Rotated sorted array:
-  
*/

class Solution {
private:
    int pivot(vector<int> arr)
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
    int binarySearch(vector<int> arr, int s, int e, int k)
    {
        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(arr[mid] == k)
            {
                return mid;
            }
            if(arr[mid] > k)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return -1;
            
            
    }
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        int p = pivot(arr);
        if(target>= arr[p] and target <= arr[n-1])
        {
            return binarySearch(arr, p, n-1, target);
                
        }
        else
        {
             return binarySearch(arr, 0, p-1, target);
                 
        }
            
    }
};

int main(void)
{

    vector<int> arr = {7, 9, 12, 1,2,3,4,6};

  return 0;
}