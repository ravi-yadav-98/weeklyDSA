#include <bits/stdc++.h>
using namespace std;
/*
Numbers of ways to reach N stairs by taking 1 or 2 steps
*/

//solve

int solve(int nStairs, int index)
{
    if(index == nStairs)
    {
        return 1;
    }
    if(index > nStairs)
    {
        return 0;
    }
    return solve(nStairs, index+1)+solve(nStairs, index+2);
}

//Dp--> Memoization

int solve_memoization(int nStairs, vector<int> &dp)
{
    if( nStairs == 0){return 0;}
    if( nStairs ==1 ){return 1;}
    if( nStairs ==2){return 2;}
    if(dp[nStairs] != -1)
    {
        return dp[nStairs];
    }

    dp[nStairs] = solve_memoization(nStairs-1, dp) + solve_memoization(nStairs-2, dp);
    return dp[nStairs];
}

//Limitation of above problem is Time-> will give TLE if done for large number
int main(void)
{
    int n;
    vector<int> dp(n+1, -1);
    cin>>n;
    cout<<"No. of ways: "<<solve_memoization(n, dp);
  return 0;
}