#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//Problem: find intersection of two array
vector<int> findIntersection(int arr1[], int n, int arr2[], int m)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int element = arr1[i];
        for(int j=0;j<m;j++)
        {
            if(element ==arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}
int main(void)
{  int n, m;
    cin>>n>>m;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr2[i];
    }

    vector<int> g1 = findIntersection(arr1, n, arr2, m);
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
    return 0;
}