#include <bits/stdc++.h>
using namespace std;
/*
RoD cutting:
- Given ROd of length N, and array of prices, of rod of size <N
find the max value obtained by cutting the rod and selling the pieces

*/

const int N = 1e5+10;
int dp[1005];
//solution 
int fun(int len, vector<int> &prices)
{
    if(len == 0)return 0;
    if(dp[len] != -1) return dp[len];
    int ans = 0;
    for(int len_to_cut = 1; len_to_cut<=prices.size(); len_to_cut++)
    {
        if(len - len_to_cut >=0)
        {
            ans = max(ans, fun(len-len_to_cut, prices) + prices[len_to_cut-1]);
        }
    }
    return dp[len] = ans;
}

//call
int cutRod(vector<int> prices, int n)
{
    memset(dp, -1 , sizeof(dp));
    return fun(n, prices);

}
int main(void)
{

    vector<int> prices = {1,5,8,9,10, 17,17,20};
    int  n =8;
    cout<<cutRod(prices, n);
  return 0;
}