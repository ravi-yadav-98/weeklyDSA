#include <iostream>
#include <bits/stdc++.h>
#include <assert.h>
using namespace std;
/*
find longest subarray with sum euqalls k
arr = [ 4,1,1,1,2,3,5]  sum k = 5
possible sub array with sum k =5
[4,1], [1,1,1,2], [2,3],[5]
longest = [1,1,1,2] = size 4, minimum 2

*/

void print(vector<int> arr, int s, int e)
{
    for(int i=s; i<e; i++)
    {
     cout<<arr[i]<<" ";
    }cout<<endl;
}

//print map
void print_map(unordered_map<int, int> mp)
{
  for(auto i : mp)
  {
    cout<<i.first<<" -> "<<i.second<<endl;
  }
}
//print all subarrays
void printAllSubarrays(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    for(int j = i; j < n; j++ )
    {
      print(arr, i , j+1);
    }
    // cout<<endl;
    
  }
}
//brute force
void longestSubArrWithSumK_BF(vector<int> &arr, int k)
{
  int maxLength = 0;
  int im, jm;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k)
      {
        maxLength = max(maxLength, (j - i + 1));
        im = i;
        jm = j;
      }
    }

  }
  cout<<"size of max arr "<<maxLength<<endl;
  print(arr, im, jm+1);
}



//longest subarray with sum k  -> wont work for negative
int longestSubArraySumK(vector<int> &arr, int k)
{
  int maxi = INT_MIN;
  int sum =0;
  int i =0;
  int j =0;
  while(j < arr.size())
  {
    sum += arr[j];
    if(sum < k)
    {
      j++;
    }
    else if(sum ==k)
    {
      maxi = max(maxi, j-i+1);
      j++;

    }
    else if(sum > k)
    {
       while(sum > k)
       {
        sum = sum - arr[i];
        i++;
       }
       if(sum == k)
       {
        maxi = max(maxi, j-i+1);
       }
       j++;
    }
  }
  return maxi;

}



//efiifient approach -> map
void longestSubArrWithSumK_opt(vector<int> arr, int k)
{
  int sum =0;
  int maxlen =0;
  unordered_map<int, int> mp;
  for(int i =0; i<arr.size(); i++)
  {
    sum += arr[i];
    if(sum == k)
    {
      maxlen = i+1;
    }
    if(mp.find(sum) == mp.end())
    {
      mp[sum] = i;
    }
    if(mp.find(sum-k) != mp.end())
    {
      if (maxlen < (i - mp[sum - k]))
          maxlen = i - mp[sum - k];
    }
    print_map(mp);
    
    cout<<"max: "<<maxlen<<endl;
    cout<<"----------------"<<endl;
  }

  cout<<"max len of subarray: "<<maxlen;

}
int main(void)
{
  vector<int> arr = {4,1,1,1,2,3,5}; // {-5, 8, -14, 2, 4, 12};

  int k =5;
  //cout<<longestSubArraySumK(arr, k);
  longestSubArrWithSumK_opt(arr, k);
  // printAllSubarrays(arr);
  return 0;
}