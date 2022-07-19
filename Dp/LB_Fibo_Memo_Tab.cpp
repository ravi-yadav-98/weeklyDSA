#include<iostream>
#include<vector>
using namespace std;
// Lecture: 102 Dynamic Programming



//fibonacci with memoization

int fib_Memoization(int n, vector<int> &dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fib_Memoization(n-1, dp) + fib_Memoization(n-2, dp);
    return dp[n];
}

//fibonacci with tabulation
int fib_Tabulation(int n, vector<int> &dp)
{
    dp[0] =0;
    dp[1] =1;
    for(int i =2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
//Time--> O(n)
//Space--> O(n)

//Tabulation with Space Optimization
int fib_Tabulation_opt(int n)
{
    int prev1 = 0;
    int prev2 = 1;
    for(int i=2; i<=n; i++)
    {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}



int main(void)
{
    //test cases
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> dp1((n+1),-1);
        vector<int> dp2((n+1),-1);
        cout<<"Using Memoization: ";
        cout<<fib_Memoization(n, dp1)<<endl;
        cout<<"using Tabulation: ";
        cout<<fib_Tabulation(n, dp2)<<endl;
        cout<<"using Tabulation Optimized: ";
        cout<<fib_Tabulation_opt(n)<<endl;
    }
    
  return 0;
}