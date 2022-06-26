#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Reverse a number using recursion
int ans =0; 
int rem;
int reverseNum(int n)
{ 
    if(n)
    {
        rem = n%10;
        ans = ans*10 + rem;
        return reverseNum(n/10);
    }
    else
    {
        return ans;
    }
}

    
    
int main(void)
{
    int num;
    cout<<"Input a number: ";
    cin>>num;
    cout<<"Reveresed numner: "<<reverseNum(num)<<endl;;

  return 0;
}