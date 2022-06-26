#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//reverse string using recursion

void reverse(string &str, int s, int e)
{
    if(s>e)
    {   return;
    }
    else
    
    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s, e);
}

void reverse2(string &str, int i)
{

    int n = str.size();
    if(i>(n-i-1))
    {   return;
    }
    
    swap(str[i], str[(n-i-1)]);
    i++;
    reverse2(str, i);
}


//single pointer

int main(void)
{

    string s;
    getline(cin, s);
    reverse2(s, 0);
    cout<<s<<endl;


  return 0;
}