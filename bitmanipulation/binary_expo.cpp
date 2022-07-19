#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
/*
Binary Exponentiation:--> better way to calculate power values
P(a,b) --> a^b
--> time O(log(n))
--> recursive approach
--> f(a, b)--b=even---> f(a, b/2)*f(a, b/2)
--> f(a, b)--b=odd---> a*f(a, b/2)*f(a, b/2)
*/

//recursive method
int powerRecurr(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    int res = powerRecurr(a, b/2);
    if(b&1)
    {
        return (a*(res*1LL*res)%M)%M;
    }
    else
    {
        return (res*1LL*res) %M;
        //1LL-> to stop overflow during calculation
    }
}


//Iterative method
int powerIter(int a, int b)
{
    int ans =1;
    while(b > 0)
    {
        if(b&1)
        {
            ans = (ans * 1LL * a) %M;
        }
        a = (a * 1LL * a) %M;
        b >>=1;
    }  
    return ans; 
}

//driver function

int main(void)
{

    int a, b;
    cin>>a>>b;
    cout<<powerIter(a, b)<<endl;
    // cout<<pow(2, 13);
  return 0;
}