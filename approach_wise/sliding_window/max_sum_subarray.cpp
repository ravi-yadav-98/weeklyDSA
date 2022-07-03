#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Slidding window approach for array/subarray related problems
P1: Subarray of size k(continous values) 

i.e. [2,3,5,2,7,9,1]  k=3
subarrays: [2,3,5], [3,5,2], [5,2,7], [2,7,9], [7,9,1]

Question: find max/min sum subarray
*/

void print(vector<int> &arr, int s, int e)
{
    for(int i =s; i<e; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
}


void maxSumSubArray(vector<int> &arr, int l)
{
   
    if(l>arr.size()){return;}
    
    int s =0;
    for(int i =0; i<l; i++)
    {
        s+= arr[i];
    }
    int i =0;
    int j =l;
    int maxsum =s;
    while(j<arr.size())
    {  
        s+=arr[j]-arr[i];
       maxsum = max(maxsum, s);
        i++;
        j++;

    }
    cout<<"max sum of subarray size k: "<<maxsum<<endl;
}



void minSumSubArray(vector<int> &arr, int l)
{
   
    if(l>arr.size()){return;}
    
    int s =0;
    for(int i =0; i<l; i++)
    {
        s+= arr[i];
    }
    int i =0;
    int j =l;
    int minsum =s;
    while(j<arr.size())
    {  
        s += arr[j]-arr[i];
      
       minsum = min(minsum, s);
        i++;
        j++;

    }
    cout<<"min sum of subarray size k: "<<minsum<<endl;
}


//method 2
void maxSumSubArray2(vector<int> arr, int k)
{
    int maxsum = INT_MIN;
    int sum =0;
    int i=0;
    int j =0;
    while(j < arr.size())
    {   
        sum+=arr[j];
        if(j-i+1 ==k)
        {
            maxsum = max(sum, maxsum);
            sum -=arr[i];
            i++;
            j++;
            
        }
        else
        {
            j++;
        }

    }
    cout<<"min sum of subarray size k: "<<maxsum<<endl;
}
int main(void)
{
    vector<int> arr = {-2,1,2};
    int l =2;
    maxSumSubArray(arr, l);
    maxSumSubArray2(arr, l);
    minSumSubArray(arr, l);
  return 0;
}