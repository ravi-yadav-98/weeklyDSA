#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Find unique element from a given array of size 2m+1(odd size)
// all elements are repeating twice except one--Find that
int findUniqueElement(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<findUniqueElement(arr, n)<<endl;
    return 0;
}