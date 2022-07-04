#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//print subset of a set-> uniqe element array
//power set: set of all subsets
typedef vector<vector<int>> vector2d;

void print2DArray(string msg, vector2d arr)
{
    cout<<msg<<endl;
    for(int i =0; i< arr.size(); i++)
    {
        for(int j =0; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//subsets
vector2d subSets(vector<int> &arr)
{
    vector2d ans;
    ans.push_back({});
    for(int i =0; i<arr.size(); i++)
    {
        int k = ans.size();
      
        for(int j =0; j<k; j++)
        {   
            vector<int> temp = ans[j];
            temp.push_back(arr[i]);
            ans.push_back(temp);
            
        }
    }
    return ans;
}


//resursion method
void subSet2(vector<int> &nums, int i, vector<int> temp, vector2d &ans)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        subSet2(nums, i+1, temp, ans);
        temp.push_back(nums[i]);
        subSet2(nums, i+1, temp, ans);
    }   
int main(void)
{

    vector<int> test = {1,2,3};
    // vector2d res = subSets(test);
    // print2DArray("subsets of set", res);
    vector2d ans;
    int i =0;
    vector<int> temp;
    subSet2(test, i, temp, ans);
    print2DArray("subsets of set", ans);

  return 0;
}