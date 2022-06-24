#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
find max occuring character in a strings
i.e. test --> t

*/

char  maxOccurningChar(string s)
{
    int out[26] ={0};
    //map to char (0->a, 1->b.....25->z)
    for(int i=0; i<s.length(); i++)
    {
        int num = s[i] - 'a';  // 'b' - 'a' = 1;
        out[num]++;

    }

    int maxi =-1;
    int ans =0;
    for(int i =0; i<26; i++)
    {
        if(out[i] > maxi)
        {   
            ans =i;
            maxi = out[i];
        }
    }

    return ans+'a';
}
int main(void)
{

    string text;
    cout<<"Enter a text: ";
    cin>>text;
    cout<<"Maximum Occurning char: "<<maxOccurningChar(text)<<endl;
  return 0;
}