#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int evalRPN(vector<string>& tokens)
{    
    stack<int> st;
    for(int i=0; i<tokens.size(); i++)
    {
        if(tokens[i] == "+")
        {
            int a = st.top();
            st.pop();
            int b =st.top();
            st.pop();
            int res =a+b;
            st.push(res);
        }
        else if(tokens[i] == "*")
        {
            int a = st.top();
            st.pop();
            int b =st.top();
            st.pop();
            int res =a*b;
            st.push(res);
        }
        else if(tokens[i] == "/")
        {
            int a = st.top();
            st.pop();
            int b =st.top();
            st.pop();
            int res =b/a;
            st.push(res);
        }
        else if(tokens[i] == "-")
        {
            int a = st.top();
            st.pop();
            int b =st.top();
            st.pop();
            int res =b-a;
            st.push(res);
        }
        else
        { 
            int x=stoi(tokens[i]);
            st.push(x);
        }          
        
    }
    return st.top(); 
}


int main(void)
{
    vector<string> s;
    // s = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    s={"100", "2", "-"};

    cout<<evalRPN(s)<<endl;
  return 0;
}