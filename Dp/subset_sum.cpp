#include <bits/stdc++.h>
using namespace std;
/*
Subset Problem: 
Given a sum value: find if sum of any subset of given array can be equall to given sum

ex: 1,5,11,5, sum = 6
output: True (1,5)

*/

//subset sum 
int dp[205][20005];
bool subsetSum(int index, int sum, vector<int> &nums)
{
    if(sum ==0)return true;
    if(index<0)return false;
    if(dp[index][sum] != -1)return dp[index][sum];
    //not consider ith index valu
    bool isPossible = subsetSum(index-1, sum, nums );

    // consider ith index
    if(sum - nums[index] >=0)
        isPossible |= subsetSum(index-1, sum-nums[index], nums);

    return dp[index][sum] = isPossible;
}
//partition problem: partition array into two parts such that sum of both is equall
int canPartition(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    //array sum
    int sum = accumulate(nums.begin(), nums.end(), 0);
    //if sum is odd-> can;t divide array into two parts
    if(sum%2 != 0) return false;

    //  now problem reduce to subset sum problem
    sum  = sum/2;
    return subsetSum(nums.size()-1, sum, nums);



}
int main(void)
{
    vector<int> nums = {1,5,11,5};
    cout<<canPartition(nums);
  return 0;
}