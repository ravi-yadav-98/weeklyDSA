#include <bits/stdc++.h>
using namespace std;
/*
Find GCD of two number using Euclid Algo
*/

int gcd(int a, int b)
{
    if(b ==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
int main(void)
{
    cout<<gcd(18, 12)<<endl;;
    // cout<<__gcd(12,18);
    cout<<gcd(gcd(12,18),9);
  return 0;
}