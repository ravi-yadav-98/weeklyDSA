#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Find all distinct non-empty subsequences of string 
abc--> {a,b,c,ab,bc,ac,abc}; 

*/

//subsequences
void subsequences(string s, int i, string output, vector<string> &ans)
{   
    //base
    if(i >=  s.length())
    {
        if(output.length() >0)
        {
            ans.push_back(output);
        }
        return;

    }
    //exclude
    subsequences(s,i+1, output, ans);

    //include
    char c = s[i];
    output.push_back(c);
    subsequences(s, i+1, output, ans);
}
int main(void)
{

    string input = "abc";
    string output = "";
    vector<string> ans;
    int i =0;
    subsequences(input, i, output, ans);
    for(string s: ans)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    
  return 0;
}