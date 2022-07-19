#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000
/*
Problem: 01 Check if a number if ugly or not(Done)
Problem: Find nth ugly number--> using DP

Not: A number(>0) is ugly if it has prime factor 2,3,5
*/

    
//nth ugly number
unsigned int nthUglyNumber(unsigned num)
{
    vector<unsigned int> ugly(num);
    unsigned int i = 0, j = 0, k = 0;
    ugly[0] = 1;
    unsigned int mul2 = 2;
    unsigned int mul3 = 3;
    unsigned int mul5 = 5;
    unsigned int next_ugly_num =1;

    for(int iter =1; iter<num; iter++)
    {
        //get minimum of 3
        next_ugly_num = min(mul2, min(mul3, mul5));
        //store to ugly array
        ugly[iter] = next_ugly_num;

        //update pointers
        if(next_ugly_num == mul2)
        {
            i = i+1;
            mul2 = ugly[i]*2;
        }
        if(next_ugly_num == mul3)
        {
            j = j+1;
            mul3 = ugly[j]*3;
        }

        if(next_ugly_num == mul5)
        {
            k = k+1;
            mul5 = ugly[k]*5;
        }
        


    }
    return next_ugly_num;

}

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<nthUglyNumber(n)<<endl;

    }
  return 0;
}