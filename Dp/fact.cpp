#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}



long long fact(int n)
{
 unordered_map<int, long long > record;

    if(n==1 or n==0)
    {
        return 1;
    }
    else
    {
        if(record.find(n) == record.end())
        {
            record[n] = n*fact(n-1);
            return record[n];
        }

        else
        {

            return record[n];
        }

    }

}

long long  nCr(int n, int r)
{
    long long  ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(void)
{
    for(int i=3; i<15; i++)
    {
        cout<<"i: "<<i<<", factorial: "<<nCr(i, 2)<<endl;
    }
  return 0;
}