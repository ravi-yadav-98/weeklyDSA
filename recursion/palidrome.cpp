#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//check palidrome using recursion
bool isPalidrome(string str, int i, int j)
{
    if(i > j)
    {
        return true;
    }
    if(str[i] != str[j])
    {
        return false;
    }
    else{
        return isPalidrome(str, i+1, j-1);
    }
   
    
}
int main(void)
{
     string s;
    getline(cin, s);
    
    cout<<isPalidrome(s, 0, s.length()-1);
  return 0;
}