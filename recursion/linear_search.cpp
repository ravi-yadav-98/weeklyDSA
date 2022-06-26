#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Program to perform linear serach using Recursion
*/
bool linearSearch(int *arr, int size, int val)
{
    if(size ==0)
    {
        return false;
    }
    if(arr[0] == val)
    {
        return true;
    }
    else{
        bool ans = linearSearch(arr+1, size-1, val);
        return ans;
    }
}
int main(void)
{

    int arr[] = {1,3,4,6,8,9,11};
    int size = 7;
    int val = 8;
    cout<<linearSearch(arr, size, val);
  return 0;
}