
#include <bits/stdc++.h>
using namespace std;

/*
count pairs in an array whose sum is divisible by k

[2,2,1,7,5,3] k = 4
*/
int countPairSum(vector<int> arr, int k)
{
    int ans =0;
    int mp[k] = {0};
    for(int a: arr)
    {
        mp[a%k]++;
    }


    //case:01 No remained: when all elements are divisible by K
    ans = (mp[0]*(mp[0]-1))/2;

    //when we have all the elements which are not divisible by k
    for(int i =1; i<=k/2 && i!=(k-i); i++)
    {
        ans += (mp[i] * mp[k-i]);
    }

    //when value of k is even
    if(k%2==0){
        ans += (mp[k/2]*(mp[k/2]-1))/2;
    }
    return ans;

}
int main(void)
{
    vector<int> arr = {4,4,8,8};
    int k =4;
    cout<<countPairSum(arr, k)<<endl;
  return 0;
}