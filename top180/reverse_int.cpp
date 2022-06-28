#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
reverse an interger
i.e. 123 --> 321
     -123 --> -321

*/
int reverseInt(int n)
{   
    bool flag = false;
    if(n<0)
    {
       flag = true;
       n = 0-n; 
    }
    int ans = 0;
    int rem;
    while(n>0)
    {
        rem = n%10;
        n /= 10;
        ans = ans*10 + rem;
        
    }

    if(flag)
    {
        ans = 0-ans;
    }
    return ans;
}
int main(void)
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;

    cout<<"Reverse Integer: "<<reverseInt(n)<<endl;
    
  return 0;
}