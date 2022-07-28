#include <bits/stdc++.h>
using namespace std;
/*
Generate subsets of set using bit mask technique
*/
vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    int subset_cnt = (1<<n);  //2^n
    for(int mask =0; mask < subset_cnt; mask++)
    {
        vector<int> subset;
        for(int i=0; i<n;i++)
        {
            if((mask &(1<<i)) !=0)
            {
                subset.push_back(nums[i]);
            }
        }
        ans.push_back(subset);
    }

    return ans;


}
int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }
    
    vector<vector<int>> all_subsets = subsets(v);

    for(auto subset: all_subsets)
    {
        for(int ele: subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
  return 0;
}
