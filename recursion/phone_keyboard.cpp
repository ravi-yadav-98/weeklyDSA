#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

phone keyboard Number-> 
digit = [2,3,4,5,6,7,8,9]
mapped chars
2 --> abc
3 --> def
4 --> ghi
5 --> jkl
6 --> mno
7 --> pqrs
8 --> tuv
9 --> wxyz

find all possible cominations of letters formed
ex: "23" --> [ad,ae,af,bd,be,bf,cd,ce,cf] total 9
*/

void solve(string digit, string output, int index, vector<string>& ans, string mapping[] )
{
        
    //base case
    if(index >= digit.length()) {
        ans.push_back(output);
        return;
    }
    
    int number = digit[index] - '0';
    string value = mapping[number];
    
    for(int i=0; i<value.length(); i++) {
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }
        
}

int main(void)
{
    string s = "23";
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
    solve(s, output, index, ans, mapping);
    for(string s: ans)
    {
        cout<<s<<" ";
    }

  return 0;
}