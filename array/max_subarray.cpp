#include <bits/stdc++.h>
using namespace std;
/*
find maximum subarray sum
*/
int main(void)
{

    vector<int> v = {-1,-2,4,1,2,3,4,5,-6, -7};
    int l=0, r =0, sum =0;
    int ans = INT_MIN;
    for(int i =0; i<v.size(); i++)
    {
        sum += v[i];
        if(sum > ans)
        {
            ans  = sum;
            r = i;
        }
        if(sum<0)
        {
            sum =0;
            l = i+1;
        }
        

    }
    cout<<l<<", "<<r<<endl;

  return 0;
}