#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
/*
Binary Exponentiation works good for values of a, b when
it is in INT range
a, b <= 10^9

How to calculate if a and b are above INT range
ex: a, b <=10^18
*/


//Binary Multiplication
int binMultiply(long long a, long long b)
{
    
    int ans =0;
    while(b > 0)
    {
        if(  b&1)
        {
            ans = (ans +  a) %M;
        }
        a = (a + a) %M;
        b >>=1;
    }  
    return ans; 

}


//Iterative method
int powerIter(long long a, long long b)
{
    //take module before calculation
    int ans =1;
    while(b > 0)
    {  
        if(  b&1)
        {
            ans = binMultiply(ans, a) %M;
        }
        a = binMultiply(a, a) %M;
        b >>=1;
    }  
    return ans; 
}

int main(void)
{

    int a, b;
    cin>>a>>b;
    // cout<<powerIter(a, b);
    // multiply
    cout<<binMultiply(a, b);
  return 0;
}