#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//sort a array based on some condition
//print
void print(vector<vector<int>> &arr)
{
  for(int i =0; i<arr.size(); i++)
  {
    for(int j=0; j<arr[0].size(); j++)
    {
      cout<<arr[i][j]<<" ";
    }cout<<endl;
  }
}
//comparator function
bool compare(vector<int> &a, vector<int> &b)
{
  return a[1]<b[1];
}

//sort by val count --> frequency
void sortByCount(vector<vector<int>> &arr)
{
  sort(arr.begin(), arr.end(), compare);
}
int main(void)
{
  //sort by count <val, count>
  vector<vector<int>> t = {{3,2}, {4,0}, {5,3}, {6,5}, {2,6},{100,1}};
  sortByCount(t);
  print(t);
  return 0;
}