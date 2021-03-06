#include <bits/stdc++.h>
using namespace std;
/*
Find Minimum Number of coins to sum an amount

ex: coins = [1,2,5]
amount: 11
minimum coins = 5 + 5 + 1

*/
int dp[10010];
int func(int amount, vector<int> &coins)
{
    if(amount == 0){return 0;}
    int ans = INT_MAX;

    if(dp[amount] != -1)
    {
        return dp[amount];
    }
    for(int coin: coins)
    {
        if(amount-coin >= 0)
            ans = min(ans + 0LL, func(amount-coin, coins)+1LL);
    }
    return dp[amount] = ans;

}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main(void)
{
    vector<int> coins = {1,2,5};
    int amount;
    cin>>amount;

    cout<<coinChange(coins, amount);

  return 0;
}