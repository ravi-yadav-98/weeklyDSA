#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
replace space in a string and put some random string 

i.e. put @50

input: ravi prakash yadav
output: ravi@50prakash@50yadav

*/

string replaceSpace(string s)
{
    string out = "";
    string r = "@40";

    for(int i =0; i<s.length(); i++)
    {
       
        if(s[i] == ' ')
        {
            out += r;
        }
        else
        {
            out += s[i];
        }
       
    }
    return out;

}

string replaceSpace2(string s)
{
    string r = "@40";

    for(int i =0; i<s.length(); i++)
    {
       
        if(s[i] == ' ')
        {
            s.replace(i,1,r);
        }
    }
    return s;
}

string replaceSpace3(string str)
{
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str= str.substr(0,i)+"@40"+str.substr(i+1,str.length());
        }
    }
    return str;

}
int main(void)
{
    string s = "ravi prakash yadav";
    
    cout<<replaceSpace3(s)<<endl;
  return 0;
}