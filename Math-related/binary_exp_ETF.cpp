#include <bits/stdc++.h>
using namespace std;
/*
Binary Exponentiation for large number using ETF (No of coprime no <N)
for prime number ETF(N) = N-1

*/


//Binary Multiplication
int binExp(long long a, long long b, int M)
{

    int ans =1;
    while(b > 0)
    {
        if(  b&1)
        {
            ans = (ans * 1LL *  a) %M;
        }
        a = (a * 1LL * a) %M;
        b >>=1;
    }  
    return ans; 

}
int main(void)
{

    //50^64^32
    cout<<binExp(50, binExp(64, 32, M-1), M);
  return 0;
}