#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//painter partition--> 
#define M 10000003
bool isPossible(vector<int> arr, int a, int barrier)
{
    int cnt =1;
    long long units =0;
    for(int i=0; i<arr.size(); i++)
    {
        if(units + arr[i] <= barrier)
        {
            units += long(arr[i]);
        }
        else
        {
            cnt++;
            if(cnt > a || arr[i] > barrier)
            {
                return false;
            }
            else
            {
                units = long(arr[i]);
            }
        }
    }
    return true;
}


int Solution::paint(int A, int B, vector<int> &C) {
    // if(A > C.size()){return -1;}
    long long low = *max_element(C.begin(), C.end());
    long long ans =-1;
    long long high =0;
    for(auto i: C){high += long(i);}
    while(low <= high)
    {
        long long mid = (low + high) >>1;      
        if(isPossible(C, A, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low  = mid + 1;
        }
    }
    return (ans*long(B))%M;
}
