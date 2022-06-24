#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Reverse words in a char array

input =["t","h", "e", " ", "s", "k", "y", " ", "i", "s", " ", "b", "l", "u", "e"]
output: ["b", "l", "u", "e", " ", "i", "s", " ", "s", "k", "y", " ",["t","h", "e"] 

*/

//function to reverse char of words in string
string reverseEachWord(string s)
{
    int i=0;
    string res ="";
    string word = "";
    while(i<s.length())
    {
        if(s[i] == ' ')
        {
            reverse(word.begin(), word.end());
            res.append(word);
            res += " ";
            word = "";
        }
        else if(i == s.length()-1)
        {
            word = word+s[s.length()-1];
            reverse(word.begin(), word.end());
            res.append(word);
        }
        
        else
        {
            word.push_back(s[i]);
        }
        // cout<<word<<endl;

        i++;

    }
    return res;
}


int main(void)
{

    // vector<string> words = {"t","h", "e", " ", "s", "k", "y", " ", "i", "s", " ", "b", "l", "u", "e"};


        string s;
        getline(cin, s);
        cout<<reverseEachWord(s)<<endl;
  return 0;
}