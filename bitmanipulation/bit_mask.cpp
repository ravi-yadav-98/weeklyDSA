#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Bit Masking:
*/
int main(void)
{

    //worker problem
    //https://codeforces.com/blog/entry/73558
    int n;
    cin>>n;
    vector<int> masks(n, 0);
    for(int i=0; i<n; i++)
    {
        int num_workers;
        cin>>num_workers;
        int mask =0;
        for(int j=0; i < num_workers; j++)
        {
            int day;
            cin>>day;
            mask = (mask | (1 <<day));

        }
        masks[i] = mask;
    }

    for(int i=0; i<n; i++)
    {
        cout<<masks[i]<<endl;
    }

    //

  return 0;
}