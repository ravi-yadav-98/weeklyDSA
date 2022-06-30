#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//cout number of subarray that give sum as K


//print
void print(vector<int> arr)
{
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int subArraySumK(vector<int> arr, int k)

{
    vector<int> prefix;
    int sum =0;
    for(int i =0; i<arr.size(); i++)
    {
        sum += arr[i];
        prefix.push_back(sum);
    }

    int ans =0;
    unordered_map<int,int> mp;
    for(int i=0; i<arr.size(); i++)
    {
        if(prefix[i] == k)
        {
            ans++;
        }
        if(mp.find(prefix[i] - k) != mp.end())
        {
            ans += mp[prefix[i] - k]; // if yes, then add it our answer
        }
        mp[prefix[i]]++;
    }
    return ans;


    
}

int main(void)
{

    vector<int> arr = {1,2,3};
    int k =3;
    cout<<"No. of subarray:-> "<<subArraySumK(arr, k);

  return 0;
}