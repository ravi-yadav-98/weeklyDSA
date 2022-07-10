#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Application of XOR opertor  
// X^X = 0
//X^0  = X
int main(void)
{
    int a = 4, b =6;
    cout<<a<<" "<<b<<endl;
    a = a^b;
    b = a^b;  //b = a^b^b; == a
    a = a^b;  //a^b^a ==b
    cout<<a<<" "<<b<<endl;
  return 0;
}