#include <iostream>
#include <bits/stdc++.h>
#define M 1000000007
using namespace std;

//Tribonacci Number: number is sum of previous three nums

int tribonacci(int n)
{
    if(n ==0 || n==1 || n==2)
    {
        return 0;
    }
    if(n==3)
    {
        return 1;
    }
    else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
}

// unordered_map<int, int> mp;
long long tribonacci_DP(int n, unordered_map<int, long long> &mp)
{
    
    if(n ==0 || n==1 || n==2)
    {
        return 0;
    }
    if(n==3)
    {
        return 1;
    }
    if(mp.find(n) != mp.end())
    {
        return mp[n];
    }
    else{
        mp[n] =tribonacci(n-1)%M + tribonacci(n-2)%M + tribonacci(n-3)%M;
        return mp[n];
    }
}
int main(void)
{

    int n;
    cin>>n;
    for(int i =1; i<n; i++)
    {
        unordered_map<int, long long> mp;
        cout<<"iteration: "<<i<<" ,value: "<<tribonacci_DP(i, mp)<<endl;
    }
  return 0;
}