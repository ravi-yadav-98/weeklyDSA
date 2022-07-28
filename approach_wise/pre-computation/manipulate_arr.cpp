#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];
/*
Given an array(zero) and a query
from L to R index add query to each index

0 0 0 0 0 0 0 0  Array
5                query
3 5               L and R
output
0 0 5 5 5 0 0 0 0 

*/
int main(void)
{
    int n, m;
    cin >> n >>m;
    while(m--)
    {
        int a,b,d;
        cin >> a >> b>>d;

        //add d at L
        arr[a] += d;
        //add -d at R+1
        arr[b+1] -= d;
        
    }
    

    //take prefix sum
    for(int i =1; i<=n; i++)
    {
            arr[i] += arr[i-1];
    }
    long long mx =-1;
    for(int i =1; i<=n; i++)
    {
        if(mx < arr[i])
        {
            mx = arr[i];
        }
    }
    cout<<"Max elemet: "<<mx<<endl;

  return 0;
}