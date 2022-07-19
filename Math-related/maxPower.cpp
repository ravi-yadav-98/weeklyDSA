#include <bits/stdc++.h>
using namespace std;
/*
Get Maximum power of a number which devides other numer
ex: max power of 2 which devides 48 --> 4 (num=16)
*/

int maxPower(int n, int x)
{
    //find max power of x which devides n
    int cnt =0;
    while(n % x ==0)
    {
        n = n/x;
        cnt++;
    }
    return cnt;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        cout<<"Max Power of "<<x<<": "<<maxPower(n,x)<<endl;
    }
  return 0;
}