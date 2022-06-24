#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

//leetcode problem:
//1. Find dupliated element in arry(which is repeating twice)
//Ex: N=5 [1,2,3,4,3]: --> ans:3 (Emelemets are in [1, N-1)])
//brute force approach: Count number of occurance for elements

int findDuplicateElemenet(int arr[], int n)
{
  int ans =0;
  for(int i=0;i<n;i++)
  {
    ans = ans^arr[i];
  }
  for(int i=1;i<n;i++)
  {
    ans = ans^i;
  }
  return ans;
}

/* 2. find all duplicates in array(ouuring once or twice)
 ex: [1,2,3,4,5,3,2,6]--> [2,3]
 find each number with occurance twice
 link https://www.youtube.com/watch?v=oVa8DfUDKTw
*/
void findAllDuplicates(int nums, int n)
{
  // int n = nums.size();
  vector<int> ans;

  for(int i=0; i<n; i++){
      if(nums[abs(nums[i])-1] < 0) ans.push_back(abs(nums[i]));
      else{
          nums[abs(nums[i])-1]*=-1;
      }
  }
  return ans;

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
    for(auto x :findAllDuplicates(arr, n))
    {
      cout<<*x;
    }
  return 0;
}

