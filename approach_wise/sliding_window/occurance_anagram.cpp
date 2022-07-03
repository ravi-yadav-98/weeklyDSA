#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Q: Occurance of anagram: 
Given two strings s1 and s2
find all occurance of s2 in s1
anagram = similar character in two strings (jumbled words--> count of each char will be same)
i.e. cat -> act -> atc -> cta-> tca-> tac total 6
Ex: match anagrams of s2 in s1 and give count

*/

void anagramOccurane(string s1, string s2)
{
    int count =0;
    int k = s2.length();
    vector<int> m1(26,0);
	vector<int> m2(26,0);
    vector<int> index;
    for(char c: s2)
    {
        m1[c-'a']++;
    }
    int i =0;
    int j =0;
    while(j<s1.length())
    {
        m2[s1[j]-'a']++;
        if((j-i+1) == k)
        {
            cout<<m1.size()<<" -> "<<m2.size()<<endl;
            if(m1 == m2)
            {
                count++;
                index.push_back(i);
                
            }
            m2[s1[i]-'a']--;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout<<" No. of anagram occurances: "<<count<<endl;
    cout<<" No. index : "<<index.size()<<endl;
}



void anagramOccurane2(string s1, string s2)
{
    int k = s2.length();
    unordered_map<char, int> mp;
    for(char c: s2)
    {
        mp[c]++;
    }
    int i =0;
    int j =0;
    int count =mp.size();
    int ans=0;
    while(j<s1.length())
    {   
        if(mp.find(s1[j]) != mp.end())
        {
            mp[s1[j]]--;
            if (mp[s1[j]] == 0)
            {
                count--;
            }
        }

        if(j-i+1 < k)
        {
            j++;
        }
        else if((j-i+1) == k)
        {
            if(count ==0)
            {
                ans++;
                
            }
            if (mp.find(s1[i]) != mp.end())
            {
                mp[s1[i]]++;
                if (mp[s1[i]] == 1){
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    cout<<" No. of anagram occurances: "<<ans<<endl;
}
int main(void)
{

    string s1 = " abaaba";
    string s2 = "aab";

    anagramOccurane(s1, s2);
  return 0;
}