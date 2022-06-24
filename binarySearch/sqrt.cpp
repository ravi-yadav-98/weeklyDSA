#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Given a number find sqrt(x) --Nearest value if not a integer
- without using pow function or ** operator

Approah:
- search for value in range (0, x/2) where i*i =< x
- Linear search or Binary search

*/

int findSqrt(int x)
{
    unsigned long long s =0;
    unsigned long long l =x;

    if(x ==1 ){return 1;}
    while(s<=l)
    {


        unsigned long long mid = (s+l)/2;
        // cout<<mid<<endl;
        // if(mid*mid == x)
        if(mid*mid ==x)
        {
            return mid;
        }

        else if(mid*mid>x )
        {
            // cout<<mid<<" -> "<<(mid-1)*(mid-1)<<endl;
            if((mid-1)*(mid-1)<x)
            {
                return mid-1;
            }
            else{
                l = mid -1;
            }
        }
        else
        {
            s =mid + 1;
        }
        // cout<<s<<" ->> "<<l<<endl;




    }
    return -1;
}
int main(void)
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Square root: "<<findSqrt(n)<<endl;
  return 0;
}