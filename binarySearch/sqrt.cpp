#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Given a number find sqrt(x) --Nearest value if not a integer
- without using pow function or ** operator

Approah:
- search for value in range (0, x/2) where i*i =< x
- Linear search or Binary search

*/
//nearest integer
int findSqrt(int x)
{
    long long s =0;
    long long l =x;
    long long ans =-1;
    if(x ==1 ){return 1;}
    while(s<=l)
    {
        long long mid = s+(l-s)/2;
        long long sq = mid*mid;
        
        if(sq == x)
        {
            return mid;
        }
        if(sq<x )
        {
           ans = mid;
           s = mid+1;
        }
        else
        {
            l = mid - 1;
        }

    }
    return ans;
}

//precise solution in form of decimal
double preciseSqrt(int n, int precision, int intSol)
{
    double factor =1;
    double ans = intSol;
    for(int i =0; i< precision; i++)
    {
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor)
        {
             ans = j;
        }
    }
    return ans;
}
int main(void)
{   
    int n;
    cout<<"Enter a number: ";
    while(cin>>n)
    {
        
        // cin>>n;
        int tempSol = findSqrt(n);
        cout<<"Nearest Int sqrt val: "<<tempSol<<endl;
        double preciseSol = preciseSqrt(n, 3, tempSol);
        cout<<"Precise Sqrt Value: "<<preciseSol<<endl;
    }
  return 0;
}