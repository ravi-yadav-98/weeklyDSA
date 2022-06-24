#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//cout negative numbers

int countNegativeNum(vector<int> nums)
{
    int start =0;
    int end = nums.size()-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(nums[mid] > 0 and nums[mid-1]<0)
        {
            return mid;
        }
        else if(nums[mid] > 0)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}
int main(void)
{
    vector<int> test = {-101, -99, -54, -21, -3, -1, 1,6, 12, 19, 20, 74, 92};
    cout<<" No. of Negative Numbers: "<< countNegativeNum(test);
  return 0;
}