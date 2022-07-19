#include <bits/stdc++.h>
using namespace std;
/*
resursion basic by Luv: 

*/

void fun(int n)
{
    if(n == 0)
    {
        return;
    }
    fun(n-1);
    cout<<n<<" ";
    
}

int arraySum(int n, int arr[])
{ if(n<0)return 0;
    return arr[n] + arraySum(n-1, arr);
}

int digitSum(int n)
{
    if(n==0)return 0;
    return digitSum(n/10)+n%10;
}
int main(void)
{
    int n;
    cin>>n;
    // int arr[n];
    // for(int i =0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<arraySum(n-1, arr);
    cout<<"digit sum: "<<digitSum(n);
    
  return 0;
}