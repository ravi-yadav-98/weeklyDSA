#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* split words in a given strings;
input: string
output: array/vector of words

*/

void print(vector<string> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
// split
vector<string> split(string str)
{
    int size = str.length();
    vector<string> ans;
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == ' ') or (i == str.length()))
        {
            ans.push_back(word);
            word = " ";
        }
        else if (i == size - 1)
        {
            word = word + str[size - 1];
            ans.push_back(word);
        }
        else
        {
            word += str[i];
        }
    }

    return ans;
}
int main(void)
{

    string str;
    getline(cin, str);
    vector<string> out = split(str);
    cout<<out[0];
    // print(out);

    return 0;
}