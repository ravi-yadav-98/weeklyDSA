#include <bits/stdc++.h>
using namespace std;
/*
Find number of combinations of coins to sum an amount
ex: coins = 1,2,5
amount = 5

combinations: 4
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

*/
int dp[310][10010];
int func(int ind, int amount, vector<int> &coins)
{
    if(amount == 0){return 1;}
    if(ind<0) return 0;

    if(dp[ind][amount] != -1)
    {
        return dp[ind][amount];
    }
    int ways =0;
    for(int coin_amount =0; coin_amount<=amount; coin_amount+=coins[ind])
    {
        ways += func(ind-1,amount-coin_amount, coins);
    }
    return dp[ind][amount] = ways;

}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(coins.size()-1,amount, coins);
    return ans;
}

int main(void)
{
    vector<int> coins = {1,2,5};
    int amount;
    cin>>amount;

    cout<<coinChange(coins, amount);

  return 0;
}