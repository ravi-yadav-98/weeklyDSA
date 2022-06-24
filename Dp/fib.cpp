#include <iostream>
#include <bits/stdc++.h>
#include<map>
using namespace std;
/*
dynamic programming:
- Optimization of recurrsion
- In recurrsion there are lot of redundance computing, that makes it slower
- same values are calculated again and again
- DP: store ther values and resure when needed.

*/

//ex: Fibonaccii number

long long fib(long long n)
{
    if(n ==1 or n ==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);     
    }
}

//fibonacci with dp
map<long int, long int> mp;
long int fibDP(long int n)
{
    if(n ==1 or n ==2)
    {
        return 1;
    }
    else
    {   
        if(mp.find(n) != mp.end())
        {
            return mp[n];
        }
        else
        {
           mp[n] = fibDP(n-1) + fibDP(n-2);
            return mp[n];
        }
        
    }
}


int main(void)
{

    for(long int i =1; i<100; i++)
    {
        cout<<"i = "<<i<<", fib = "<<fibDP(i)<<endl;
    }
  return 0;
}