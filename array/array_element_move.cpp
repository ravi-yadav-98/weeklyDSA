#include <iostream>
#include <bits/stdc++.h>
using namespace std;



//print array
void print(vector<int> arr)
{
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
}

void sortArrayByParity(vector<int>& nums) {

    int size = nums.size();
    // if(size==0 || size==1)
    //     return ;
    int l=0, r=0; //two pointers left and right

    while(r<size)
    {
        if(nums[r] ==1)
            r++;
        else
        {
            swap(nums[l], nums[r]);
            l++;
            r++;
        }
    }

}

int main(void)
{
    vector<int> arr = {1,2,3,4,5,1};
    cout<<"Before sorting: "<<endl;
    print(arr);
    sortArrayByParity(arr);
    cout<<"After sorting: "<<endl;
    print(arr);



  return 0;
}