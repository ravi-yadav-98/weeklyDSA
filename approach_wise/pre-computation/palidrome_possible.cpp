#include <bits/stdc++.h>
using namespace std;
/*
given a string and L , R  as query
- Find if it is possible to get a palidrome string by rearraning letters from L to R in given string


Palidrome possiblility:
1. All letters have even count
2. only one letter an have odd count
*/
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n, q;
        cin >>n >> q;
        string s;
        cin>>s;
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            int hash[26];
            for(int i=0; i<26;i++)
            {
                hash[i] =0;
            }
            l--; r--;
            for(int i =l; i<=r; i++)
            {
                hash[s[i] - 'a']++;
            }

            int oddCt =0;
            for(int i =0; i<26; i++)
            {
                if(hash[i]%2 !=0)
                    oddCt++;
            }
            if(oddCt >0) 
            {
                cout<<"NO\n";
            }
            else{
                cout<<"Yes\n";
            }
        }

    }

   

  return 0;
}