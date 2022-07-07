#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
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
  return 0;
}