#include <bits/stdc++.h>
using namespace std;
/*
Problem: 01 Check if a number if ugly or not
Problem: Find nth ugly number

Not: A number(>0) is ugly if it has prime factor 2,3,4 
*/

bool isUgly(int n)
{
    if(n <= 0)
    {
        return false;
    }
    vector<int> primes = {2,3,5};
    for(int prime: primes)
    {
        while(n%prime ==0)
        {
            n = n/prime;
        }
    }
    return n==1;
}

//find nth ugly number
int nthUglyNumber(int n)
{
    int i =1;
    int cnt =1;
    while(n> cnt)
    {
            i++;
        if(isUgly(i))
        {
            cnt++;
        }
        
    }
    return i;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isUgly(n))
        {
            cout<<"Number is Ugly !!"<<endl;
        }
        else{
            cout<<"Number is not Ugly !!"<<endl;
        }
    }
  return 0;
}