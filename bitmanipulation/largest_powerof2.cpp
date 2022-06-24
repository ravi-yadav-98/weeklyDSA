#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//find largest power of 2 which is less than n

//Note: A number will be power of 2 if num&(num-1) == 0
int highestPowerof2(int n)
{
    int res = 0;
    for (int i = n; i >= 1; i--) {
        // If i is a power of 2
        if ((i & (i - 1)) == 0) {
            res = i;
            break;
        }
    }
    return res;
}
int main(void)
{
    int n;
    cin>>n;
    cout<<highestPowerof2(n)<<endl;

    cout<<(16&15);
  return 0;
}