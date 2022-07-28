#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Aggressive Cow Problem:
Given A[i] as position of stalls and k as no of aggressive cow
Place each cow at position such that maximum distance of minimum is obtained

ex: A =[ 4,2,1,3,6] k =2
Ans = 5
*/

bool isPossible(vector<int> arr, int k, int mid)
{
    int cnt =1;
    int lastpos = arr[0];
    for(int i =0; i < arr.size(); i++)
    {
        if((arr[i] - lastpos) >= mid)
        {
            cnt++;
            if(cnt ==k)
            {
                return true;
            }
            lastpos = arr[i];
        }

    }
    return false;
    
}
int aggressiveCow(vector<int> stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s =0;
    int maxi =-1;
    for(int i =0; i< stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid+1;

        }
        else{
            e = mid-1;
        }
    }
    return ans;
}
int main(void)
{
    vector<int> arr = {4,2,1,3,6};
    int k =2;
    cout<<"Max distance: "<<aggressiveCow(arr, k);
  return 0;
}