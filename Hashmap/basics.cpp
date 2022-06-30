#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
HashMap--> key, val pair
types;
1. map--> O(log(n))  --> BST
2. unordered map --> O(n) --> Hash Table

*/

int main(void)
{
    unordered_map<string, int> ump;
    //insert
    //1
    pair<string, int> p  =  make_pair("babbar", 3);
    ump.insert(p); 
    //2
    pair<string, int> pair2("love", 2);
    ump.insert(pair2);
    //3
    ump["mera"] = 1;//insert

    ump["mera"] = 2; //update 
    
    //Search
    // cout<<ump["mera"]<<endl;
    // cout<<ump.at("babbar")<<endl;
    // cout<<ump["babbar2"]<<endl;  //create entry
    // cout<<ump.at("babbar2")<<endl; //give error

    // cout<<ump.size();
    // cout<<ump.count("ravi")<<endl;
    // cout<<ump.count("mera")<<endl;

    //iterator
    // for(auto i: ump)
    // {
    //     cout<<i.first<<" --> "<<i.second<<endl;

    // }

    unordered_map<string, int>:: iterator it = ump.begin();
    while(it != ump.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
  return 0;
} 