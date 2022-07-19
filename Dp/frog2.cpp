#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int h[N];
int dp[N];
int k;

/*
Find the minimum cost to reach nth stone by frog
when frog can jump to 1,2,3,4,...kth stone in one jump 

Old Problem: can only jump one or two stone in one jump

*/

//top down approach
int solve(int n)
{
    int cost = INT_MAX;
    //base case
    if(n ==0) return 0;
    //check if value present
    if(dp[n] != -1){return dp[n];}


    //take one step'
    for(int i=1; i<=k;i++)
    {
        if(n-i >= 0)
            cost = min(cost, solve(n-i) + abs(h[n] - h[n-i]));
    }
    
    
    return dp[n] = cost;
}


int main(void)
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >>n >>k;
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    cout<<solve(n-1);

  return 0;
}