#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
recursion:
1. Tail Recursion: if recurssive call is executed at last in a function
2. head recursion: 

*/

//tail recursion
void print_tail(int n)
{
    if(n<0)
    {
        return;
    }
    cout<<" "<<n;
    // The last executed statement is recursive call
    print_tail(n-1);
}


//head recursion
void print_head(int n)
{
    if(n<0)
    {
        return;
    }
    print_head(n-1);
    cout<<" "<<n;
    // The last executed statement is recursive call
    
}



int main(void)
{ 
    cout<<"Tail recursion"<<endl;
    print_tail(5);
    cout<<endl<<"head recursion"<<endl;
    print_head(5);
  return 0;
}