#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double power(double base, int exp)
{
    if(exp ==0){return 1;}
    double ans = power(base, exp/2);
    if(exp%2==0)
    {
        return ans*ans;
    }
    else{
        return base*ans*ans;
    }
}

double pow(double base, int exp)
{
    if(exp <0)
    {
        return 1 / power(base, -exp);
    }
    else{
        return power(base, exp);
    }
}
int main(void)
{

    double base;
    int exp;
    cin>>base>>exp;
    cout<<"Power val: "<<pow(base, exp);
  return 0;
}