#include <bits/stdc++.h>
using namespace std;
/*
Find minimum cost to reach 1 to N by a frog.
cost = [next  - prev)

Similar to Min stairs clim cost problem
*/

//solve fun

const int N = 1e5+10;
int h[N];
int dp[N];
//top down approach
int solve(int n)
{
    int cost = INT_MAX;
    //base case
    if(n ==0) return 0;
    //check if value present
    if(dp[n] != -1){return dp[n];}


    //take one step
    cost = min(cost, solve(n-1) + abs(h[n] - h[n-1]));
    if(n>1)
    {
        cost = min(cost, solve(n-2) + abs(h[n] - h[n-2]));
    }
    return dp[n] = cost;
}
int main(void)
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    cout<<solve(n-1);

  return 0;
}