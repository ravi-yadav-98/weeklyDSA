#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//calculate power of any val 3^2, 4^3 etc

int findPower(int base, int exp)
{
    if(exp ==0)
    {
        return 1;
    }
    else{
        return base*findPower(base, exp-1);
    }
}


//Optimized solution
int findPower2(int base, int exp)
{
    //base case
    if(exp ==0)
    {
        return 1;
    }
    if(exp ==1)
    {
        return base;
    }
    //recursive call
    int ans = findPower2(base, exp/2);
    if(exp%2 ==0)
    {
        return ans*ans;
    }
    else{
        return base*ans*ans;
    }
}

int main(void)
{   int base, exp;
    while(cin)
        if(base ==0)
        {
            break;
        }
        else
        {
            cout<<"Enter base and Exp: ";
            cin>>base>>exp;
            cout<<"Power: "<<findPower2(base, exp)<<endl;
        }
  return 0;
}