#include <bits/stdc++.h>
using namespace std;
/*
Generate Subset of given set or string

*/

void subset(string &temp, int index, string s,  vector<string> &ans)
{
    if(index == s.size())
    {
        ans.push_back(temp);
        return ;
    }

    //exclude--> do nothing jump to next index
    subset(temp, index+1, s, ans);
    //include
    temp.push_back(s[index]);
    subset(temp, index+1, s, ans);
    //back tracking
    temp.pop_back();

}

//comp for sorting
bool comp(string a, string b)
{
    if(a.size() != b.size());
    {
        return a.size()<b.size();
    }
        
}
int main(void)
{
    vector<string> ans;
    string s;
    cin>>s;
    string temp ="";
    int index =0;
    subset(temp, index, s, ans);
    sort(ans.begin(), ans.end(), comp);
    for(auto a: ans)
    {
        cout<<a<<" ";
    }cout<<endl;
  return 0;
}