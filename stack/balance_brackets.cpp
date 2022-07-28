#include <bits/stdc++.h>
using namespace std;
/*
Check if brackets are balanced in given string
ex:
(())  --> balanced
(((()))) --> balanced
(() --> not balanced


Approach:
-> insert brackets in stack and match

*/
unordered_map<char, int> symbols = {{'[',-1}, {'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

bool isBracketBalanced(string s)
{
    stack<char> temp;
    for(char bracket : s)
    {
        if(symbols[bracket] < 0)
        {
            temp.push(bracket);
        }
        else
        {
            if(temp.empty()) return false;
            char top = temp.top();
            temp.pop();
            if(symbols[top] + symbols[bracket] != 0)
            {
                return false;
            }
        }
    }
    if(temp.empty()) return true;
    else return false;
}


bool isBracketBalanced2(string s)
{
    stack<char> st;

    for(char b: s)
    {
        if(b =='(' || b=='{' || b=='[')
        {
            st.push(b);
        }

        else
        {
            if(st.empty())return false;
            char top = st.top();
            st.pop();

            if( b == ')' && top != '(')
            {
                return false;
            }
            if( b == '}' && top != '{')
            {
                return false;
            }
            if( b == ']' && top != '[')
            {
                return false;
            }
        }
    }
    if(st.empty())return true;
    else return false;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string input;
        cin>>input;
        cout<<isBracketBalanced2(input) <<endl;


    }
  return 0;
}