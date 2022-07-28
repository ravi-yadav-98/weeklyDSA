#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> a(N);
int dp[N];
/*
Titile: 
Longest Increasing Subsequence
Subsequence: pick any element by maintaining order
ex: [10, 9, 2, 5,3,7,101, 18]
possible subsequences:
[2,5,7,101]
[2,3,7,101]
[5,7,101]
[7,101]
*/
int lis(int i)
{
    if(dp[i] != -1){return dp[i];} 
    int ans =1;
    for(int  j=0; j < i; j++)
    {
        if(a[i] > a[j])
        {
            ans = max(ans, lis(j)+1);
        }
    }
    return dp[i] = ans;

}

int main(void)
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans =0;
    for(int i =0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout<<ans;
  return 0;
}