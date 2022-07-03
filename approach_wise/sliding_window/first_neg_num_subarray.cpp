#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    given an array and subarray size k;
    find first negative number in every subarray of window k and zero if no negative
    [12, -1, -7, 8, -15, 30 16 ,38] --> -1,-1, -7, -15,-15, 0
*/

//method 1
void negNumSubArray(vector<int> arr, int k)
{
    int i=0;
    int j =0;
    while(j < arr.size())
    {   
        if(j-i+1 ==k)
        {
            for(int it =i; it<=j; it++)
            {
                if(arr[it]<0)
                {
                    cout<<arr[it]<<" ";
                    break;
                }
                else if(arr[it]>0 and it==j)
                {
                    cout<<0<<" ";
                }


            }
            i++;
            j++;
            
        }
        else
        {
            j++;
        }

    }
}



int main(void)
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16 ,38};
    int l =3;
    negNumSubArray(arr, l);
  return 0;
}